#pragma once
#include "MsItem.h"
#include "MsItemWeb.h"
#include "MsItemAttribute.h"
#include "XpItem.h"
#include <set>
#include "File.h"
#include "globals.h"
#include "MsItemElement.h"
#include <sstream>
#include "goSetIsImplemented.h"
#include "end.h"
#include "tab.h"
#include "codegenAttributesStructH.h"
#include "codegenAttributesStructCpp.h"

namespace go
{
    inline void goCreateAttributesForOne( int ID )
    {   using namespace xsd;
        using namespace fs;
        using namespace std;
        MsItemWeb web;
        MsItemElementSet elements = web.getFilteredMsItemSet( MsItemKind::element );
    }
}