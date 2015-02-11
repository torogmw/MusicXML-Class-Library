/* See MusicXML License at the bottom of this code page. */

/* matthew james briggs */

#pragma once
#include <iostream>
#include "XsdItem.h"
#include "XsdProperty.h"
#include <memory>

namespace xparse
{
    class XsdDom;
    typedef std::shared_ptr<XsdDom> HXsdDom;
    
    class XsdDom
    {

    public:
        XsdDom( const XsdItemPtr& root_element = XsdItemPtr(nullptr), const std::string& xml_version = "", const std::string& doctype="" );
        virtual ~XsdDom();

        XsdItemPtr root_element() const;
        std::string xml_version() const;
        std::string doc_type() const;
        
        std::ostream& stream( std::ostream& os ) const;
        std::string str() const;
        
        bool has_ver() const;
        bool has_doctype() const;
        
    private:
        XsdItemPtr m_root;
        std::string m_ver;
        std::string m_doc;
    
    };
}

std::ostream& operator<<( std::ostream& os, xparse::XsdDom& rhs );
