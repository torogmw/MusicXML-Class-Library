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