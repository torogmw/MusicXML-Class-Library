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
        :justify()
        ,defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle()
        ,fontSize()
        ,fontWeight()
        ,halign()
        ,underline()
        ,overline()
        ,lineThrough()
        ,rotation()
        ,letterSpacing()
        ,lineHeight()
        ,lang( "it" )
        ,space()
        ,enclosure()
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
        :justify()
        ,defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle()
        ,fontSize()
        ,fontWeight()
        ,halign()
        ,underline()
        ,overline()
        ,lineThrough()
        ,rotation()
        ,letterSpacing()
        ,lineHeight()
        ,lang()
        ,space()
        ,enclosure()
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

    }
}