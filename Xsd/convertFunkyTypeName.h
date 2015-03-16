#pragma once
#include <string>

namespace xsd
{
    inline std::string convertFunkyTypeName( const std::string& funkyTypeName )
    {
        std::string output = funkyTypeName;
        if ( funkyTypeName == "Tenths" )
        {
            output = "TenthsValue";
        }
        else if ( funkyTypeName == "XsNonnegativeinteger" )
        {
            output = "NonNegativeInteger";
        }
        else if ( funkyTypeName == "XsPositiveInteger" )
        {
            output = "PositiveInteger";
        }
        else if ( funkyTypeName == "XsAnyuri" )
        {
            output = "XsAnyUri";
        }
        else if ( funkyTypeName == "Divisions" )
        {
            output = "DivisionsValue";
        }
        else if ( funkyTypeName == "XsIdref" )
        {
            output = "XsIDREF";
        }
        else if ( funkyTypeName == "XsPositiveinteger" )
        {
            output = "PositiveInteger";
        }
        else if ( funkyTypeName == "XsNmtoken" )
        {
            output = "XsNMToken";
        }
        else if ( funkyTypeName == "XsId" )
        {
            output = "XsID";
        }
        else if ( funkyTypeName == "___" )
        {
            output = "___";
        }
        return output;
    }
}
