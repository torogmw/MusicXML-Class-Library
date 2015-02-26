#include "MxStrings.h"
#include <sstream>
#include <cctype>

namespace
{
    const mx::types::StringType kWhitespace = " \t\n\v\f\r";
    const mx::types::StringType kNCNameAllowed = "-.0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ_abcdefghijklmnopqrstuvwxyz";
    mx::types::StringType trim(const mx::types::StringType& str,
                     const mx::types::StringType& whitespace = kWhitespace )
    {
        const auto strBegin = str.find_first_not_of(whitespace);
        if (strBegin == mx::types::StringType::npos)
            return ""; // no content
        
        const auto strEnd = str.find_last_not_of(whitespace);
        const auto strRange = strEnd - strBegin + 1;
        
        return str.substr(strBegin, strRange);
    }
    
    mx::types::StringType reduce(const mx::types::StringType& str,
                       const mx::types::StringType& fill = " ",
                       const mx::types::StringType& whitespace = kWhitespace)
    {
        // trim first
        auto result = trim(str, whitespace);
        
        // replace sub ranges
        auto beginSpace = result.find_first_of(whitespace);
        while (beginSpace != mx::types::StringType::npos)
        {
            const auto endSpace = result.find_first_not_of(whitespace, beginSpace);
            const auto range = endSpace - beginSpace;
            
            result.replace(beginSpace, range, fill);
            
            const auto newStart = beginSpace + fill.length();
            beginSpace = result.find_first_of(whitespace, newStart);
        }
        
        return result;
    }
    mx::types::StringType onlyAllow(const mx::types::StringType& input,
                                    const mx::types::StringType& fill = "_",
                                    const mx::types::StringType& onlyAllow = kNCNameAllowed)
    {
        std::string str = input;
        auto firstBadChar = str.find_first_not_of( onlyAllow );
        while ( firstBadChar != mx::types::StringType::npos )
        {
            str = str.replace( firstBadChar, 1, fill );
            firstBadChar = str.find_first_not_of( onlyAllow );
        }
        return str;
    }
}

namespace mx
{
    namespace types
    {
        XsString::XsString()
        :myValue( "" ) {}
        
        XsString::XsString( const StringType& value )
        :myValue( value ) {}
        
        XsString::~XsString() {}
        
        StringType XsString::getValue() const
        {
            return myValue;
        }
        void XsString::setValue( const StringType& value )
        {
            myValue = value;
        }
        StringType toString( const XsString& xsstring )
        {
            return xsstring.getValue();
        }
        std::ostream& toStream( std::ostream& os, const XsString& xsstring )
        {
            return os << xsstring.getValue();
        }
        std::ostream& operator<<( std::ostream& os, const XsString& xsstring )
        {
            return toStream( os, xsstring );
        }
        
        XsToken::XsToken()
        :XsString() {}
        
        XsToken::XsToken( const StringType& value )
        :XsString( value )
        {
            XsToken::setValue( value );
        }
        void XsToken::setValue( const StringType& value )
        {
            XsString::setValue( reduce( value ) );
        }
        
        XsID::XsID()
        :XsString( "ID" ) {}
        
        XsID::XsID( const StringType& value )
        :XsString( value )
        {
            XsID::setValue( value );
        }
        
        void XsID::setValue( const StringType& value )
        {
            std::string scrubbed = onlyAllow( value );
            if ( scrubbed.length() == 0 )
            {
                scrubbed = "ID";
            }
            else if ( isdigit( scrubbed[0] ) )
            {
                scrubbed = "ID" + scrubbed;
            }
            XsString::setValue( scrubbed );
        }
        
        CommaSeparatedText::CommaSeparatedText()
        :myValues() {}
        
        CommaSeparatedText::CommaSeparatedText( const XsTokenSet& values )
        :myValues( values ) {}
        
        CommaSeparatedText::CommaSeparatedText( const StringType& value )
        :myValues()
        {
            this->parse( value );
        }
        void CommaSeparatedText::parse( const StringType& commaSeparatedText )
        {
            myValues.clear();
            std::istringstream iss( commaSeparatedText );
            std::string token;
            
            while( std::getline( iss, token, ',' ) )
            {
                myValues.push_back( XsToken( token ) );
            }
        }
        const XsTokenSet& CommaSeparatedText::getValues() const
        {
            return myValues;
        }
        void CommaSeparatedText::setValues( const XsTokenSet& values )
        {
            myValues = values;
        }
        
        XsTokenSetIter CommaSeparatedText::getValuesBegin()
        {
            return myValues.begin();
        }
        XsTokenSetIter CommaSeparatedText::getValuesEnd()
        {
            return myValues.end();
        }
        XsTokenSetIterConst CommaSeparatedText::getValuesBeginConst() const
        {
            return myValues.cbegin();
        }
        XsTokenSetIterConst CommaSeparatedText::getValuesEndConst() const
        {
            return myValues.cend();
        }
        
        std::ostream& toStream( std::ostream& os, const CommaSeparatedText& value )
        {
            bool isfirst = true;
            for ( auto x : value.getValues() )
            {
                if( isfirst )
                {
                    toStream( os, x );
                    isfirst = false;
                }
                else
                {
                    os << ",";
                    toStream( os, x );
                }
            }
            return os;
        }
        std::ostream& operator<<( std::ostream& os, const CommaSeparatedText& value )
        {
            return toStream( os, value );
        }
        StringType toString( const CommaSeparatedText& value )
        {
            std::stringstream ss;
            toStream( ss, value );
            return ss.str();
        }
    }
}