#pragma once
#include <iostream>
#include "MsItem.h"
#include "MsItemWeb.h"
#include "XpItem.h"
#include <set>
#include "File.h"
#include "globals.h"
#include "MsItemSimpleTypeInteger.h"

namespace go
{
    inline void goMsItemSimpleTypeIntegerTest()
    {
        fs::Directory dir( globals::getOutputDirectory() );
        
        xsd::MsItemWeb web;
        xsd::XpItemPtr root = web.getXpDom()->getRootItem();
        
        xsd::MsItemKind kind = xsd::MsItemKind::simpleType;
        fs::writeStringToFile(globals::getOutputDirectory(),
                              "xsd_simpleType.csv",
                              xsd::toString( web.getFilteredMsItemSet( kind ) ) );
        
        
        xsd::MsItemSimpleTypeIntegerSet myset = xsd::MsItemSimpleTypeInteger::construct( web );
        std::stringstream ss;
        ss << (*myset.begin())->csvHeaders();
        ss << std::endl;
        for ( auto x : myset )
        {
            ss << x->csv() << std::endl;
        }
        fs::writeStringToFile(globals::getOutputDirectory(),
                              "xsd_simpleTypeInteger.csv",
                              ss.str());
        int breakhere = 1;
    }
}