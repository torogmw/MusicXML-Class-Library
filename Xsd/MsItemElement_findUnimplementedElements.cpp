/* matthew james briggs */

#include "MsItemElement.h"
#include "MsitemWeb.h"

namespace xsd
{
    MsItemElementSet findUnimplementedElements( const MsItemWebPtr& web )
    {
        MsItemElementSet output;
        MsItemSet temp = web->getFilteredMsItemSet( MsItemKind::element );
        for ( auto i : temp )
        {
            if ( i->getIsImplemented() == false )
            {
                output.push_back( std::make_shared<MsItemElement>( *i ) );
            }
            MsItemElementSet copyForDebugger = output;
        }
        return output;
    }
}