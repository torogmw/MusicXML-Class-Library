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
                bool isFirst = true;
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
        std::ostream& Dynamics::streamContents( std::ostream& os, const int indent_level ) const
        {
            os << std::endl;
            if ( myValue.getValue() == types::DynamicsEnum::otherDynamics )
            {
                indent( os, indent_level + 1 );
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
                indent( os, indent_level + 1 );
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
    }
}