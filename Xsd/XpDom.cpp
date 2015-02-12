/* See MusicXML License at the bottom of this code page. */

/* matthew james briggs */

#include "XpDom.h"

namespace xsd
{
    /* ctor */
    XpDom::XpDom( const XpItemPtr& root_item, const std::string& xml_version, const std::string& doctype )
    :myRootItem( root_item )
    ,myXmlVersion( xml_version )
    ,myXmlDocType( doctype )
    { }

    /* dtor */
    XpDom::~XpDom() {}
    
    XpItemPtr XpDom::getRootItem() const
    {
        return myRootItem;
    }
    
    std::string XpDom::getXmlVersion() const
    {
        return myXmlVersion;
    }
    
    std::string XpDom::getDocType() const
    {
        return myXmlDocType;
    }
    
    std::ostream& XpDom::stream( std::ostream& os ) const
    {
        if ( has_ver() )
        {
            os << "<?xml version=\"";
            os << myXmlVersion << "\"?>" << std::endl;
        }
        if ( has_doctype() )
        {
            os << "<!DOCTYPE ";
            os << myXmlDocType;
            os << ">" << std::endl;
        }
        os << *myRootItem;
        return os;
    }
    
    std::string XpDom::toString() const
    {
        std::stringstream ss;
        stream( ss );
        return ss.str();
    }
    
    bool XpDom::has_ver() const
    {
        return myXmlVersion.length() > 0;
    }
    
    bool XpDom::has_doctype() const
    {
        return myXmlDocType.length() > 0;
    }
    
}


std::ostream& operator<<( std::ostream& os, xsd::XpDom& rhs )
{
    return rhs.stream( os );
}


