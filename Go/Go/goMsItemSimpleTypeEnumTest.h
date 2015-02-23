#include "MsItem.h"
#include "MsItemWeb.h"
#include "XpItem.h"
#include <set>
#include "File.h"
#include "globals.h"
#include "MsItemSimpleTypeEnum.h"

namespace go
{
    //void goMsItemSimpleTypeEnumTest( const xsd::XpItemPtr& i, xsd::MsItemSet& output );
    
    inline void goMsItemSimpleTypeEnumTest()
    {
        fs::Directory dir( globals::getOutputDirectory() );
        
        xsd::MsItemWeb web;
        xsd::XpItemPtr root = web.getXpDom()->getRootItem();
        
        xsd::MsItemKind kind = xsd::MsItemKind::enumeration;
        fs::writeStringToFile(globals::getOutputDirectory(),
                              "xsd_enumeration.csv",
                              xsd::toString( web.getFilteredMsItemSet( kind ) ) );
        
        
        xsd::MsItemSimpleTypeEnumSet enumset = xsd::MsItemSimpleTypeEnum::construct( web );
        int breakhere = 1;
    }
    
}
