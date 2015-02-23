#include "MsItem.h"
#include "MsItemWeb.h"
#include "XpItem.h"
#include <set>
#include "File.h"
#include "globals.h"

namespace go
{
    //void goMsItemSimpleTypeEnumTest( const xsd::XpItemPtr& i, xsd::MsItemSet& output );
    
    inline void goMsItemSimpleTypeEnumTest()
    {
        fs::Directory dir( globals::getOutputDirectory() );
        
        xsd::MsItemWeb xdoc;
        xsd::XpItemPtr root = xdoc.getXpDom()->getRootItem();
        
        xsd::MsItemKind kind = xsd::MsItemKind::enumeration;
        fs::writeStringToFile(globals::getOutputDirectory(),
                              "xsd_enumeration.csv",
                              xsd::toString( xdoc.getFilteredMsItemSet( kind ) ) );
        
        
        
        int breakhere = 1;
    }
    
}
