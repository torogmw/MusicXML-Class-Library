#pragma once
#include "ElementInterface.h"
#include "Enums.h"
#include "Strings.h"
#include "FontSize.h"
#include "Integers.h"
#include "Decimals.h"
#include "NumberOrNormal.h"
#include "PositiveIntegerOrEmpty.h"
#include "Color.h"
#include "Date.h"
#include <memory>
#include "Elements.h"

namespace mx
{
    namespace e
    {
//        /*
//         <xs:group name="traditional-key">
//         <xs:annotation>
//         <xs:documentation>The traditional-key group represents a traditional key signature using the cycle of fifths.</xs:documentation>
//         </xs:annotation>
//         <xs:sequence>
//         <xs:element name="cancel" type="cancel" minOccurs="0"/>
//         <xs:element name="fifths" type="fifths"/>
//         <xs:element name="mode" type="mode" minOccurs="0"/>
//         </xs:sequence>
//         </xs:group>
//         */
//        class TraditionalKey;
//        using TraditionalKeyPtr = std::shared_ptr<TraditionalKey>;
//        class TraditionalKey : public ElementInterface
//        {
//        public:
//            TraditionalKey();
//            virtual bool hasAttributes() const;
//            virtual std::ostream& streamAttributes( std::ostream& os ) const;
//            virtual std::ostream& streamName( std::ostream& os ) const;
//            virtual bool hasContents() const;
//            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
//            CancelPtr getCancel() const;
//            void setCancel( const CancelPtr& value );
//            bool getHasCancel() const;
//            void setHasCancel( const bool value );
//            FifthsPtr getFifths() const;
//            void setFifths( const FifthsPtr& value );
//            ModePtr getMode() const;
//            void setMode( const ModePtr& value );
//            bool getHasMode() const;
//            void setHasMode( const bool value );
//        private:
//            CancelPtr myCancel;
//            FifthsPtr myFifths;
//            ModePtr myMode;
//            bool myHasCancel;
//            bool myHasMode;
//        };
    }
}