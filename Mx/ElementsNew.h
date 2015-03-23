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
        /*
         2660
         <xs:element name="transpose" type="transpose" minOccurs="0" maxOccurs="unbounded">
         <xs:annotation>
         <xs:documentation>If the part is being encoded for a transposing instrument in written vs. concert pitch, the transposition must be encoded in the transpose element using the transpose type.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:complexType name="transpose">
         <xs:annotation>
         <xs:documentation>The transpose type represents what must be added to a written pitch to get a correct sounding pitch. The optional number attribute refers to staff numbers, from top to bottom on the system. If absent, the transposition applies to all staves in the part. Per-staff transposition is most often used in parts that represent multiple instruments.</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:element name="diatonic" type="xs:integer" minOccurs="0">
         <xs:annotation>
         <xs:documentation>The diatonic element specifies the number of pitch steps needed to go from written to sounding pitch. This allows for correct spelling of enharmonic transpositions.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="chromatic" type="semitones">
         <xs:annotation>
         <xs:documentation>The chromatic element represents the number of semitones needed to get from written to sounding pitch. This value does not include octave-change values; the values for both elements need to be added to the written pitch to get the correct sounding pitch.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="octave-change" type="xs:integer" minOccurs="0">
         <xs:annotation>
         <xs:documentation>The octave-change element indicates how many octaves to add to get from written pitch to sounding pitch.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="double" type="empty" minOccurs="0">
         <xs:annotation>
         <xs:documentation>If the double element is present, it indicates that the music is doubled one octave down from what is currently written (as is the case for mixed cello / bass parts in orchestral literature).</xs:documentation>
         </xs:annotation>
         </xs:element>
         </xs:sequence>
         <xs:attribute name="number" type="staff-number"/>
         </xs:complexType>
         */
        
        struct TransposeAttributes;
        using TransposeAttributesPtr = std::shared_ptr<TransposeAttributes>;
        
        struct TransposeAttributes : public AttributesInterface
        {
        public:
            TransposeAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::StaffNumber number;
            bool hasNumber;
        };
        
        class Transpose;
        using TransposePtr = std::shared_ptr<Transpose>;
        using TransposeUPtr = std::unique_ptr<Transpose>;
        using TransposeSet = std::vector<TransposePtr>;
        using TransposeSetIter = TransposeSet::iterator;
        using TransposeSetIterConst = TransposeSet::const_iterator;
        inline TransposePtr makeTranspose() { return std::make_shared<Transpose>(); }
        class Transpose : public ElementInterface
        {
        public:
            Transpose();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            TransposeAttributesPtr getAttributes() const;
            void setAttributes( const TransposeAttributesPtr& value );
            /* _________ Diatonic minOccurs = 0, maxOccurs = 1 _________ */
            DiatonicPtr getDiatonic() const;
            void setDiatonic( const DiatonicPtr& value );
            bool getHasDiatonic() const;
            void setHasDiatonic( const bool value );
            /* _________ Chromatic minOccurs = 1, maxOccurs = 1 _________ */
            ChromaticPtr getChromatic() const;
            void setChromatic( const ChromaticPtr& value );
            /* _________ OctaveChange minOccurs = 0, maxOccurs = 1 _________ */
            OctaveChangePtr getOctaveChange() const;
            void setOctaveChange( const OctaveChangePtr& value );
            bool getHasOctaveChange() const;
            void setHasOctaveChange( const bool value );
            /* _________ Double minOccurs = 0, maxOccurs = 1 _________ */
            DoublePtr getDouble() const;
            void setDouble( const DoublePtr& value );
            bool getHasDouble() const;
            void setHasDouble( const bool value );
        private:
            TransposeAttributesPtr myAttributes;
            DiatonicPtr myDiatonic;
            bool myHasDiatonic;
            ChromaticPtr myChromatic;
            OctaveChangePtr myOctaveChange;
            bool myHasOctaveChange;
            DoublePtr myDouble;
            bool myHasDouble;
        };
        
        /*
         2667
         <xs:element name="directive" minOccurs="0" maxOccurs="unbounded">
         <xs:annotation>
         <xs:documentation>Directives are like directions, but can be grouped together with attributes for convenience. This is typically used for tempo markings at the beginning of a piece of music. This element has been deprecated in Version 2.0 in favor of the directive attribute for direction elements. Language names come from ISO 639, with optional country subcodes from ISO 3166.</xs:documentation>
         </xs:annotation>
         <xs:complexType>
         <xs:simpleContent>
         <xs:extension base="xs:string">
         <xs:attributeGroup ref="print-style"/>
         <xs:attribute ref="xml:lang"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         </xs:element>
         */
        
        struct DirectiveAttributes;
        using DirectiveAttributesPtr = std::shared_ptr<DirectiveAttributes>;
        
        struct DirectiveAttributes : public AttributesInterface
        {
        public:
            DirectiveAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::TenthsValue defaultX;
            types::TenthsValue defaultY;
            types::TenthsValue relativeX;
            types::TenthsValue relativeY;
            types::CommaSeparatedText fontFamily;
            types::FontStyle fontStyle;
            types::FontSize fontSize;
            types::FontWeight fontWeight;
            types::XmlLang lang;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasLang;
        };
        
        class Directive;
        using DirectivePtr = std::shared_ptr<Directive>;
        using DirectiveUPtr = std::unique_ptr<Directive>;
        using DirectiveSet = std::vector<DirectivePtr>;
        using DirectiveSetIter = DirectiveSet::iterator;
        using DirectiveSetIterConst = DirectiveSet::const_iterator;
        inline DirectivePtr makeDirective() { return std::make_shared<Directive>(); }
        inline DirectivePtr makeDirective( const types::XsString& value ) { return std::make_shared<Directive>( value ); }
        inline DirectivePtr makeDirective( types::XsString&& value ) { return std::make_shared<Directive>( std::move( value ) ); }
        class Directive : public ElementInterface
        {
        public:
            Directive();
            Directive( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            DirectiveAttributesPtr getAttributes() const;
            void setAttributes( const DirectiveAttributesPtr& value );
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            DirectiveAttributesPtr myAttributes;
            types::XsString myValue;
        };
        
        
        
        /**************** DirectiveAttributes ****************/
        /* 2667 */
        DirectiveAttributes::DirectiveAttributes()
        :defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::CssFontSize::medium )
        ,fontWeight( types::FontWeight::normal )
        ,lang()
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        ,hasLang( false )
        {}
        
        bool DirectiveAttributes::hasValues() const
        {
            return hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight ||
            hasLang;
        }
        
        std::ostream& DirectiveAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, defaultX, "default-x", hasDefaultX );
                streamAttribute( os, defaultY, "default-y", hasDefaultY );
                streamAttribute( os, relativeX, "relative-x", hasRelativeX );
                streamAttribute( os, relativeY, "relative-y", hasRelativeY );
                streamAttribute( os, fontFamily, "font-family", hasFontFamily );
                streamAttribute( os, fontStyle, "font-style", hasFontStyle );
                streamAttribute( os, fontSize, "font-size", hasFontSize );
                streamAttribute( os, fontWeight, "font-weight", hasFontWeight );
                streamAttribute( os, lang, "lang", hasLang );
            }
            return os;
        }
        
		Directive::Directive()
		:myAttributes( std::make_shared<DirectiveAttributes>() )
		{}
		bool Directive::hasAttributes() const
		{
			return myAttributes->hasValues();
		}
		std::ostream& Directive::streamAttributes( std::ostream& os ) const
		{
			return myAttributes->toStream( os );
			return os;
		}
		std::ostream& Directive::streamName( std::ostream& os ) const
		{
			os << "directive";
			return os;
		}
		bool Directive::hasContents() const
		{
			return true;
		}
		std::ostream& Directive::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			isOneLineOnly = true;
			myValue.toStream( os );
		}
		DirectiveAttributesPtr Directive::getAttributes() const
		{
			return myAttributes;
		}
		void Directive::setAttributes( const DirectiveAttributesPtr& value )
		{
			if ( value )
			{
				myAttributes = value;
			}
		}
        types::XsString Directive::getValue() const
        {
            return myValue;
        }
        void Directive::setValue( const types::XsString& value )
        {
            myValue = value;
        }
    }
}