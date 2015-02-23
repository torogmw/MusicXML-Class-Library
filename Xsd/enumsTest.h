#pragma once
#include <string>
#include "MsItemSimpleTypeEnum.h"
#include "end.h"
#include "MsitemWeb.h"

namespace xsd
{
    std::string enumTestString( const MsItemSimpleTypeEnum& e );
    void writeEnumTestFile( const MsItemWeb& web );
}