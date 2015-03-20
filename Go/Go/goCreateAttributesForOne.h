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
        MsItemSet items = web.getFilteredMsItemSet( MsItemKind::element );
        MsItemElementPtr e;
        for ( auto i : items )
        {
            if ( i->getID() == ID )
            {
                e = std::make_shared<MsItemElement>( *i );
            }
        }
        if ( !e )
        {
            throw std::runtime_error( "the element was not found" );
        }
    }
}