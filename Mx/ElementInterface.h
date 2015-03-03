
#include <iostream>
#include <memory>
#include "AttributesInterface.h"

namespace mx
{
    
    namespace e
    {
        /* This will be used throughout when writing XML
         to indent the XML tree */
        constexpr const char* INDENT = "   ";
        
        struct ElementInterface;
        using ElementPtr = std::shared_ptr<ElementInterface>;
        using ElementUPtr = std::unique_ptr<ElementInterface>;
        
        struct ElementInterface
        {
        public:
            ElementInterface();
            virtual ~ElementInterface();
            virtual AttributesPtr getAttributes() const = 0;
            virtual std::ostream& streamName( std::ostream& os ) const = 0;
            virtual std::ostream& streamContents( std::ostream& os, const int indent_level ) const = 0;
            virtual std::ostream& streamOpenTag( std::ostream& os ) const;
            virtual std::ostream& streamCloseTag( std::ostream& os ) const;
            virtual std::ostream& streamSelfCloseTag( std::ostream& os ) const;
            virtual std::ostream& stream( std::ostream& os, const int indent_level ) const;
        };
        
        std::ostream& indent( std::ostream& os, const int indent_level );
        std::ostream& operator<<( std::ostream& os, const ElementInterface& value );
    }
}