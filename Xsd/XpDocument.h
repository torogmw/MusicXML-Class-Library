/* See MusicXML License at the bottom of this code page. */

/* matthew james briggs */

#pragma once
#include <iostream>
#include "XpDom.h"
#include <vector>

namespace xsd
{
    class XpDocument;
    typedef std::shared_ptr<XpDocument> XpDocumentPtr;
    
    class XpDocument
    {
        
    public:
        XpDocument( const std::string& xsdFilePath );
        XpDocument();
        virtual ~XpDocument();
        
        XpDomPtr getXpDom() const;
        bool isImplemented( const XpItemPtr& e ) const;
        static XpItemPtr getElementNodeByID( int ID, const XpItemPtr& e );
        static XpItemPtr getElementNodeByID( int ID );
        
    private:
        void LoadXpDom( const std::string& xsdFilePath );
        XpDomPtr myDocument;
        struct IntBool { int ID; bool IsImplemented; };
        typedef std::vector<IntBool> IntBools;
        static IntBools ourIsImplemented;
        void init();
        static void findElementByID( int ID, const XpItemPtr& e, XpItemPtr& foundElement );
    };
}

