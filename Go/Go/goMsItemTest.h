#include "MsItem.h"
#include "MsDocument.h"
#include "XpItem.h"

namespace go
{
    void goRecursivelyBuildMsItems( const xsd::XpItemPtr& i, xsd::MsItemSet& output );
    
    inline void goMsItemTest()
    {
        using namespace xsd;
        MsDocument xdoc;
        XpItemPtr root = xdoc.getXpDom()->getRootItem();

        int pause = 0;
        ++pause;
    }

}