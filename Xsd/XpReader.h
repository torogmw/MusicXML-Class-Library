/* See MusicXML License at the bottom of this code page. */

/* matthew james briggs
 
 XpReader.h   Takes an istream and parses the istream
            during construction.  Throws during
            construction if it cannot parse the
            xml.
 
            Once XpReader is constructed, it has only
            one public function, document(), which
            returns the resulting xparse:Document
            object.
 
 Exceptions std::runtime_error
 
            This object throws a std::runtime_error
            exception during construction if it
            cannot parse the xml input.
 
 */

#pragma once
#include <iostream>
#include "XpDom.h"
#include "XpItem.h"
#include "XpProperty.h"


namespace xsd
{
    class XpReader
    {

    public:
//-------------------------------------------------------------//
        /* ctor */
        XpReader( std::istream& input );
        
//-------------------------------------------------------------//
        /* dtor */
        virtual ~XpReader();

//-------------------------------------------------------------//
        /* returns the parsed xml document */
        XpDom document() const;
        XpDomPtr documentPtr() const;
        
    private:
//-------------------------------------------------------------//
        /* the input stream containing xml */
        std::istream& m_is;
        
//-------------------------------------------------------------//
        /* XpReaders purpose is to construct this
         Document object from xml input */
        XpDomPtr m_doc;
        
//-------------------------------------------------------------//   
        /* these are used to remember a position
         and rewind the istream buffer to the
         desired, remembered position. */
        std::streamoff m_start_position;
        std::streamoff m_remembered_pos;

//-------------------------------------------------------------//
        /* reads the entire istream and
         constructs a Docuement */
        void parse( XpDom& doc );
                     
//-------------------------------------------------------------//
        /* sets the buffer position
         back to the beginning and clears
         all error flags from the istream */
        void reset_stream();    

//-------------------------------------------------------------//
        /* sets the m_remembered_pos value
         to the current buffer position */
        void remember_position();
        
//-------------------------------------------------------------//
        /* sets the buffer to m_remembered_pos
         and clears any istream error flags */
        void rewind();
        
//-------------------------------------------------------------//
        /* checks the next istream char against an expected
         char.  If they match, nothing happens. If the do
         not match, a std::runtime_exception is throws.
         A custom message can be given, otherwise the message
         will state the expecte vs. found char values */
        void expected( char expected, const std::string& message = "" );
        
//-------------------------------------------------------------//
        /* Checks each char in the expected string, calling
         the above char version for each position in the given
         string */
        void expected( const std::string& expected, const std::string& message = "" );
        
//-------------------------------------------------------------//
        /* moves the istream forward to the next non-
         whitespace position. */
        void ignore_ws();
        
//-------------------------------------------------------------//
        /* if this function is called when the istream
         buffer is pointing at the first character of
         an xml comment, it moves the buffer forward to
         the end of the xml comment and returns true.
         Otherwise it returns false and returns the buffer
         to the position it was at when the function was
         called. */
        bool ignore_comment();
        
//-------------------------------------------------------------//
        /* moves the buffer forward to the first
         position that is neither whitespace nor
         an xml comment */
        void ignore_ws_and_comments();
                
//-------------------------------------------------------------//
        /* checks the istreams eof bit and good bit.
         throws if eof is true or if good is false */
        void abort_check();

//-------------------------------------------------------------//
        /* parses the xml version tag and
         returns the version number as a string.
         throws if the xml is malformed.
         returns an empty string if the xml
         doesn't have a version tag */
        std::string parse_xml_ver();
        
//-------------------------------------------------------------//
        /* parses the xml DOCTYPE tag and
         returns the DOCTYPE information as a
         string.  Throws if the xml is
         malformed.  Returns an empty string
         if the xml does not have a Doctype
         tag. */
        std::string parse_doc_type();
        
//-------------------------------------------------------------//
        /* if called when the istream buffer is
         pointing at the start of an attribute,
         will return a shared pointer to the parsed,
         constructed attribute.  Will ignore
         whitespace and comments prior to the
         start of the attribute */
        XpPropertyPtr parse_attribute();

//-------------------------------------------------------------//
        /* advances the istream position to the first character
         after the found search token and returns true. Returns
         false if the search token is not found. */
        bool find( const std::string& token );

//-------------------------------------------------------------//
        /* returns true if the search token is found after
         the starting position. returns false if it is not
         found.  rewinds the istream position to where it
         was when the function was called */
        bool find_and_rewind( const std::string& token );

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
        bool check_for_closing_tag( std::string closing_tag );

//-------------------------------------------------------------//
        /* If this is pointing at the start of an element
         (or whitespace/comments preceding an element, the
         function will parse the element and return a
         constructed element.  Note this calls itself
         recursively to also parse any nested elements.
         Effectively this function gets called once on the root
         element and then calls itself recursively until the
         end of the root element has been found */
        XpItemPtr parse_elements( int& firstElementIndex );
        XpItemPtr parse_elements();
    };
}

