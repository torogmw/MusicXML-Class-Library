#include "MxStrings.h"
#include <sstream>

namespace
{
    const mx::types::StringType kWhitespace = " \t\n\v\f\r";
    
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
        
    }
}