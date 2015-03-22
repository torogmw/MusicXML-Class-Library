#pragma once
#include "MsItem.h"
#include "MsItemElement.h"
#include "tab.h"
#include "end.h"
#include "convertFunkyTypeName.h"

namespace xsd
{
    inline void codegenElementStubH( std::ostream& h, const std::string& attStructName, const MsItemElementPtr& e )
    {
        h << "Hello World";
    }
}