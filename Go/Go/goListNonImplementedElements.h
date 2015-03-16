    #pragma once
#include "MsItem.h"
#include "MsItemWeb.h"
#include "MsItemElement.h"
#include "File.h"
#include "end.h"
#include "globals.h"

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
            MsItemElementSet equivs = findEquivalentElements( e );
            ss << end(2) << "<!-- ";
            ss << " ID = " << e->getID() << " [";
            for ( auto eq = equivs.cbegin(); eq != equivs.cend(); ++eq )
            {
                if ( eq != equivs.cbegin() )
                {
                    ss << ", ";
                }
                ss << (*eq)->getID();
            }
            ss << "] ------------------------->" << end();
            ss << "<!-- min=" << e->getMinOccurs() << " max=" << e->getMaxOccurs() << " " << toString(e->getCardinality())<< " " << " -->" << end();
            e->getXpItem()->stream( ss, 0 );
//            if ( e->getDtDef() == "sound" )
//            {
//                int dsfgldkjfg = 0;
//                dsfgldkjfg =1;
//            }
            if ( e->getInheritedMsItem() )
            {
                e->getInheritedMsItem()->getXpItem()->stream( ss, 0 );
                ss << end();
            }
        }
        cout << ss.str() << end();
        Directory d{ globals::getOutputDirectory() };
        FileName fn{ "UnimplementedElements", "xml" };
        FileInfo fo{ fn, d };
        File f{ fo };
        f.setContents( ss.str() );
        f.writeToDisk();
    }
}