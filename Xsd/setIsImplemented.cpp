#include "setIsImplemented.h"
#include "DbQuery.h"
#include "MsitemWeb.h"

namespace xsd
{
    void setIsImplemented( const XpItemPtr& item, bool include_all_children )
    {
        std::stringstream ss;
        ss << "UPDATE mx.xsd SET IsImplemented = 'true' WHERE id = ";
        ss << item->getID();
        ss << ";";
        db::DbQuery query;
        query.setSql( ss.str() );
        query.execute();
        if ( include_all_children )
        {
            for ( auto child : item->getChildren() )
            {
                setIsImplemented( child, true );
            }
        }
    }
    
    void setIsImplemented( int ID, bool include_all_children )
    {
        MsItemWeb web;
        MsItemPtr item = web.getMsItemByID( ID );
        setIsImplemented( item->getXpItem(), include_all_children );
    }
}