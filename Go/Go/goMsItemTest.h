#include "MsItem.h"
#include "MsItemWeb.h"
#include "XpItem.h"
#include <set>

namespace go
{
    void goRecursivelyBuildMsItems( const xsd::XpItemPtr& i, xsd::MsItemSet& output );
    
    inline void goMsItemTest()
    {
        using namespace xsd;
        MsItemWeb xdoc;
        XpItemPtr root = xdoc.getXpDom()->getRootItem();
        std::cout << (*(xdoc.getMsItemSetBeginConst()))->csvHeaders() << std::endl;
        MsItemSet inheritenceitems;
        for ( auto i : xdoc.getMsItemSet() )
        {
            std::cout << i->csv() << std::endl;
            if ( i->getInherits() )
            {
                inheritenceitems.push_back( i );
            }
        }
        int wow = 1;
    }

}