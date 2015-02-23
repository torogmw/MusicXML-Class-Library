#pragma once

namespace xsd
{
    enum class MsItemSimpleTypeKind
    {
        unknown = -1,
        enumeration = 0,
        integer = 1,
        decimal = 2,
        enumOrString = 3,
        color = 4,
        commaSeparatedText = 5,
        enumOrDecimal = 6,
        enumOrInt = 7,
        numberOrNormal = 8,
        positiveIntegerOrEmpty = 9,
        commaSeparatedIntegerList = 10,
        date = 11,
        string = 12,
        positiveDecimal = 13
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
                
            case MsItemSimpleTypeKind::integer:
                return "integer";
                break;
                
            case MsItemSimpleTypeKind::decimal:
                return "decimal";
                break;
                
            case MsItemSimpleTypeKind::enumOrString:
                return "enumOrString";
                break;
                
            case MsItemSimpleTypeKind::commaSeparatedText:
                return "commaSeparatedText";
                break;
                
            case MsItemSimpleTypeKind::enumOrDecimal:
                return "enumOrDecimal";
                break;
                
            case MsItemSimpleTypeKind::enumOrInt:
                return "enumOrInt";
                break;
                
            case MsItemSimpleTypeKind::numberOrNormal:
                return "numberOrNormal";
                break;
                
            case MsItemSimpleTypeKind::positiveIntegerOrEmpty:
                return "positiveIntegerOrEmpty";
                break;
                
            case MsItemSimpleTypeKind::commaSeparatedIntegerList:
                return "commaSeparatedIntegerList";
                break;
                
            case MsItemSimpleTypeKind::color:
                return "color";
                break;
                
            case MsItemSimpleTypeKind::date:
                return "date";
                break;
                
            case MsItemSimpleTypeKind::string:
                return "string";
                break;
                
            case MsItemSimpleTypeKind::positiveDecimal:
                return "positiveDecimal";
                break;
                
            default:
                return "unknown";
                break;
        }
    }
}