#include <iostream>
#include "ExecuteNonQuery.h"
#include "Element.h"
#include "XsdDocument.h"

inline void mainDoMarkImplemented( xparse::ElementPtr e )
{
    int ID = e->getIndex();
    std::stringstream sql;
    sql << "UPDATE xsd SET IsImplemented = 'true' WHERE ID = " << ID << ";";
    mysqlpp::ExecuteNonQuery( sql.str() );
    for ( int i = 0; i < e->count_children(); ++i )
    {
        mainDoMarkImplemented( e->get_child( i ) );
    }
}

inline void mainDoMarkImplemented( int ID )
{
    xparse::ElementPtr e = XsdClasses::XsdDocument::getElementNodeByID( ID );
    mainDoMarkImplemented( e );
}