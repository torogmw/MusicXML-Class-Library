#pragma once
#include <iostream>
#include <string>

namespace mx
{
    namespace types
    {
        /* Ostensibly you could change the type of
         string being used for locality.  However,
         I am very American and have no idea what
         would happen, the universe may implode. */
        using StringType = std::string;
        
        class XsString
        {
        public:
            XsString();
            XsString( const StringType& value );
            virtual ~XsString();
            StringType getValue() const;
            virtual void setValue( const StringType& value );
        private:
            StringType myValue;
        };
        
        StringType toString( const XsString& xsstring );
        std::ostream& toStream( std::ostream& os, const XsString& xsstring );
        std::ostream& operator<<( std::ostream& os, const XsString& xsstring );
        
        class XsToken : public XsString
        {
        public:
            XsToken();
            XsToken( const StringType& value );
            virtual void setValue( const StringType& value );
        };
        
        using XsNMToken = XsToken;
        
        using XsAnyUri = XsString;
        
        class XsID : public XsString
        {
        public:
            XsID();
            XsID( const StringType& value );
            virtual void setValue( const StringType& value );
        };
        
        using XsIDREF = XsID;
        
        /* Add restrictions to these later if deemed necessary */
        using XmlLang = XsString;
        using XsAnyUri = XsString;
        using XlinkHref = XsAnyUri;
        using XlinkRole = XsToken;
        using XlinkTitle = XsToken;
    }
}