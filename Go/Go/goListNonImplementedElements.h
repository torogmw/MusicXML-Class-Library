    #pragma once
#include "MsItem.h"
#include "MsItemWeb.h"
#include "MsItemElement.h"
#include "File.h"
#include "end.h"
#include "globals.h"

namespace go
{
    inline void goListNonImplementedElements( bool onlyIncludeThoseWithImplementedSubElements )
    {
        using namespace xsd;
        using namespace fs;
        using namespace std;
        
        MsItemWebPtr web = std::make_shared<MsItemWeb>();
        MsItemElementSet unimplemented = findUnimplementedElements( web );
        std::stringstream ss;
        ss << "<!-- Total Element Count: " << ( web->getFilteredMsItemSet( MsItemKind::element ) ).size() << " -->" << end();
        ss << "<!-- Unimplemented Element Count:  " << unimplemented.size() << " -->" << end();
        int readyCount = 0;
        for ( auto e : unimplemented )
        {
            if ( e->getSubElementsImplemented() )
            {
                ++readyCount;
            }
        }
        ss << "<!-- Elements with all submembers implemented: " << readyCount << " -->" << end();
        ss << "<!-- ******************************************************************* -->" << end(2);
        for ( auto e : unimplemented )
        {
            if ( !onlyIncludeThoseWithImplementedSubElements || e->getSubElementsImplemented() )
            {
                e->toStream( ss );
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
    
    inline void goListNonImplementedElements()
    {
        goListNonImplementedElements( true );
    }
}