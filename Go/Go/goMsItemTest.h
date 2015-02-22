#include "MsItem.h"
#include "MsItemWeb.h"
#include "XpItem.h"
#include <set>
#include "File.h"
#include "globals.h"

namespace go
{
    void goRecursivelyBuildMsItems( const xsd::XpItemPtr& i, xsd::MsItemSet& output );
    
    inline void goMsItemTest()
    {
        fs::Directory dir( globals::getOutputDirectory() );
        
        xsd::MsItemWeb xdoc;
        xsd::XpItemPtr root = xdoc.getXpDom()->getRootItem();
        
        fs::writeStringToFile(globals::getOutputDirectory(),
                              "xsd_allitems.csv",
                              xsd::toString( xdoc.getMsItemSet() ) );
        
        xsd::MsItemKind kind = xsd::MsItemKind::simpleType;
        fs::writeStringToFile(globals::getOutputDirectory(),
                              "xsd_simpletypes.csv",
                              xsd::toString( xdoc.getFilteredMsItemSet( kind ) ) );
        
        kind = xsd::MsItemKind::attribute;
        fs::writeStringToFile(globals::getOutputDirectory(),
                              "xsd_attributes.csv",
                              xsd::toString( xdoc.getFilteredMsItemSet( kind ) ) );
        
        kind = xsd::MsItemKind::element;
        fs::writeStringToFile(globals::getOutputDirectory(),
                              "xsd_elements.csv",
                              xsd::toString( xdoc.getFilteredMsItemSet( kind ) ) );
        int breakhere = 1;
    }

}