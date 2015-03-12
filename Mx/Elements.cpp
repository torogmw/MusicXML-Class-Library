#include "Elements.h"

namespace mx
{
    namespace e
    {
        DynamicsAttributes::DynamicsAttributes()
        :hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        ,hasHalign( false )
        ,hasPlacement( false )
        ,hasUnderline( false )
        ,hasOverline( false )
        ,hasLineThrough( false )
        ,hasEnclosure( false )
        {}
        
        bool DynamicsAttributes::hasValues() const
        {
            return hasDefaultX
            || hasDefaultY
            || hasRelativeX
            || hasRelativeY
            || hasFontFamily
            || hasFontStyle
            || hasFontSize
            || hasFontWeight
            || hasHalign
            || hasPlacement
            || hasUnderline
            || hasOverline
            || hasLineThrough
            || hasEnclosure;
        }
        
        std::ostream& DynamicsAttributes::toStream( std::ostream& os ) const
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
                streamAttribute( os, halign, "halign", hasHalign );
                streamAttribute( os, placement, "placement", hasPlacement );
                streamAttribute( os, underline, "underline", hasUnderline );
                streamAttribute( os, overline, "overline", hasOverline );
                streamAttribute( os, lineThrough, "line-through", hasLineThrough );
                streamAttribute( os, enclosure, "enclosure", hasEnclosure );
            }
            return os;
        }
        
        Dynamics::Dynamics( const types::DynamicsValue& value )
        :myValue( value )
        ,myAttributes( std::make_shared<DynamicsAttributes>() )
        {}
        
        Dynamics::Dynamics()
        :myValue()
        ,myAttributes( std::make_shared<DynamicsAttributes>() )
        {}
        
        std::ostream& Dynamics::streamName( std::ostream& os ) const
        {
            return os << "dynamics";
        }
        std::ostream& Dynamics::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
        {
            isOneLineOnly = false;
            os << std::endl;
            if ( myValue.getValue() == types::DynamicsEnum::otherDynamics )
            {
                indent( os, indentLevel + 1 );
                os << "<";
                types::toStream( os, myValue.getValue() );
                os << ">";
                os << myValue;
                os << "</";
                types::toStream( os, myValue.getValue() );
                os << ">";
            }
            else
            {
                indent( os, indentLevel + 1 );
                os << "<";
                types::toStream( os, myValue.getValue() );
                os << "/>";
            }
            os << std::endl;
            return os;
        }
        DynamicsAttributesPtr Dynamics::getAttributes() const
        {
            return myAttributes;
        }
        bool Dynamics::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& Dynamics::streamAttributes( std::ostream& os ) const
        {
            return myAttributes->toStream( os );
        }
        types::DynamicsValue Dynamics::getValue() const
        {
            return myValue;
        }
        void Dynamics::setValue( const types::DynamicsValue& value )
        {
            myValue = value;
        }
        
        /**************** AccidentalText ****************/
        AccidentalTextAttributes::AccidentalTextAttributes()
        :justify( types::LeftCenterRight::center )
        ,defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
        ,fontWeight( types::FontWeight::normal )
        ,halign()
        ,underline()
        ,overline()
        ,lineThrough()
        ,rotation()
        ,letterSpacing()
        ,lineHeight()
        ,lang( "it" )
        ,space( types::XmlSpace::default_ )
        ,enclosure( types::EnclosureShape::rectangle )
        ,hasJustify( false )
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        ,hasHalign( false )
        ,hasUnderline( false )
        ,hasOverline( false )
        ,hasLineThrough( false )
        ,hasRotation( false )
        ,hasLetterSpacing( false )
        ,hasLineHeight( false )
        ,hasLang( false )
        ,hasSpace( false )
        ,hasEnclosure( false )
        {}
        
        bool AccidentalTextAttributes::hasValues() const
        {
            return hasJustify ||
            hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight ||
            hasHalign ||
            hasUnderline ||
            hasOverline ||
            hasLineThrough ||
            hasRotation ||
            hasLetterSpacing ||
            hasLineHeight ||
            hasLang ||
            hasSpace ||
            hasEnclosure;
        }
        
        std::ostream& AccidentalTextAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, justify, "justify", hasJustify );
                streamAttribute( os, defaultX, "default-x", hasDefaultX );
                streamAttribute( os, defaultY, "default-y", hasDefaultY );
                streamAttribute( os, relativeX, "relative-x", hasRelativeX );
                streamAttribute( os, relativeY, "relative-y", hasRelativeY );
                streamAttribute( os, fontFamily, "font-family", hasFontFamily );
                streamAttribute( os, fontStyle, "font-style", hasFontStyle );
                streamAttribute( os, fontSize, "font-size", hasFontSize );
                streamAttribute( os, fontWeight, "font-weight", hasFontWeight );
                streamAttribute( os, halign, "halign", hasHalign );
                streamAttribute( os, underline, "underline", hasUnderline );
                streamAttribute( os, overline, "overline", hasOverline );
                streamAttribute( os, lineThrough, "line-through", hasLineThrough );
                streamAttribute( os, rotation, "rotation", hasRotation );
                streamAttribute( os, letterSpacing, "letter-spacing", hasLetterSpacing );
                streamAttribute( os, lineHeight, "line-height", hasLineHeight );
                streamAttribute( os, lang, "lang", hasLang );
                streamAttribute( os, space, "space", hasSpace );
                streamAttribute( os, enclosure, "enclosure", hasEnclosure );
            }
            return os;
        }
        
        AccidentalText::AccidentalText()
        :myValue( types::AccidentalValue::natural )
        ,myAttributes( std::make_shared<AccidentalTextAttributes>() )
        {}
        AccidentalText::AccidentalText( const types::AccidentalValue& value )
        :myValue( value )
        ,myAttributes( std::make_shared<AccidentalTextAttributes>() )
        {}
        bool AccidentalText::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& AccidentalText::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& AccidentalText::streamName( std::ostream& os ) const
        {
            os << "accidental-text";
            return os;
        }
        std::ostream& AccidentalText::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        AccidentalTextAttributesPtr AccidentalText::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void AccidentalText::setAttributes( const AccidentalTextAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::AccidentalValue AccidentalText::getValue() const
        {
            return myValue;
        }
        void AccidentalText::setValue( const types::AccidentalValue& value )
        {
            myValue = value;
        }
        
        /**************** DisplayText ****************/
        DisplayTextAttributes::DisplayTextAttributes()
        :justify( types::LeftCenterRight::center )
        ,defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
        ,fontWeight( types::FontWeight::normal )
        ,halign()
        ,underline()
        ,overline()
        ,lineThrough()
        ,rotation()
        ,letterSpacing()
        ,lineHeight()
        ,lang( types::XmlLang{ "it" } )
        ,space( types::XmlSpace::default_ )
        ,enclosure( types::EnclosureShape::rectangle )
        ,hasJustify( false )
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        ,hasHalign( false )
        ,hasUnderline( false )
        ,hasOverline( false )
        ,hasLineThrough( false )
        ,hasRotation( false )
        ,hasLetterSpacing( false )
        ,hasLineHeight( false )
        ,hasLang( false )
        ,hasSpace( false )
        ,hasEnclosure( false )
        {}
        
        bool DisplayTextAttributes::hasValues() const
        {
            return hasJustify ||
            hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight ||
            hasHalign ||
            hasUnderline ||
            hasOverline ||
            hasLineThrough ||
            hasRotation ||
            hasLetterSpacing ||
            hasLineHeight ||
            hasLang ||
            hasSpace ||
            hasEnclosure;
        }
        
        std::ostream& DisplayTextAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, justify, "justify", hasJustify );
                streamAttribute( os, defaultX, "default-x", hasDefaultX );
                streamAttribute( os, defaultY, "default-y", hasDefaultY );
                streamAttribute( os, relativeX, "relative-x", hasRelativeX );
                streamAttribute( os, relativeY, "relative-y", hasRelativeY );
                streamAttribute( os, fontFamily, "font-family", hasFontFamily );
                streamAttribute( os, fontStyle, "font-style", hasFontStyle );
                streamAttribute( os, fontSize, "font-size", hasFontSize );
                streamAttribute( os, fontWeight, "font-weight", hasFontWeight );
                streamAttribute( os, halign, "halign", hasHalign );
                streamAttribute( os, underline, "underline", hasUnderline );
                streamAttribute( os, overline, "overline", hasOverline );
                streamAttribute( os, lineThrough, "line-through", hasLineThrough );
                streamAttribute( os, rotation, "rotation", hasRotation );
                streamAttribute( os, letterSpacing, "letter-spacing", hasLetterSpacing );
                streamAttribute( os, lineHeight, "line-height", hasLineHeight );
                streamAttribute( os, lang, "lang", hasLang );
                streamAttribute( os, space, "space", hasSpace );
                streamAttribute( os, enclosure, "enclosure", hasEnclosure );
            }
            return os;
        }
        
        DisplayText::DisplayText()
        :myValue()
        ,myAttributes( std::make_shared<DisplayTextAttributes>() )
        {}
        DisplayText::DisplayText( const types::XsString& value )
        :myValue( value )
        ,myAttributes( std::make_shared<DisplayTextAttributes>() )
        {}
        bool DisplayText::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& DisplayText::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& DisplayText::streamName( std::ostream& os ) const
        {
            os << "display-text";
            return os;
        }
        std::ostream& DisplayText::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        DisplayTextAttributesPtr DisplayText::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void DisplayText::setAttributes( const DisplayTextAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::XsString DisplayText::getValue() const
        {
            return myValue;
        }
        void DisplayText::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        
        
        /**************** DisplayText ****************/
//        DisplayTextAttributes::DisplayTextAttributes()
//        :justify( types::LeftCenterRight::center )
//        ,defaultX()
//        ,defaultY()
//        ,relativeX()
//        ,relativeY()
//        ,fontFamily()
//        ,fontStyle( types::FontStyle::normal )
//        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
//        ,fontWeight( types::FontWeight::normal )
//        ,halign()
//        ,underline()
//        ,overline()
//        ,lineThrough()
//        ,rotation()
//        ,letterSpacing()
//        ,lineHeight()
//        ,lang( types::XmlLang{ "it" } )
//        ,space( types::XmlSpace::default_ )
//        ,enclosure( types::EnclosureShape::rectangle )
//        ,hasJustify( false )
//        ,hasDefaultX( false )
//        ,hasDefaultY( false )
//        ,hasRelativeX( false )
//        ,hasRelativeY( false )
//        ,hasFontFamily( false )
//        ,hasFontStyle( false )
//        ,hasFontSize( false )
//        ,hasFontWeight( false )
//        ,hasHalign( false )
//        ,hasUnderline( false )
//        ,hasOverline( false )
//        ,hasLineThrough( false )
//        ,hasRotation( false )
//        ,hasLetterSpacing( false )
//        ,hasLineHeight( false )
//        ,hasLang( false )
//        ,hasSpace( false )
//        ,hasEnclosure( false )
//        {}
//        
//        bool DisplayTextAttributes::hasValues() const
//        {
//            return hasJustify ||
//            hasDefaultX ||
//            hasDefaultY ||
//            hasRelativeX ||
//            hasRelativeY ||
//            hasFontFamily ||
//            hasFontStyle ||
//            hasFontSize ||
//            hasFontWeight ||
//            hasHalign ||
//            hasUnderline ||
//            hasOverline ||
//            hasLineThrough ||
//            hasRotation ||
//            hasLetterSpacing ||
//            hasLineHeight ||
//            hasLang ||
//            hasSpace ||
//            hasEnclosure;
//        }
//        
//        std::ostream& DisplayTextAttributes::toStream( std::ostream& os ) const
//        {
//            if ( hasValues() )
//            {
//                streamAttribute( os, justify, "justify", hasJustify );
//                streamAttribute( os, defaultX, "default-x", hasDefaultX );
//                streamAttribute( os, defaultY, "default-y", hasDefaultY );
//                streamAttribute( os, relativeX, "relative-x", hasRelativeX );
//                streamAttribute( os, relativeY, "relative-y", hasRelativeY );
//                streamAttribute( os, fontFamily, "font-family", hasFontFamily );
//                streamAttribute( os, fontStyle, "font-style", hasFontStyle );
//                streamAttribute( os, fontSize, "font-size", hasFontSize );
//                streamAttribute( os, fontWeight, "font-weight", hasFontWeight );
//                streamAttribute( os, halign, "halign", hasHalign );
//                streamAttribute( os, underline, "underline", hasUnderline );
//                streamAttribute( os, overline, "overline", hasOverline );
//                streamAttribute( os, lineThrough, "line-through", hasLineThrough );
//                streamAttribute( os, rotation, "rotation", hasRotation );
//                streamAttribute( os, letterSpacing, "letter-spacing", hasLetterSpacing );
//                streamAttribute( os, lineHeight, "line-height", hasLineHeight );
//                streamAttribute( os, lang, "lang", hasLang );
//                streamAttribute( os, space, "space", hasSpace );
//                streamAttribute( os, enclosure, "enclosure", hasEnclosure );
//            }
//            return os;
//        }
//        
//        DisplayText::DisplayText()
//        :myValue()
//        ,myAttributes( std::make_shared<DisplayTextAttributes>() )
//        {}
//        DisplayText::DisplayText( const types::XsString& value )
//        :myValue( value )
//        ,myAttributes( std::make_shared<DisplayTextAttributes>() )
//        {}
//        bool DisplayText::hasAttributes() const
//        {
//            return myAttributes->hasValues();
//        }
//        std::ostream& DisplayText::streamAttributes( std::ostream& os ) const
//        {
//            if ( myAttributes )
//            {
//                myAttributes->toStream( os );
//            }
//            return os;
//        }
//        std::ostream& DisplayText::streamName( std::ostream& os ) const
//        {
//            os << "display-text";
//            return os;
//        }
//        std::ostream& DisplayText::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
//        {
//            isOneLineOnly = true;
//            os << myValue;
//            return os;
//        }
//        DisplayTextAttributesPtr DisplayText::getAttributes() const
//        {
//            return myAttributes;
//        }
//        /* if value.get()==nullptr then this is a no-op
//         i.e. this function guards against setting Attributes to nullptr */
//        void DisplayText::setAttributes( const DisplayTextAttributesPtr& value )
//        {
//            if ( value )
//            {
//                myAttributes = value;
//            }
//        }
//        types::XsString DisplayText::getValue() const
//        {
//            return myValue;
//        }
//        void DisplayText::setValue( const types::XsString& value )
//        {
//            myValue = value;
//        }
        
        
        /**************** OtherPlay ****************/
        OtherPlayAttributes::OtherPlayAttributes()
        :type()
        ,hasType( true )
        {}
        
        bool OtherPlayAttributes::hasValues() const
        {
            return hasType;
        }
        
        std::ostream& OtherPlayAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, type, "type", hasType );
            }
            return os;
        }
        
        OtherPlay::OtherPlay()
        :myValue()
        ,myAttributes( std::make_shared<OtherPlayAttributes>() )
        {}
        OtherPlay::OtherPlay( const types::XsString& value )
        :myValue( value )
        ,myAttributes( std::make_shared<OtherPlayAttributes>() )
        {}
        bool OtherPlay::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& OtherPlay::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& OtherPlay::streamName( std::ostream& os ) const
        {
            os << "other-play";
            return os;
        }
        std::ostream& OtherPlay::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        OtherPlayAttributesPtr OtherPlay::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void OtherPlay::setAttributes( const OtherPlayAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::XsString OtherPlay::getValue() const
        {
            return myValue;
        }
        void OtherPlay::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        
        
        /**************** PartSymbol ****************/
        PartSymbolAttributes::PartSymbolAttributes()
        :topStaff()
        ,bottomStaff()
        ,defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,hasTopStaff( false )
        ,hasBottomStaff( false )
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        {}
        
        bool PartSymbolAttributes::hasValues() const
        {
            return hasTopStaff ||
            hasBottomStaff ||
            hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY;
        }
        
        std::ostream& PartSymbolAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, topStaff, "top-staff", hasTopStaff );
                streamAttribute( os, bottomStaff, "bottom-staff", hasBottomStaff );
                streamAttribute( os, defaultX, "default-x", hasDefaultX );
                streamAttribute( os, defaultY, "default-y", hasDefaultY );
                streamAttribute( os, relativeX, "relative-x", hasRelativeX );
                streamAttribute( os, relativeY, "relative-y", hasRelativeY );
            }
            return os;
        }
        
        PartSymbol::PartSymbol()
        :myValue( types::GroupSymbolValue::none )
        ,myAttributes( std::make_shared<PartSymbolAttributes>() )
        {}
        PartSymbol::PartSymbol( const types::GroupSymbolValue& value )
        :myValue( value )
        ,myAttributes( std::make_shared<PartSymbolAttributes>() )
        {}
        bool PartSymbol::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& PartSymbol::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& PartSymbol::streamName( std::ostream& os ) const
        {
            os << "part-symbol";
            return os;
        }
        std::ostream& PartSymbol::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        PartSymbolAttributesPtr PartSymbol::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void PartSymbol::setAttributes( const PartSymbolAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::GroupSymbolValue PartSymbol::getValue() const
        {
            return myValue;
        }
        void PartSymbol::setValue( const types::GroupSymbolValue& value )
        {
            myValue = value;
        }
        
        
        /**************** KeyOctave ****************/
        KeyOctaveAttributes::KeyOctaveAttributes()
        :number( types::PositiveInteger{ 1 } )
        ,cancel( types::YesNo::no )
        ,hasNumber( true )
        ,hasCancel( false )
        {}
        
        bool KeyOctaveAttributes::hasValues() const
        {
            return hasNumber ||
            hasCancel;
        }
        
        std::ostream& KeyOctaveAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, number, "number", hasNumber );
                streamAttribute( os, cancel, "cancel", hasCancel );
            }
            return os;
        }
        
        KeyOctave::KeyOctave()
        :myValue()
        ,myAttributes( std::make_shared<KeyOctaveAttributes>() )
        {}
        KeyOctave::KeyOctave( const types::OctaveValue& value )
        :myValue( value )
        ,myAttributes( std::make_shared<KeyOctaveAttributes>() )
        {}
        bool KeyOctave::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& KeyOctave::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& KeyOctave::streamName( std::ostream& os ) const
        {
            os << "key-octave";
            return os;
        }
        std::ostream& KeyOctave::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        KeyOctaveAttributesPtr KeyOctave::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void KeyOctave::setAttributes( const KeyOctaveAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::OctaveValue KeyOctave::getValue() const
        {
            return myValue;
        }
        void KeyOctave::setValue( const types::OctaveValue& value )
        {
            myValue = value;
        }
        
        
        /**************** MultipleRest ****************/
        MultipleRestAttributes::MultipleRestAttributes()
        :useSymbols()
        ,hasUseSymbols( false )
        {}
        
        bool MultipleRestAttributes::hasValues() const
        {
            return hasUseSymbols;
        }
        
        std::ostream& MultipleRestAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, useSymbols, "use-symbols", hasUseSymbols );
            }
            return os;
        }
        
        MultipleRest::MultipleRest()
        :myValue()
        ,myAttributes( std::make_shared<MultipleRestAttributes>() )
        {}
        MultipleRest::MultipleRest( const types::PositiveIntegerOrEmpty& value )
        :myValue( value )
        ,myAttributes( std::make_shared<MultipleRestAttributes>() )
        {}
        bool MultipleRest::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& MultipleRest::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& MultipleRest::streamName( std::ostream& os ) const
        {
            os << "multiple-rest";
            return os;
        }
        std::ostream& MultipleRest::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        MultipleRestAttributesPtr MultipleRest::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void MultipleRest::setAttributes( const MultipleRestAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::PositiveIntegerOrEmpty MultipleRest::getValue() const
        {
            return myValue;
        }
        void MultipleRest::setValue( const types::PositiveIntegerOrEmpty& value )
        {
            myValue = value;
        }
        
        
        /**************** MeasureRepeat ****************/
        MeasureRepeatAttributes::MeasureRepeatAttributes()
        :type( types::StartStop::start )
        ,slashes()
        ,hasType( true )
        ,hasSlashes( false )
        {}
        
        bool MeasureRepeatAttributes::hasValues() const
        {
            return hasType ||
            hasSlashes;
        }
        
        std::ostream& MeasureRepeatAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, type, "type", hasType );
                streamAttribute( os, slashes, "slashes", hasSlashes );
            }
            return os;
        }
        
        MeasureRepeat::MeasureRepeat()
        :myValue()
        ,myAttributes( std::make_shared<MeasureRepeatAttributes>() )
        {}
        MeasureRepeat::MeasureRepeat( const types::PositiveIntegerOrEmpty& value )
        :myValue( value )
        ,myAttributes( std::make_shared<MeasureRepeatAttributes>() )
        {}
        bool MeasureRepeat::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& MeasureRepeat::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& MeasureRepeat::streamName( std::ostream& os ) const
        {
            os << "measure-repeat";
            return os;
        }
        std::ostream& MeasureRepeat::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        MeasureRepeatAttributesPtr MeasureRepeat::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void MeasureRepeat::setAttributes( const MeasureRepeatAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::PositiveIntegerOrEmpty MeasureRepeat::getValue() const
        {
            return myValue;
        }
        void MeasureRepeat::setValue( const types::PositiveIntegerOrEmpty& value )
        {
            myValue = value;
        }
        
        
        /**************** BarStyle ****************/
        BarStyleAttributes::BarStyleAttributes()
        :color()
        ,hasColor( false )
        {}
        
        bool BarStyleAttributes::hasValues() const
        {
            return hasColor;
        }
        
        std::ostream& BarStyleAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, color, "color", hasColor );
            }
            return os;
        }
        
        BarStyle::BarStyle()
        :myValue( types::BarStyleEnum::regular )
        ,myAttributes( std::make_shared<BarStyleAttributes>() )
        {}
        BarStyle::BarStyle( const types::BarStyleEnum& value )
        :myValue( value )
        ,myAttributes( std::make_shared<BarStyleAttributes>() )
        {}
        bool BarStyle::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& BarStyle::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& BarStyle::streamName( std::ostream& os ) const
        {
            os << "bar-style";
            return os;
        }
        std::ostream& BarStyle::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        BarStyleAttributesPtr BarStyle::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void BarStyle::setAttributes( const BarStyleAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::BarStyleEnum BarStyle::getValue() const
        {
            return myValue;
        }
        void BarStyle::setValue( const types::BarStyleEnum& value )
        {
            myValue = value;
        }
        
        
        /**************** Fermata ****************/
        FermataAttributes::FermataAttributes()
        :type( types::UprightInverted::upright )
        ,defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
        ,fontWeight( types::FontWeight::normal )
        ,hasType( false )
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        {}
        
        bool FermataAttributes::hasValues() const
        {
            return hasType ||
            hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight;
        }
        
        std::ostream& FermataAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, type, "type", hasType );
                streamAttribute( os, defaultX, "default-x", hasDefaultX );
                streamAttribute( os, defaultY, "default-y", hasDefaultY );
                streamAttribute( os, relativeX, "relative-x", hasRelativeX );
                streamAttribute( os, relativeY, "relative-y", hasRelativeY );
                streamAttribute( os, fontFamily, "font-family", hasFontFamily );
                streamAttribute( os, fontStyle, "font-style", hasFontStyle );
                streamAttribute( os, fontSize, "font-size", hasFontSize );
                streamAttribute( os, fontWeight, "font-weight", hasFontWeight );
            }
            return os;
        }
        
        Fermata::Fermata()
        :myValue( types::FermataShape::normal )
        ,myAttributes( std::make_shared<FermataAttributes>() )
        {}
        Fermata::Fermata( const types::FermataShape& value )
        :myValue( value )
        ,myAttributes( std::make_shared<FermataAttributes>() )
        {}
        bool Fermata::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& Fermata::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& Fermata::streamName( std::ostream& os ) const
        {
            os << "fermata";
            return os;
        }
        std::ostream& Fermata::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        FermataAttributesPtr Fermata::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void Fermata::setAttributes( const FermataAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::FermataShape Fermata::getValue() const
        {
            return myValue;
        }
        void Fermata::setValue( const types::FermataShape& value )
        {
            myValue = value;
        }
        
        
        /**************** Ending ****************/
        EndingAttributes::EndingAttributes()
        :number( "1" )
        ,type( types::StartStopDiscontinue::start )
        ,printObject()
        ,defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
        ,fontWeight( types::FontWeight::normal )
        ,endLength()
        ,textX()
        ,textY()
        ,hasNumber( true )
        ,hasType( true )
        ,hasPrintObject( false )
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        ,hasEndLength( false )
        ,hasTextX( false )
        ,hasTextY( false )
        {}
        
        bool EndingAttributes::hasValues() const
        {
            return hasNumber ||
            hasType ||
            hasPrintObject ||
            hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight ||
            hasEndLength ||
            hasTextX ||
            hasTextY;
        }
        
        std::ostream& EndingAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, number, "number", hasNumber );
                streamAttribute( os, type, "type", hasType );
                streamAttribute( os, printObject, "print-object", hasPrintObject );
                streamAttribute( os, defaultX, "default-x", hasDefaultX );
                streamAttribute( os, defaultY, "default-y", hasDefaultY );
                streamAttribute( os, relativeX, "relative-x", hasRelativeX );
                streamAttribute( os, relativeY, "relative-y", hasRelativeY );
                streamAttribute( os, fontFamily, "font-family", hasFontFamily );
                streamAttribute( os, fontStyle, "font-style", hasFontStyle );
                streamAttribute( os, fontSize, "font-size", hasFontSize );
                streamAttribute( os, fontWeight, "font-weight", hasFontWeight );
                streamAttribute( os, endLength, "end-length", hasEndLength );
                streamAttribute( os, textX, "text-x", hasTextX );
                streamAttribute( os, textY, "text-y", hasTextY );
            }
            return os;
        }
        
        Ending::Ending()
        :myValue()
        ,myAttributes( std::make_shared<EndingAttributes>() )
        {}
        Ending::Ending( const types::XsString& value )
        :myValue( value )
        ,myAttributes( std::make_shared<EndingAttributes>() )
        {}
        bool Ending::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& Ending::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& Ending::streamName( std::ostream& os ) const
        {
            os << "ending";
            return os;
        }
        std::ostream& Ending::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        EndingAttributesPtr Ending::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void Ending::setAttributes( const EndingAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::XsString Ending::getValue() const
        {
            return myValue;
        }
        void Ending::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        
        
        /**************** BassStep ****************/
        BassStepAttributes::BassStepAttributes()
        :text()
        ,defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
        ,fontWeight( types::FontWeight::normal )
        ,hasText( false )
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        {}
        
        bool BassStepAttributes::hasValues() const
        {
            return hasText ||
            hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight;
        }
        
        std::ostream& BassStepAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, text, "text", hasText );
                streamAttribute( os, defaultX, "default-x", hasDefaultX );
                streamAttribute( os, defaultY, "default-y", hasDefaultY );
                streamAttribute( os, relativeX, "relative-x", hasRelativeX );
                streamAttribute( os, relativeY, "relative-y", hasRelativeY );
                streamAttribute( os, fontFamily, "font-family", hasFontFamily );
                streamAttribute( os, fontStyle, "font-style", hasFontStyle );
                streamAttribute( os, fontSize, "font-size", hasFontSize );
                streamAttribute( os, fontWeight, "font-weight", hasFontWeight );
            }
            return os;
        }
        
        BassStep::BassStep()
        :myValue( types::StepEnum::a )
        ,myAttributes( std::make_shared<BassStepAttributes>() )
        {}
        BassStep::BassStep( const types::StepEnum& value )
        :myValue( value )
        ,myAttributes( std::make_shared<BassStepAttributes>() )
        {}
        bool BassStep::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& BassStep::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& BassStep::streamName( std::ostream& os ) const
        {
            os << "bass-step";
            return os;
        }
        std::ostream& BassStep::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        BassStepAttributesPtr BassStep::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void BassStep::setAttributes( const BassStepAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::StepEnum BassStep::getValue() const
        {
            return myValue;
        }
        void BassStep::setValue( const types::StepEnum& value )
        {
            myValue = value;
        }
        
        
        /**************** BassAlter ****************/
        BassAlterAttributes::BassAlterAttributes()
        :printObject()
        ,defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
        ,fontWeight( types::FontWeight::normal )
        ,location()
        ,hasPrintObject( false )
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        ,hasLocation( false )
        {}
        
        bool BassAlterAttributes::hasValues() const
        {
            return hasPrintObject ||
            hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight ||
            hasLocation;
        }
        
        std::ostream& BassAlterAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, printObject, "print-object", hasPrintObject );
                streamAttribute( os, defaultX, "default-x", hasDefaultX );
                streamAttribute( os, defaultY, "default-y", hasDefaultY );
                streamAttribute( os, relativeX, "relative-x", hasRelativeX );
                streamAttribute( os, relativeY, "relative-y", hasRelativeY );
                streamAttribute( os, fontFamily, "font-family", hasFontFamily );
                streamAttribute( os, fontStyle, "font-style", hasFontStyle );
                streamAttribute( os, fontSize, "font-size", hasFontSize );
                streamAttribute( os, fontWeight, "font-weight", hasFontWeight );
                streamAttribute( os, location, "location", hasLocation );
            }
            return os;
        }
        
        BassAlter::BassAlter()
        :myValue()
        ,myAttributes( std::make_shared<BassAlterAttributes>() )
        {}
        BassAlter::BassAlter( const types::Semitones& value )
        :myValue( value )
        ,myAttributes( std::make_shared<BassAlterAttributes>() )
        {}
        bool BassAlter::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& BassAlter::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& BassAlter::streamName( std::ostream& os ) const
        {
            os << "bass-alter";
            return os;
        }
        std::ostream& BassAlter::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        BassAlterAttributesPtr BassAlter::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void BassAlter::setAttributes( const BassAlterAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::Semitones BassAlter::getValue() const
        {
            return myValue;
        }
        void BassAlter::setValue( const types::Semitones& value )
        {
            myValue = value;
        }
        
        
        /**************** DegreeValue ****************/
        DegreeValueAttributes::DegreeValueAttributes()
        :symbol()
        ,text()
        ,defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
        ,fontWeight( types::FontWeight::normal )
        ,hasSymbol( false )
        ,hasText( false )
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        {}
        
        bool DegreeValueAttributes::hasValues() const
        {
            return hasSymbol ||
            hasText ||
            hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight;
        }
        
        std::ostream& DegreeValueAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, symbol, "symbol", hasSymbol );
                streamAttribute( os, text, "text", hasText );
                streamAttribute( os, defaultX, "default-x", hasDefaultX );
                streamAttribute( os, defaultY, "default-y", hasDefaultY );
                streamAttribute( os, relativeX, "relative-x", hasRelativeX );
                streamAttribute( os, relativeY, "relative-y", hasRelativeY );
                streamAttribute( os, fontFamily, "font-family", hasFontFamily );
                streamAttribute( os, fontStyle, "font-style", hasFontStyle );
                streamAttribute( os, fontSize, "font-size", hasFontSize );
                streamAttribute( os, fontWeight, "font-weight", hasFontWeight );
            }
            return os;
        }
        
        DegreeValue::DegreeValue()
        :myValue()
        ,myAttributes( std::make_shared<DegreeValueAttributes>() )
        {}
        DegreeValue::DegreeValue( const types::PositiveInteger& value )
        :myValue( value )
        ,myAttributes( std::make_shared<DegreeValueAttributes>() )
        {}
        bool DegreeValue::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& DegreeValue::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& DegreeValue::streamName( std::ostream& os ) const
        {
            os << "degree-value";
            return os;
        }
        std::ostream& DegreeValue::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        DegreeValueAttributesPtr DegreeValue::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void DegreeValue::setAttributes( const DegreeValueAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::PositiveInteger DegreeValue::getValue() const
        {
            return myValue;
        }
        void DegreeValue::setValue( const types::PositiveInteger& value )
        {
            myValue = value;
        }
        
        
        /**************** DegreeAlter ****************/
        DegreeAlterAttributes::DegreeAlterAttributes()
        :defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
        ,fontWeight( types::FontWeight::normal )
        ,plusMinus( types::YesNo::no )
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        ,hasPlusMinus( false )
        {}
        
        bool DegreeAlterAttributes::hasValues() const
        {
            return hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight ||
            hasPlusMinus;
        }
        
        std::ostream& DegreeAlterAttributes::toStream( std::ostream& os ) const
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
                streamAttribute( os, plusMinus, "plus-minus", hasPlusMinus );
            }
            return os;
        }
        
        DegreeAlter::DegreeAlter()
        :myValue()
        ,myAttributes( std::make_shared<DegreeAlterAttributes>() )
        {}
        DegreeAlter::DegreeAlter( const types::Semitones& value )
        :myValue( value )
        ,myAttributes( std::make_shared<DegreeAlterAttributes>() )
        {}
        bool DegreeAlter::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& DegreeAlter::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& DegreeAlter::streamName( std::ostream& os ) const
        {
            os << "degree-alter";
            return os;
        }
        std::ostream& DegreeAlter::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        DegreeAlterAttributesPtr DegreeAlter::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void DegreeAlter::setAttributes( const DegreeAlterAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::Semitones DegreeAlter::getValue() const
        {
            return myValue;
        }
        void DegreeAlter::setValue( const types::Semitones& value )
        {
            myValue = value;
        }
        
        
        /**************** DegreeType ****************/
        DegreeTypeAttributes::DegreeTypeAttributes()
        :text()
        ,defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
        ,fontWeight( types::FontWeight::normal )
        ,hasText( false )
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        {}
        
        bool DegreeTypeAttributes::hasValues() const
        {
            return hasText ||
            hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight;
        }
        
        std::ostream& DegreeTypeAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, text, "text", hasText );
                streamAttribute( os, defaultX, "default-x", hasDefaultX );
                streamAttribute( os, defaultY, "default-y", hasDefaultY );
                streamAttribute( os, relativeX, "relative-x", hasRelativeX );
                streamAttribute( os, relativeY, "relative-y", hasRelativeY );
                streamAttribute( os, fontFamily, "font-family", hasFontFamily );
                streamAttribute( os, fontStyle, "font-style", hasFontStyle );
                streamAttribute( os, fontSize, "font-size", hasFontSize );
                streamAttribute( os, fontWeight, "font-weight", hasFontWeight );
            }
            return os;
        }
        
        DegreeType::DegreeType()
        :myValue( types::DegreeTypeValue::add )
        ,myAttributes( std::make_shared<DegreeTypeAttributes>() )
        {}
        DegreeType::DegreeType( const types::DegreeTypeValue& value )
        :myValue( value )
        ,myAttributes( std::make_shared<DegreeTypeAttributes>() )
        {}
        bool DegreeType::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& DegreeType::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& DegreeType::streamName( std::ostream& os ) const
        {
            os << "degree-type";
            return os;
        }
        std::ostream& DegreeType::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        DegreeTypeAttributesPtr DegreeType::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void DegreeType::setAttributes( const DegreeTypeAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::DegreeTypeValue DegreeType::getValue() const
        {
            return myValue;
        }
        void DegreeType::setValue( const types::DegreeTypeValue& value )
        {
            myValue = value;
        }
        
        
        /**************** Offset ****************/
        OffsetAttributes::OffsetAttributes()
        :sound()
        ,hasSound( false )
        {}
        
        bool OffsetAttributes::hasValues() const
        {
            return hasSound;
        }
        
        std::ostream& OffsetAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, sound, "sound", hasSound );
            }
            return os;
        }
        
        Offset::Offset()
        :myValue()
        ,myAttributes( std::make_shared<OffsetAttributes>() )
        {}
        Offset::Offset( const types::DivisionsValue& value )
        :myValue( value )
        ,myAttributes( std::make_shared<OffsetAttributes>() )
        {}
        bool Offset::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& Offset::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& Offset::streamName( std::ostream& os ) const
        {
            os << "offset";
            return os;
        }
        std::ostream& Offset::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        OffsetAttributesPtr Offset::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void Offset::setAttributes( const OffsetAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::DivisionsValue Offset::getValue() const
        {
            return myValue;
        }
        void Offset::setValue( const types::DivisionsValue& value )
        {
            myValue = value;
        }
        
        
        /**************** Rehearsal ****************/
        RehearsalAttributes::RehearsalAttributes()
        :justify( types::LeftCenterRight::center )
        ,defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
        ,fontWeight( types::FontWeight::normal )
        ,halign()
        ,underline()
        ,overline()
        ,lineThrough()
        ,rotation()
        ,letterSpacing()
        ,lineHeight()
        ,lang( types::XmlLang{ "it" } )
        ,space( types::XmlSpace::default_ )
        ,enclosure( types::EnclosureShape::rectangle )
        ,hasJustify( false )
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        ,hasHalign( false )
        ,hasUnderline( false )
        ,hasOverline( false )
        ,hasLineThrough( false )
        ,hasRotation( false )
        ,hasLetterSpacing( false )
        ,hasLineHeight( false )
        ,hasLang( false )
        ,hasSpace( false )
        ,hasEnclosure( false )
        {}
        
        bool RehearsalAttributes::hasValues() const
        {
            return hasJustify ||
            hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight ||
            hasHalign ||
            hasUnderline ||
            hasOverline ||
            hasLineThrough ||
            hasRotation ||
            hasLetterSpacing ||
            hasLineHeight ||
            hasLang ||
            hasSpace ||
            hasEnclosure;
        }
        
        std::ostream& RehearsalAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, justify, "justify", hasJustify );
                streamAttribute( os, defaultX, "default-x", hasDefaultX );
                streamAttribute( os, defaultY, "default-y", hasDefaultY );
                streamAttribute( os, relativeX, "relative-x", hasRelativeX );
                streamAttribute( os, relativeY, "relative-y", hasRelativeY );
                streamAttribute( os, fontFamily, "font-family", hasFontFamily );
                streamAttribute( os, fontStyle, "font-style", hasFontStyle );
                streamAttribute( os, fontSize, "font-size", hasFontSize );
                streamAttribute( os, fontWeight, "font-weight", hasFontWeight );
                streamAttribute( os, halign, "halign", hasHalign );
                streamAttribute( os, underline, "underline", hasUnderline );
                streamAttribute( os, overline, "overline", hasOverline );
                streamAttribute( os, lineThrough, "line-through", hasLineThrough );
                streamAttribute( os, rotation, "rotation", hasRotation );
                streamAttribute( os, letterSpacing, "letter-spacing", hasLetterSpacing );
                streamAttribute( os, lineHeight, "line-height", hasLineHeight );
                streamAttribute( os, lang, "lang", hasLang );
                streamAttribute( os, space, "space", hasSpace );
                streamAttribute( os, enclosure, "enclosure", hasEnclosure );
            }
            return os;
        }
        
        Rehearsal::Rehearsal()
        :myValue()
        ,myAttributes( std::make_shared<RehearsalAttributes>() )
        {}
        Rehearsal::Rehearsal( const types::XsString& value )
        :myValue( value )
        ,myAttributes( std::make_shared<RehearsalAttributes>() )
        {}
        bool Rehearsal::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& Rehearsal::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& Rehearsal::streamName( std::ostream& os ) const
        {
            os << "rehearsal";
            return os;
        }
        std::ostream& Rehearsal::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        RehearsalAttributesPtr Rehearsal::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void Rehearsal::setAttributes( const RehearsalAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::XsString Rehearsal::getValue() const
        {
            return myValue;
        }
        void Rehearsal::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        
        
        /**************** Words ****************/
        WordsAttributes::WordsAttributes()
        :justify( types::LeftCenterRight::center )
        ,defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
        ,fontWeight( types::FontWeight::normal )
        ,halign()
        ,underline()
        ,overline()
        ,lineThrough()
        ,rotation()
        ,letterSpacing()
        ,lineHeight()
        ,lang( "it" )
        ,space( types::XmlSpace::default_ )
        ,enclosure( types::EnclosureShape::rectangle )
        ,hasJustify( false )
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        ,hasHalign( false )
        ,hasUnderline( false )
        ,hasOverline( false )
        ,hasLineThrough( false )
        ,hasRotation( false )
        ,hasLetterSpacing( false )
        ,hasLineHeight( false )
        ,hasLang( false )
        ,hasSpace( false )
        ,hasEnclosure( false )
        {}
        
        bool WordsAttributes::hasValues() const
        {
            return hasJustify ||
            hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight ||
            hasHalign ||
            hasUnderline ||
            hasOverline ||
            hasLineThrough ||
            hasRotation ||
            hasLetterSpacing ||
            hasLineHeight ||
            hasLang ||
            hasSpace ||
            hasEnclosure;
        }
        
        std::ostream& WordsAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, justify, "justify", hasJustify );
                streamAttribute( os, defaultX, "default-x", hasDefaultX );
                streamAttribute( os, defaultY, "default-y", hasDefaultY );
                streamAttribute( os, relativeX, "relative-x", hasRelativeX );
                streamAttribute( os, relativeY, "relative-y", hasRelativeY );
                streamAttribute( os, fontFamily, "font-family", hasFontFamily );
                streamAttribute( os, fontStyle, "font-style", hasFontStyle );
                streamAttribute( os, fontSize, "font-size", hasFontSize );
                streamAttribute( os, fontWeight, "font-weight", hasFontWeight );
                streamAttribute( os, halign, "halign", hasHalign );
                streamAttribute( os, underline, "underline", hasUnderline );
                streamAttribute( os, overline, "overline", hasOverline );
                streamAttribute( os, lineThrough, "line-through", hasLineThrough );
                streamAttribute( os, rotation, "rotation", hasRotation );
                streamAttribute( os, letterSpacing, "letter-spacing", hasLetterSpacing );
                streamAttribute( os, lineHeight, "line-height", hasLineHeight );
                streamAttribute( os, lang, "lang", hasLang );
                streamAttribute( os, space, "space", hasSpace );
                streamAttribute( os, enclosure, "enclosure", hasEnclosure );
            }
            return os;
        }
        
        Words::Words()
        :myValue()
        ,myAttributes( std::make_shared<WordsAttributes>() )
        {}
        Words::Words( const types::XsString& value )
        :myValue( value )
        ,myAttributes( std::make_shared<WordsAttributes>() )
        {}
        bool Words::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& Words::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& Words::streamName( std::ostream& os ) const
        {
            os << "words";
            return os;
        }
        std::ostream& Words::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        WordsAttributesPtr Words::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void Words::setAttributes( const WordsAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::XsString Words::getValue() const
        {
            return myValue;
        }
        void Words::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        
        
        /**************** PrincipalVoice ****************/
        PrincipalVoiceAttributes::PrincipalVoiceAttributes()
        :type( types::StartStop::start )
        ,symbol( types::PrincipalVoiceSymbol::none )
        ,defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
        ,fontWeight( types::FontWeight::normal )
        ,halign()
        ,hasType( true )
        ,hasSymbol( true )
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        ,hasHalign( false )
        {}
        
        bool PrincipalVoiceAttributes::hasValues() const
        {
            return hasType ||
            hasSymbol ||
            hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight ||
            hasHalign;
        }
        
        std::ostream& PrincipalVoiceAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, type, "type", hasType );
                streamAttribute( os, symbol, "symbol", hasSymbol );
                streamAttribute( os, defaultX, "default-x", hasDefaultX );
                streamAttribute( os, defaultY, "default-y", hasDefaultY );
                streamAttribute( os, relativeX, "relative-x", hasRelativeX );
                streamAttribute( os, relativeY, "relative-y", hasRelativeY );
                streamAttribute( os, fontFamily, "font-family", hasFontFamily );
                streamAttribute( os, fontStyle, "font-style", hasFontStyle );
                streamAttribute( os, fontSize, "font-size", hasFontSize );
                streamAttribute( os, fontWeight, "font-weight", hasFontWeight );
                streamAttribute( os, halign, "halign", hasHalign );
            }
            return os;
        }
        
        PrincipalVoice::PrincipalVoice()
        :myValue()
        ,myAttributes( std::make_shared<PrincipalVoiceAttributes>() )
        {}
        PrincipalVoice::PrincipalVoice( const types::XsString& value )
        :myValue( value )
        ,myAttributes( std::make_shared<PrincipalVoiceAttributes>() )
        {}
        bool PrincipalVoice::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& PrincipalVoice::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& PrincipalVoice::streamName( std::ostream& os ) const
        {
            os << "principal-voice";
            return os;
        }
        std::ostream& PrincipalVoice::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        PrincipalVoiceAttributesPtr PrincipalVoice::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void PrincipalVoice::setAttributes( const PrincipalVoiceAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::XsString PrincipalVoice::getValue() const
        {
            return myValue;
        }
        void PrincipalVoice::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        
        
        /**************** OtherDirection ****************/
        OtherDirectionAttributes::OtherDirectionAttributes()
        :printObject()
        ,defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
        ,fontWeight( types::FontWeight::normal )
        ,halign()
        ,hasPrintObject( false )
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        ,hasHalign( false )
        {}
        
        bool OtherDirectionAttributes::hasValues() const
        {
            return hasPrintObject ||
            hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight ||
            hasHalign;
        }
        
        std::ostream& OtherDirectionAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, printObject, "print-object", hasPrintObject );
                streamAttribute( os, defaultX, "default-x", hasDefaultX );
                streamAttribute( os, defaultY, "default-y", hasDefaultY );
                streamAttribute( os, relativeX, "relative-x", hasRelativeX );
                streamAttribute( os, relativeY, "relative-y", hasRelativeY );
                streamAttribute( os, fontFamily, "font-family", hasFontFamily );
                streamAttribute( os, fontStyle, "font-style", hasFontStyle );
                streamAttribute( os, fontSize, "font-size", hasFontSize );
                streamAttribute( os, fontWeight, "font-weight", hasFontWeight );
                streamAttribute( os, halign, "halign", hasHalign );
            }
            return os;
        }
        
        OtherDirection::OtherDirection()
        :myValue()
        ,myAttributes( std::make_shared<OtherDirectionAttributes>() )
        {}
        OtherDirection::OtherDirection( const types::XsString& value )
        :myValue( value )
        ,myAttributes( std::make_shared<OtherDirectionAttributes>() )
        {}
        bool OtherDirection::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& OtherDirection::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& OtherDirection::streamName( std::ostream& os ) const
        {
            os << "other-direction";
            return os;
        }
        std::ostream& OtherDirection::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        OtherDirectionAttributesPtr OtherDirection::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void OtherDirection::setAttributes( const OtherDirectionAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::XsString OtherDirection::getValue() const
        {
            return myValue;
        }
        void OtherDirection::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        
        
        /**************** FirstFret ****************/
        FirstFretAttributes::FirstFretAttributes()
        :text()
        ,location()
        ,hasText( false )
        ,hasLocation( false )
        {}
        
        bool FirstFretAttributes::hasValues() const
        {
            return hasText ||
            hasLocation;
        }
        
        std::ostream& FirstFretAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, text, "text", hasText );
                streamAttribute( os, location, "location", hasLocation );
            }
            return os;
        }
        
        FirstFret::FirstFret()
        :myValue()
        ,myAttributes( std::make_shared<FirstFretAttributes>() )
        {}
        FirstFret::FirstFret( const types::PositiveInteger& value )
        :myValue( value )
        ,myAttributes( std::make_shared<FirstFretAttributes>() )
        {}
        bool FirstFret::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& FirstFret::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& FirstFret::streamName( std::ostream& os ) const
        {
            os << "first-fret";
            return os;
        }
        std::ostream& FirstFret::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        FirstFretAttributesPtr FirstFret::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void FirstFret::setAttributes( const FirstFretAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::PositiveInteger FirstFret::getValue() const
        {
            return myValue;
        }
        void FirstFret::setValue( const types::PositiveInteger& value )
        {
            myValue = value;
        }
        
        
        /**************** Fret ****************/
        FretAttributes::FretAttributes()
        :fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
        ,fontWeight( types::FontWeight::normal )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        {}
        
        bool FretAttributes::hasValues() const
        {
            return hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight;
        }
        
        std::ostream& FretAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, fontFamily, "font-family", hasFontFamily );
                streamAttribute( os, fontStyle, "font-style", hasFontStyle );
                streamAttribute( os, fontSize, "font-size", hasFontSize );
                streamAttribute( os, fontWeight, "font-weight", hasFontWeight );
            }
            return os;
        }
        
        Fret::Fret()
        :myValue()
        ,myAttributes( std::make_shared<FretAttributes>() )
        {}
        Fret::Fret( const types::NonNegativeInteger& value )
        :myValue( value )
        ,myAttributes( std::make_shared<FretAttributes>() )
        {}
        bool Fret::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& Fret::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& Fret::streamName( std::ostream& os ) const
        {
            os << "fret";
            return os;
        }
        std::ostream& Fret::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        FretAttributesPtr Fret::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void Fret::setAttributes( const FretAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::NonNegativeInteger Fret::getValue() const
        {
            return myValue;
        }
        void Fret::setValue( const types::NonNegativeInteger& value )
        {
            myValue = value;
        }
        
        
        /**************** Fingering ****************/
        FingeringAttributes::FingeringAttributes()
        :substitution( types::YesNo::no )
        ,alternate( types::YesNo::no )
        ,defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
        ,fontWeight( types::FontWeight::normal )
        ,placement()
        ,hasSubstitution( false )
        ,hasAlternate( false )
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        ,hasPlacement( false )
        {}
        
        bool FingeringAttributes::hasValues() const
        {
            return hasSubstitution ||
            hasAlternate ||
            hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight ||
            hasPlacement;
        }
        
        std::ostream& FingeringAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, substitution, "substitution", hasSubstitution );
                streamAttribute( os, alternate, "alternate", hasAlternate );
                streamAttribute( os, defaultX, "default-x", hasDefaultX );
                streamAttribute( os, defaultY, "default-y", hasDefaultY );
                streamAttribute( os, relativeX, "relative-x", hasRelativeX );
                streamAttribute( os, relativeY, "relative-y", hasRelativeY );
                streamAttribute( os, fontFamily, "font-family", hasFontFamily );
                streamAttribute( os, fontStyle, "font-style", hasFontStyle );
                streamAttribute( os, fontSize, "font-size", hasFontSize );
                streamAttribute( os, fontWeight, "font-weight", hasFontWeight );
                streamAttribute( os, placement, "placement", hasPlacement );
            }
            return os;
        }
        
        Fingering::Fingering()
        :myValue()
        ,myAttributes( std::make_shared<FingeringAttributes>() )
        {}
        Fingering::Fingering( const types::XsString& value )
        :myValue( value )
        ,myAttributes( std::make_shared<FingeringAttributes>() )
        {}
        bool Fingering::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& Fingering::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& Fingering::streamName( std::ostream& os ) const
        {
            os << "fingering";
            return os;
        }
        std::ostream& Fingering::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        FingeringAttributesPtr Fingering::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void Fingering::setAttributes( const FingeringAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::XsString Fingering::getValue() const
        {
            return myValue;
        }
        void Fingering::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        
        
        /**************** Feature ****************/
        FeatureAttributes::FeatureAttributes()
        :type()
        ,hasType( false )
        {}
        
        bool FeatureAttributes::hasValues() const
        {
            return hasType;
        }
        
        std::ostream& FeatureAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, type, "type", hasType );
            }
            return os;
        }
        
        Feature::Feature()
        :myValue()
        ,myAttributes( std::make_shared<FeatureAttributes>() )
        {}
        Feature::Feature( const types::XsString& value )
        :myValue( value )
        ,myAttributes( std::make_shared<FeatureAttributes>() )
        {}
        bool Feature::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& Feature::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& Feature::streamName( std::ostream& os ) const
        {
            os << "feature";
            return os;
        }
        std::ostream& Feature::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        FeatureAttributesPtr Feature::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void Feature::setAttributes( const FeatureAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::XsString Feature::getValue() const
        {
            return myValue;
        }
        void Feature::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        
        
        /**************** Offset ****************/
//        OffsetAttributes::OffsetAttributes()
//        :sound()
//        ,hasSound( false )
//        {}
//        
//        bool OffsetAttributes::hasValues() const
//        {
//            return hasSound;
//        }
//        
//        std::ostream& OffsetAttributes::toStream( std::ostream& os ) const
//        {
//            if ( hasValues() )
//            {
//                streamAttribute( os, sound, "sound", hasSound );
//            }
//            return os;
//        }
//        
//        Offset::Offset()
//        :myValue()
//        ,myAttributes( std::make_shared<OffsetAttributes>() )
//        {}
//        Offset::Offset( const types::DivisionsValue& value )
//        :myValue( value )
//        ,myAttributes( std::make_shared<OffsetAttributes>() )
//        {}
//        bool Offset::hasAttributes() const
//        {
//            return myAttributes->hasValues();
//        }
//        std::ostream& Offset::streamAttributes( std::ostream& os ) const
//        {
//            if ( myAttributes )
//            {
//                myAttributes->toStream( os );
//            }
//            return os;
//        }
//        std::ostream& Offset::streamName( std::ostream& os ) const
//        {
//            os << "offset";
//            return os;
//        }
//        std::ostream& Offset::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
//        {
//            isOneLineOnly = true;
//            os << myValue;
//            return os;
//        }
//        OffsetAttributesPtr Offset::getAttributes() const
//        {
//            return myAttributes;
//        }
//        /* if value.get()==nullptr then this is a no-op
//         i.e. this function guards against setting Attributes to nullptr */
//        void Offset::setAttributes( const OffsetAttributesPtr& value )
//        {
//            if ( value )
//            {
//                myAttributes = value;
//            }
//        }
//        types::DivisionsValue Offset::getValue() const
//        {
//            return myValue;
//        }
//        void Offset::setValue( const types::DivisionsValue& value )
//        {
//            myValue = value;
//        }
        
        
        /**************** PerMinute ****************/
        PerMinuteAttributes::PerMinuteAttributes()
        :fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
        ,fontWeight( types::FontWeight::normal )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        {}
        
        bool PerMinuteAttributes::hasValues() const
        {
            return hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight;
        }
        
        std::ostream& PerMinuteAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, fontFamily, "font-family", hasFontFamily );
                streamAttribute( os, fontStyle, "font-style", hasFontStyle );
                streamAttribute( os, fontSize, "font-size", hasFontSize );
                streamAttribute( os, fontWeight, "font-weight", hasFontWeight );
            }
            return os;
        }
        
        PerMinute::PerMinute()
        :myValue()
        ,myAttributes( std::make_shared<PerMinuteAttributes>() )
        {}
        PerMinute::PerMinute( const types::XsString& value )
        :myValue( value )
        ,myAttributes( std::make_shared<PerMinuteAttributes>() )
        {}
        bool PerMinute::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& PerMinute::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& PerMinute::streamName( std::ostream& os ) const
        {
            os << "per-minute";
            return os;
        }
        std::ostream& PerMinute::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        PerMinuteAttributesPtr PerMinute::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void PerMinute::setAttributes( const PerMinuteAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::XsString PerMinute::getValue() const
        {
            return myValue;
        }
        void PerMinute::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        
        
        /**************** MetronomeBeam ****************/
        MetronomeBeamAttributes::MetronomeBeamAttributes()
        :number( 1 )
        ,hasNumber( false )
        {}
        
        bool MetronomeBeamAttributes::hasValues() const
        {
            return hasNumber;
        }
        
        std::ostream& MetronomeBeamAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, number, "number", hasNumber );
            }
            return os;
        }
        
        MetronomeBeam::MetronomeBeam()
        :myValue( types::BeamValue::begin )
        ,myAttributes( std::make_shared<MetronomeBeamAttributes>() )
        {}
        MetronomeBeam::MetronomeBeam( const types::BeamValue& value )
        :myValue( value )
        ,myAttributes( std::make_shared<MetronomeBeamAttributes>() )
        {}
        bool MetronomeBeam::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& MetronomeBeam::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& MetronomeBeam::streamName( std::ostream& os ) const
        {
            os << "metronome-beam";
            return os;
        }
        std::ostream& MetronomeBeam::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        MetronomeBeamAttributesPtr MetronomeBeam::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void MetronomeBeam::setAttributes( const MetronomeBeamAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::BeamValue MetronomeBeam::getValue() const
        {
            return myValue;
        }
        void MetronomeBeam::setValue( const types::BeamValue& value )
        {
            myValue = value;
        }
        
        
        /**************** Beater ****************/
        BeaterAttributes::BeaterAttributes()
        :tip()
        ,hasTip( false )
        {}
        
        bool BeaterAttributes::hasValues() const
        {
            return hasTip;
        }
        
        std::ostream& BeaterAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, tip, "tip", hasTip );
            }
            return os;
        }
        
        Beater::Beater()
        :myValue( types::BeaterValue::snareStick )
        ,myAttributes( std::make_shared<BeaterAttributes>() )
        {}
        Beater::Beater( const types::BeaterValue& value )
        :myValue( value )
        ,myAttributes( std::make_shared<BeaterAttributes>() )
        {}
        bool Beater::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& Beater::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& Beater::streamName( std::ostream& os ) const
        {
            os << "beater";
            return os;
        }
        std::ostream& Beater::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        BeaterAttributesPtr Beater::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void Beater::setAttributes( const BeaterAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::BeaterValue Beater::getValue() const
        {
            return myValue;
        }
        void Beater::setValue( const types::BeaterValue& value )
        {
            myValue = value;
        }
        
        
        /**************** MeasureNumbering ****************/
        MeasureNumberingAttributes::MeasureNumberingAttributes()
        :defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
        ,fontWeight( types::FontWeight::normal )
        ,halign()
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        ,hasHalign( false )
        {}
        
        bool MeasureNumberingAttributes::hasValues() const
        {
            return hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight ||
            hasHalign;
        }
        
        std::ostream& MeasureNumberingAttributes::toStream( std::ostream& os ) const
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
                streamAttribute( os, halign, "halign", hasHalign );
            }
            return os;
        }
        
        MeasureNumbering::MeasureNumbering()
        :myValue( types::MeasureNumberingValue::none )
        ,myAttributes( std::make_shared<MeasureNumberingAttributes>() )
        {}
        MeasureNumbering::MeasureNumbering( const types::MeasureNumberingValue& value )
        :myValue( value )
        ,myAttributes( std::make_shared<MeasureNumberingAttributes>() )
        {}
        bool MeasureNumbering::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& MeasureNumbering::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& MeasureNumbering::streamName( std::ostream& os ) const
        {
            os << "measure-numbering";
            return os;
        }
        std::ostream& MeasureNumbering::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        MeasureNumberingAttributesPtr MeasureNumbering::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void MeasureNumbering::setAttributes( const MeasureNumberingAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::MeasureNumberingValue MeasureNumbering::getValue() const
        {
            return myValue;
        }
        void MeasureNumbering::setValue( const types::MeasureNumberingValue& value )
        {
            myValue = value;
        }
        
        
        /**************** RootStep ****************/
        RootStepAttributes::RootStepAttributes()
        :text()
        ,defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
        ,fontWeight( types::FontWeight::normal )
        ,hasText( false )
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        {}
        
        bool RootStepAttributes::hasValues() const
        {
            return hasText ||
            hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight;
        }
        
        std::ostream& RootStepAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, text, "text", hasText );
                streamAttribute( os, defaultX, "default-x", hasDefaultX );
                streamAttribute( os, defaultY, "default-y", hasDefaultY );
                streamAttribute( os, relativeX, "relative-x", hasRelativeX );
                streamAttribute( os, relativeY, "relative-y", hasRelativeY );
                streamAttribute( os, fontFamily, "font-family", hasFontFamily );
                streamAttribute( os, fontStyle, "font-style", hasFontStyle );
                streamAttribute( os, fontSize, "font-size", hasFontSize );
                streamAttribute( os, fontWeight, "font-weight", hasFontWeight );
            }
            return os;
        }
        
        RootStep::RootStep()
        :myValue( types::StepEnum::a )
        ,myAttributes( std::make_shared<RootStepAttributes>() )
        {}
        RootStep::RootStep( const types::StepEnum& value )
        :myValue( value )
        ,myAttributes( std::make_shared<RootStepAttributes>() )
        {}
        bool RootStep::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& RootStep::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& RootStep::streamName( std::ostream& os ) const
        {
            os << "root-step";
            return os;
        }
        std::ostream& RootStep::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        RootStepAttributesPtr RootStep::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void RootStep::setAttributes( const RootStepAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::StepEnum RootStep::getValue() const
        {
            return myValue;
        }
        void RootStep::setValue( const types::StepEnum& value )
        {
            myValue = value;
        }
        
        
        /**************** RootAlter ****************/
        RootAlterAttributes::RootAlterAttributes()
        :printObject()
        ,defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
        ,fontWeight( types::FontWeight::normal )
        ,location()
        ,hasPrintObject( false )
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        ,hasLocation( false )
        {}
        
        bool RootAlterAttributes::hasValues() const
        {
            return hasPrintObject ||
            hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight ||
            hasLocation;
        }
        
        std::ostream& RootAlterAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, printObject, "print-object", hasPrintObject );
                streamAttribute( os, defaultX, "default-x", hasDefaultX );
                streamAttribute( os, defaultY, "default-y", hasDefaultY );
                streamAttribute( os, relativeX, "relative-x", hasRelativeX );
                streamAttribute( os, relativeY, "relative-y", hasRelativeY );
                streamAttribute( os, fontFamily, "font-family", hasFontFamily );
                streamAttribute( os, fontStyle, "font-style", hasFontStyle );
                streamAttribute( os, fontSize, "font-size", hasFontSize );
                streamAttribute( os, fontWeight, "font-weight", hasFontWeight );
                streamAttribute( os, location, "location", hasLocation );
            }
            return os;
        }
        
        RootAlter::RootAlter()
        :myValue()
        ,myAttributes( std::make_shared<RootAlterAttributes>() )
        {}
        RootAlter::RootAlter( const types::Semitones& value )
        :myValue( value )
        ,myAttributes( std::make_shared<RootAlterAttributes>() )
        {}
        bool RootAlter::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& RootAlter::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& RootAlter::streamName( std::ostream& os ) const
        {
            os << "root-alter";
            return os;
        }
        std::ostream& RootAlter::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        RootAlterAttributesPtr RootAlter::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void RootAlter::setAttributes( const RootAlterAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::Semitones RootAlter::getValue() const
        {
            return myValue;
        }
        void RootAlter::setValue( const types::Semitones& value )
        {
            myValue = value;
        }
        
        
        /**************** MidiDevice ****************/
        MidiDeviceAttributes::MidiDeviceAttributes()
        :port()
        ,id()
        ,hasPort( false )
        ,hasId( false )
        {}
        
        bool MidiDeviceAttributes::hasValues() const
        {
            return hasPort ||
            hasId;
        }
        
        std::ostream& MidiDeviceAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, port, "port", hasPort );
                streamAttribute( os, id, "id", hasId );
            }
            return os;
        }
        
        MidiDevice::MidiDevice()
        :myValue()
        ,myAttributes( std::make_shared<MidiDeviceAttributes>() )
        {}
        MidiDevice::MidiDevice( const types::XsString& value )
        :myValue( value )
        ,myAttributes( std::make_shared<MidiDeviceAttributes>() )
        {}
        bool MidiDevice::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& MidiDevice::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& MidiDevice::streamName( std::ostream& os ) const
        {
            os << "midi-device";
            return os;
        }
        std::ostream& MidiDevice::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        MidiDeviceAttributesPtr MidiDevice::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void MidiDevice::setAttributes( const MidiDeviceAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::XsString MidiDevice::getValue() const
        {
            return myValue;
        }
        void MidiDevice::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        
        
        /**************** Offset ****************/
//        OffsetAttributes::OffsetAttributes()
//        :sound()
//        ,hasSound( false )
//        {}
//        
//        bool OffsetAttributes::hasValues() const
//        {
//            return hasSound;
//        }
//        
//        std::ostream& OffsetAttributes::toStream( std::ostream& os ) const
//        {
//            if ( hasValues() )
//            {
//                streamAttribute( os, sound, "sound", hasSound );
//            }
//            return os;
//        }
//        
//        Offset::Offset()
//        :myValue()
//        ,myAttributes( std::make_shared<OffsetAttributes>() )
//        {}
//        Offset::Offset( const types::DivisionsValue& value )
//        :myValue( value )
//        ,myAttributes( std::make_shared<OffsetAttributes>() )
//        {}
//        bool Offset::hasAttributes() const
//        {
//            return myAttributes->hasValues();
//        }
//        std::ostream& Offset::streamAttributes( std::ostream& os ) const
//        {
//            if ( myAttributes )
//            {
//                myAttributes->toStream( os );
//            }
//            return os;
//        }
//        std::ostream& Offset::streamName( std::ostream& os ) const
//        {
//            os << "offset";
//            return os;
//        }
//        std::ostream& Offset::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
//        {
//            isOneLineOnly = true;
//            os << myValue;
//            return os;
//        }
//        OffsetAttributesPtr Offset::getAttributes() const
//        {
//            return myAttributes;
//        }
//        /* if value.get()==nullptr then this is a no-op
//         i.e. this function guards against setting Attributes to nullptr */
//        void Offset::setAttributes( const OffsetAttributesPtr& value )
//        {
//            if ( value )
//            {
//                myAttributes = value;
//            }
//        }
//        types::DivisionsValue Offset::getValue() const
//        {
//            return myValue;
//        }
//        void Offset::setValue( const types::DivisionsValue& value )
//        {
//            myValue = value;
//        }
        
        
        /**************** Encoder ****************/
        EncoderAttributes::EncoderAttributes()
        :type()
        ,hasType( false )
        {}
        
        bool EncoderAttributes::hasValues() const
        {
            return hasType;
        }
        
        std::ostream& EncoderAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, type, "type", hasType );
            }
            return os;
        }
        
        Encoder::Encoder()
        :myValue()
        ,myAttributes( std::make_shared<EncoderAttributes>() )
        {}
        Encoder::Encoder( const types::XsString& value )
        :myValue( value )
        ,myAttributes( std::make_shared<EncoderAttributes>() )
        {}
        bool Encoder::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& Encoder::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& Encoder::streamName( std::ostream& os ) const
        {
            os << "encoder";
            return os;
        }
        std::ostream& Encoder::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        EncoderAttributesPtr Encoder::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void Encoder::setAttributes( const EncoderAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::XsString Encoder::getValue() const
        {
            return myValue;
        }
        void Encoder::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        
        
        /**************** Creator ****************/
        CreatorAttributes::CreatorAttributes()
        :type()
        ,hasType( false )
        {}
        
        bool CreatorAttributes::hasValues() const
        {
            return hasType;
        }
        
        std::ostream& CreatorAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, type, "type", hasType );
            }
            return os;
        }
        
        Creator::Creator()
        :myValue()
        ,myAttributes( std::make_shared<CreatorAttributes>() )
        {}
        Creator::Creator( const types::XsString& value )
        :myValue( value )
        ,myAttributes( std::make_shared<CreatorAttributes>() )
        {}
        bool Creator::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& Creator::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& Creator::streamName( std::ostream& os ) const
        {
            os << "creator";
            return os;
        }
        std::ostream& Creator::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        CreatorAttributesPtr Creator::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void Creator::setAttributes( const CreatorAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::XsString Creator::getValue() const
        {
            return myValue;
        }
        void Creator::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        
        
        /**************** Rights ****************/
        RightsAttributes::RightsAttributes()
        :type()
        ,hasType( false )
        {}
        
        bool RightsAttributes::hasValues() const
        {
            return hasType;
        }
        
        std::ostream& RightsAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, type, "type", hasType );
            }
            return os;
        }
        
        Rights::Rights()
        :myValue()
        ,myAttributes( std::make_shared<RightsAttributes>() )
        {}
        Rights::Rights( const types::XsString& value )
        :myValue( value )
        ,myAttributes( std::make_shared<RightsAttributes>() )
        {}
        bool Rights::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& Rights::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& Rights::streamName( std::ostream& os ) const
        {
            os << "rights";
            return os;
        }
        std::ostream& Rights::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        RightsAttributesPtr Rights::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void Rights::setAttributes( const RightsAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::XsString Rights::getValue() const
        {
            return myValue;
        }
        void Rights::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        
        
        /**************** Relation ****************/
        RelationAttributes::RelationAttributes()
        :type()
        ,hasType( false )
        {}
        
        bool RelationAttributes::hasValues() const
        {
            return hasType;
        }
        
        std::ostream& RelationAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, type, "type", hasType );
            }
            return os;
        }
        
        Relation::Relation()
        :myValue()
        ,myAttributes( std::make_shared<RelationAttributes>() )
        {}
        Relation::Relation( const types::XsString& value )
        :myValue( value )
        ,myAttributes( std::make_shared<RelationAttributes>() )
        {}
        bool Relation::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& Relation::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& Relation::streamName( std::ostream& os ) const
        {
            os << "relation";
            return os;
        }
        std::ostream& Relation::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        RelationAttributesPtr Relation::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void Relation::setAttributes( const RelationAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::XsString Relation::getValue() const
        {
            return myValue;
        }
        void Relation::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        
        
        /**************** MiscellaneousField ****************/
        MiscellaneousFieldAttributes::MiscellaneousFieldAttributes()
        :name()
        ,hasName( true )
        {}
        
        bool MiscellaneousFieldAttributes::hasValues() const
        {
            return hasName;
        }
        
        std::ostream& MiscellaneousFieldAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, name, "name", hasName );
            }
            return os;
        }
        
        MiscellaneousField::MiscellaneousField()
        :myValue()
        ,myAttributes( std::make_shared<MiscellaneousFieldAttributes>() )
        {}
        MiscellaneousField::MiscellaneousField( const types::XsString& value )
        :myValue( value )
        ,myAttributes( std::make_shared<MiscellaneousFieldAttributes>() )
        {}
        bool MiscellaneousField::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& MiscellaneousField::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& MiscellaneousField::streamName( std::ostream& os ) const
        {
            os << "miscellaneous-field";
            return os;
        }
        std::ostream& MiscellaneousField::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        MiscellaneousFieldAttributesPtr MiscellaneousField::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void MiscellaneousField::setAttributes( const MiscellaneousFieldAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::XsString MiscellaneousField::getValue() const
        {
            return myValue;
        }
        void MiscellaneousField::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        
        
        /**************** LineWidth ****************/
        LineWidthAttributes::LineWidthAttributes()
        :type( types::LineWidthTypeEnum::beam )
        ,hasType( true )
        {}
        
        bool LineWidthAttributes::hasValues() const
        {
            return hasType;
        }
        
        std::ostream& LineWidthAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, type, "type", hasType );
            }
            return os;
        }
        
        LineWidth::LineWidth()
        :myValue()
        ,myAttributes( std::make_shared<LineWidthAttributes>() )
        {}
        LineWidth::LineWidth( const types::TenthsValue& value )
        :myValue( value )
        ,myAttributes( std::make_shared<LineWidthAttributes>() )
        {}
        bool LineWidth::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& LineWidth::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& LineWidth::streamName( std::ostream& os ) const
        {
            os << "line-width";
            return os;
        }
        std::ostream& LineWidth::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        LineWidthAttributesPtr LineWidth::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void LineWidth::setAttributes( const LineWidthAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::TenthsValue LineWidth::getValue() const
        {
            return myValue;
        }
        void LineWidth::setValue( const types::TenthsValue& value )
        {
            myValue = value;
        }
        
        
        /**************** NoteSize ****************/
        NoteSizeAttributes::NoteSizeAttributes()
        :type( types::NoteSizeType::large )
        ,hasType( true )
        {}
        
        bool NoteSizeAttributes::hasValues() const
        {
            return hasType;
        }
        
        std::ostream& NoteSizeAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, type, "type", hasType );
            }
            return os;
        }
        
        NoteSize::NoteSize()
        :myValue()
        ,myAttributes( std::make_shared<NoteSizeAttributes>() )
        {}
        NoteSize::NoteSize( const types::NonNegativeDecimal& value )
        :myValue( value )
        ,myAttributes( std::make_shared<NoteSizeAttributes>() )
        {}
        bool NoteSize::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& NoteSize::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& NoteSize::streamName( std::ostream& os ) const
        {
            os << "note-size";
            return os;
        }
        std::ostream& NoteSize::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        NoteSizeAttributesPtr NoteSize::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void NoteSize::setAttributes( const NoteSizeAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::NonNegativeDecimal NoteSize::getValue() const
        {
            return myValue;
        }
        void NoteSize::setValue( const types::NonNegativeDecimal& value )
        {
            myValue = value;
        }
        
        
        /**************** Distance ****************/
        DistanceAttributes::DistanceAttributes()
        :type()
        ,hasType( true )
        {}
        
        bool DistanceAttributes::hasValues() const
        {
            return hasType;
        }
        
        std::ostream& DistanceAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, type, "type", hasType );
            }
            return os;
        }
        
        Distance::Distance()
        :myValue()
        ,myAttributes( std::make_shared<DistanceAttributes>() )
        {}
        Distance::Distance( const types::TenthsValue& value )
        :myValue( value )
        ,myAttributes( std::make_shared<DistanceAttributes>() )
        {}
        bool Distance::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& Distance::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& Distance::streamName( std::ostream& os ) const
        {
            os << "distance";
            return os;
        }
        std::ostream& Distance::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        DistanceAttributesPtr Distance::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void Distance::setAttributes( const DistanceAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::TenthsValue Distance::getValue() const
        {
            return myValue;
        }
        void Distance::setValue( const types::TenthsValue& value )
        {
            myValue = value;
        }
        
        
        /**************** OtherAppearance ****************/
        OtherAppearanceAttributes::OtherAppearanceAttributes()
        :type( "undefined" )
        ,hasType( true )
        {}
        
        bool OtherAppearanceAttributes::hasValues() const
        {
            return hasType;
        }
        
        std::ostream& OtherAppearanceAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, type, "type", hasType );
            }
            return os;
        }
        
        OtherAppearance::OtherAppearance()
        :myValue()
        ,myAttributes( std::make_shared<OtherAppearanceAttributes>() )
        {}
        OtherAppearance::OtherAppearance( const types::XsString& value )
        :myValue( value )
        ,myAttributes( std::make_shared<OtherAppearanceAttributes>() )
        {}
        bool OtherAppearance::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& OtherAppearance::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& OtherAppearance::streamName( std::ostream& os ) const
        {
            os << "other-appearance";
            return os;
        }
        std::ostream& OtherAppearance::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        OtherAppearanceAttributesPtr OtherAppearance::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void OtherAppearance::setAttributes( const OtherAppearanceAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::XsString OtherAppearance::getValue() const
        {
            return myValue;
        }
        void OtherAppearance::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        
        
        /**************** BreathMark ****************/
        BreathMarkAttributes::BreathMarkAttributes()
        :defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
        ,fontWeight( types::FontWeight::normal )
        ,placement()
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        ,hasPlacement( false )
        {}
        
        bool BreathMarkAttributes::hasValues() const
        {
            return hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight ||
            hasPlacement;
        }
        
        std::ostream& BreathMarkAttributes::toStream( std::ostream& os ) const
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
                streamAttribute( os, placement, "placement", hasPlacement );
            }
            return os;
        }
        
        BreathMark::BreathMark()
        :myValue( types::BreathMarkValue::emptystring )
        ,myAttributes( std::make_shared<BreathMarkAttributes>() )
        {}
        BreathMark::BreathMark( const types::BreathMarkValue& value )
        :myValue( value )
        ,myAttributes( std::make_shared<BreathMarkAttributes>() )
        {}
        bool BreathMark::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& BreathMark::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& BreathMark::streamName( std::ostream& os ) const
        {
            os << "breath-mark";
            return os;
        }
        std::ostream& BreathMark::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        BreathMarkAttributesPtr BreathMark::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void BreathMark::setAttributes( const BreathMarkAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::BreathMarkValue BreathMark::getValue() const
        {
            return myValue;
        }
        void BreathMark::setValue( const types::BreathMarkValue& value )
        {
            myValue = value;
        }
        
        
        /**************** OtherArticulation ****************/
        OtherArticulationAttributes::OtherArticulationAttributes()
        :defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
        ,fontWeight( types::FontWeight::normal )
        ,placement()
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        ,hasPlacement( false )
        {}
        
        bool OtherArticulationAttributes::hasValues() const
        {
            return hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight ||
            hasPlacement;
        }
        
        std::ostream& OtherArticulationAttributes::toStream( std::ostream& os ) const
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
                streamAttribute( os, placement, "placement", hasPlacement );
            }
            return os;
        }
        
        OtherArticulation::OtherArticulation()
        :myValue()
        ,myAttributes( std::make_shared<OtherArticulationAttributes>() )
        {}
        OtherArticulation::OtherArticulation( const types::XsString& value )
        :myValue( value )
        ,myAttributes( std::make_shared<OtherArticulationAttributes>() )
        {}
        bool OtherArticulation::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& OtherArticulation::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& OtherArticulation::streamName( std::ostream& os ) const
        {
            os << "other-articulation";
            return os;
        }
        std::ostream& OtherArticulation::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        OtherArticulationAttributesPtr OtherArticulation::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void OtherArticulation::setAttributes( const OtherArticulationAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::XsString OtherArticulation::getValue() const
        {
            return myValue;
        }
        void OtherArticulation::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        
        
        /**************** WithBar ****************/
        WithBarAttributes::WithBarAttributes()
        :defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
        ,fontWeight( types::FontWeight::normal )
        ,placement()
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        ,hasPlacement( false )
        {}
        
        bool WithBarAttributes::hasValues() const
        {
            return hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight ||
            hasPlacement;
        }
        
        std::ostream& WithBarAttributes::toStream( std::ostream& os ) const
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
                streamAttribute( os, placement, "placement", hasPlacement );
            }
            return os;
        }
        
        WithBar::WithBar()
        :myValue()
        ,myAttributes( std::make_shared<WithBarAttributes>() )
        {}
        WithBar::WithBar( const types::XsString& value )
        :myValue( value )
        ,myAttributes( std::make_shared<WithBarAttributes>() )
        {}
        bool WithBar::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& WithBar::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& WithBar::streamName( std::ostream& os ) const
        {
            os << "with-bar";
            return os;
        }
        std::ostream& WithBar::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        WithBarAttributesPtr WithBar::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void WithBar::setAttributes( const WithBarAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::XsString WithBar::getValue() const
        {
            return myValue;
        }
        void WithBar::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        
        
        /**************** Prefix ****************/
        PrefixAttributes::PrefixAttributes()
        :defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
        ,fontWeight( types::FontWeight::normal )
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        {}
        
        bool PrefixAttributes::hasValues() const
        {
            return hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight;
        }
        
        std::ostream& PrefixAttributes::toStream( std::ostream& os ) const
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
            }
            return os;
        }
        
        Prefix::Prefix()
        :myValue()
        ,myAttributes( std::make_shared<PrefixAttributes>() )
        {}
        Prefix::Prefix( const types::XsString& value )
        :myValue( value )
        ,myAttributes( std::make_shared<PrefixAttributes>() )
        {}
        bool Prefix::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& Prefix::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& Prefix::streamName( std::ostream& os ) const
        {
            os << "prefix";
            return os;
        }
        std::ostream& Prefix::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        PrefixAttributesPtr Prefix::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void Prefix::setAttributes( const PrefixAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::XsString Prefix::getValue() const
        {
            return myValue;
        }
        void Prefix::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        
        
        /**************** FigureNumber ****************/
        FigureNumberAttributes::FigureNumberAttributes()
        :defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
        ,fontWeight( types::FontWeight::normal )
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        {}
        
        bool FigureNumberAttributes::hasValues() const
        {
            return hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight;
        }
        
        std::ostream& FigureNumberAttributes::toStream( std::ostream& os ) const
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
            }
            return os;
        }
        
        FigureNumber::FigureNumber()
        :myValue()
        ,myAttributes( std::make_shared<FigureNumberAttributes>() )
        {}
        FigureNumber::FigureNumber( const types::XsString& value )
        :myValue( value )
        ,myAttributes( std::make_shared<FigureNumberAttributes>() )
        {}
        bool FigureNumber::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& FigureNumber::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& FigureNumber::streamName( std::ostream& os ) const
        {
            os << "figure-number";
            return os;
        }
        std::ostream& FigureNumber::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        FigureNumberAttributesPtr FigureNumber::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void FigureNumber::setAttributes( const FigureNumberAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::XsString FigureNumber::getValue() const
        {
            return myValue;
        }
        void FigureNumber::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        
        
        /**************** Suffix ****************/
        SuffixAttributes::SuffixAttributes()
        :defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
        ,fontWeight( types::FontWeight::normal )
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        {}
        
        bool SuffixAttributes::hasValues() const
        {
            return hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight;
        }
        
        std::ostream& SuffixAttributes::toStream( std::ostream& os ) const
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
            }
            return os;
        }
        
        Suffix::Suffix()
        :myValue()
        ,myAttributes( std::make_shared<SuffixAttributes>() )
        {}
        Suffix::Suffix( const types::XsString& value )
        :myValue( value )
        ,myAttributes( std::make_shared<SuffixAttributes>() )
        {}
        bool Suffix::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& Suffix::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& Suffix::streamName( std::ostream& os ) const
        {
            os << "suffix";
            return os;
        }
        std::ostream& Suffix::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        SuffixAttributesPtr Suffix::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void Suffix::setAttributes( const SuffixAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::XsString Suffix::getValue() const
        {
            return myValue;
        }
        void Suffix::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        
        
        /**************** HoleClosed ****************/
        HoleClosedAttributes::HoleClosedAttributes()
        :location( types::HoleClosedLocation::top )
        ,hasLocation( false )
        {}
        
        bool HoleClosedAttributes::hasValues() const
        {
            return hasLocation;
        }
        
        std::ostream& HoleClosedAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, location, "location", hasLocation );
            }
            return os;
        }
        
        HoleClosed::HoleClosed()
        :myValue( types::HoleClosedValue::no )
        ,myAttributes( std::make_shared<HoleClosedAttributes>() )
        {}
        HoleClosed::HoleClosed( const types::HoleClosedValue& value )
        :myValue( value )
        ,myAttributes( std::make_shared<HoleClosedAttributes>() )
        {}
        bool HoleClosed::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& HoleClosed::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& HoleClosed::streamName( std::ostream& os ) const
        {
            os << "hole-closed";
            return os;
        }
        std::ostream& HoleClosed::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        HoleClosedAttributesPtr HoleClosed::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void HoleClosed::setAttributes( const HoleClosedAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::HoleClosedValue HoleClosed::getValue() const
        {
            return myValue;
        }
        void HoleClosed::setValue( const types::HoleClosedValue& value )
        {
            myValue = value;
        }
        
        
        /**************** Text ****************/
        TextAttributes::TextAttributes()
        :fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
        ,fontWeight( types::FontWeight::normal )
        ,underline()
        ,overline()
        ,lineThrough()
        ,rotation()
        ,letterSpacing()
        ,lang( types::XmlLang{ "it" } )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        ,hasUnderline( false )
        ,hasOverline( false )
        ,hasLineThrough( false )
        ,hasRotation( false )
        ,hasLetterSpacing( false )
        ,hasLang( false )
        {}
        
        bool TextAttributes::hasValues() const
        {
            return hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight ||
            hasUnderline ||
            hasOverline ||
            hasLineThrough ||
            hasRotation ||
            hasLetterSpacing ||
            hasLang;
        }
        
        std::ostream& TextAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, fontFamily, "font-family", hasFontFamily );
                streamAttribute( os, fontStyle, "font-style", hasFontStyle );
                streamAttribute( os, fontSize, "font-size", hasFontSize );
                streamAttribute( os, fontWeight, "font-weight", hasFontWeight );
                streamAttribute( os, underline, "underline", hasUnderline );
                streamAttribute( os, overline, "overline", hasOverline );
                streamAttribute( os, lineThrough, "line-through", hasLineThrough );
                streamAttribute( os, rotation, "rotation", hasRotation );
                streamAttribute( os, letterSpacing, "letter-spacing", hasLetterSpacing );
                streamAttribute( os, lang, "lang", hasLang );
            }
            return os;
        }
        
        Text::Text()
        :myValue()
        ,myAttributes( std::make_shared<TextAttributes>() )
        {}
        Text::Text( const types::XsString& value )
        :myValue( value )
        ,myAttributes( std::make_shared<TextAttributes>() )
        {}
        bool Text::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& Text::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& Text::streamName( std::ostream& os ) const
        {
            os << "text";
            return os;
        }
        std::ostream& Text::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        TextAttributesPtr Text::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void Text::setAttributes( const TextAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::XsString Text::getValue() const
        {
            return myValue;
        }
        void Text::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        
        
        /**************** Elision ****************/
        ElisionAttributes::ElisionAttributes()
        :fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
        ,fontWeight( types::FontWeight::normal )
        ,underline()
        ,overline()
        ,lineThrough()
        ,rotation()
        ,letterSpacing()
        ,lang( types::XmlLang{ "it" } )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        ,hasUnderline( false )
        ,hasOverline( false )
        ,hasLineThrough( false )
        ,hasRotation( false )
        ,hasLetterSpacing( false )
        ,hasLang( false )
        {}
        
        bool ElisionAttributes::hasValues() const
        {
            return hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight ||
            hasUnderline ||
            hasOverline ||
            hasLineThrough ||
            hasRotation ||
            hasLetterSpacing ||
            hasLang;
        }
        
        std::ostream& ElisionAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, fontFamily, "font-family", hasFontFamily );
                streamAttribute( os, fontStyle, "font-style", hasFontStyle );
                streamAttribute( os, fontSize, "font-size", hasFontSize );
                streamAttribute( os, fontWeight, "font-weight", hasFontWeight );
                streamAttribute( os, underline, "underline", hasUnderline );
                streamAttribute( os, overline, "overline", hasOverline );
                streamAttribute( os, lineThrough, "line-through", hasLineThrough );
                streamAttribute( os, rotation, "rotation", hasRotation );
                streamAttribute( os, letterSpacing, "letter-spacing", hasLetterSpacing );
                streamAttribute( os, lang, "lang", hasLang );
            }
            return os;
        }
        
        Elision::Elision()
        :myValue()
        ,myAttributes( std::make_shared<ElisionAttributes>() )
        {}
        Elision::Elision( const types::XsString& value )
        :myValue( value )
        ,myAttributes( std::make_shared<ElisionAttributes>() )
        {}
        bool Elision::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& Elision::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& Elision::streamName( std::ostream& os ) const
        {
            os << "elision";
            return os;
        }
        std::ostream& Elision::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        ElisionAttributesPtr Elision::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void Elision::setAttributes( const ElisionAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::XsString Elision::getValue() const
        {
            return myValue;
        }
        void Elision::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        
        
        /**************** Text ****************/
//        TextAttributes::TextAttributes()
//        :fontFamily()
//        ,fontStyle( types::FontStyle::normal )
//        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
//        ,fontWeight( types::FontWeight::normal )
//        ,underline()
//        ,overline()
//        ,lineThrough()
//        ,rotation()
//        ,letterSpacing()
//        ,lang( types::XmlLang{ "it" } )
//        ,hasFontFamily( false )
//        ,hasFontStyle( false )
//        ,hasFontSize( false )
//        ,hasFontWeight( false )
//        ,hasUnderline( false )
//        ,hasOverline( false )
//        ,hasLineThrough( false )
//        ,hasRotation( false )
//        ,hasLetterSpacing( false )
//        ,hasLang( false )
//        {}
//        
//        bool TextAttributes::hasValues() const
//        {
//            return hasFontFamily ||
//            hasFontStyle ||
//            hasFontSize ||
//            hasFontWeight ||
//            hasUnderline ||
//            hasOverline ||
//            hasLineThrough ||
//            hasRotation ||
//            hasLetterSpacing ||
//            hasLang;
//        }
//        
//        std::ostream& TextAttributes::toStream( std::ostream& os ) const
//        {
//            if ( hasValues() )
//            {
//                streamAttribute( os, fontFamily, "font-family", hasFontFamily );
//                streamAttribute( os, fontStyle, "font-style", hasFontStyle );
//                streamAttribute( os, fontSize, "font-size", hasFontSize );
//                streamAttribute( os, fontWeight, "font-weight", hasFontWeight );
//                streamAttribute( os, underline, "underline", hasUnderline );
//                streamAttribute( os, overline, "overline", hasOverline );
//                streamAttribute( os, lineThrough, "line-through", hasLineThrough );
//                streamAttribute( os, rotation, "rotation", hasRotation );
//                streamAttribute( os, letterSpacing, "letter-spacing", hasLetterSpacing );
//                streamAttribute( os, lang, "lang", hasLang );
//            }
//            return os;
//        }
//        
//        Text::Text()
//        :myValue()
//        ,myAttributes( std::make_shared<TextAttributes>() )
//        {}
//        Text::Text( const types::XsString& value )
//        :myValue( value )
//        ,myAttributes( std::make_shared<TextAttributes>() )
//        {}
//        bool Text::hasAttributes() const
//        {
//            return myAttributes->hasValues();
//        }
//        std::ostream& Text::streamAttributes( std::ostream& os ) const
//        {
//            if ( myAttributes )
//            {
//                myAttributes->toStream( os );
//            }
//            return os;
//        }
//        std::ostream& Text::streamName( std::ostream& os ) const
//        {
//            os << "text";
//            return os;
//        }
//        std::ostream& Text::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
//        {
//            isOneLineOnly = true;
//            os << myValue;
//            return os;
//        }
//        TextAttributesPtr Text::getAttributes() const
//        {
//            return myAttributes;
//        }
//        /* if value.get()==nullptr then this is a no-op
//         i.e. this function guards against setting Attributes to nullptr */
//        void Text::setAttributes( const TextAttributesPtr& value )
//        {
//            if ( value )
//            {
//                myAttributes = value;
//            }
//        }
//        types::XsString Text::getValue() const
//        {
//            return myValue;
//        }
//        void Text::setValue( const types::XsString& value )
//        {
//            myValue = value;
//        }
        
        
        /**************** Glissando ****************/
        GlissandoAttributes::GlissandoAttributes()
        :type( types::StartStop::start )
        ,number( 1 )
        ,dashLength()
        ,spaceLength()
        ,defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
        ,fontWeight( types::FontWeight::normal )
        ,hasType( true )
        ,hasNumber( false )
        ,hasDashLength( false )
        ,hasSpaceLength( false )
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        {}
        
        bool GlissandoAttributes::hasValues() const
        {
            return hasType ||
            hasNumber ||
            hasDashLength ||
            hasSpaceLength ||
            hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight;
        }
        
        std::ostream& GlissandoAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, type, "type", hasType );
                streamAttribute( os, number, "number", hasNumber );
                streamAttribute( os, dashLength, "dash-length", hasDashLength );
                streamAttribute( os, spaceLength, "space-length", hasSpaceLength );
                streamAttribute( os, defaultX, "default-x", hasDefaultX );
                streamAttribute( os, defaultY, "default-y", hasDefaultY );
                streamAttribute( os, relativeX, "relative-x", hasRelativeX );
                streamAttribute( os, relativeY, "relative-y", hasRelativeY );
                streamAttribute( os, fontFamily, "font-family", hasFontFamily );
                streamAttribute( os, fontStyle, "font-style", hasFontStyle );
                streamAttribute( os, fontSize, "font-size", hasFontSize );
                streamAttribute( os, fontWeight, "font-weight", hasFontWeight );
            }
            return os;
        }
        
        Glissando::Glissando()
        :myValue()
        ,myAttributes( std::make_shared<GlissandoAttributes>() )
        {}
        Glissando::Glissando( const types::XsString& value )
        :myValue( value )
        ,myAttributes( std::make_shared<GlissandoAttributes>() )
        {}
        bool Glissando::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& Glissando::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& Glissando::streamName( std::ostream& os ) const
        {
            os << "glissando";
            return os;
        }
        std::ostream& Glissando::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        GlissandoAttributesPtr Glissando::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void Glissando::setAttributes( const GlissandoAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::XsString Glissando::getValue() const
        {
            return myValue;
        }
        void Glissando::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        
        
        /**************** Slide ****************/
        SlideAttributes::SlideAttributes()
        :type( types::StartStop::start )
        ,number( 1 )
        ,dashLength()
        ,spaceLength()
        ,defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
        ,fontWeight( types::FontWeight::normal )
        ,accelerate()
        ,beats()
        ,firstBeat()
        ,lastBeat()
        ,hasType( true )
        ,hasNumber( false )
        ,hasDashLength( false )
        ,hasSpaceLength( false )
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        ,hasAccelerate( false )
        ,hasBeats( false )
        ,hasFirstBeat( false )
        ,hasLastBeat( false )
        {}
        
        bool SlideAttributes::hasValues() const
        {
            return hasType ||
            hasNumber ||
            hasDashLength ||
            hasSpaceLength ||
            hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight ||
            hasAccelerate ||
            hasBeats ||
            hasFirstBeat ||
            hasLastBeat;
        }
        
        std::ostream& SlideAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, type, "type", hasType );
                streamAttribute( os, number, "number", hasNumber );
                streamAttribute( os, dashLength, "dash-length", hasDashLength );
                streamAttribute( os, spaceLength, "space-length", hasSpaceLength );
                streamAttribute( os, defaultX, "default-x", hasDefaultX );
                streamAttribute( os, defaultY, "default-y", hasDefaultY );
                streamAttribute( os, relativeX, "relative-x", hasRelativeX );
                streamAttribute( os, relativeY, "relative-y", hasRelativeY );
                streamAttribute( os, fontFamily, "font-family", hasFontFamily );
                streamAttribute( os, fontStyle, "font-style", hasFontStyle );
                streamAttribute( os, fontSize, "font-size", hasFontSize );
                streamAttribute( os, fontWeight, "font-weight", hasFontWeight );
                streamAttribute( os, accelerate, "accelerate", hasAccelerate );
                streamAttribute( os, beats, "beats", hasBeats );
                streamAttribute( os, firstBeat, "first-beat", hasFirstBeat );
                streamAttribute( os, lastBeat, "last-beat", hasLastBeat );
            }
            return os;
        }
        
        Slide::Slide()
        :myValue()
        ,myAttributes( std::make_shared<SlideAttributes>() )
        {}
        Slide::Slide( const types::XsString& value )
        :myValue( value )
        ,myAttributes( std::make_shared<SlideAttributes>() )
        {}
        bool Slide::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& Slide::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& Slide::streamName( std::ostream& os ) const
        {
            os << "slide";
            return os;
        }
        std::ostream& Slide::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        SlideAttributesPtr Slide::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void Slide::setAttributes( const SlideAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::XsString Slide::getValue() const
        {
            return myValue;
        }
        void Slide::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        
        
        /**************** Fermata ****************/
//        FermataAttributes::FermataAttributes()
//        :type()
//        ,defaultX()
//        ,defaultY()
//        ,relativeX()
//        ,relativeY()
//        ,fontFamily()
//        ,fontStyle( types::FontStyle::normal )
//        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
//        ,fontWeight( types::FontWeight::normal )
//        ,hasType( false )
//        ,hasDefaultX( false )
//        ,hasDefaultY( false )
//        ,hasRelativeX( false )
//        ,hasRelativeY( false )
//        ,hasFontFamily( false )
//        ,hasFontStyle( false )
//        ,hasFontSize( false )
//        ,hasFontWeight( false )
//        {}
//        
//        bool FermataAttributes::hasValues() const
//        {
//            return hasType ||
//            hasDefaultX ||
//            hasDefaultY ||
//            hasRelativeX ||
//            hasRelativeY ||
//            hasFontFamily ||
//            hasFontStyle ||
//            hasFontSize ||
//            hasFontWeight;
//        }
//        
//        std::ostream& FermataAttributes::toStream( std::ostream& os ) const
//        {
//            if ( hasValues() )
//            {
//                streamAttribute( os, type, "type", hasType );
//                streamAttribute( os, defaultX, "default-x", hasDefaultX );
//                streamAttribute( os, defaultY, "default-y", hasDefaultY );
//                streamAttribute( os, relativeX, "relative-x", hasRelativeX );
//                streamAttribute( os, relativeY, "relative-y", hasRelativeY );
//                streamAttribute( os, fontFamily, "font-family", hasFontFamily );
//                streamAttribute( os, fontStyle, "font-style", hasFontStyle );
//                streamAttribute( os, fontSize, "font-size", hasFontSize );
//                streamAttribute( os, fontWeight, "font-weight", hasFontWeight );
//            }
//            return os;
//        }
//        
//        Fermata::Fermata()
//        :myValue()
//        ,myAttributes( std::make_shared<FermataAttributes>() )
//        {}
//        Fermata::Fermata( const types::FermataShape& value )
//        :myValue( value )
//        ,myAttributes( std::make_shared<FermataAttributes>() )
//        {}
//        bool Fermata::hasAttributes() const
//        {
//            return myAttributes->hasValues();
//        }
//        std::ostream& Fermata::streamAttributes( std::ostream& os ) const
//        {
//            if ( myAttributes )
//            {
//                myAttributes->toStream( os );
//            }
//            return os;
//        }
//        std::ostream& Fermata::streamName( std::ostream& os ) const
//        {
//            os << "fermata";
//            return os;
//        }
//        std::ostream& Fermata::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
//        {
//            isOneLineOnly = true;
//            os << myValue;
//            return os;
//        }
//        FermataAttributesPtr Fermata::getAttributes() const
//        {
//            return myAttributes;
//        }
//        /* if value.get()==nullptr then this is a no-op
//         i.e. this function guards against setting Attributes to nullptr */
//        void Fermata::setAttributes( const FermataAttributesPtr& value )
//        {
//            if ( value )
//            {
//                myAttributes = value;
//            }
//        }
//        types::FermataShape Fermata::getValue() const
//        {
//            return myValue;
//        }
//        void Fermata::setValue( const types::FermataShape& value )
//        {
//            myValue = value;
//        }
        
        
        /**************** AccidentalMark ****************/
        AccidentalMarkAttributes::AccidentalMarkAttributes()
        :defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
        ,fontWeight( types::FontWeight::normal )
        ,placement()
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        ,hasPlacement( false )
        {}
        
        bool AccidentalMarkAttributes::hasValues() const
        {
            return hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight ||
            hasPlacement;
        }
        
        std::ostream& AccidentalMarkAttributes::toStream( std::ostream& os ) const
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
                streamAttribute( os, placement, "placement", hasPlacement );
            }
            return os;
        }
        
        AccidentalMark::AccidentalMark()
        :myValue( types::AccidentalValue::natural )
        ,myAttributes( std::make_shared<AccidentalMarkAttributes>() )
        {}
        AccidentalMark::AccidentalMark( const types::AccidentalValue& value )
        :myValue( value )
        ,myAttributes( std::make_shared<AccidentalMarkAttributes>() )
        {}
        bool AccidentalMark::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& AccidentalMark::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& AccidentalMark::streamName( std::ostream& os ) const
        {
            os << "accidental-mark";
            return os;
        }
        std::ostream& AccidentalMark::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        AccidentalMarkAttributesPtr AccidentalMark::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void AccidentalMark::setAttributes( const AccidentalMarkAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::AccidentalValue AccidentalMark::getValue() const
        {
            return myValue;
        }
        void AccidentalMark::setValue( const types::AccidentalValue& value )
        {
            myValue = value;
        }
        
        
        /**************** OtherNotation ****************/
        OtherNotationAttributes::OtherNotationAttributes()
        :type( types::StartStopSingle::start )
        ,number( 1 )
        ,printObject()
        ,defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
        ,fontWeight( types::FontWeight::normal )
        ,placement()
        ,hasType( true )
        ,hasNumber( false )
        ,hasPrintObject( false )
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        ,hasPlacement( false )
        {}
        
        bool OtherNotationAttributes::hasValues() const
        {
            return hasType ||
            hasNumber ||
            hasPrintObject ||
            hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight ||
            hasPlacement;
        }
        
        std::ostream& OtherNotationAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, type, "type", hasType );
                streamAttribute( os, number, "number", hasNumber );
                streamAttribute( os, printObject, "print-object", hasPrintObject );
                streamAttribute( os, defaultX, "default-x", hasDefaultX );
                streamAttribute( os, defaultY, "default-y", hasDefaultY );
                streamAttribute( os, relativeX, "relative-x", hasRelativeX );
                streamAttribute( os, relativeY, "relative-y", hasRelativeY );
                streamAttribute( os, fontFamily, "font-family", hasFontFamily );
                streamAttribute( os, fontStyle, "font-style", hasFontStyle );
                streamAttribute( os, fontSize, "font-size", hasFontSize );
                streamAttribute( os, fontWeight, "font-weight", hasFontWeight );
                streamAttribute( os, placement, "placement", hasPlacement );
            }
            return os;
        }
        
        OtherNotation::OtherNotation()
        :myValue()
        ,myAttributes( std::make_shared<OtherNotationAttributes>() )
        {}
        OtherNotation::OtherNotation( const types::XsString& value )
        :myValue( value )
        ,myAttributes( std::make_shared<OtherNotationAttributes>() )
        {}
        bool OtherNotation::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& OtherNotation::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& OtherNotation::streamName( std::ostream& os ) const
        {
            os << "other-notation";
            return os;
        }
        std::ostream& OtherNotation::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        OtherNotationAttributesPtr OtherNotation::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void OtherNotation::setAttributes( const OtherNotationAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::XsString OtherNotation::getValue() const
        {
            return myValue;
        }
        void OtherNotation::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        
        
        /**************** Type ****************/
        TypeAttributes::TypeAttributes()
        :size()
        ,hasSize( false )
        {}
        
        bool TypeAttributes::hasValues() const
        {
            return hasSize;
        }
        
        std::ostream& TypeAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, size, "size", hasSize );
            }
            return os;
        }
        
        Type::Type()
        :myValue( types::NoteTypeValue::quarter )
        ,myAttributes( std::make_shared<TypeAttributes>() )
        {}
        Type::Type( const types::NoteTypeValue& value )
        :myValue( value )
        ,myAttributes( std::make_shared<TypeAttributes>() )
        {}
        bool Type::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& Type::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& Type::streamName( std::ostream& os ) const
        {
            os << "type";
            return os;
        }
        std::ostream& Type::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        TypeAttributesPtr Type::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void Type::setAttributes( const TypeAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::NoteTypeValue Type::getValue() const
        {
            return myValue;
        }
        void Type::setValue( const types::NoteTypeValue& value )
        {
            myValue = value;
        }
        
        
        /**************** Accidental ****************/
        AccidentalAttributes::AccidentalAttributes()
        :cautionary( types::YesNo::no )
        ,editorial( types::YesNo::no )
        ,parentheses( types::YesNo::no )
        ,bracket()
        ,size()
        ,defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
        ,fontWeight( types::FontWeight::normal )
        ,hasCautionary( false )
        ,hasEditorial( false )
        ,hasParentheses( false )
        ,hasBracket( false )
        ,hasSize( false )
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        {}
        
        bool AccidentalAttributes::hasValues() const
        {
            return hasCautionary ||
            hasEditorial ||
            hasParentheses ||
            hasBracket ||
            hasSize ||
            hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight;
        }
        
        std::ostream& AccidentalAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, cautionary, "cautionary", hasCautionary );
                streamAttribute( os, editorial, "editorial", hasEditorial );
                streamAttribute( os, parentheses, "parentheses", hasParentheses );
                streamAttribute( os, bracket, "bracket", hasBracket );
                streamAttribute( os, size, "size", hasSize );
                streamAttribute( os, defaultX, "default-x", hasDefaultX );
                streamAttribute( os, defaultY, "default-y", hasDefaultY );
                streamAttribute( os, relativeX, "relative-x", hasRelativeX );
                streamAttribute( os, relativeY, "relative-y", hasRelativeY );
                streamAttribute( os, fontFamily, "font-family", hasFontFamily );
                streamAttribute( os, fontStyle, "font-style", hasFontStyle );
                streamAttribute( os, fontSize, "font-size", hasFontSize );
                streamAttribute( os, fontWeight, "font-weight", hasFontWeight );
            }
            return os;
        }
        
        Accidental::Accidental()
        :myValue( types::AccidentalValue::natural )
        ,myAttributes( std::make_shared<AccidentalAttributes>() )
        {}
        Accidental::Accidental( const types::AccidentalValue& value )
        :myValue( value )
        ,myAttributes( std::make_shared<AccidentalAttributes>() )
        {}
        bool Accidental::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& Accidental::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& Accidental::streamName( std::ostream& os ) const
        {
            os << "accidental";
            return os;
        }
        std::ostream& Accidental::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        AccidentalAttributesPtr Accidental::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void Accidental::setAttributes( const AccidentalAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::AccidentalValue Accidental::getValue() const
        {
            return myValue;
        }
        void Accidental::setValue( const types::AccidentalValue& value )
        {
            myValue = value;
        }
        
        
        /**************** Stem ****************/
        StemAttributes::StemAttributes()
        :defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        {}
        
        bool StemAttributes::hasValues() const
        {
            return hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY;
        }
        
        std::ostream& StemAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, defaultX, "default-x", hasDefaultX );
                streamAttribute( os, defaultY, "default-y", hasDefaultY );
                streamAttribute( os, relativeX, "relative-x", hasRelativeX );
                streamAttribute( os, relativeY, "relative-y", hasRelativeY );
            }
            return os;
        }
        
        Stem::Stem()
        :myValue( types::StemValue::none )
        ,myAttributes( std::make_shared<StemAttributes>() )
        {}
        Stem::Stem( const types::StemValue& value )
        :myValue( value )
        ,myAttributes( std::make_shared<StemAttributes>() )
        {}
        bool Stem::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& Stem::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& Stem::streamName( std::ostream& os ) const
        {
            os << "stem";
            return os;
        }
        std::ostream& Stem::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        StemAttributesPtr Stem::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void Stem::setAttributes( const StemAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::StemValue Stem::getValue() const
        {
            return myValue;
        }
        void Stem::setValue( const types::StemValue& value )
        {
            myValue = value;
        }
        
        
        /**************** Notehead ****************/
        NoteheadAttributes::NoteheadAttributes()
        :filled()
        ,parentheses()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
        ,fontWeight( types::FontWeight::normal )
        ,hasFilled( false )
        ,hasParentheses( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        {}
        
        bool NoteheadAttributes::hasValues() const
        {
            return hasFilled ||
            hasParentheses ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight;
        }
        
        std::ostream& NoteheadAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, filled, "filled", hasFilled );
                streamAttribute( os, parentheses, "parentheses", hasParentheses );
                streamAttribute( os, fontFamily, "font-family", hasFontFamily );
                streamAttribute( os, fontStyle, "font-style", hasFontStyle );
                streamAttribute( os, fontSize, "font-size", hasFontSize );
                streamAttribute( os, fontWeight, "font-weight", hasFontWeight );
            }
            return os;
        }
        
        Notehead::Notehead()
        :myValue( types::NoteheadValue::normal )
        ,myAttributes( std::make_shared<NoteheadAttributes>() )
        {}
        Notehead::Notehead( const types::NoteheadValue& value )
        :myValue( value )
        ,myAttributes( std::make_shared<NoteheadAttributes>() )
        {}
        bool Notehead::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& Notehead::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& Notehead::streamName( std::ostream& os ) const
        {
            os << "notehead";
            return os;
        }
        std::ostream& Notehead::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        NoteheadAttributesPtr Notehead::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void Notehead::setAttributes( const NoteheadAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::NoteheadValue Notehead::getValue() const
        {
            return myValue;
        }
        void Notehead::setValue( const types::NoteheadValue& value )
        {
            myValue = value;
        }
        
        
        /**************** Beam ****************/
        BeamAttributes::BeamAttributes()
        :number( 1 )
        ,repeater()
        ,fan()
        ,hasNumber( false )
        ,hasRepeater( false )
        ,hasFan( false )
        {}
        
        bool BeamAttributes::hasValues() const
        {
            return hasNumber ||
            hasRepeater ||
            hasFan;
        }
        
        std::ostream& BeamAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, number, "number", hasNumber );
                streamAttribute( os, repeater, "repeater", hasRepeater );
                streamAttribute( os, fan, "fan", hasFan );
            }
            return os;
        }
        
        Beam::Beam()
        :myValue( types::BeamValue::begin )
        ,myAttributes( std::make_shared<BeamAttributes>() )
        {}
        Beam::Beam( const types::BeamValue& value )
        :myValue( value )
        ,myAttributes( std::make_shared<BeamAttributes>() )
        {}
        bool Beam::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& Beam::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& Beam::streamName( std::ostream& os ) const
        {
            os << "beam";
            return os;
        }
        std::ostream& Beam::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        BeamAttributesPtr Beam::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void Beam::setAttributes( const BeamAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::BeamValue Beam::getValue() const
        {
            return myValue;
        }
        void Beam::setValue( const types::BeamValue& value )
        {
            myValue = value;
        }
        
        
        /**************** DisplayText ****************/
//        DisplayTextAttributes::DisplayTextAttributes()
//        :justify( types::LeftCenterRight::center )
//        ,defaultX()
//        ,defaultY()
//        ,relativeX()
//        ,relativeY()
//        ,fontFamily()
//        ,fontStyle( types::FontStyle::normal )
//        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
//        ,fontWeight( types::FontWeight::normal )
//        ,halign()
//        ,underline()
//        ,overline()
//        ,lineThrough()
//        ,rotation()
//        ,letterSpacing()
//        ,lineHeight()
//        ,lang( types::XmlLang{ "it" } )
//        ,space( types::XmlSpace::default_ )
//        ,enclosure( types::EnclosureShape::rectangle )
//        ,hasJustify( false )
//        ,hasDefaultX( false )
//        ,hasDefaultY( false )
//        ,hasRelativeX( false )
//        ,hasRelativeY( false )
//        ,hasFontFamily( false )
//        ,hasFontStyle( false )
//        ,hasFontSize( false )
//        ,hasFontWeight( false )
//        ,hasHalign( false )
//        ,hasUnderline( false )
//        ,hasOverline( false )
//        ,hasLineThrough( false )
//        ,hasRotation( false )
//        ,hasLetterSpacing( false )
//        ,hasLineHeight( false )
//        ,hasLang( false )
//        ,hasSpace( false )
//        ,hasEnclosure( false )
//        {}
//        
//        bool DisplayTextAttributes::hasValues() const
//        {
//            return hasJustify ||
//            hasDefaultX ||
//            hasDefaultY ||
//            hasRelativeX ||
//            hasRelativeY ||
//            hasFontFamily ||
//            hasFontStyle ||
//            hasFontSize ||
//            hasFontWeight ||
//            hasHalign ||
//            hasUnderline ||
//            hasOverline ||
//            hasLineThrough ||
//            hasRotation ||
//            hasLetterSpacing ||
//            hasLineHeight ||
//            hasLang ||
//            hasSpace ||
//            hasEnclosure;
//        }
//        
//        std::ostream& DisplayTextAttributes::toStream( std::ostream& os ) const
//        {
//            if ( hasValues() )
//            {
//                streamAttribute( os, justify, "justify", hasJustify );
//                streamAttribute( os, defaultX, "default-x", hasDefaultX );
//                streamAttribute( os, defaultY, "default-y", hasDefaultY );
//                streamAttribute( os, relativeX, "relative-x", hasRelativeX );
//                streamAttribute( os, relativeY, "relative-y", hasRelativeY );
//                streamAttribute( os, fontFamily, "font-family", hasFontFamily );
//                streamAttribute( os, fontStyle, "font-style", hasFontStyle );
//                streamAttribute( os, fontSize, "font-size", hasFontSize );
//                streamAttribute( os, fontWeight, "font-weight", hasFontWeight );
//                streamAttribute( os, halign, "halign", hasHalign );
//                streamAttribute( os, underline, "underline", hasUnderline );
//                streamAttribute( os, overline, "overline", hasOverline );
//                streamAttribute( os, lineThrough, "line-through", hasLineThrough );
//                streamAttribute( os, rotation, "rotation", hasRotation );
//                streamAttribute( os, letterSpacing, "letter-spacing", hasLetterSpacing );
//                streamAttribute( os, lineHeight, "line-height", hasLineHeight );
//                streamAttribute( os, lang, "lang", hasLang );
//                streamAttribute( os, space, "space", hasSpace );
//                streamAttribute( os, enclosure, "enclosure", hasEnclosure );
//            }
//            return os;
//        }
//        
//        DisplayText::DisplayText()
//        :myValue()
//        ,myAttributes( std::make_shared<DisplayTextAttributes>() )
//        {}
//        DisplayText::DisplayText( const types::XsString& value )
//        :myValue( value )
//        ,myAttributes( std::make_shared<DisplayTextAttributes>() )
//        {}
//        bool DisplayText::hasAttributes() const
//        {
//            return myAttributes->hasValues();
//        }
//        std::ostream& DisplayText::streamAttributes( std::ostream& os ) const
//        {
//            if ( myAttributes )
//            {
//                myAttributes->toStream( os );
//            }
//            return os;
//        }
//        std::ostream& DisplayText::streamName( std::ostream& os ) const
//        {
//            os << "display-text";
//            return os;
//        }
//        std::ostream& DisplayText::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
//        {
//            isOneLineOnly = true;
//            os << myValue;
//            return os;
//        }
//        DisplayTextAttributesPtr DisplayText::getAttributes() const
//        {
//            return myAttributes;
//        }
//        /* if value.get()==nullptr then this is a no-op
//         i.e. this function guards against setting Attributes to nullptr */
//        void DisplayText::setAttributes( const DisplayTextAttributesPtr& value )
//        {
//            if ( value )
//            {
//                myAttributes = value;
//            }
//        }
//        types::XsString DisplayText::getValue() const
//        {
//            return myValue;
//        }
//        void DisplayText::setValue( const types::XsString& value )
//        {
//            myValue = value;
//        }
        
        
        /**************** Tremolo ****************/
        TremoloAttributes::TremoloAttributes()
        :type( types::StartStopSingle::single )
        ,defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
        ,fontWeight( types::FontWeight::normal )
        ,placement( types::AboveBelow::below )
        ,hasType( false )
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        ,hasPlacement( false )
        {}
        
        bool TremoloAttributes::hasValues() const
        {
            return hasType ||
            hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight ||
            hasPlacement;
        }
        
        std::ostream& TremoloAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, type, "type", hasType );
                streamAttribute( os, defaultX, "default-x", hasDefaultX );
                streamAttribute( os, defaultY, "default-y", hasDefaultY );
                streamAttribute( os, relativeX, "relative-x", hasRelativeX );
                streamAttribute( os, relativeY, "relative-y", hasRelativeY );
                streamAttribute( os, fontFamily, "font-family", hasFontFamily );
                streamAttribute( os, fontStyle, "font-style", hasFontStyle );
                streamAttribute( os, fontSize, "font-size", hasFontSize );
                streamAttribute( os, fontWeight, "font-weight", hasFontWeight );
                streamAttribute( os, placement, "placement", hasPlacement );
            }
            return os;
        }
        
        Tremolo::Tremolo()
        :myValue()
        ,myAttributes( std::make_shared<TremoloAttributes>() )
        {}
        Tremolo::Tremolo( const types::TremoloMarks& value )
        :myValue( value )
        ,myAttributes( std::make_shared<TremoloAttributes>() )
        {}
        bool Tremolo::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& Tremolo::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& Tremolo::streamName( std::ostream& os ) const
        {
            os << "tremolo";
            return os;
        }
        std::ostream& Tremolo::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        TremoloAttributesPtr Tremolo::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void Tremolo::setAttributes( const TremoloAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::TremoloMarks Tremolo::getValue() const
        {
            return myValue;
        }
        void Tremolo::setValue( const types::TremoloMarks& value )
        {
            myValue = value;
            // throw std::runtime_error( "" );
        }
        
        
        /**************** OtherOrnament ****************/
        OtherOrnamentAttributes::OtherOrnamentAttributes()
        :defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
        ,fontWeight( types::FontWeight::normal )
        ,placement()
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        ,hasPlacement( false )
        {}
        
        bool OtherOrnamentAttributes::hasValues() const
        {
            return hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight ||
            hasPlacement;
        }
        
        std::ostream& OtherOrnamentAttributes::toStream( std::ostream& os ) const
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
                streamAttribute( os, placement, "placement", hasPlacement );
            }
            return os;
        }
        
        OtherOrnament::OtherOrnament()
        :myValue()
        ,myAttributes( std::make_shared<OtherOrnamentAttributes>() )
        {}
        OtherOrnament::OtherOrnament( const types::XsString& value )
        :myValue( value )
        ,myAttributes( std::make_shared<OtherOrnamentAttributes>() )
        {}
        bool OtherOrnament::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& OtherOrnament::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& OtherOrnament::streamName( std::ostream& os ) const
        {
            os << "other-ornament";
            return os;
        }
        std::ostream& OtherOrnament::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        OtherOrnamentAttributesPtr OtherOrnament::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void OtherOrnament::setAttributes( const OtherOrnamentAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::XsString OtherOrnament::getValue() const
        {
            return myValue;
        }
        void OtherOrnament::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        
        
        /**************** AccidentalMark ****************/
//        AccidentalMarkAttributes::AccidentalMarkAttributes()
//        :defaultX()
//        ,defaultY()
//        ,relativeX()
//        ,relativeY()
//        ,fontFamily()
//        ,fontStyle( types::FontStyle::normal )
//        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
//        ,fontWeight( types::FontWeight::normal )
//        ,placement()
//        ,hasDefaultX( false )
//        ,hasDefaultY( false )
//        ,hasRelativeX( false )
//        ,hasRelativeY( false )
//        ,hasFontFamily( false )
//        ,hasFontStyle( false )
//        ,hasFontSize( false )
//        ,hasFontWeight( false )
//        ,hasPlacement( false )
//        {}
//        
//        bool AccidentalMarkAttributes::hasValues() const
//        {
//            return hasDefaultX ||
//            hasDefaultY ||
//            hasRelativeX ||
//            hasRelativeY ||
//            hasFontFamily ||
//            hasFontStyle ||
//            hasFontSize ||
//            hasFontWeight ||
//            hasPlacement;
//        }
//        
//        std::ostream& AccidentalMarkAttributes::toStream( std::ostream& os ) const
//        {
//            if ( hasValues() )
//            {
//                streamAttribute( os, defaultX, "default-x", hasDefaultX );
//                streamAttribute( os, defaultY, "default-y", hasDefaultY );
//                streamAttribute( os, relativeX, "relative-x", hasRelativeX );
//                streamAttribute( os, relativeY, "relative-y", hasRelativeY );
//                streamAttribute( os, fontFamily, "font-family", hasFontFamily );
//                streamAttribute( os, fontStyle, "font-style", hasFontStyle );
//                streamAttribute( os, fontSize, "font-size", hasFontSize );
//                streamAttribute( os, fontWeight, "font-weight", hasFontWeight );
//                streamAttribute( os, placement, "placement", hasPlacement );
//            }
//            return os;
//        }
//        
//        AccidentalMark::AccidentalMark()
//        :myValue()
//        ,myAttributes( std::make_shared<AccidentalMarkAttributes>() )
//        {}
//        AccidentalMark::AccidentalMark( const types::AccidentalValue& value )
//        :myValue( value )
//        ,myAttributes( std::make_shared<AccidentalMarkAttributes>() )
//        {}
//        bool AccidentalMark::hasAttributes() const
//        {
//            return myAttributes->hasValues();
//        }
//        std::ostream& AccidentalMark::streamAttributes( std::ostream& os ) const
//        {
//            if ( myAttributes )
//            {
//                myAttributes->toStream( os );
//            }
//            return os;
//        }
//        std::ostream& AccidentalMark::streamName( std::ostream& os ) const
//        {
//            os << "accidental-mark";
//            return os;
//        }
//        std::ostream& AccidentalMark::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
//        {
//            isOneLineOnly = true;
//            os << myValue;
//            return os;
//        }
//        AccidentalMarkAttributesPtr AccidentalMark::getAttributes() const
//        {
//            return myAttributes;
//        }
//        /* if value.get()==nullptr then this is a no-op
//         i.e. this function guards against setting Attributes to nullptr */
//        void AccidentalMark::setAttributes( const AccidentalMarkAttributesPtr& value )
//        {
//            if ( value )
//            {
//                myAttributes = value;
//            }
//        }
//        types::AccidentalValue AccidentalMark::getValue() const
//        {
//            return myValue;
//        }
//        void AccidentalMark::setValue( const types::AccidentalValue& value )
//        {
//            myValue = value;
//        }
        
        
        /**************** Fingering ****************/
//        FingeringAttributes::FingeringAttributes()
//        :substitution()
//        ,alternate()
//        ,defaultX()
//        ,defaultY()
//        ,relativeX()
//        ,relativeY()
//        ,fontFamily()
//        ,fontStyle( types::FontStyle::normal )
//        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
//        ,fontWeight( types::FontWeight::normal )
//        ,placement()
//        ,hasSubstitution( false )
//        ,hasAlternate( false )
//        ,hasDefaultX( false )
//        ,hasDefaultY( false )
//        ,hasRelativeX( false )
//        ,hasRelativeY( false )
//        ,hasFontFamily( false )
//        ,hasFontStyle( false )
//        ,hasFontSize( false )
//        ,hasFontWeight( false )
//        ,hasPlacement( false )
//        {}
//        
//        bool FingeringAttributes::hasValues() const
//        {
//            return hasSubstitution ||
//            hasAlternate ||
//            hasDefaultX ||
//            hasDefaultY ||
//            hasRelativeX ||
//            hasRelativeY ||
//            hasFontFamily ||
//            hasFontStyle ||
//            hasFontSize ||
//            hasFontWeight ||
//            hasPlacement;
//        }
//        
//        std::ostream& FingeringAttributes::toStream( std::ostream& os ) const
//        {
//            if ( hasValues() )
//            {
//                streamAttribute( os, substitution, "substitution", hasSubstitution );
//                streamAttribute( os, alternate, "alternate", hasAlternate );
//                streamAttribute( os, defaultX, "default-x", hasDefaultX );
//                streamAttribute( os, defaultY, "default-y", hasDefaultY );
//                streamAttribute( os, relativeX, "relative-x", hasRelativeX );
//                streamAttribute( os, relativeY, "relative-y", hasRelativeY );
//                streamAttribute( os, fontFamily, "font-family", hasFontFamily );
//                streamAttribute( os, fontStyle, "font-style", hasFontStyle );
//                streamAttribute( os, fontSize, "font-size", hasFontSize );
//                streamAttribute( os, fontWeight, "font-weight", hasFontWeight );
//                streamAttribute( os, placement, "placement", hasPlacement );
//            }
//            return os;
//        }
//        
//        Fingering::Fingering()
//        :myValue()
//        ,myAttributes( std::make_shared<FingeringAttributes>() )
//        {}
//        Fingering::Fingering( const types::XsString& value )
//        :myValue( value )
//        ,myAttributes( std::make_shared<FingeringAttributes>() )
//        {}
//        bool Fingering::hasAttributes() const
//        {
//            return myAttributes->hasValues();
//        }
//        std::ostream& Fingering::streamAttributes( std::ostream& os ) const
//        {
//            if ( myAttributes )
//            {
//                myAttributes->toStream( os );
//            }
//            return os;
//        }
//        std::ostream& Fingering::streamName( std::ostream& os ) const
//        {
//            os << "fingering";
//            return os;
//        }
//        std::ostream& Fingering::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
//        {
//            isOneLineOnly = true;
//            os << myValue;
//            return os;
//        }
//        FingeringAttributesPtr Fingering::getAttributes() const
//        {
//            return myAttributes;
//        }
//        /* if value.get()==nullptr then this is a no-op
//         i.e. this function guards against setting Attributes to nullptr */
//        void Fingering::setAttributes( const FingeringAttributesPtr& value )
//        {
//            if ( value )
//            {
//                myAttributes = value;
//            }
//        }
//        types::XsString Fingering::getValue() const
//        {
//            return myValue;
//        }
//        void Fingering::setValue( const types::XsString& value )
//        {
//            myValue = value;
//        }
        
        
        /**************** Pluck ****************/
        PluckAttributes::PluckAttributes()
        :defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
        ,fontWeight( types::FontWeight::normal )
        ,placement()
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        ,hasPlacement( false )
        {}
        
        bool PluckAttributes::hasValues() const
        {
            return hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight ||
            hasPlacement;
        }
        
        std::ostream& PluckAttributes::toStream( std::ostream& os ) const
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
                streamAttribute( os, placement, "placement", hasPlacement );
            }
            return os;
        }
        
        Pluck::Pluck()
        :myValue()
        ,myAttributes( std::make_shared<PluckAttributes>() )
        {}
        Pluck::Pluck( const types::XsString& value )
        :myValue( value )
        ,myAttributes( std::make_shared<PluckAttributes>() )
        {}
        bool Pluck::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& Pluck::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& Pluck::streamName( std::ostream& os ) const
        {
            os << "pluck";
            return os;
        }
        std::ostream& Pluck::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        PluckAttributesPtr Pluck::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void Pluck::setAttributes( const PluckAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::XsString Pluck::getValue() const
        {
            return myValue;
        }
        void Pluck::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        
        
        /**************** Fret ****************/
//        FretAttributes::FretAttributes()
//        :fontFamily()
//        ,fontStyle( types::FontStyle::normal )
//        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
//        ,fontWeight( types::FontWeight::normal )
//        ,hasFontFamily( false )
//        ,hasFontStyle( false )
//        ,hasFontSize( false )
//        ,hasFontWeight( false )
//        {}
//        
//        bool FretAttributes::hasValues() const
//        {
//            return hasFontFamily ||
//            hasFontStyle ||
//            hasFontSize ||
//            hasFontWeight;
//        }
//        
//        std::ostream& FretAttributes::toStream( std::ostream& os ) const
//        {
//            if ( hasValues() )
//            {
//                streamAttribute( os, fontFamily, "font-family", hasFontFamily );
//                streamAttribute( os, fontStyle, "font-style", hasFontStyle );
//                streamAttribute( os, fontSize, "font-size", hasFontSize );
//                streamAttribute( os, fontWeight, "font-weight", hasFontWeight );
//            }
//            return os;
//        }
//        
//        Fret::Fret()
//        :myValue()
//        ,myAttributes( std::make_shared<FretAttributes>() )
//        {}
//        Fret::Fret( const types::NonNegativeInteger& value )
//        :myValue( value )
//        ,myAttributes( std::make_shared<FretAttributes>() )
//        {}
//        bool Fret::hasAttributes() const
//        {
//            return myAttributes->hasValues();
//        }
//        std::ostream& Fret::streamAttributes( std::ostream& os ) const
//        {
//            if ( myAttributes )
//            {
//                myAttributes->toStream( os );
//            }
//            return os;
//        }
//        std::ostream& Fret::streamName( std::ostream& os ) const
//        {
//            os << "fret";
//            return os;
//        }
//        std::ostream& Fret::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
//        {
//            isOneLineOnly = true;
//            os << myValue;
//            return os;
//        }
//        FretAttributesPtr Fret::getAttributes() const
//        {
//            return myAttributes;
//        }
//        /* if value.get()==nullptr then this is a no-op
//         i.e. this function guards against setting Attributes to nullptr */
//        void Fret::setAttributes( const FretAttributesPtr& value )
//        {
//            if ( value )
//            {
//                myAttributes = value;
//            }
//        }
//        types::NonNegativeInteger Fret::getValue() const
//        {
//            return myValue;
//        }
//        void Fret::setValue( const types::NonNegativeInteger& value )
//        {
//            myValue = value;
//        }
        
        
        /**************** HammerOn ****************/
        HammerOnAttributes::HammerOnAttributes()
        :type( types::StartStop::start )
        ,number( 1 )
        ,defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
        ,fontWeight( types::FontWeight::normal )
        ,placement()
        ,hasType( true )
        ,hasNumber( false )
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        ,hasPlacement( false )
        {}
        
        bool HammerOnAttributes::hasValues() const
        {
            return hasType ||
            hasNumber ||
            hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight ||
            hasPlacement;
        }
        
        std::ostream& HammerOnAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, type, "type", hasType );
                streamAttribute( os, number, "number", hasNumber );
                streamAttribute( os, defaultX, "default-x", hasDefaultX );
                streamAttribute( os, defaultY, "default-y", hasDefaultY );
                streamAttribute( os, relativeX, "relative-x", hasRelativeX );
                streamAttribute( os, relativeY, "relative-y", hasRelativeY );
                streamAttribute( os, fontFamily, "font-family", hasFontFamily );
                streamAttribute( os, fontStyle, "font-style", hasFontStyle );
                streamAttribute( os, fontSize, "font-size", hasFontSize );
                streamAttribute( os, fontWeight, "font-weight", hasFontWeight );
                streamAttribute( os, placement, "placement", hasPlacement );
            }
            return os;
        }
        
        HammerOn::HammerOn()
        :myValue()
        ,myAttributes( std::make_shared<HammerOnAttributes>() )
        {}
        HammerOn::HammerOn( const types::XsString& value )
        :myValue( value )
        ,myAttributes( std::make_shared<HammerOnAttributes>() )
        {}
        bool HammerOn::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& HammerOn::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& HammerOn::streamName( std::ostream& os ) const
        {
            os << "hammer-on";
            return os;
        }
        std::ostream& HammerOn::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        HammerOnAttributesPtr HammerOn::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void HammerOn::setAttributes( const HammerOnAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::XsString HammerOn::getValue() const
        {
            return myValue;
        }
        void HammerOn::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        
        
        /**************** PullOff ****************/
        PullOffAttributes::PullOffAttributes()
        :type( types::StartStop::start )
        ,number( 1 )
        ,defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
        ,fontWeight( types::FontWeight::normal )
        ,placement()
        ,hasType( true )
        ,hasNumber( false )
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        ,hasPlacement( false )
        {}
        
        bool PullOffAttributes::hasValues() const
        {
            return hasType ||
            hasNumber ||
            hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight ||
            hasPlacement;
        }
        
        std::ostream& PullOffAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, type, "type", hasType );
                streamAttribute( os, number, "number", hasNumber );
                streamAttribute( os, defaultX, "default-x", hasDefaultX );
                streamAttribute( os, defaultY, "default-y", hasDefaultY );
                streamAttribute( os, relativeX, "relative-x", hasRelativeX );
                streamAttribute( os, relativeY, "relative-y", hasRelativeY );
                streamAttribute( os, fontFamily, "font-family", hasFontFamily );
                streamAttribute( os, fontStyle, "font-style", hasFontStyle );
                streamAttribute( os, fontSize, "font-size", hasFontSize );
                streamAttribute( os, fontWeight, "font-weight", hasFontWeight );
                streamAttribute( os, placement, "placement", hasPlacement );
            }
            return os;
        }
        
        PullOff::PullOff()
        :myValue()
        ,myAttributes( std::make_shared<PullOffAttributes>() )
        {}
        PullOff::PullOff( const types::XsString& value )
        :myValue( value )
        ,myAttributes( std::make_shared<PullOffAttributes>() )
        {}
        bool PullOff::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& PullOff::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& PullOff::streamName( std::ostream& os ) const
        {
            os << "pull-off";
            return os;
        }
        std::ostream& PullOff::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        PullOffAttributesPtr PullOff::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void PullOff::setAttributes( const PullOffAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::XsString PullOff::getValue() const
        {
            return myValue;
        }
        void PullOff::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        
        
        /**************** Tap ****************/
        TapAttributes::TapAttributes()
        :defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
        ,fontWeight( types::FontWeight::normal )
        ,placement()
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        ,hasPlacement( false )
        {}
        
        bool TapAttributes::hasValues() const
        {
            return hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight ||
            hasPlacement;
        }
        
        std::ostream& TapAttributes::toStream( std::ostream& os ) const
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
                streamAttribute( os, placement, "placement", hasPlacement );
            }
            return os;
        }
        
        Tap::Tap()
        :myValue()
        ,myAttributes( std::make_shared<TapAttributes>() )
        {}
        Tap::Tap( const types::XsString& value )
        :myValue( value )
        ,myAttributes( std::make_shared<TapAttributes>() )
        {}
        bool Tap::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& Tap::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& Tap::streamName( std::ostream& os ) const
        {
            os << "tap";
            return os;
        }
        std::ostream& Tap::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        TapAttributesPtr Tap::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void Tap::setAttributes( const TapAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::XsString Tap::getValue() const
        {
            return myValue;
        }
        void Tap::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        
        
        /**************** Handbell ****************/
        HandbellAttributes::HandbellAttributes()
        :defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
        ,fontWeight( types::FontWeight::normal )
        ,placement()
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        ,hasPlacement( false )
        {}
        
        bool HandbellAttributes::hasValues() const
        {
            return hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight ||
            hasPlacement;
        }
        
        std::ostream& HandbellAttributes::toStream( std::ostream& os ) const
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
                streamAttribute( os, placement, "placement", hasPlacement );
            }
            return os;
        }
        
        Handbell::Handbell()
        :myValue( types::HandbellValue::damp )
        ,myAttributes( std::make_shared<HandbellAttributes>() )
        {}
        Handbell::Handbell( const types::HandbellValue& value )
        :myValue( value )
        ,myAttributes( std::make_shared<HandbellAttributes>() )
        {}
        bool Handbell::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& Handbell::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& Handbell::streamName( std::ostream& os ) const
        {
            os << "handbell";
            return os;
        }
        std::ostream& Handbell::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        HandbellAttributesPtr Handbell::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void Handbell::setAttributes( const HandbellAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::HandbellValue Handbell::getValue() const
        {
            return myValue;
        }
        void Handbell::setValue( const types::HandbellValue& value )
        {
            myValue = value;
        }
        
        
        /**************** OtherTechnical ****************/
        OtherTechnicalAttributes::OtherTechnicalAttributes()
        :defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
        ,fontWeight( types::FontWeight::normal )
        ,placement()
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        ,hasPlacement( false )
        {}
        
        bool OtherTechnicalAttributes::hasValues() const
        {
            return hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight ||
            hasPlacement;
        }
        
        std::ostream& OtherTechnicalAttributes::toStream( std::ostream& os ) const
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
                streamAttribute( os, placement, "placement", hasPlacement );
            }
            return os;
        }
        
        OtherTechnical::OtherTechnical()
        :myValue()
        ,myAttributes( std::make_shared<OtherTechnicalAttributes>() )
        {}
        OtherTechnical::OtherTechnical( const types::XsString& value )
        :myValue( value )
        ,myAttributes( std::make_shared<OtherTechnicalAttributes>() )
        {}
        bool OtherTechnical::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& OtherTechnical::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& OtherTechnical::streamName( std::ostream& os ) const
        {
            os << "other-technical";
            return os;
        }
        std::ostream& OtherTechnical::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        OtherTechnicalAttributesPtr OtherTechnical::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void OtherTechnical::setAttributes( const OtherTechnicalAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::XsString OtherTechnical::getValue() const
        {
            return myValue;
        }
        void OtherTechnical::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        
        
        /**************** TupletNumber ****************/
        TupletNumberAttributes::TupletNumberAttributes()
        :fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
        ,fontWeight( types::FontWeight::normal )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        {}
        
        bool TupletNumberAttributes::hasValues() const
        {
            return hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight;
        }
        
        std::ostream& TupletNumberAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, fontFamily, "font-family", hasFontFamily );
                streamAttribute( os, fontStyle, "font-style", hasFontStyle );
                streamAttribute( os, fontSize, "font-size", hasFontSize );
                streamAttribute( os, fontWeight, "font-weight", hasFontWeight );
            }
            return os;
        }
        
        TupletNumber::TupletNumber()
        :myValue()
        ,myAttributes( std::make_shared<TupletNumberAttributes>() )
        {}
        TupletNumber::TupletNumber( const types::NonNegativeInteger& value )
        :myValue( value )
        ,myAttributes( std::make_shared<TupletNumberAttributes>() )
        {}
        bool TupletNumber::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& TupletNumber::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& TupletNumber::streamName( std::ostream& os ) const
        {
            os << "tuplet-number";
            return os;
        }
        std::ostream& TupletNumber::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        TupletNumberAttributesPtr TupletNumber::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void TupletNumber::setAttributes( const TupletNumberAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::NonNegativeInteger TupletNumber::getValue() const
        {
            return myValue;
        }
        void TupletNumber::setValue( const types::NonNegativeInteger& value )
        {
            myValue = value;
        }
        
        
        /**************** TupletType ****************/
        TupletTypeAttributes::TupletTypeAttributes()
        :fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
        ,fontWeight( types::FontWeight::normal )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        {}
        
        bool TupletTypeAttributes::hasValues() const
        {
            return hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight;
        }
        
        std::ostream& TupletTypeAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, fontFamily, "font-family", hasFontFamily );
                streamAttribute( os, fontStyle, "font-style", hasFontStyle );
                streamAttribute( os, fontSize, "font-size", hasFontSize );
                streamAttribute( os, fontWeight, "font-weight", hasFontWeight );
            }
            return os;
        }
        
        TupletType::TupletType()
        :myValue( types::NoteTypeValue::eighth )
        ,myAttributes( std::make_shared<TupletTypeAttributes>() )
        {}
        TupletType::TupletType( const types::NoteTypeValue& value )
        :myValue( value )
        ,myAttributes( std::make_shared<TupletTypeAttributes>() )
        {}
        bool TupletType::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& TupletType::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& TupletType::streamName( std::ostream& os ) const
        {
            os << "tuplet-type";
            return os;
        }
        std::ostream& TupletType::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        TupletTypeAttributesPtr TupletType::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void TupletType::setAttributes( const TupletTypeAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::NoteTypeValue TupletType::getValue() const
        {
            return myValue;
        }
        void TupletType::setValue( const types::NoteTypeValue& value )
        {
            myValue = value;
        }
        
        
        /**************** CreditWords ****************/
        CreditWordsAttributes::CreditWordsAttributes()
        :justify( types::LeftCenterRight::center )
        ,defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
        ,fontWeight( types::FontWeight::normal )
        ,halign()
        ,underline()
        ,overline()
        ,lineThrough()
        ,rotation()
        ,letterSpacing()
        ,lineHeight()
        ,lang( types::XmlLang{ "it" } )
        ,space( types::XmlSpace::default_ )
        ,enclosure( types::EnclosureShape::rectangle )
        ,hasJustify( false )
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        ,hasHalign( false )
        ,hasUnderline( false )
        ,hasOverline( false )
        ,hasLineThrough( false )
        ,hasRotation( false )
        ,hasLetterSpacing( false )
        ,hasLineHeight( false )
        ,hasLang( false )
        ,hasSpace( false )
        ,hasEnclosure( false )
        {}
        
        bool CreditWordsAttributes::hasValues() const
        {
            return hasJustify ||
            hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight ||
            hasHalign ||
            hasUnderline ||
            hasOverline ||
            hasLineThrough ||
            hasRotation ||
            hasLetterSpacing ||
            hasLineHeight ||
            hasLang ||
            hasSpace ||
            hasEnclosure;
        }
        
        std::ostream& CreditWordsAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, justify, "justify", hasJustify );
                streamAttribute( os, defaultX, "default-x", hasDefaultX );
                streamAttribute( os, defaultY, "default-y", hasDefaultY );
                streamAttribute( os, relativeX, "relative-x", hasRelativeX );
                streamAttribute( os, relativeY, "relative-y", hasRelativeY );
                streamAttribute( os, fontFamily, "font-family", hasFontFamily );
                streamAttribute( os, fontStyle, "font-style", hasFontStyle );
                streamAttribute( os, fontSize, "font-size", hasFontSize );
                streamAttribute( os, fontWeight, "font-weight", hasFontWeight );
                streamAttribute( os, halign, "halign", hasHalign );
                streamAttribute( os, underline, "underline", hasUnderline );
                streamAttribute( os, overline, "overline", hasOverline );
                streamAttribute( os, lineThrough, "line-through", hasLineThrough );
                streamAttribute( os, rotation, "rotation", hasRotation );
                streamAttribute( os, letterSpacing, "letter-spacing", hasLetterSpacing );
                streamAttribute( os, lineHeight, "line-height", hasLineHeight );
                streamAttribute( os, lang, "lang", hasLang );
                streamAttribute( os, space, "space", hasSpace );
                streamAttribute( os, enclosure, "enclosure", hasEnclosure );
            }
            return os;
        }
        
        CreditWords::CreditWords()
        :myValue()
        ,myAttributes( std::make_shared<CreditWordsAttributes>() )
        {}
        CreditWords::CreditWords( const types::XsString& value )
        :myValue( value )
        ,myAttributes( std::make_shared<CreditWordsAttributes>() )
        {}
        bool CreditWords::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& CreditWords::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& CreditWords::streamName( std::ostream& os ) const
        {
            os << "credit-words";
            return os;
        }
        std::ostream& CreditWords::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        CreditWordsAttributesPtr CreditWords::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void CreditWords::setAttributes( const CreditWordsAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::XsString CreditWords::getValue() const
        {
            return myValue;
        }
        void CreditWords::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        
        
        /**************** CreditWords ****************/
//        CreditWordsAttributes::CreditWordsAttributes()
//        :justify( types::LeftCenterRight::center )
//        ,defaultX()
//        ,defaultY()
//        ,relativeX()
//        ,relativeY()
//        ,fontFamily()
//        ,fontStyle( types::FontStyle::normal )
//        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
//        ,fontWeight( types::FontWeight::normal )
//        ,halign()
//        ,underline()
//        ,overline()
//        ,lineThrough()
//        ,rotation()
//        ,letterSpacing()
//        ,lineHeight()
//        ,lang( types::XmlLang{ "it" } )
//        ,space( types::XmlSpace::default_ )
//        ,enclosure( types::EnclosureShape::rectangle )
//        ,hasJustify( false )
//        ,hasDefaultX( false )
//        ,hasDefaultY( false )
//        ,hasRelativeX( false )
//        ,hasRelativeY( false )
//        ,hasFontFamily( false )
//        ,hasFontStyle( false )
//        ,hasFontSize( false )
//        ,hasFontWeight( false )
//        ,hasHalign( false )
//        ,hasUnderline( false )
//        ,hasOverline( false )
//        ,hasLineThrough( false )
//        ,hasRotation( false )
//        ,hasLetterSpacing( false )
//        ,hasLineHeight( false )
//        ,hasLang( false )
//        ,hasSpace( false )
//        ,hasEnclosure( false )
//        {}
//        
//        bool CreditWordsAttributes::hasValues() const
//        {
//            return hasJustify ||
//            hasDefaultX ||
//            hasDefaultY ||
//            hasRelativeX ||
//            hasRelativeY ||
//            hasFontFamily ||
//            hasFontStyle ||
//            hasFontSize ||
//            hasFontWeight ||
//            hasHalign ||
//            hasUnderline ||
//            hasOverline ||
//            hasLineThrough ||
//            hasRotation ||
//            hasLetterSpacing ||
//            hasLineHeight ||
//            hasLang ||
//            hasSpace ||
//            hasEnclosure;
//        }
//        
//        std::ostream& CreditWordsAttributes::toStream( std::ostream& os ) const
//        {
//            if ( hasValues() )
//            {
//                streamAttribute( os, justify, "justify", hasJustify );
//                streamAttribute( os, defaultX, "default-x", hasDefaultX );
//                streamAttribute( os, defaultY, "default-y", hasDefaultY );
//                streamAttribute( os, relativeX, "relative-x", hasRelativeX );
//                streamAttribute( os, relativeY, "relative-y", hasRelativeY );
//                streamAttribute( os, fontFamily, "font-family", hasFontFamily );
//                streamAttribute( os, fontStyle, "font-style", hasFontStyle );
//                streamAttribute( os, fontSize, "font-size", hasFontSize );
//                streamAttribute( os, fontWeight, "font-weight", hasFontWeight );
//                streamAttribute( os, halign, "halign", hasHalign );
//                streamAttribute( os, underline, "underline", hasUnderline );
//                streamAttribute( os, overline, "overline", hasOverline );
//                streamAttribute( os, lineThrough, "line-through", hasLineThrough );
//                streamAttribute( os, rotation, "rotation", hasRotation );
//                streamAttribute( os, letterSpacing, "letter-spacing", hasLetterSpacing );
//                streamAttribute( os, lineHeight, "line-height", hasLineHeight );
//                streamAttribute( os, lang, "lang", hasLang );
//                streamAttribute( os, space, "space", hasSpace );
//                streamAttribute( os, enclosure, "enclosure", hasEnclosure );
//            }
//            return os;
//        }
//        
//        CreditWords::CreditWords()
//        :myValue()
//        ,myAttributes( std::make_shared<CreditWordsAttributes>() )
//        {}
//        CreditWords::CreditWords( const types::XsString& value )
//        :myValue( value )
//        ,myAttributes( std::make_shared<CreditWordsAttributes>() )
//        {}
//        bool CreditWords::hasAttributes() const
//        {
//            return myAttributes->hasValues();
//        }
//        std::ostream& CreditWords::streamAttributes( std::ostream& os ) const
//        {
//            if ( myAttributes )
//            {
//                myAttributes->toStream( os );
//            }
//            return os;
//        }
//        std::ostream& CreditWords::streamName( std::ostream& os ) const
//        {
//            os << "credit-words";
//            return os;
//        }
//        std::ostream& CreditWords::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
//        {
//            isOneLineOnly = true;
//            os << myValue;
//            return os;
//        }
//        CreditWordsAttributesPtr CreditWords::getAttributes() const
//        {
//            return myAttributes;
//        }
//        /* if value.get()==nullptr then this is a no-op
//         i.e. this function guards against setting Attributes to nullptr */
//        void CreditWords::setAttributes( const CreditWordsAttributesPtr& value )
//        {
//            if ( value )
//            {
//                myAttributes = value;
//            }
//        }
//        types::XsString CreditWords::getValue() const
//        {
//            return myValue;
//        }
//        void CreditWords::setValue( const types::XsString& value )
//        {
//            myValue = value;
//        }
        
        
        /**************** GroupName ****************/
        GroupNameAttributes::GroupNameAttributes()
        :defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
        ,fontWeight( types::FontWeight::normal )
        ,justify( types::LeftCenterRight::center )
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        ,hasJustify( false )
        {}
        
        bool GroupNameAttributes::hasValues() const
        {
            return hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight ||
            hasJustify;
        }
        
        std::ostream& GroupNameAttributes::toStream( std::ostream& os ) const
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
                streamAttribute( os, justify, "justify", hasJustify );
            }
            return os;
        }
        
        GroupName::GroupName()
        :myValue()
        ,myAttributes( std::make_shared<GroupNameAttributes>() )
        {}
        GroupName::GroupName( const types::XsString& value )
        :myValue( value )
        ,myAttributes( std::make_shared<GroupNameAttributes>() )
        {}
        bool GroupName::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& GroupName::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& GroupName::streamName( std::ostream& os ) const
        {
            os << "group-name";
            return os;
        }
        std::ostream& GroupName::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        GroupNameAttributesPtr GroupName::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void GroupName::setAttributes( const GroupNameAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::XsString GroupName::getValue() const
        {
            return myValue;
        }
        void GroupName::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        
        
        /**************** GroupAbbreviation ****************/
        GroupAbbreviationAttributes::GroupAbbreviationAttributes()
        :defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
        ,fontWeight( types::FontWeight::normal )
        ,justify( types::LeftCenterRight::center )
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        ,hasJustify( false )
        {}
        
        bool GroupAbbreviationAttributes::hasValues() const
        {
            return hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight ||
            hasJustify;
        }
        
        std::ostream& GroupAbbreviationAttributes::toStream( std::ostream& os ) const
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
                streamAttribute( os, justify, "justify", hasJustify );
            }
            return os;
        }
        
        GroupAbbreviation::GroupAbbreviation()
        :myValue()
        ,myAttributes( std::make_shared<GroupAbbreviationAttributes>() )
        {}
        GroupAbbreviation::GroupAbbreviation( const types::XsString& value )
        :myValue( value )
        ,myAttributes( std::make_shared<GroupAbbreviationAttributes>() )
        {}
        bool GroupAbbreviation::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& GroupAbbreviation::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& GroupAbbreviation::streamName( std::ostream& os ) const
        {
            os << "group-abbreviation";
            return os;
        }
        std::ostream& GroupAbbreviation::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        GroupAbbreviationAttributesPtr GroupAbbreviation::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void GroupAbbreviation::setAttributes( const GroupAbbreviationAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::XsString GroupAbbreviation::getValue() const
        {
            return myValue;
        }
        void GroupAbbreviation::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        
        
        /**************** GroupSymbol ****************/
        GroupSymbolAttributes::GroupSymbolAttributes()
        :defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        {}
        
        bool GroupSymbolAttributes::hasValues() const
        {
            return hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY;
        }
        
        std::ostream& GroupSymbolAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, defaultX, "default-x", hasDefaultX );
                streamAttribute( os, defaultY, "default-y", hasDefaultY );
                streamAttribute( os, relativeX, "relative-x", hasRelativeX );
                streamAttribute( os, relativeY, "relative-y", hasRelativeY );
            }
            return os;
        }
        
        GroupSymbol::GroupSymbol()
        :myValue( types::GroupSymbolValue::none )
        ,myAttributes( std::make_shared<GroupSymbolAttributes>() )
        {}
        GroupSymbol::GroupSymbol( const types::GroupSymbolValue& value )
        :myValue( value )
        ,myAttributes( std::make_shared<GroupSymbolAttributes>() )
        {}
        bool GroupSymbol::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& GroupSymbol::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& GroupSymbol::streamName( std::ostream& os ) const
        {
            os << "group-symbol";
            return os;
        }
        std::ostream& GroupSymbol::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        GroupSymbolAttributesPtr GroupSymbol::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void GroupSymbol::setAttributes( const GroupSymbolAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::GroupSymbolValue GroupSymbol::getValue() const
        {
            return myValue;
        }
        void GroupSymbol::setValue( const types::GroupSymbolValue& value )
        {
            myValue = value;
        }
        
        
        /**************** GroupBarline ****************/
        GroupBarlineAttributes::GroupBarlineAttributes()
        :color( "#FFFFFF" )
        ,hasColor( false )
        {}
        
        bool GroupBarlineAttributes::hasValues() const
        {
            return hasColor;
        }
        
        std::ostream& GroupBarlineAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, color, "color", hasColor );
            }
            return os;
        }
        
        GroupBarline::GroupBarline()
        :myValue( types::GroupBarlineValue::yes )
        ,myAttributes( std::make_shared<GroupBarlineAttributes>() )
        {}
        GroupBarline::GroupBarline( const types::GroupBarlineValue& value )
        :myValue( value )
        ,myAttributes( std::make_shared<GroupBarlineAttributes>() )
        {}
        bool GroupBarline::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& GroupBarline::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& GroupBarline::streamName( std::ostream& os ) const
        {
            os << "group-barline";
            return os;
        }
        std::ostream& GroupBarline::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        GroupBarlineAttributesPtr GroupBarline::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void GroupBarline::setAttributes( const GroupBarlineAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::GroupBarlineValue GroupBarline::getValue() const
        {
            return myValue;
        }
        void GroupBarline::setValue( const types::GroupBarlineValue& value )
        {
            myValue = value;
        }
        
        
        /**************** PartName ****************/
        PartNameAttributes::PartNameAttributes()
        :defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
        ,fontWeight( types::FontWeight::normal )
        ,printObject()
        ,justify( types::LeftCenterRight::center )
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        ,hasPrintObject( false )
        ,hasJustify( false )
        {}
        
        bool PartNameAttributes::hasValues() const
        {
            return hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight ||
            hasPrintObject ||
            hasJustify;
        }
        
        std::ostream& PartNameAttributes::toStream( std::ostream& os ) const
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
                streamAttribute( os, printObject, "print-object", hasPrintObject );
                streamAttribute( os, justify, "justify", hasJustify );
            }
            return os;
        }
        
        PartName::PartName()
        :myValue()
        ,myAttributes( std::make_shared<PartNameAttributes>() )
        {}
        PartName::PartName( const types::XsString& value )
        :myValue( value )
        ,myAttributes( std::make_shared<PartNameAttributes>() )
        {}
        bool PartName::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& PartName::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& PartName::streamName( std::ostream& os ) const
        {
            os << "part-name";
            return os;
        }
        std::ostream& PartName::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        PartNameAttributesPtr PartName::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void PartName::setAttributes( const PartNameAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::XsString PartName::getValue() const
        {
            return myValue;
        }
        void PartName::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        
        
        /**************** PartAbbreviation ****************/
        PartAbbreviationAttributes::PartAbbreviationAttributes()
        :defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
        ,fontWeight( types::FontWeight::normal )
        ,printObject()
        ,justify( types::LeftCenterRight::center )
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        ,hasPrintObject( false )
        ,hasJustify( false )
        {}
        
        bool PartAbbreviationAttributes::hasValues() const
        {
            return hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight ||
            hasPrintObject ||
            hasJustify;
        }
        
        std::ostream& PartAbbreviationAttributes::toStream( std::ostream& os ) const
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
                streamAttribute( os, printObject, "print-object", hasPrintObject );
                streamAttribute( os, justify, "justify", hasJustify );
            }
            return os;
        }
        
        PartAbbreviation::PartAbbreviation()
        :myValue()
        ,myAttributes( std::make_shared<PartAbbreviationAttributes>() )
        {}
        PartAbbreviation::PartAbbreviation( const types::XsString& value )
        :myValue( value )
        ,myAttributes( std::make_shared<PartAbbreviationAttributes>() )
        {}
        bool PartAbbreviation::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& PartAbbreviation::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& PartAbbreviation::streamName( std::ostream& os ) const
        {
            os << "part-abbreviation";
            return os;
        }
        std::ostream& PartAbbreviation::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        PartAbbreviationAttributesPtr PartAbbreviation::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void PartAbbreviation::setAttributes( const PartAbbreviationAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::XsString PartAbbreviation::getValue() const
        {
            return myValue;
        }
        void PartAbbreviation::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        
        
        /**************** MidiDevice ****************/
//        MidiDeviceAttributes::MidiDeviceAttributes()
//        :port()
//        ,id()
//        ,hasPort( false )
//        ,hasId( false )
//        {}
//        
//        bool MidiDeviceAttributes::hasValues() const
//        {
//            return hasPort ||
//            hasId;
//        }
//        
//        std::ostream& MidiDeviceAttributes::toStream( std::ostream& os ) const
//        {
//            if ( hasValues() )
//            {
//                streamAttribute( os, port, "port", hasPort );
//                streamAttribute( os, id, "id", hasId );
//            }
//            return os;
//        }
//        
//        MidiDevice::MidiDevice()
//        :myValue()
//        ,myAttributes( std::make_shared<MidiDeviceAttributes>() )
//        {}
//        MidiDevice::MidiDevice( const types::XsString& value )
//        :myValue( value )
//        ,myAttributes( std::make_shared<MidiDeviceAttributes>() )
//        {}
//        bool MidiDevice::hasAttributes() const
//        {
//            return myAttributes->hasValues();
//        }
//        std::ostream& MidiDevice::streamAttributes( std::ostream& os ) const
//        {
//            if ( myAttributes )
//            {
//                myAttributes->toStream( os );
//            }
//            return os;
//        }
//        std::ostream& MidiDevice::streamName( std::ostream& os ) const
//        {
//            os << "midi-device";
//            return os;
//        }
//        std::ostream& MidiDevice::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
//        {
//            isOneLineOnly = true;
//            os << myValue;
//            return os;
//        }
//        MidiDeviceAttributesPtr MidiDevice::getAttributes() const
//        {
//            return myAttributes;
//        }
//        /* if value.get()==nullptr then this is a no-op
//         i.e. this function guards against setting Attributes to nullptr */
//        void MidiDevice::setAttributes( const MidiDeviceAttributesPtr& value )
//        {
//            if ( value )
//            {
//                myAttributes = value;
//            }
//        }
//        types::XsString MidiDevice::getValue() const
//        {
//            return myValue;
//        }
//        void MidiDevice::setValue( const types::XsString& value )
//        {
//            myValue = value;
//        }
        
        
        /**************** Footnote ****************/
        FootnoteAttributes::FootnoteAttributes()
        :justify( types::LeftCenterRight::center )
        ,defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
        ,fontWeight( types::FontWeight::normal )
        ,halign()
        ,underline()
        ,overline()
        ,lineThrough()
        ,rotation()
        ,letterSpacing()
        ,lineHeight()
        ,lang( types::XmlLang{ "it" } )
        ,space( types::XmlSpace::default_ )
        ,enclosure( types::EnclosureShape::rectangle )
        ,hasJustify( false )
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        ,hasHalign( false )
        ,hasUnderline( false )
        ,hasOverline( false )
        ,hasLineThrough( false )
        ,hasRotation( false )
        ,hasLetterSpacing( false )
        ,hasLineHeight( false )
        ,hasLang( false )
        ,hasSpace( false )
        ,hasEnclosure( false )
        {}
        
        bool FootnoteAttributes::hasValues() const
        {
            return hasJustify ||
            hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight ||
            hasHalign ||
            hasUnderline ||
            hasOverline ||
            hasLineThrough ||
            hasRotation ||
            hasLetterSpacing ||
            hasLineHeight ||
            hasLang ||
            hasSpace ||
            hasEnclosure;
        }
        
        std::ostream& FootnoteAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, justify, "justify", hasJustify );
                streamAttribute( os, defaultX, "default-x", hasDefaultX );
                streamAttribute( os, defaultY, "default-y", hasDefaultY );
                streamAttribute( os, relativeX, "relative-x", hasRelativeX );
                streamAttribute( os, relativeY, "relative-y", hasRelativeY );
                streamAttribute( os, fontFamily, "font-family", hasFontFamily );
                streamAttribute( os, fontStyle, "font-style", hasFontStyle );
                streamAttribute( os, fontSize, "font-size", hasFontSize );
                streamAttribute( os, fontWeight, "font-weight", hasFontWeight );
                streamAttribute( os, halign, "halign", hasHalign );
                streamAttribute( os, underline, "underline", hasUnderline );
                streamAttribute( os, overline, "overline", hasOverline );
                streamAttribute( os, lineThrough, "line-through", hasLineThrough );
                streamAttribute( os, rotation, "rotation", hasRotation );
                streamAttribute( os, letterSpacing, "letter-spacing", hasLetterSpacing );
                streamAttribute( os, lineHeight, "line-height", hasLineHeight );
                streamAttribute( os, lang, "lang", hasLang );
                streamAttribute( os, space, "space", hasSpace );
                streamAttribute( os, enclosure, "enclosure", hasEnclosure );
            }
            return os;
        }
        
        Footnote::Footnote()
        :myValue()
        ,myAttributes( std::make_shared<FootnoteAttributes>() )
        {}
        Footnote::Footnote( const types::XsString& value )
        :myValue( value )
        ,myAttributes( std::make_shared<FootnoteAttributes>() )
        {}
        bool Footnote::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& Footnote::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& Footnote::streamName( std::ostream& os ) const
        {
            os << "footnote";
            return os;
        }
        std::ostream& Footnote::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        FootnoteAttributesPtr Footnote::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void Footnote::setAttributes( const FootnoteAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::XsString Footnote::getValue() const
        {
            return myValue;
        }
        void Footnote::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        
        
        /**************** Level ****************/
        LevelAttributes::LevelAttributes()
        :reference()
        ,parentheses()
        ,bracket()
        ,size()
        ,hasReference( false )
        ,hasParentheses( false )
        ,hasBracket( false )
        ,hasSize( false )
        {}
        
        bool LevelAttributes::hasValues() const
        {
            return hasReference ||
            hasParentheses ||
            hasBracket ||
            hasSize;
        }
        
        std::ostream& LevelAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, reference, "reference", hasReference );
                streamAttribute( os, parentheses, "parentheses", hasParentheses );
                streamAttribute( os, bracket, "bracket", hasBracket );
                streamAttribute( os, size, "size", hasSize );
            }
            return os;
        }
        
        Level::Level()
        :myValue()
        ,myAttributes( std::make_shared<LevelAttributes>() )
        {}
        Level::Level( const types::XsString& value )
        :myValue( value )
        ,myAttributes( std::make_shared<LevelAttributes>() )
        {}
        bool Level::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& Level::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& Level::streamName( std::ostream& os ) const
        {
            os << "level";
            return os;
        }
        std::ostream& Level::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        LevelAttributesPtr Level::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void Level::setAttributes( const LevelAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::XsString Level::getValue() const
        {
            return myValue;
        }
        void Level::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        
        
        /**************** Cancel ****************/
        CancelAttributes::CancelAttributes()
        :location()
        ,hasLocation( false )
        {}
        
        bool CancelAttributes::hasValues() const
        {
            return hasLocation;
        }
        
        std::ostream& CancelAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, location, "location", hasLocation );
            }
            return os;
        }
        
        Cancel::Cancel()
        :myValue()
        ,myAttributes( std::make_shared<CancelAttributes>() )
        {}
        Cancel::Cancel( const types::FifthsValue& value )
        :myValue( value )
        ,myAttributes( std::make_shared<CancelAttributes>() )
        {}
        bool Cancel::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& Cancel::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& Cancel::streamName( std::ostream& os ) const
        {
            os << "cancel";
            return os;
        }
        std::ostream& Cancel::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        CancelAttributesPtr Cancel::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void Cancel::setAttributes( const CancelAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::FifthsValue Cancel::getValue() const
        {
            return myValue;
        }
        void Cancel::setValue( const types::FifthsValue& value )
        {
            myValue = value;
        }
        
        
        /**************** Function ****************/
        FunctionAttributes::FunctionAttributes()
        :defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
        ,fontWeight( types::FontWeight::normal )
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        {}
        
        bool FunctionAttributes::hasValues() const
        {
            return hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight;
        }
        
        std::ostream& FunctionAttributes::toStream( std::ostream& os ) const
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
            }
            return os;
        }
        
        Function::Function()
        :myValue()
        ,myAttributes( std::make_shared<FunctionAttributes>() )
        {}
        Function::Function( const types::XsString& value )
        :myValue( value )
        ,myAttributes( std::make_shared<FunctionAttributes>() )
        {}
        bool Function::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& Function::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& Function::streamName( std::ostream& os ) const
        {
            os << "function";
            return os;
        }
        std::ostream& Function::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        FunctionAttributesPtr Function::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void Function::setAttributes( const FunctionAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::XsString Function::getValue() const
        {
            return myValue;
        }
        void Function::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        
        
        /**************** Kind ****************/
        KindAttributes::KindAttributes()
        :useSymbols()
        ,text()
        ,stackDegrees()
        ,parenthesesDegrees()
        ,bracketDegrees()
        ,defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
        ,fontWeight( types::FontWeight::normal )
        ,halign()
        ,hasUseSymbols( false )
        ,hasText( false )
        ,hasStackDegrees( false )
        ,hasParenthesesDegrees( false )
        ,hasBracketDegrees( false )
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        ,hasHalign( false )
        {}
        
        bool KindAttributes::hasValues() const
        {
            return hasUseSymbols ||
            hasText ||
            hasStackDegrees ||
            hasParenthesesDegrees ||
            hasBracketDegrees ||
            hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight ||
            hasHalign;
        }
        
        std::ostream& KindAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, useSymbols, "use-symbols", hasUseSymbols );
                streamAttribute( os, text, "text", hasText );
                streamAttribute( os, stackDegrees, "stack-degrees", hasStackDegrees );
                streamAttribute( os, parenthesesDegrees, "parentheses-degrees", hasParenthesesDegrees );
                streamAttribute( os, bracketDegrees, "bracket-degrees", hasBracketDegrees );
                streamAttribute( os, defaultX, "default-x", hasDefaultX );
                streamAttribute( os, defaultY, "default-y", hasDefaultY );
                streamAttribute( os, relativeX, "relative-x", hasRelativeX );
                streamAttribute( os, relativeY, "relative-y", hasRelativeY );
                streamAttribute( os, fontFamily, "font-family", hasFontFamily );
                streamAttribute( os, fontStyle, "font-style", hasFontStyle );
                streamAttribute( os, fontSize, "font-size", hasFontSize );
                streamAttribute( os, fontWeight, "font-weight", hasFontWeight );
                streamAttribute( os, halign, "halign", hasHalign );
            }
            return os;
        }
        
        Kind::Kind()
        :myValue( types::KindValue::major )
        ,myAttributes( std::make_shared<KindAttributes>() )
        {}
        Kind::Kind( const types::KindValue& value )
        :myValue( value )
        ,myAttributes( std::make_shared<KindAttributes>() )
        {}
        bool Kind::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& Kind::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& Kind::streamName( std::ostream& os ) const
        {
            os << "kind";
            return os;
        }
        std::ostream& Kind::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        KindAttributesPtr Kind::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void Kind::setAttributes( const KindAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::KindValue Kind::getValue() const
        {
            return myValue;
        }
        void Kind::setValue( const types::KindValue& value )
        {
            myValue = value;
        }
        
        
        /**************** Inversion ****************/
        InversionAttributes::InversionAttributes()
        :defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::FontSize{ types::CssFontSize::medium } )
        ,fontWeight( types::FontWeight::normal )
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        {}
        
        bool InversionAttributes::hasValues() const
        {
            return hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight;
        }
        
        std::ostream& InversionAttributes::toStream( std::ostream& os ) const
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
            }
            return os;
        }
        
        Inversion::Inversion()
        :myValue()
        ,myAttributes( std::make_shared<InversionAttributes>() )
        {}
        Inversion::Inversion( const types::NonNegativeInteger& value )
        :myValue( value )
        ,myAttributes( std::make_shared<InversionAttributes>() )
        {}
        bool Inversion::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& Inversion::streamAttributes( std::ostream& os ) const
        {
            if ( myAttributes )
            {
                myAttributes->toStream( os );
            }
            return os;
        }
        std::ostream& Inversion::streamName( std::ostream& os ) const
        {
            os << "inversion";
            return os;
        }
        std::ostream& Inversion::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        InversionAttributesPtr Inversion::getAttributes() const
        {
            return myAttributes;
        }
        /* if value.get()==nullptr then this is a no-op
         i.e. this function guards against setting Attributes to nullptr */
        void Inversion::setAttributes( const InversionAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        types::NonNegativeInteger Inversion::getValue() const
        {
            return myValue;
        }
        void Inversion::setValue( const types::NonNegativeInteger& value )
        {
            myValue = value;
        }
        
        /***************************************************************************************************************************
         ***************************************************************************************************************************
         ***************************************************************************************************************************
         ***************************************************************************************************************************
         **********************      Value Elements with NO Attributes *************************************************************
         ***************************************************************************************************************************
         ***************************************************************************************************************************
         ***************************************************************************************************************************
         ***************************************************************************************************************************/
        
        MidiChannel::MidiChannel()
        :myValue()
        {}
        MidiChannel::MidiChannel( const types::Midi16& value )
        :myValue( value )
        {}
        bool MidiChannel::hasAttributes() const
        {
            return false;
        }
        std::ostream& MidiChannel::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& MidiChannel::streamName( std::ostream& os ) const
        {
            os << "midi-channel";
            return os;
        }
        std::ostream& MidiChannel::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::Midi16 MidiChannel::getValue() const
        {
            return myValue;
        }
        void MidiChannel::setValue( const types::Midi16& value )
        {
            myValue = value;
        }
        MidiName::MidiName()
        :myValue()
        {}
        MidiName::MidiName( const types::XsString& value )
        :myValue( value )
        {}
        bool MidiName::hasAttributes() const
        {
            return false;
        }
        std::ostream& MidiName::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& MidiName::streamName( std::ostream& os ) const
        {
            os << "midi-name";
            return os;
        }
        std::ostream& MidiName::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::XsString MidiName::getValue() const
        {
            return myValue;
        }
        void MidiName::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        MidiBank::MidiBank()
        :myValue()
        {}
        MidiBank::MidiBank( const types::Midi16384& value )
        :myValue( value )
        {}
        bool MidiBank::hasAttributes() const
        {
            return false;
        }
        std::ostream& MidiBank::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& MidiBank::streamName( std::ostream& os ) const
        {
            os << "midi-bank";
            return os;
        }
        std::ostream& MidiBank::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::Midi16384 MidiBank::getValue() const
        {
            return myValue;
        }
        void MidiBank::setValue( const types::Midi16384& value )
        {
            myValue = value;
        }
        MidiProgram::MidiProgram()
        :myValue()
        {}
        MidiProgram::MidiProgram( const types::Midi128& value )
        :myValue( value )
        {}
        bool MidiProgram::hasAttributes() const
        {
            return false;
        }
        std::ostream& MidiProgram::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& MidiProgram::streamName( std::ostream& os ) const
        {
            os << "midi-program";
            return os;
        }
        std::ostream& MidiProgram::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::Midi128 MidiProgram::getValue() const
        {
            return myValue;
        }
        void MidiProgram::setValue( const types::Midi128& value )
        {
            myValue = value;
        }
        MidiUnpitched::MidiUnpitched()
        :myValue()
        {}
        MidiUnpitched::MidiUnpitched( const types::Midi128& value )
        :myValue( value )
        {}
        bool MidiUnpitched::hasAttributes() const
        {
            return false;
        }
        std::ostream& MidiUnpitched::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& MidiUnpitched::streamName( std::ostream& os ) const
        {
            os << "midi-unpitched";
            return os;
        }
        std::ostream& MidiUnpitched::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::Midi128 MidiUnpitched::getValue() const
        {
            return myValue;
        }
        void MidiUnpitched::setValue( const types::Midi128& value )
        {
            myValue = value;
        }
        Volume::Volume()
        :myValue()
        {}
        Volume::Volume( const types::Percent& value )
        :myValue( value )
        {}
        bool Volume::hasAttributes() const
        {
            return false;
        }
        std::ostream& Volume::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& Volume::streamName( std::ostream& os ) const
        {
            os << "volume";
            return os;
        }
        std::ostream& Volume::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::Percent Volume::getValue() const
        {
            return myValue;
        }
        void Volume::setValue( const types::Percent& value )
        {
            myValue = value;
        }
        Pan::Pan()
        :myValue()
        {}
        Pan::Pan( const types::RotationDegrees& value )
        :myValue( value )
        {}
        bool Pan::hasAttributes() const
        {
            return false;
        }
        std::ostream& Pan::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& Pan::streamName( std::ostream& os ) const
        {
            os << "pan";
            return os;
        }
        std::ostream& Pan::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::RotationDegrees Pan::getValue() const
        {
            return myValue;
        }
        void Pan::setValue( const types::RotationDegrees& value )
        {
            myValue = value;
        }
        Elevation::Elevation()
        :myValue()
        {}
        Elevation::Elevation( const types::RotationDegrees& value )
        :myValue( value )
        {}
        bool Elevation::hasAttributes() const
        {
            return false;
        }
        std::ostream& Elevation::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& Elevation::streamName( std::ostream& os ) const
        {
            os << "elevation";
            return os;
        }
        std::ostream& Elevation::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::RotationDegrees Elevation::getValue() const
        {
            return myValue;
        }
        void Elevation::setValue( const types::RotationDegrees& value )
        {
            myValue = value;
        }
        Ipa::Ipa()
        :myValue()
        {}
        Ipa::Ipa( const types::XsString& value )
        :myValue( value )
        {}
        bool Ipa::hasAttributes() const
        {
            return false;
        }
        std::ostream& Ipa::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& Ipa::streamName( std::ostream& os ) const
        {
            os << "ipa";
            return os;
        }
        std::ostream& Ipa::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::XsString Ipa::getValue() const
        {
            return myValue;
        }
        void Ipa::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        Mute::Mute()
        :myValue( types::MuteEnum::off )
        {}
        Mute::Mute( const types::MuteEnum& value )
        :myValue( value )
        {}
        bool Mute::hasAttributes() const
        {
            return false;
        }
        std::ostream& Mute::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& Mute::streamName( std::ostream& os ) const
        {
            os << "mute";
            return os;
        }
        std::ostream& Mute::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::MuteEnum Mute::getValue() const
        {
            return myValue;
        }
        void Mute::setValue( const types::MuteEnum& value )
        {
            myValue = value;
        }
        SemiPitched::SemiPitched()
        :myValue( types::SemiPitchedEnum::medium )
        {}
        SemiPitched::SemiPitched( const types::SemiPitchedEnum& value )
        :myValue( value )
        {}
        bool SemiPitched::hasAttributes() const
        {
            return false;
        }
        std::ostream& SemiPitched::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& SemiPitched::streamName( std::ostream& os ) const
        {
            os << "semi-pitched";
            return os;
        }
        std::ostream& SemiPitched::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::SemiPitchedEnum SemiPitched::getValue() const
        {
            return myValue;
        }
        void SemiPitched::setValue( const types::SemiPitchedEnum& value )
        {
            myValue = value;
        }
        Divisions::Divisions()
        :myValue()
        {}
        Divisions::Divisions( const types::PositiveDivisionsValue& value )
        :myValue( value )
        {}
        bool Divisions::hasAttributes() const
        {
            return false;
        }
        std::ostream& Divisions::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& Divisions::streamName( std::ostream& os ) const
        {
            os << "divisions";
            return os;
        }
        std::ostream& Divisions::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::PositiveDivisionsValue Divisions::getValue() const
        {
            return myValue;
        }
        void Divisions::setValue( const types::PositiveDivisionsValue& value )
        {
            myValue = value;
        }
        Staves::Staves()
        :myValue()
        {}
        Staves::Staves( const types::NonNegativeInteger& value )
        :myValue( value )
        {}
        bool Staves::hasAttributes() const
        {
            return false;
        }
        std::ostream& Staves::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& Staves::streamName( std::ostream& os ) const
        {
            os << "staves";
            return os;
        }
        std::ostream& Staves::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::NonNegativeInteger Staves::getValue() const
        {
            return myValue;
        }
        void Staves::setValue( const types::NonNegativeInteger& value )
        {
            myValue = value;
        }
        Instruments::Instruments()
        :myValue()
        {}
        Instruments::Instruments( const types::NonNegativeInteger& value )
        :myValue( value )
        {}
        bool Instruments::hasAttributes() const
        {
            return false;
        }
        std::ostream& Instruments::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& Instruments::streamName( std::ostream& os ) const
        {
            os << "instruments";
            return os;
        }
        std::ostream& Instruments::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::NonNegativeInteger Instruments::getValue() const
        {
            return myValue;
        }
        void Instruments::setValue( const types::NonNegativeInteger& value )
        {
            myValue = value;
        }
        Sign::Sign()
        :myValue( types::ClefSign::g )
        {}
        Sign::Sign( const types::ClefSign& value )
        :myValue( value )
        {}
        bool Sign::hasAttributes() const
        {
            return false;
        }
        std::ostream& Sign::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& Sign::streamName( std::ostream& os ) const
        {
            os << "sign";
            return os;
        }
        std::ostream& Sign::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::ClefSign Sign::getValue() const
        {
            return myValue;
        }
        void Sign::setValue( const types::ClefSign& value )
        {
            myValue = value;
        }
        Line::Line()
        :myValue()
        {}
        Line::Line( const types::StaffLine& value )
        :myValue( value )
        {}
        bool Line::hasAttributes() const
        {
            return false;
        }
        std::ostream& Line::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& Line::streamName( std::ostream& os ) const
        {
            os << "line";
            return os;
        }
        std::ostream& Line::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::StaffLine Line::getValue() const
        {
            return myValue;
        }
        void Line::setValue( const types::StaffLine& value )
        {
            myValue = value;
        }
        ClefOctaveChange::ClefOctaveChange()
        :myValue()
        {}
        ClefOctaveChange::ClefOctaveChange( const types::Integer& value )
        :myValue( value )
        {}
        bool ClefOctaveChange::hasAttributes() const
        {
            return false;
        }
        std::ostream& ClefOctaveChange::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& ClefOctaveChange::streamName( std::ostream& os ) const
        {
            os << "clef-octave-change";
            return os;
        }
        std::ostream& ClefOctaveChange::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::Integer ClefOctaveChange::getValue() const
        {
            return myValue;
        }
        void ClefOctaveChange::setValue( const types::Integer& value )
        {
            myValue = value;
        }
        TimeRelation::TimeRelation()
        :myValue( types::TimeRelationEnum::equals )
        {}
        TimeRelation::TimeRelation( const types::TimeRelationEnum& value )
        :myValue( value )
        {}
        bool TimeRelation::hasAttributes() const
        {
            return false;
        }
        std::ostream& TimeRelation::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& TimeRelation::streamName( std::ostream& os ) const
        {
            os << "time-relation";
            return os;
        }
        std::ostream& TimeRelation::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::TimeRelationEnum TimeRelation::getValue() const
        {
            return myValue;
        }
        void TimeRelation::setValue( const types::TimeRelationEnum& value )
        {
            myValue = value;
        }
        StaffType::StaffType()
        :myValue( types::StaffTypeEnum::regular )
        {}
        StaffType::StaffType( const types::StaffTypeEnum& value )
        :myValue( value )
        {}
        bool StaffType::hasAttributes() const
        {
            return false;
        }
        std::ostream& StaffType::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& StaffType::streamName( std::ostream& os ) const
        {
            os << "staff-type";
            return os;
        }
        std::ostream& StaffType::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::StaffTypeEnum StaffType::getValue() const
        {
            return myValue;
        }
        void StaffType::setValue( const types::StaffTypeEnum& value )
        {
            myValue = value;
        }
        StaffLines::StaffLines()
        :myValue()
        {}
        StaffLines::StaffLines( const types::NonNegativeInteger& value )
        :myValue( value )
        {}
        bool StaffLines::hasAttributes() const
        {
            return false;
        }
        std::ostream& StaffLines::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& StaffLines::streamName( std::ostream& os ) const
        {
            os << "staff-lines";
            return os;
        }
        std::ostream& StaffLines::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::NonNegativeInteger StaffLines::getValue() const
        {
            return myValue;
        }
        void StaffLines::setValue( const types::NonNegativeInteger& value )
        {
            myValue = value;
        }
        Capo::Capo()
        :myValue()
        {}
        Capo::Capo( const types::NonNegativeInteger& value )
        :myValue( value )
        {}
        bool Capo::hasAttributes() const
        {
            return false;
        }
        std::ostream& Capo::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& Capo::streamName( std::ostream& os ) const
        {
            os << "capo";
            return os;
        }
        std::ostream& Capo::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::NonNegativeInteger Capo::getValue() const
        {
            return myValue;
        }
        void Capo::setValue( const types::NonNegativeInteger& value )
        {
            myValue = value;
        }
        StaffSize::StaffSize()
        :myValue()
        {}
        StaffSize::StaffSize( const types::NonNegativeDecimal& value )
        :myValue( value )
        {}
        bool StaffSize::hasAttributes() const
        {
            return false;
        }
        std::ostream& StaffSize::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& StaffSize::streamName( std::ostream& os ) const
        {
            os << "staff-size";
            return os;
        }
        std::ostream& StaffSize::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::NonNegativeDecimal StaffSize::getValue() const
        {
            return myValue;
        }
        void StaffSize::setValue( const types::NonNegativeDecimal& value )
        {
            myValue = value;
        }
        SenzaMisura::SenzaMisura()
        :myValue()
        {}
        SenzaMisura::SenzaMisura( const types::XsString& value )
        :myValue( value )
        {}
        bool SenzaMisura::hasAttributes() const
        {
            return false;
        }
        std::ostream& SenzaMisura::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& SenzaMisura::streamName( std::ostream& os ) const
        {
            os << "senza-misura";
            return os;
        }
        std::ostream& SenzaMisura::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::XsString SenzaMisura::getValue() const
        {
            return myValue;
        }
        void SenzaMisura::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        Diatonic::Diatonic()
        :myValue()
        {}
        Diatonic::Diatonic( const types::Integer& value )
        :myValue( value )
        {}
        bool Diatonic::hasAttributes() const
        {
            return false;
        }
        std::ostream& Diatonic::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& Diatonic::streamName( std::ostream& os ) const
        {
            os << "diatonic";
            return os;
        }
        std::ostream& Diatonic::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::Integer Diatonic::getValue() const
        {
            return myValue;
        }
        void Diatonic::setValue( const types::Integer& value )
        {
            myValue = value;
        }
        Chromatic::Chromatic()
        :myValue()
        {}
        Chromatic::Chromatic( const types::Semitones& value )
        :myValue( value )
        {}
        bool Chromatic::hasAttributes() const
        {
            return false;
        }
        std::ostream& Chromatic::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& Chromatic::streamName( std::ostream& os ) const
        {
            os << "chromatic";
            return os;
        }
        std::ostream& Chromatic::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::Semitones Chromatic::getValue() const
        {
            return myValue;
        }
        void Chromatic::setValue( const types::Semitones& value )
        {
            myValue = value;
        }
        OctaveChange::OctaveChange()
        :myValue()
        {}
        OctaveChange::OctaveChange( const types::Integer& value )
        :myValue( value )
        {}
        bool OctaveChange::hasAttributes() const
        {
            return false;
        }
        std::ostream& OctaveChange::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& OctaveChange::streamName( std::ostream& os ) const
        {
            os << "octave-change";
            return os;
        }
        std::ostream& OctaveChange::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::Integer OctaveChange::getValue() const
        {
            return myValue;
        }
        void OctaveChange::setValue( const types::Integer& value )
        {
            myValue = value;
        }
        AccordionMiddle::AccordionMiddle()
        :myValue()
        {}
        AccordionMiddle::AccordionMiddle( const types::AccordionMiddleValue& value )
        :myValue( value )
        {}
        bool AccordionMiddle::hasAttributes() const
        {
            return false;
        }
        std::ostream& AccordionMiddle::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& AccordionMiddle::streamName( std::ostream& os ) const
        {
            os << "accordion-middle";
            return os;
        }
        std::ostream& AccordionMiddle::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::AccordionMiddleValue AccordionMiddle::getValue() const
        {
            return myValue;
        }
        void AccordionMiddle::setValue( const types::AccordionMiddleValue& value )
        {
            myValue = value;
        }
        FrameStrings::FrameStrings()
        :myValue()
        {}
        FrameStrings::FrameStrings( const types::PositiveInteger& value )
        :myValue( value )
        {}
        bool FrameStrings::hasAttributes() const
        {
            return false;
        }
        std::ostream& FrameStrings::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& FrameStrings::streamName( std::ostream& os ) const
        {
            os << "frame-strings";
            return os;
        }
        std::ostream& FrameStrings::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::PositiveInteger FrameStrings::getValue() const
        {
            return myValue;
        }
        void FrameStrings::setValue( const types::PositiveInteger& value )
        {
            myValue = value;
        }
        FrameFrets::FrameFrets()
        :myValue()
        {}
        FrameFrets::FrameFrets( const types::PositiveInteger& value )
        :myValue( value )
        {}
        bool FrameFrets::hasAttributes() const
        {
            return false;
        }
        std::ostream& FrameFrets::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& FrameFrets::streamName( std::ostream& os ) const
        {
            os << "frame-frets";
            return os;
        }
        std::ostream& FrameFrets::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::PositiveInteger FrameFrets::getValue() const
        {
            return myValue;
        }
        void FrameFrets::setValue( const types::PositiveInteger& value )
        {
            myValue = value;
        }
        MetronomeRelation::MetronomeRelation()
        :myValue()
        {}
        MetronomeRelation::MetronomeRelation( const types::XsString& value )
        :myValue( value )
        {}
        bool MetronomeRelation::hasAttributes() const
        {
            return false;
        }
        std::ostream& MetronomeRelation::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& MetronomeRelation::streamName( std::ostream& os ) const
        {
            os << "metronome-relation";
            return os;
        }
        std::ostream& MetronomeRelation::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::XsString MetronomeRelation::getValue() const
        {
            return myValue;
        }
        void MetronomeRelation::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        MetronomeType::MetronomeType()
        :myValue( types::NoteTypeValue::eighth )
        {}
        MetronomeType::MetronomeType( const types::NoteTypeValue& value )
        :myValue( value )
        {}
        bool MetronomeType::hasAttributes() const
        {
            return false;
        }
        std::ostream& MetronomeType::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& MetronomeType::streamName( std::ostream& os ) const
        {
            os << "metronome-type";
            return os;
        }
        std::ostream& MetronomeType::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::NoteTypeValue MetronomeType::getValue() const
        {
            return myValue;
        }
        void MetronomeType::setValue( const types::NoteTypeValue& value )
        {
            myValue = value;
        }
        PedalStep::PedalStep()
        :myValue( types::StepEnum::a )
        {}
        PedalStep::PedalStep( const types::StepEnum& value )
        :myValue( value )
        {}
        bool PedalStep::hasAttributes() const
        {
            return false;
        }
        std::ostream& PedalStep::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& PedalStep::streamName( std::ostream& os ) const
        {
            os << "pedal-step";
            return os;
        }
        std::ostream& PedalStep::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::StepEnum PedalStep::getValue() const
        {
            return myValue;
        }
        void PedalStep::setValue( const types::StepEnum& value )
        {
            myValue = value;
        }
        PedalAlter::PedalAlter()
        :myValue()
        {}
        PedalAlter::PedalAlter( const types::Semitones& value )
        :myValue( value )
        {}
        bool PedalAlter::hasAttributes() const
        {
            return false;
        }
        std::ostream& PedalAlter::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& PedalAlter::streamName( std::ostream& os ) const
        {
            os << "pedal-alter";
            return os;
        }
        std::ostream& PedalAlter::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::Semitones PedalAlter::getValue() const
        {
            return myValue;
        }
        void PedalAlter::setValue( const types::Semitones& value )
        {
            myValue = value;
        }
        Glass::Glass()
        :myValue( types::GlassEnum::windChimes )
        {}
        Glass::Glass( const types::GlassEnum& value )
        :myValue( value )
        {}
        bool Glass::hasAttributes() const
        {
            return false;
        }
        std::ostream& Glass::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& Glass::streamName( std::ostream& os ) const
        {
            os << "glass";
            return os;
        }
        std::ostream& Glass::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::GlassEnum Glass::getValue() const
        {
            return myValue;
        }
        void Glass::setValue( const types::GlassEnum& value )
        {
            myValue = value;
        }
        Metal::Metal()
        :myValue( types::MetalEnum::bell )
        {}
        Metal::Metal( const types::MetalEnum& value )
        :myValue( value )
        {}
        bool Metal::hasAttributes() const
        {
            return false;
        }
        std::ostream& Metal::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& Metal::streamName( std::ostream& os ) const
        {
            os << "metal";
            return os;
        }
        std::ostream& Metal::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::MetalEnum Metal::getValue() const
        {
            return myValue;
        }
        void Metal::setValue( const types::MetalEnum& value )
        {
            myValue = value;
        }
        Wood::Wood()
        :myValue( types::WoodEnum::claves )
        {}
        Wood::Wood( const types::WoodEnum& value )
        :myValue( value )
        {}
        bool Wood::hasAttributes() const
        {
            return false;
        }
        std::ostream& Wood::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& Wood::streamName( std::ostream& os ) const
        {
            os << "wood";
            return os;
        }
        std::ostream& Wood::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::WoodEnum Wood::getValue() const
        {
            return myValue;
        }
        void Wood::setValue( const types::WoodEnum& value )
        {
            myValue = value;
        }
        Pitched::Pitched()
        :myValue( types::PitchedEnum::xylophone )
        {}
        Pitched::Pitched( const types::PitchedEnum& value )
        :myValue( value )
        {}
        bool Pitched::hasAttributes() const
        {
            return false;
        }
        std::ostream& Pitched::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& Pitched::streamName( std::ostream& os ) const
        {
            os << "pitched";
            return os;
        }
        std::ostream& Pitched::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::PitchedEnum Pitched::getValue() const
        {
            return myValue;
        }
        void Pitched::setValue( const types::PitchedEnum& value )
        {
            myValue = value;
        }
        Membrane::Membrane()
        :myValue( types::MembraneEnum::snareDrum )
        {}
        Membrane::Membrane( const types::MembraneEnum& value )
        :myValue( value )
        {}
        bool Membrane::hasAttributes() const
        {
            return false;
        }
        std::ostream& Membrane::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& Membrane::streamName( std::ostream& os ) const
        {
            os << "membrane";
            return os;
        }
        std::ostream& Membrane::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::MembraneEnum Membrane::getValue() const
        {
            return myValue;
        }
        void Membrane::setValue( const types::MembraneEnum& value )
        {
            myValue = value;
        }
        Effect::Effect()
        :myValue( types::EffectEnum::anvil )
        {}
        Effect::Effect( const types::EffectEnum& value )
        :myValue( value )
        {}
        bool Effect::hasAttributes() const
        {
            return false;
        }
        std::ostream& Effect::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& Effect::streamName( std::ostream& os ) const
        {
            os << "effect";
            return os;
        }
        std::ostream& Effect::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::EffectEnum Effect::getValue() const
        {
            return myValue;
        }
        void Effect::setValue( const types::EffectEnum& value )
        {
            myValue = value;
        }
        StickLocation::StickLocation()
        :myValue( types::StickLocationEnum::center )
        {}
        StickLocation::StickLocation( const types::StickLocationEnum& value )
        :myValue( value )
        {}
        bool StickLocation::hasAttributes() const
        {
            return false;
        }
        std::ostream& StickLocation::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& StickLocation::streamName( std::ostream& os ) const
        {
            os << "stick-location";
            return os;
        }
        std::ostream& StickLocation::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::StickLocationEnum StickLocation::getValue() const
        {
            return myValue;
        }
        void StickLocation::setValue( const types::StickLocationEnum& value )
        {
            myValue = value;
        }
        OtherPercussion::OtherPercussion()
        :myValue()
        {}
        OtherPercussion::OtherPercussion( const types::XsString& value )
        :myValue( value )
        {}
        bool OtherPercussion::hasAttributes() const
        {
            return false;
        }
        std::ostream& OtherPercussion::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& OtherPercussion::streamName( std::ostream& os ) const
        {
            os << "other-percussion";
            return os;
        }
        std::ostream& OtherPercussion::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::XsString OtherPercussion::getValue() const
        {
            return myValue;
        }
        void OtherPercussion::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        StickType::StickType()
        :myValue( types::StickTypeEnum::yarn )
        {}
        StickType::StickType( const types::StickTypeEnum& value )
        :myValue( value )
        {}
        bool StickType::hasAttributes() const
        {
            return false;
        }
        std::ostream& StickType::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& StickType::streamName( std::ostream& os ) const
        {
            os << "stick-type";
            return os;
        }
        std::ostream& StickType::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::StickTypeEnum StickType::getValue() const
        {
            return myValue;
        }
        void StickType::setValue( const types::StickTypeEnum& value )
        {
            myValue = value;
        }
        StickMaterial::StickMaterial()
        :myValue( types::StickMaterialEnum::medium )
        {}
        StickMaterial::StickMaterial( const types::StickMaterialEnum& value )
        :myValue( value )
        {}
        bool StickMaterial::hasAttributes() const
        {
            return false;
        }
        std::ostream& StickMaterial::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& StickMaterial::streamName( std::ostream& os ) const
        {
            os << "stick-material";
            return os;
        }
        std::ostream& StickMaterial::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::StickMaterialEnum StickMaterial::getValue() const
        {
            return myValue;
        }
        void StickMaterial::setValue( const types::StickMaterialEnum& value )
        {
            myValue = value;
        }
        EncodingDate::EncodingDate()
        :myValue()
        {}
        EncodingDate::EncodingDate( const types::Date& value )
        :myValue( value )
        {}
        bool EncodingDate::hasAttributes() const
        {
            return false;
        }
        std::ostream& EncodingDate::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& EncodingDate::streamName( std::ostream& os ) const
        {
            os << "encoding-date";
            return os;
        }
        std::ostream& EncodingDate::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::Date EncodingDate::getValue() const
        {
            return myValue;
        }
        void EncodingDate::setValue( const types::Date& value )
        {
            myValue = value;
        }
        Software::Software()
        :myValue()
        {}
        Software::Software( const types::XsString& value )
        :myValue( value )
        {}
        bool Software::hasAttributes() const
        {
            return false;
        }
        std::ostream& Software::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& Software::streamName( std::ostream& os ) const
        {
            os << "software";
            return os;
        }
        std::ostream& Software::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::XsString Software::getValue() const
        {
            return myValue;
        }
        void Software::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        EncodingDescription::EncodingDescription()
        :myValue()
        {}
        EncodingDescription::EncodingDescription( const types::XsString& value )
        :myValue( value )
        {}
        bool EncodingDescription::hasAttributes() const
        {
            return false;
        }
        std::ostream& EncodingDescription::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& EncodingDescription::streamName( std::ostream& os ) const
        {
            os << "encoding-description";
            return os;
        }
        std::ostream& EncodingDescription::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::XsString EncodingDescription::getValue() const
        {
            return myValue;
        }
        void EncodingDescription::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        Source::Source()
        :myValue()
        {}
        Source::Source( const types::XsString& value )
        :myValue( value )
        {}
        bool Source::hasAttributes() const
        {
            return false;
        }
        std::ostream& Source::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& Source::streamName( std::ostream& os ) const
        {
            os << "source";
            return os;
        }
        std::ostream& Source::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::XsString Source::getValue() const
        {
            return myValue;
        }
        void Source::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        MeasureDistance::MeasureDistance()
        :myValue()
        {}
        MeasureDistance::MeasureDistance( const types::TenthsValue& value )
        :myValue( value )
        {}
        bool MeasureDistance::hasAttributes() const
        {
            return false;
        }
        std::ostream& MeasureDistance::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& MeasureDistance::streamName( std::ostream& os ) const
        {
            os << "measure-distance";
            return os;
        }
        std::ostream& MeasureDistance::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::TenthsValue MeasureDistance::getValue() const
        {
            return myValue;
        }
        void MeasureDistance::setValue( const types::TenthsValue& value )
        {
            myValue = value;
        }
        PageHeight::PageHeight()
        :myValue()
        {}
        PageHeight::PageHeight( const types::TenthsValue& value )
        :myValue( value )
        {}
        bool PageHeight::hasAttributes() const
        {
            return false;
        }
        std::ostream& PageHeight::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& PageHeight::streamName( std::ostream& os ) const
        {
            os << "page-height";
            return os;
        }
        std::ostream& PageHeight::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::TenthsValue PageHeight::getValue() const
        {
            return myValue;
        }
        void PageHeight::setValue( const types::TenthsValue& value )
        {
            myValue = value;
        }
        PageWidth::PageWidth()
        :myValue()
        {}
        PageWidth::PageWidth( const types::TenthsValue& value )
        :myValue( value )
        {}
        bool PageWidth::hasAttributes() const
        {
            return false;
        }
        std::ostream& PageWidth::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& PageWidth::streamName( std::ostream& os ) const
        {
            os << "page-width";
            return os;
        }
        std::ostream& PageWidth::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::TenthsValue PageWidth::getValue() const
        {
            return myValue;
        }
        void PageWidth::setValue( const types::TenthsValue& value )
        {
            myValue = value;
        }
        Millimeters::Millimeters()
        :myValue()
        {}
        Millimeters::Millimeters( const types::MillimetersValue& value )
        :myValue( value )
        {}
        bool Millimeters::hasAttributes() const
        {
            return false;
        }
        std::ostream& Millimeters::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& Millimeters::streamName( std::ostream& os ) const
        {
            os << "millimeters";
            return os;
        }
        std::ostream& Millimeters::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::MillimetersValue Millimeters::getValue() const
        {
            return myValue;
        }
        void Millimeters::setValue( const types::MillimetersValue& value )
        {
            myValue = value;
        }
        Tenths::Tenths()
        :myValue()
        {}
        Tenths::Tenths( const types::TenthsValue& value )
        :myValue( value )
        {}
        bool Tenths::hasAttributes() const
        {
            return false;
        }
        std::ostream& Tenths::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& Tenths::streamName( std::ostream& os ) const
        {
            os << "tenths";
            return os;
        }
        std::ostream& Tenths::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::TenthsValue Tenths::getValue() const
        {
            return myValue;
        }
        void Tenths::setValue( const types::TenthsValue& value )
        {
            myValue = value;
        }
        StaffDistance::StaffDistance()
        :myValue()
        {}
        StaffDistance::StaffDistance( const types::TenthsValue& value )
        :myValue( value )
        {}
        bool StaffDistance::hasAttributes() const
        {
            return false;
        }
        std::ostream& StaffDistance::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& StaffDistance::streamName( std::ostream& os ) const
        {
            os << "staff-distance";
            return os;
        }
        std::ostream& StaffDistance::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::TenthsValue StaffDistance::getValue() const
        {
            return myValue;
        }
        void StaffDistance::setValue( const types::TenthsValue& value )
        {
            myValue = value;
        }
        SystemDistance::SystemDistance()
        :myValue()
        {}
        SystemDistance::SystemDistance( const types::TenthsValue& value )
        :myValue( value )
        {}
        bool SystemDistance::hasAttributes() const
        {
            return false;
        }
        std::ostream& SystemDistance::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& SystemDistance::streamName( std::ostream& os ) const
        {
            os << "system-distance";
            return os;
        }
        std::ostream& SystemDistance::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::TenthsValue SystemDistance::getValue() const
        {
            return myValue;
        }
        void SystemDistance::setValue( const types::TenthsValue& value )
        {
            myValue = value;
        }
        TopSystemDistance::TopSystemDistance()
        :myValue()
        {}
        TopSystemDistance::TopSystemDistance( const types::TenthsValue& value )
        :myValue( value )
        {}
        bool TopSystemDistance::hasAttributes() const
        {
            return false;
        }
        std::ostream& TopSystemDistance::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& TopSystemDistance::streamName( std::ostream& os ) const
        {
            os << "top-system-distance";
            return os;
        }
        std::ostream& TopSystemDistance::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::TenthsValue TopSystemDistance::getValue() const
        {
            return myValue;
        }
        void TopSystemDistance::setValue( const types::TenthsValue& value )
        {
            myValue = value;
        }
        ArrowDirection::ArrowDirection()
        :myValue( types::ArrowDirectionEnum::up )
        {}
        ArrowDirection::ArrowDirection( const types::ArrowDirectionEnum& value )
        :myValue( value )
        {}
        bool ArrowDirection::hasAttributes() const
        {
            return false;
        }
        std::ostream& ArrowDirection::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& ArrowDirection::streamName( std::ostream& os ) const
        {
            os << "arrow-direction";
            return os;
        }
        std::ostream& ArrowDirection::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::ArrowDirectionEnum ArrowDirection::getValue() const
        {
            return myValue;
        }
        void ArrowDirection::setValue( const types::ArrowDirectionEnum& value )
        {
            myValue = value;
        }
        ArrowStyle::ArrowStyle()
        :myValue( types::ArrowStyleEnum::single )
        {}
        ArrowStyle::ArrowStyle( const types::ArrowStyleEnum& value )
        :myValue( value )
        {}
        bool ArrowStyle::hasAttributes() const
        {
            return false;
        }
        std::ostream& ArrowStyle::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& ArrowStyle::streamName( std::ostream& os ) const
        {
            os << "arrow-style";
            return os;
        }
        std::ostream& ArrowStyle::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::ArrowStyleEnum ArrowStyle::getValue() const
        {
            return myValue;
        }
        void ArrowStyle::setValue( const types::ArrowStyleEnum& value )
        {
            myValue = value;
        }
        CircularArrow::CircularArrow()
        :myValue( types::CircularArrowEnum::clockwise )
        {}
        CircularArrow::CircularArrow( const types::CircularArrowEnum& value )
        :myValue( value )
        {}
        bool CircularArrow::hasAttributes() const
        {
            return false;
        }
        std::ostream& CircularArrow::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& CircularArrow::streamName( std::ostream& os ) const
        {
            os << "circular-arrow";
            return os;
        }
        std::ostream& CircularArrow::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::CircularArrowEnum CircularArrow::getValue() const
        {
            return myValue;
        }
        void CircularArrow::setValue( const types::CircularArrowEnum& value )
        {
            myValue = value;
        }
        BendAlter::BendAlter()
        :myValue()
        {}
        BendAlter::BendAlter( const types::Semitones& value )
        :myValue( value )
        {}
        bool BendAlter::hasAttributes() const
        {
            return false;
        }
        std::ostream& BendAlter::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& BendAlter::streamName( std::ostream& os ) const
        {
            os << "bend-alter";
            return os;
        }
        std::ostream& BendAlter::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::Semitones BendAlter::getValue() const
        {
            return myValue;
        }
        void BendAlter::setValue( const types::Semitones& value )
        {
            myValue = value;
        }
        HoleType::HoleType()
        :myValue()
        {}
        HoleType::HoleType( const types::XsString& value )
        :myValue( value )
        {}
        bool HoleType::hasAttributes() const
        {
            return false;
        }
        std::ostream& HoleType::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& HoleType::streamName( std::ostream& os ) const
        {
            os << "hole-type";
            return os;
        }
        std::ostream& HoleType::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::XsString HoleType::getValue() const
        {
            return myValue;
        }
        void HoleType::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        HoleShape::HoleShape()
        :myValue()
        {}
        HoleShape::HoleShape( const types::XsString& value )
        :myValue( value )
        {}
        bool HoleShape::hasAttributes() const
        {
            return false;
        }
        std::ostream& HoleShape::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& HoleShape::streamName( std::ostream& os ) const
        {
            os << "hole-shape";
            return os;
        }
        std::ostream& HoleShape::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::XsString HoleShape::getValue() const
        {
            return myValue;
        }
        void HoleShape::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        Syllabic::Syllabic()
        :myValue( types::SyllabicEnum::begin )
        {}
        Syllabic::Syllabic( const types::SyllabicEnum& value )
        :myValue( value )
        {}
        bool Syllabic::hasAttributes() const
        {
            return false;
        }
        std::ostream& Syllabic::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& Syllabic::streamName( std::ostream& os ) const
        {
            os << "syllabic";
            return os;
        }
        std::ostream& Syllabic::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::SyllabicEnum Syllabic::getValue() const
        {
            return myValue;
        }
        void Syllabic::setValue( const types::SyllabicEnum& value )
        {
            myValue = value;
        }
//        Syllabic::Syllabic()
//        :myValue( types::SyllabicEnum:: )
//        {}
//        Syllabic::Syllabic( const types::SyllabicEnum& value )
//        :myValue( value )
//        {}
//        bool Syllabic::hasAttributes() const
//        {
//            return false;
//        }
//        std::ostream& Syllabic::streamAttributes( std::ostream& os ) const
//        {
//            return os;
//        }
//        std::ostream& Syllabic::streamName( std::ostream& os ) const
//        {
//            os << "syllabic";
//            return os;
//        }
//        std::ostream& Syllabic::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
//        {
//            isOneLineOnly = true;
//            os << myValue;
//            return os;
//        }
//        types::SyllabicEnum Syllabic::getValue() const
//        {
//            return myValue;
//        }
//        void Syllabic::setValue( const types::SyllabicEnum& value )
//        {
//            myValue = value;
//        }
        Step::Step()
        :myValue( types::StepEnum::a )
        {}
        Step::Step( const types::StepEnum& value )
        :myValue( value )
        {}
        bool Step::hasAttributes() const
        {
            return false;
        }
        std::ostream& Step::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& Step::streamName( std::ostream& os ) const
        {
            os << "step";
            return os;
        }
        std::ostream& Step::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::StepEnum Step::getValue() const
        {
            return myValue;
        }
        void Step::setValue( const types::StepEnum& value )
        {
            myValue = value;
        }
        Alter::Alter()
        :myValue()
        {}
        Alter::Alter( const types::Semitones& value )
        :myValue( value )
        {}
        bool Alter::hasAttributes() const
        {
            return false;
        }
        std::ostream& Alter::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& Alter::streamName( std::ostream& os ) const
        {
            os << "alter";
            return os;
        }
        std::ostream& Alter::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::Semitones Alter::getValue() const
        {
            return myValue;
        }
        void Alter::setValue( const types::Semitones& value )
        {
            myValue = value;
        }
        Octave::Octave()
        :myValue()
        {}
        Octave::Octave( const types::OctaveValue& value )
        :myValue( value )
        {}
        bool Octave::hasAttributes() const
        {
            return false;
        }
        std::ostream& Octave::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& Octave::streamName( std::ostream& os ) const
        {
            os << "octave";
            return os;
        }
        std::ostream& Octave::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::OctaveValue Octave::getValue() const
        {
            return myValue;
        }
        void Octave::setValue( const types::OctaveValue& value )
        {
            myValue = value;
        }
        ActualNotes::ActualNotes()
        :myValue()
        {}
        ActualNotes::ActualNotes( const types::NonNegativeInteger& value )
        :myValue( value )
        {}
        bool ActualNotes::hasAttributes() const
        {
            return false;
        }
        std::ostream& ActualNotes::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& ActualNotes::streamName( std::ostream& os ) const
        {
            os << "actual-notes";
            return os;
        }
        std::ostream& ActualNotes::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::NonNegativeInteger ActualNotes::getValue() const
        {
            return myValue;
        }
        void ActualNotes::setValue( const types::NonNegativeInteger& value )
        {
            myValue = value;
        }
        NormalNotes::NormalNotes()
        :myValue()
        {}
        NormalNotes::NormalNotes( const types::NonNegativeInteger& value )
        :myValue( value )
        {}
        bool NormalNotes::hasAttributes() const
        {
            return false;
        }
        std::ostream& NormalNotes::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& NormalNotes::streamName( std::ostream& os ) const
        {
            os << "normal-notes";
            return os;
        }
        std::ostream& NormalNotes::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::NonNegativeInteger NormalNotes::getValue() const
        {
            return myValue;
        }
        void NormalNotes::setValue( const types::NonNegativeInteger& value )
        {
            myValue = value;
        }
        NormalType::NormalType()
        :myValue( types::NoteTypeValue::eighth )
        {}
        NormalType::NormalType( const types::NoteTypeValue& value )
        :myValue( value )
        {}
        bool NormalType::hasAttributes() const
        {
            return false;
        }
        std::ostream& NormalType::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& NormalType::streamName( std::ostream& os ) const
        {
            os << "normal-type";
            return os;
        }
        std::ostream& NormalType::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::NoteTypeValue NormalType::getValue() const
        {
            return myValue;
        }
        void NormalType::setValue( const types::NoteTypeValue& value )
        {
            myValue = value;
        }
        CreditType::CreditType()
        :myValue()
        {}
        CreditType::CreditType( const types::XsString& value )
        :myValue( value )
        {}
        bool CreditType::hasAttributes() const
        {
            return false;
        }
        std::ostream& CreditType::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& CreditType::streamName( std::ostream& os ) const
        {
            os << "credit-type";
            return os;
        }
        std::ostream& CreditType::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::XsString CreditType::getValue() const
        {
            return myValue;
        }
        void CreditType::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        InstrumentName::InstrumentName()
        :myValue()
        {}
        InstrumentName::InstrumentName( const types::XsString& value )
        :myValue( value )
        {}
        bool InstrumentName::hasAttributes() const
        {
            return false;
        }
        std::ostream& InstrumentName::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& InstrumentName::streamName( std::ostream& os ) const
        {
            os << "instrument-name";
            return os;
        }
        std::ostream& InstrumentName::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::XsString InstrumentName::getValue() const
        {
            return myValue;
        }
        void InstrumentName::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        InstrumentAbbreviation::InstrumentAbbreviation()
        :myValue()
        {}
        InstrumentAbbreviation::InstrumentAbbreviation( const types::XsString& value )
        :myValue( value )
        {}
        bool InstrumentAbbreviation::hasAttributes() const
        {
            return false;
        }
        std::ostream& InstrumentAbbreviation::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& InstrumentAbbreviation::streamName( std::ostream& os ) const
        {
            os << "instrument-abbreviation";
            return os;
        }
        std::ostream& InstrumentAbbreviation::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::XsString InstrumentAbbreviation::getValue() const
        {
            return myValue;
        }
        void InstrumentAbbreviation::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        InstrumentSound::InstrumentSound()
        :myValue()
        {}
        InstrumentSound::InstrumentSound( const types::XsString& value )
        :myValue( value )
        {}
        bool InstrumentSound::hasAttributes() const
        {
            return false;
        }
        std::ostream& InstrumentSound::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& InstrumentSound::streamName( std::ostream& os ) const
        {
            os << "instrument-sound";
            return os;
        }
        std::ostream& InstrumentSound::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::XsString InstrumentSound::getValue() const
        {
            return myValue;
        }
        void InstrumentSound::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        Ensemble::Ensemble()
        :myValue()
        {}
        Ensemble::Ensemble( const types::PositiveIntegerOrEmpty& value )
        :myValue( value )
        {}
        bool Ensemble::hasAttributes() const
        {
            return false;
        }
        std::ostream& Ensemble::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& Ensemble::streamName( std::ostream& os ) const
        {
            os << "ensemble";
            return os;
        }
        std::ostream& Ensemble::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::PositiveIntegerOrEmpty Ensemble::getValue() const
        {
            return myValue;
        }
        void Ensemble::setValue( const types::PositiveIntegerOrEmpty& value )
        {
            myValue = value;
        }
        Group::Group()
        :myValue()
        {}
        Group::Group( const types::XsString& value )
        :myValue( value )
        {}
        bool Group::hasAttributes() const
        {
            return false;
        }
        std::ostream& Group::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& Group::streamName( std::ostream& os ) const
        {
            os << "group";
            return os;
        }
        std::ostream& Group::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::XsString Group::getValue() const
        {
            return myValue;
        }
        void Group::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        VirtualLibrary::VirtualLibrary()
        :myValue()
        {}
        VirtualLibrary::VirtualLibrary( const types::XsString& value )
        :myValue( value )
        {}
        bool VirtualLibrary::hasAttributes() const
        {
            return false;
        }
        std::ostream& VirtualLibrary::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& VirtualLibrary::streamName( std::ostream& os ) const
        {
            os << "virtual-library";
            return os;
        }
        std::ostream& VirtualLibrary::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::XsString VirtualLibrary::getValue() const
        {
            return myValue;
        }
        void VirtualLibrary::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        VirtualName::VirtualName()
        :myValue()
        {}
        VirtualName::VirtualName( const types::XsString& value )
        :myValue( value )
        {}
        bool VirtualName::hasAttributes() const
        {
            return false;
        }
        std::ostream& VirtualName::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& VirtualName::streamName( std::ostream& os ) const
        {
            os << "virtual-name";
            return os;
        }
        std::ostream& VirtualName::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::XsString VirtualName::getValue() const
        {
            return myValue;
        }
        void VirtualName::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        WorkNumber::WorkNumber()
        :myValue()
        {}
        WorkNumber::WorkNumber( const types::XsString& value )
        :myValue( value )
        {}
        bool WorkNumber::hasAttributes() const
        {
            return false;
        }
        std::ostream& WorkNumber::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& WorkNumber::streamName( std::ostream& os ) const
        {
            os << "work-number";
            return os;
        }
        std::ostream& WorkNumber::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::XsString WorkNumber::getValue() const
        {
            return myValue;
        }
        void WorkNumber::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        WorkTitle::WorkTitle()
        :myValue()
        {}
        WorkTitle::WorkTitle( const types::XsString& value )
        :myValue( value )
        {}
        bool WorkTitle::hasAttributes() const
        {
            return false;
        }
        std::ostream& WorkTitle::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& WorkTitle::streamName( std::ostream& os ) const
        {
            os << "work-title";
            return os;
        }
        std::ostream& WorkTitle::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::XsString WorkTitle::getValue() const
        {
            return myValue;
        }
        void WorkTitle::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        Staff::Staff()
        :myValue()
        {}
        Staff::Staff( const types::PositiveInteger& value )
        :myValue( value )
        {}
        bool Staff::hasAttributes() const
        {
            return false;
        }
        std::ostream& Staff::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& Staff::streamName( std::ostream& os ) const
        {
            os << "staff";
            return os;
        }
        std::ostream& Staff::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::PositiveInteger Staff::getValue() const
        {
            return myValue;
        }
        void Staff::setValue( const types::PositiveInteger& value )
        {
            myValue = value;
        }
        TuningStep::TuningStep()
        :myValue( types::StepEnum::a )
        {}
        TuningStep::TuningStep( const types::StepEnum& value )
        :myValue( value )
        {}
        bool TuningStep::hasAttributes() const
        {
            return false;
        }
        std::ostream& TuningStep::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& TuningStep::streamName( std::ostream& os ) const
        {
            os << "tuning-step";
            return os;
        }
        std::ostream& TuningStep::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::StepEnum TuningStep::getValue() const
        {
            return myValue;
        }
        void TuningStep::setValue( const types::StepEnum& value )
        {
            myValue = value;
        }
        TuningAlter::TuningAlter()
        :myValue()
        {}
        TuningAlter::TuningAlter( const types::Semitones& value )
        :myValue( value )
        {}
        bool TuningAlter::hasAttributes() const
        {
            return false;
        }
        std::ostream& TuningAlter::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& TuningAlter::streamName( std::ostream& os ) const
        {
            os << "tuning-alter";
            return os;
        }
        std::ostream& TuningAlter::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::Semitones TuningAlter::getValue() const
        {
            return myValue;
        }
        void TuningAlter::setValue( const types::Semitones& value )
        {
            myValue = value;
        }
        TuningOctave::TuningOctave()
        :myValue()
        {}
        TuningOctave::TuningOctave( const types::OctaveValue& value )
        :myValue( value )
        {}
        bool TuningOctave::hasAttributes() const
        {
            return false;
        }
        std::ostream& TuningOctave::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& TuningOctave::streamName( std::ostream& os ) const
        {
            os << "tuning-octave";
            return os;
        }
        std::ostream& TuningOctave::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::OctaveValue TuningOctave::getValue() const
        {
            return myValue;
        }
        void TuningOctave::setValue( const types::OctaveValue& value )
        {
            myValue = value;
        }
        Voice::Voice()
        :myValue()
        {}
        Voice::Voice( const types::XsString& value )
        :myValue( value )
        {}
        bool Voice::hasAttributes() const
        {
            return false;
        }
        std::ostream& Voice::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& Voice::streamName( std::ostream& os ) const
        {
            os << "voice";
            return os;
        }
        std::ostream& Voice::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::XsString Voice::getValue() const
        {
            return myValue;
        }
        void Voice::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        KeyStep::KeyStep()
        :myValue( types::StepEnum::a )
        {}
        KeyStep::KeyStep( const types::StepEnum& value )
        :myValue( value )
        {}
        bool KeyStep::hasAttributes() const
        {
            return false;
        }
        std::ostream& KeyStep::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& KeyStep::streamName( std::ostream& os ) const
        {
            os << "key-step";
            return os;
        }
        std::ostream& KeyStep::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::StepEnum KeyStep::getValue() const
        {
            return myValue;
        }
        void KeyStep::setValue( const types::StepEnum& value )
        {
            myValue = value;
        }
        KeyAlter::KeyAlter()
        :myValue()
        {}
        KeyAlter::KeyAlter( const types::Semitones& value )
        :myValue( value )
        {}
        bool KeyAlter::hasAttributes() const
        {
            return false;
        }
        std::ostream& KeyAlter::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& KeyAlter::streamName( std::ostream& os ) const
        {
            os << "key-alter";
            return os;
        }
        std::ostream& KeyAlter::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::Semitones KeyAlter::getValue() const
        {
            return myValue;
        }
        void KeyAlter::setValue( const types::Semitones& value )
        {
            myValue = value;
        }
        KeyAccidental::KeyAccidental()
        :myValue( types::AccidentalValue::natural )
        {}
        KeyAccidental::KeyAccidental( const types::AccidentalValue& value )
        :myValue( value )
        {}
        bool KeyAccidental::hasAttributes() const
        {
            return false;
        }
        std::ostream& KeyAccidental::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& KeyAccidental::streamName( std::ostream& os ) const
        {
            os << "key-accidental";
            return os;
        }
        std::ostream& KeyAccidental::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::AccidentalValue KeyAccidental::getValue() const
        {
            return myValue;
        }
        void KeyAccidental::setValue( const types::AccidentalValue& value )
        {
            myValue = value;
        }
        SlashType::SlashType()
        :myValue( types::NoteTypeValue::eighth )
        {}
        SlashType::SlashType( const types::NoteTypeValue& value )
        :myValue( value )
        {}
        bool SlashType::hasAttributes() const
        {
            return false;
        }
        std::ostream& SlashType::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& SlashType::streamName( std::ostream& os ) const
        {
            os << "slash-type";
            return os;
        }
        std::ostream& SlashType::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::NoteTypeValue SlashType::getValue() const
        {
            return myValue;
        }
        void SlashType::setValue( const types::NoteTypeValue& value )
        {
            myValue = value;
        }
        Beats::Beats()
        :myValue()
        {}
        Beats::Beats( const types::XsString& value )
        :myValue( value )
        {}
        bool Beats::hasAttributes() const
        {
            return false;
        }
        std::ostream& Beats::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& Beats::streamName( std::ostream& os ) const
        {
            os << "beats";
            return os;
        }
        std::ostream& Beats::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::XsString Beats::getValue() const
        {
            return myValue;
        }
        void Beats::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        BeatType::BeatType()
        :myValue()
        {}
        BeatType::BeatType( const types::XsString& value )
        :myValue( value )
        {}
        bool BeatType::hasAttributes() const
        {
            return false;
        }
        std::ostream& BeatType::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& BeatType::streamName( std::ostream& os ) const
        {
            os << "beat-type";
            return os;
        }
        std::ostream& BeatType::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::XsString BeatType::getValue() const
        {
            return myValue;
        }
        void BeatType::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        Fifths::Fifths()
        :myValue()
        {}
        Fifths::Fifths( const types::FifthsValue& value )
        :myValue( value )
        {}
        bool Fifths::hasAttributes() const
        {
            return false;
        }
        std::ostream& Fifths::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& Fifths::streamName( std::ostream& os ) const
        {
            os << "fifths";
            return os;
        }
        std::ostream& Fifths::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::FifthsValue Fifths::getValue() const
        {
            return myValue;
        }
        void Fifths::setValue( const types::FifthsValue& value )
        {
            myValue = value;
        }
        Mode::Mode()
        :myValue()
        {}
        Mode::Mode( const types::ModeValue& value )
        :myValue( value )
        {}
        bool Mode::hasAttributes() const
        {
            return false;
        }
        std::ostream& Mode::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& Mode::streamName( std::ostream& os ) const
        {
            os << "mode";
            return os;
        }
        std::ostream& Mode::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::ModeValue Mode::getValue() const
        {
            return myValue;
        }
        void Mode::setValue( const types::ModeValue& value )
        {
            myValue = value;
        }
        BeatUnit::BeatUnit()
        :myValue( types::NoteTypeValue::eighth )
        {}
        BeatUnit::BeatUnit( const types::NoteTypeValue& value )
        :myValue( value )
        {}
        bool BeatUnit::hasAttributes() const
        {
            return false;
        }
        std::ostream& BeatUnit::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& BeatUnit::streamName( std::ostream& os ) const
        {
            os << "beat-unit";
            return os;
        }
        std::ostream& BeatUnit::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::NoteTypeValue BeatUnit::getValue() const
        {
            return myValue;
        }
        void BeatUnit::setValue( const types::NoteTypeValue& value )
        {
            myValue = value;
        }
        TopMargin::TopMargin()
        :myValue()
        {}
        TopMargin::TopMargin( const types::TenthsValue& value )
        :myValue( value )
        {}
        bool TopMargin::hasAttributes() const
        {
            return false;
        }
        std::ostream& TopMargin::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& TopMargin::streamName( std::ostream& os ) const
        {
            os << "top-margin";
            return os;
        }
        std::ostream& TopMargin::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::TenthsValue TopMargin::getValue() const
        {
            return myValue;
        }
        void TopMargin::setValue( const types::TenthsValue& value )
        {
            myValue = value;
        }
        BottomMargin::BottomMargin()
        :myValue()
        {}
        BottomMargin::BottomMargin( const types::TenthsValue& value )
        :myValue( value )
        {}
        bool BottomMargin::hasAttributes() const
        {
            return false;
        }
        std::ostream& BottomMargin::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& BottomMargin::streamName( std::ostream& os ) const
        {
            os << "bottom-margin";
            return os;
        }
        std::ostream& BottomMargin::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::TenthsValue BottomMargin::getValue() const
        {
            return myValue;
        }
        void BottomMargin::setValue( const types::TenthsValue& value )
        {
            myValue = value;
        }
        LeftMargin::LeftMargin()
        :myValue()
        {}
        LeftMargin::LeftMargin( const types::TenthsValue& value )
        :myValue( value )
        {}
        bool LeftMargin::hasAttributes() const
        {
            return false;
        }
        std::ostream& LeftMargin::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& LeftMargin::streamName( std::ostream& os ) const
        {
            os << "left-margin";
            return os;
        }
        std::ostream& LeftMargin::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::TenthsValue LeftMargin::getValue() const
        {
            return myValue;
        }
        void LeftMargin::setValue( const types::TenthsValue& value )
        {
            myValue = value;
        }
        RightMargin::RightMargin()
        :myValue()
        {}
        RightMargin::RightMargin( const types::TenthsValue& value )
        :myValue( value )
        {}
        bool RightMargin::hasAttributes() const
        {
            return false;
        }
        std::ostream& RightMargin::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& RightMargin::streamName( std::ostream& os ) const
        {
            os << "right-margin";
            return os;
        }
        std::ostream& RightMargin::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::TenthsValue RightMargin::getValue() const
        {
            return myValue;
        }
        void RightMargin::setValue( const types::TenthsValue& value )
        {
            myValue = value;
        }
        Duration::Duration()
        :myValue()
        {}
        Duration::Duration( const types::PositiveDivisionsValue& value )
        :myValue( value )
        {}
        bool Duration::hasAttributes() const
        {
            return false;
        }
        std::ostream& Duration::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& Duration::streamName( std::ostream& os ) const
        {
            os << "duration";
            return os;
        }
        std::ostream& Duration::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::PositiveDivisionsValue Duration::getValue() const
        {
            return myValue;
        }
        void Duration::setValue( const types::PositiveDivisionsValue& value )
        {
            myValue = value;
        }
        DisplayStep::DisplayStep()
        :myValue( types::StepEnum::a )
        {}
        DisplayStep::DisplayStep( const types::StepEnum& value )
        :myValue( value )
        {}
        bool DisplayStep::hasAttributes() const
        {
            return false;
        }
        std::ostream& DisplayStep::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& DisplayStep::streamName( std::ostream& os ) const
        {
            os << "display-step";
            return os;
        }
        std::ostream& DisplayStep::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::StepEnum DisplayStep::getValue() const
        {
            return myValue;
        }
        void DisplayStep::setValue( const types::StepEnum& value )
        {
            myValue = value;
        }
        DisplayOctave::DisplayOctave()
        :myValue()
        {}
        DisplayOctave::DisplayOctave( const types::OctaveValue& value )
        :myValue( value )
        {}
        bool DisplayOctave::hasAttributes() const
        {
            return false;
        }
        std::ostream& DisplayOctave::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& DisplayOctave::streamName( std::ostream& os ) const
        {
            os << "display-octave";
            return os;
        }
        std::ostream& DisplayOctave::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::OctaveValue DisplayOctave::getValue() const
        {
            return myValue;
        }
        void DisplayOctave::setValue( const types::OctaveValue& value )
        {
            myValue = value;
        }
        MovementNumber::MovementNumber()
        :myValue()
        {}
        MovementNumber::MovementNumber( const types::XsString& value )
        :myValue( value )
        {}
        bool MovementNumber::hasAttributes() const
        {
            return false;
        }
        std::ostream& MovementNumber::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& MovementNumber::streamName( std::ostream& os ) const
        {
            os << "movement-number";
            return os;
        }
        std::ostream& MovementNumber::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::XsString MovementNumber::getValue() const
        {
            return myValue;
        }
        void MovementNumber::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        MovementTitle::MovementTitle()
        :myValue()
        {}
        MovementTitle::MovementTitle( const types::XsString& value )
        :myValue( value )
        {}
        bool MovementTitle::hasAttributes() const
        {
            return false;
        }
        std::ostream& MovementTitle::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& MovementTitle::streamName( std::ostream& os ) const
        {
            os << "movement-title";
            return os;
        }
        std::ostream& MovementTitle::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly  ) const
        {
            isOneLineOnly = true;
            os << myValue;
            return os;
        }
        types::XsString MovementTitle::getValue() const
        {
            return myValue;
        }
        void MovementTitle::setValue( const types::XsString& value )
        {
            myValue = value;
        }

    }
}