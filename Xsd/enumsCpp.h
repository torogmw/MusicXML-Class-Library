#pragma once
#include <string>
#include "MsItemSimpleTypeEnum.h"
#include "end.h"
#include "MsitemWeb.h"

namespace xsd
{
    std::string enumCppstring( const MsItemSimpleTypeEnum& e );
    void writeEnumCppFile( const MsItemWeb& web );
}