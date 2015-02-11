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
    typedef std::shared_ptr<XpDom> HXpDom;
    
    class XpDom
    {

    public:
        XpDom( const XpItemPtr& root_element = XpItemPtr(nullptr), const std::string& xml_version = "", const std::string& doctype="" );
        virtual ~XpDom();

        XpItemPtr root_element() const;
        std::string xml_version() const;
        std::string doc_type() const;
        
        std::ostream& stream( std::ostream& os ) const;
        std::string str() const;
        
        bool has_ver() const;
        bool has_doctype() const;
        
    private:
        XpItemPtr m_root;
        std::string m_ver;
        std::string m_doc;
    
    };
}

std::ostream& operator<<( std::ostream& os, xsd::XpDom& rhs );
