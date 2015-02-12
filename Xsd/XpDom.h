/* See MusicXML License at the bottom of this code page. */

/* matthew james briggs */

#pragma once
#include <iostream>
#include "XpItem.h"
#include "XpProperty.h"
#include <memory>

namespace xsd
{
    class XpDom;
    typedef std::shared_ptr<XpDom> XpDomPtr;
    
    class XpDom
    {

    public:
        XpDom( const XpItemPtr& root_item = XpItemPtr(nullptr), const std::string& xml_version = "", const std::string& doctype="" );
        virtual ~XpDom();

        XpItemPtr getRootItem() const;
        std::string getXmlVersion() const;
        std::string getDocType() const;
        
        std::ostream& stream( std::ostream& os ) const;
        std::string toString() const;
        
        bool has_ver() const;
        bool has_doctype() const;
        
    private:
        XpItemPtr myRootItem;
        std::string myXmlVersion;
        std::string myXmlDocType;
    
    };
}

std::ostream& operator<<( std::ostream& os, xsd::XpDom& rhs );
