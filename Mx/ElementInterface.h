/* MusicXML Class Library v0.1.0
 Copyright (c) 2015 by Matthew James Briggs */

#pragma once
#include <iostream>
#include <memory>
#include "AttributesInterface.h"

namespace mx
{
    
    namespace e
    {
        /* This will be used throughout when writing XML
         to indent the XML tree */
		extern const char* INDENT;
        
        struct ElementInterface;
        using ElementPtr = std::shared_ptr<ElementInterface>;
        using ElementUPtr = std::unique_ptr<ElementInterface>;
        
        struct ElementInterface
        {
        public:
            ElementInterface();
            virtual ~ElementInterface();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const = 0;
            virtual std::ostream& streamName( std::ostream& os ) const = 0;
            virtual bool hasContents() const = 0; /* if this returns false then self-closing tag will be created */
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const = 0;
            virtual std::ostream& streamOpenTag( std::ostream& os ) const;
            virtual std::ostream& streamCloseTag( std::ostream& os ) const;
            virtual std::ostream& streamSelfCloseTag( std::ostream& os ) const;
            virtual std::ostream& toStream( std::ostream& os, const int indentLevel ) const;
        };
        
        std::ostream& indent( std::ostream& os, const int indentLevel );
        std::ostream& operator<<( std::ostream& os, const ElementInterface& value );
    }
}