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
                streamAttribute( os, defaultX, "default-x", isFirst );
                streamAttribute( os, defaultY, "default-y", isFirst );
                streamAttribute( os, relativeX, "relative-x", isFirst );
                streamAttribute( os, relativeY, "relative-y", isFirst );
                streamAttribute( os, fontFamily, "font-family", isFirst );
                streamAttribute( os, fontStyle, "font-style", isFirst );
                streamAttribute( os, fontSize, "font-size", isFirst );
                streamAttribute( os, fontWeight, "font-weight", isFirst );
                streamAttribute( os, halign, "halign", isFirst );
                streamAttribute( os, placement, "placement", isFirst );
                streamAttribute( os, underline, "underline", isFirst );
                streamAttribute( os, overline, "overline", isFirst );
                streamAttribute( os, lineThrough, "line-through", isFirst );
                streamAttribute( os, enclosure, "enclosure", isFirst );
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
                os << "<";
                types::toStream( os, myValue.getValue() );
                os << "/>";
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
        AttributesPtr Dynamics::getAttributes() const
        {
            return myAttributes;
        }
    }
}