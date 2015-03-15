#pragma once
#include "MsItem.h"
#include "MsItemWeb.h"
#include "MsItemElement.h"
#include "File.h"
#include "end.h"

namespace go
{
    inline void goListNonImplementedElements()
    {
        using namespace xsd;
        using namespace fs;
        using namespace std;
        
        MsItemWebPtr web = std::make_shared<MsItemWeb>();
        MsItemElementSet unimplemented = findUnimplementedElements( web );
        std::stringstream ss;
        for ( auto e : unimplemented )
        {
            e->getXpItem()->stream( ss, 0 );
            ss << end();
            if ( e->getInheritedMsItem() )
            {
                e->getInheritedMsItem()->getXpItem()->stream( ss, 0 );
                ss << end();
            }
        }
        cout << ss.str() << end();
    }
}