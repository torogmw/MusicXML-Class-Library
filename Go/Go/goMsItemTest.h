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

        
        MsItemSet firstClass;
        for ( auto it = xdoc.getMsItemSetBeginConst(); it != xdoc.getMsItemSetEndConst(); ++it )
        {
            if( (*it)->getIsFirstClassConcept() )
            {
                firstClass.push_back( *it );
                std::cout << (*it)->getDtDef() << ",";
                std::cout << (*it)->getMsItemKindString() << ",";
                std::cout << std::boolalpha << (*it)->getIsImplemented() << std::endl;
            }
        }
        int wow = 1;
    }

}