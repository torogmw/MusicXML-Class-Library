/* See MusicXML License at the bottom of this code page. */

/* matthew james briggs
 
 XpReader.h   Takes an istream and parses the istream
            during construction.  Throws during
            construction if it cannot parse the
            xml.
 
            Once XpReader is constructed, it has only
            one public function, getXpDom(), which
            returns the resulting xparse:XpDom
            object.
 
Exceptions  std::runtime_error
 
            This object throws a std::runtime_error
            exception during construction if it
            cannot parse the xml input.
 
 */

#include "XpReader.h"
#include "XpParse.h"

namespace xsd
{
    
//-------------------------------------------------------------//
/* ctor */
    XpReader::XpReader( std::istream& input )
    :m_is( input )
    ,m_doc( new XpDom() )
    ,m_start_position( input.tellg() )
    {
        parse( *m_doc );
    }
    
//-------------------------------------------------------------//
/* dtor */
    XpReader::~XpReader() {}
    
//-------------------------------------------------------------//
    /* returns the parsed xml document */
    XpDom XpReader::getXpDom() const
    {
        return *m_doc;
    }
    XpDomPtr XpReader::getXpDomPtr() const
    {
        return m_doc;
    }

//-------------------------------------------------------------//
	/* reads the entire istream and
	 constructs a Docuement */
    void XpReader::parse( XpDom& doc )
    {
        // reset_stream()?
        std::string version = parse_xml_ver();
        std::string doctype = parse_doc_type();
        
        doc = XpDom( XpItemPtr( parse_elements() ), version, doctype );
    }

//-------------------------------------------------------------//
	/* sets the buffer position
	 back to the beginning and clears
	 all error flags from the istream */  
    void XpReader::reset_stream()
    {
        m_is.clear();
        m_is.seekg( m_start_position );
        m_remembered_pos = m_start_position;
    }
    
//-------------------------------------------------------------//
	/* sets the m_remembered_pos value
	 to the current buffer position */
    void XpReader::remember_position()
    {
        m_remembered_pos = m_is.tellg();
    }

 //-------------------------------------------------------------//
	/* sets the buffer to m_remembered_pos
	 and clears any istream error flags */
    void XpReader::rewind()
    {
        m_is.clear();
        m_is.seekg( m_remembered_pos );
    }
    
//-------------------------------------------------------------//
	/* checks the next istream char against an expected
	 char.  If they match, nothing happens. If the do
	 not match, a std::runtime_exception is throws.
	 A custom message can be given, otherwise the message
	 will state the expecte vs. found char values */
    void XpReader::expected( char expected, const std::string& message )
    {
        char found = '\0';
        m_is.get( found );
        
        if ( found != expected || m_is.eof() || !m_is.good() )
        {
            if ( message.length() == 0)
            {
                std::stringstream expected_char;
                if ( expected == 0 )
                {
                    expected_char << "NULL";
                }
                else if ( isspace( expected ) )
                {
                    expected_char << "WHITESPACE";
                }
                else
                {
                    expected_char << expected;
                }
                std::stringstream found_char;
                if ( found == 0 )
                {
                    found_char << "NULL";
                }
                else if ( isspace( found ) )
                {
                    found_char << "WHITESPACE";
                }
                else
                {
                    found_char << expected;
                }
                std::stringstream ss;
                ss << "Unexpected character found. ";
                ss << "'" << expected_char.str() << "' " << "was expected, ";
                ss << "but '" << found_char.str() << "' was found.";
                throw std::runtime_error( ss.str() );
            }
            else
            {
                throw std::runtime_error( message );
            }
            
        }
    } 

//-------------------------------------------------------------//
	/* Checks each char in the expected string, calling
	 the above char version for each position in the given
	 string */    
    void XpReader::expected( const std::string& expected, const std::string& message )
    {
        for ( char c : expected )
        {
            this->expected( c, message );
        }
    }  
         
//-------------------------------------------------------------//
	/* moves the istream forward to the next non-
	 whitespace position. */
    void XpReader::ignore_ws()
    {
        while ( isspace( m_is.peek() ) )
        {
            m_is.ignore();
        }
    }
//-------------------------------------------------------------//
	/* if this function is called when the istream
	 buffer is pointing at the first character of
	 an xml comment, it moves the buffer forward to
	 the end of the xml comment and returns true.
	 Otherwise it returns false and returns the buffer
	 to the position it was at when the function was
	 called. */
    bool XpReader::ignore_comment()
    {
        std::streamoff position = m_is.tellg();
        char c = '\0';
        c = m_is.peek();
        if ( c ==  '<' )
        {
            m_is.ignore();
            abort_check();
            c = m_is.peek();
            if ( c ==  '!' )
            {
                m_is.ignore();
                abort_check();
                c = m_is.peek();
                if ( c ==  '-' )
                {
                    m_is.ignore();
                    abort_check();
                    c = m_is.peek();
                    if ( c ==  '-' )
                    {
                        m_is.ignore();
                        abort_check();
                        find( "-->" );
                        return true; // comment ignored;
                    }
                }
            }
        }

        m_is.seekg( position );
        return false; // it was not a comment;
    }
    
