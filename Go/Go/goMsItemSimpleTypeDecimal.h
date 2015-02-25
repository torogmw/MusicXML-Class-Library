#pragma once
#include <iostream>
#include "MsItem.h"
#include "MsItemWeb.h"
#include "XpItem.h"
#include <set>
#include "File.h"
#include "globals.h"
#include "MsItemSimpleTypeDecimal.h"
#include "setIsImplemented.h"

namespace go
{
    inline void goMsItemSimpleTypeDecimal()
    {
        
        fs::Directory dir( globals::getOutputDirectory() );
        
        xsd::MsItemWeb web;
        xsd::XpItemPtr root = web.getXpDom()->getRootItem();
        
        xsd::MsItemKind kind = xsd::MsItemKind::simpleType;
        fs::writeStringToFile(globals::getOutputDirectory(),
                              "xsd_simpleType.csv",
                              xsd::toString( web.getFilteredMsItemSet( kind ) ) );
        
        
        xsd::MsItemSimpleTypeDecimalSet myset = xsd::MsItemSimpleTypeDecimal::construct( web );
        std::stringstream ss;
        ss << (*myset.begin())->csvHeaders();
        ss << std::endl;
        for ( auto x : myset )
        {
            ss << x->csv() << std::endl;
        }
        fs::writeStringToFile(globals::getOutputDirectory(),
                              "xsd_simpleTypeDecimal.csv",
                              ss.str());
        
        int breakhere = 1;
        
        xsd::setIsImplemented( 71 );
        xsd::setIsImplemented( 1315 );
        xsd::setIsImplemented( 251 );
        xsd::setIsImplemented( 300 );
        xsd::setIsImplemented( 310 );
        xsd::setIsImplemented( 318 );
        xsd::setIsImplemented( 337 );
        xsd::setIsImplemented( 1665 );
        xsd::setIsImplemented( 429 );
        xsd::setIsImplemented( 467 );
    }
}