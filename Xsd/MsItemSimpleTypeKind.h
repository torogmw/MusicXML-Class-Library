#pragma once

namespace xsd
{
    enum class MsItemSimpleTypeKind
    {
        unknown = -1,
        enumeration = 0
    };
    
    inline std::string toString( MsItemSimpleTypeKind value )
    {
        switch ( value )
        {
            case MsItemSimpleTypeKind::unknown:
                return "unknown";
                break;
                
            case MsItemSimpleTypeKind::enumeration:
                return "enumeration";
                break;
                
            default:
                return "unknown";
                break;
        }
    }
}