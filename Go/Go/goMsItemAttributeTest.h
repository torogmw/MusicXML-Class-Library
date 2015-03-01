#pragma once
#include "MsItem.h"
#include "MsItemWeb.h"
#include "MsItemAttribute.h"
#include "XpItem.h"
#include <set>
#include "File.h"
#include "globals.h"

namespace go
{
    inline void goMsItemAttributeTest()
    {
        using namespace xsd;
        
        fs::Directory dir( globals::getOutputDirectory() );
        
        MsItemWeb xdoc;
        XpItemPtr root = xdoc.getXpDom()->getRootItem();
        
        MsItemKind kind = MsItemKind::attribute;
        
        MsItemSet aset = xdoc.getFilteredMsItemSet( kind );
        MsItemAttributeSet attributes;
        MsItemSet slicedattributes;
        for ( auto i : aset )
        {
            attributes.push_back( std::make_shared<MsItemAttribute>( *i ) );
        }
        std::copy(attributes.begin(), attributes.end(), std::back_inserter( slicedattributes ) );
        fs::writeStringToFile(globals::getOutputDirectory(),
                              "xsd_attribute.csv",
                              toString( slicedattributes ) );
    }
}