 //-------------------------------------------------------------//
	/* moves the buffer forward to the first
	 position that is neither whitespace nor
	 an xml comment */   
    void XpReader::ignore_ws_and_comments()
    {
        ignore_ws();
        while ( ignore_comment() )
        {
            ignore_ws();
        }
    }
 
 //-------------------------------------------------------------//
	/* checks the istreams eof bit and good bit.
	 throws if eof is true or if good is false */       
    void XpReader::abort_check()
    {
        if ( m_is.eof() || !m_is.good() )
        {
            throw std::runtime_error("End of stream or error condition reached unexpectedly." );
        }
    }

//-------------------------------------------------------------//
	/* parses the xml version tag and
	 returns the version number as a string.
	 throws if the xml is malformed.
	 returns an empty string if the xml
	 doesn't have a version tag */
    std::string XpReader::parse_xml_ver()
    {
        remember_position();
        char c = '\0';
        
        /* move forward ignoring whitespace before
         the first '<' */
        ignore_ws();
        ignore_comment();
        ignore_ws();
        
        /* the first thing we should see is '<'
         otherwise throw */
        expected( '<' );
        
        /* the next char should be '?'
         If not, it might mean that xml version is not specified.
         We will allow this and return "" as the xml version */
        m_is.get( c );
        if ( c != '?' )
        {
            rewind();
            return "";
        }
        expected( "xml " );
        ignore_ws();
        expected( "version" );
        ignore_ws();
        expected('=');
        ignore_ws();
        expected('\"');
        std::stringstream ver;
        while ( !m_is.eof() && '\"' != ( c = m_is.get() ) )
        {
            ver << c;
        }
        
        // ignoring anything else for now
        while ( '?' != ( c = m_is.get() ) )
        {
            // I'm ignoring/losing the
            // UTC information
        }
        expected('>');
        return ver.str();
    }
    
//-------------------------------------------------------------//
	/* parses the xml DOCTYPE tag and
	 returns the DOCTYPE information as a
	 string.  Throws if the xml is
	 malformed.  Returns an empty string
	 if the xml does not have a Doctype
	 tag. */
    std::string XpReader::parse_doc_type()
    {
        remember_position();
        char c = '\0';
        
        /* move forward ignoring whitespace before
         the next '<' */
        ignore_ws_and_comments();
        
        std::streamoff rewind_point = m_is.tellg();
        
        /* the first thing we should see is '<' */
        if ( m_is.peek() == '<')
        {
            expected( '<' );
            m_is.get( c );
            if ( c == '!' && m_is.good() && !m_is.eof() )
            {
                expected( "DOCTYPE" );
                ignore_ws();
                abort_check();
                std::stringstream ss;
                m_is.get( c );
                abort_check();
                while ( c != '>')
                {
                    ss << c;
                    m_is.get( c );
                    abort_check();
                }
                return ss.str();
            }
        }

        m_is.seekg( rewind_point );
        return "";
    }

//-------------------------------------------------------------//
	/* if called when the istream buffer is
	 pointing at the start of an attribute,
	 will return a shared pointer to the parsed,
	 constructed attribute.  Will ignore
	 whitespace and comments prior to the
	 start of the attribute */
    XpPropertyPtr XpReader::parse_attribute()
    {
        ignore_ws_and_comments();
        std::stringstream attribute_name;
        char n = m_is.peek();
        while ( !isspace( n ) &&
                    n != '=' &&
                    n != '<' &&
                    n != '>' &&
                    n != '/' )
        {
            char c;
            m_is.get( c );
            attribute_name << c;
            n = m_is.peek();
            abort_check();
        }
        ignore_ws_and_comments();
        expected( '=' );
        ignore_ws_and_comments();
        expected( '"' );
        
        std::stringstream attribute_value;
        n = m_is.peek();
        while ( n != '"' )
        {
            char c;
            m_is.get( c );
            attribute_value << c;
            n = m_is.peek();
            abort_check();
        }
        expected( '"' );
        XpPropertyPtr a( new XpProperty( attribute_name.str(), attribute_value.str() ) );
        return a;
    }

//-------------------------------------------------------------//
	/* advances the istream position to the first character
	 after the found search token and returns true. Returns
	 false if the search token is not found. */   
    bool XpReader::find( const std::string& token )
    {
        int token_length = (int)token.length();
        std::streamoff pos = m_is.tellg();
        while ( m_is.good() || !m_is.eof() )
        {
            bool match = true;
            for ( int i = 0; i < token_length; ++i)
            {
                char f;
                m_is.get( f );
                char e = *( token.begin() + i );
                if ( f == e )
                {
                    continue;
                }
                else
                {
                    match = false;
                    break;
                }
            }
            if ( match )
            {
                return true;
            }
            else
            {
                ++pos;
                m_is.seekg( pos );
                abort_check();
            }
        }
        
        return false;
    }

//-------------------------------------------------------------//
	/* returns true if the search token is found after
	 the starting position. returns false if it is not
	 found.  rewinds the istream position to where it
	 was when the function was called */
    bool XpReader::find_and_rewind( const std::string& token )
    {
        std::streamoff saved_position = m_is.tellg();
        bool found = find( token );
        m_is.seekg( saved_position );
        return found;
    }

//-------------------------------------------------------------//
	/* checks to see if the next (non-whitespace, non-
	 commented) text in the istream is the given closing tag.
	 Give this function the token string, and if the token
	 string is found immediately following the start position
	 it returns true (ignoring whitespace and comments).
	 Otherwise it returns flase.  Technically this could be
	 used with any token, but it's being used to see if a tag
	 is about to be closed or if there is more text/attributes
	 elements to parse */
    bool XpReader::check_for_closing_tag( std::string closing_tag )
    {
        bool match = true;
        std::streamoff rewind_point = m_is.tellg();
        ignore_ws_and_comments();
        for ( int i = 0; i < closing_tag.length(); ++i)
        {
            char f;
            m_is.get( f );
            char e = *( closing_tag.begin() + i );
            match = f == e;
            if ( !match )
            {
                break;
            }
        }
        
        m_is.seekg( rewind_point );
        return match;
    }
    
//-------------------------------------------------------------//
	/* If this is pointing at the start of an element
	 (or whitespace/comments preceding an element, the
	 function will parse the element and return a
	 constructed element.  Note this calls itself
	 recursively to also parse any nested elements.
	 Effectively this function gets called once on the root
	 element and then calls itself recursively until the
	 end of the root element has been found */
    XpItemPtr XpReader::parse_elements()
    {
        int x = 0;
        return parse_elements( x );
    }
    XpItemPtr XpReader::parse_elements( int& firstItemIndex )
    {
        ignore_ws_and_comments();
        expected('<');
        std::stringstream element_name;
        while ( !isspace( m_is.peek() )
        		&& m_is.peek() != '/'
        		&& m_is.peek() != '>' )
        {
            char c;
            m_is.get( c );
            element_name << c;
        }
        XpItemPtr elem = XpItemPtr( new XpItem( element_name.str() ) );
        elem->setID( firstItemIndex );
        
        if ( isspace( m_is.peek() ) ) // we have attributes
        {
            ignore_ws_and_comments();
            while ( '/' != m_is.peek() && '>' != m_is.peek() )
            {
                XpPropertyPtr a = parse_attribute();
                ++firstItemIndex;
                a->setID( firstItemIndex );
                // a->setParentItem( elem );
                elem->addProperty( a );
                ignore_ws_and_comments();
            }
        }
        if ( '/' == m_is.peek() ) // we have a self-closing element
        {
            expected('/');
            expected('>');
            return elem;
        }
        
        // it is not self-closing
        // cache a string representing
        // the expected closing tag
        std::stringstream closing_tag_ss;
        closing_tag_ss << "</" << elem->getTag() << ">";
        std::string closing_tag = closing_tag_ss.str();

        expected('>');
        ignore_ws_and_comments();
        
        if ( '<' != m_is.peek() ) // it has text
        {
            std::stringstream text;
            char c;
            while ( '<' != m_is.peek() )
            {
                m_is.get( c );
                text << c;
            }
            expected( closing_tag );
            elem->setText( text.str() );
            // return the element
            return elem;
        }
        else // it does not have text
        {
            if ( check_for_closing_tag( closing_tag ) ) //no children
            {
                expected( closing_tag );
            }
            else // it has child elements
            {
                while ( !check_for_closing_tag( closing_tag ) )
                {
                    ++firstItemIndex;
                    ignore_ws_and_comments();
                    XpItemPtr child = parse_elements( firstItemIndex );
                    elem->addChild( child );
                }
                ignore_ws_and_comments();
                expected( closing_tag );
            }
        }
        return elem;

    } //end parse_elements

} // end namespace xparse
