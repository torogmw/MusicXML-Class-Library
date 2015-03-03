
#include "ElementInterface.h"
#include "Enums.h"
#include "Strings.h"
#include "FontSize.h"
#include "Integers.h"
#include <memory>

namespace mx
{
    namespace e
    {
        struct DynamicsAttributes;
        using DynamicsAttributesPtr = std::shared_ptr<DynamicsAttributes>;
        
        struct DynamicsAttributes : public AttributesInterface
        {
        public:
            DynamicsAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::Tenths defaultX;
            types::Tenths defaultY;
            types::Tenths relativeX;
            types::Tenths relativeY;
            types::CommaSeparatedText fontFamily;
            types::FontStyle fontStyle;
            types::FontSize fontSize;
            types::FontWeight fontWeight;
            types::LeftCenterRight halign;
            types::AboveBelow placement;
            types::NumberOfLines underline;
            types::NumberOfLines overline;
            types::NumberOfLines lineThrough;
            types::EnclosureShape enclosure;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasHalign;
            bool hasPlacement;
            bool hasUnderline;
            bool hasOverline;
            bool hasLineThrough;
            bool hasEnclosure;
        };
        
        class Dynamics : public ElementInterface
        {
        public:
            Dynamics( const types::DynamicsValue& value );
            Dynamics();
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indent_level ) const;
            AttributesPtr getAttributes() const;
            void setAttributes( const DynamicsAttributes& attributes );
        private:
            types::DynamicsValue myValue;
            DynamicsAttributesPtr myAttributes;
        };
    }
}