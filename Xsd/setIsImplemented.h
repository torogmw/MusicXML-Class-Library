#pragma once
#include "XpItem.h"

namespace xsd
{
    void setIsImplemented( const XpItemPtr& item, bool include_all_children = true );
    void setIsImplemented( int ID, bool include_all_children = true );
    
}