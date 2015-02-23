#pragma once
#include <string>
#include "MsItemSimpleTypeEnum.h"
#include "end.h"
#include "MsitemWeb.h"
namespace xsd
{
    std::string enumHstring( const MsItemSimpleTypeEnum& e );
    void writeEnumHFile( const MsItemWeb& web );
}