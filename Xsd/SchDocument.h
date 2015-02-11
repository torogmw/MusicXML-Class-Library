/* See MusicXML License at the bottom of this code page. */

/* matthew james briggs */

#pragma once
#include <iostream>
#include "XpDom.h"
#include <vector>
#include <memory>

namespace db
{
    class DbQuery;
}

namespace xsd
{
    class SchDocument;
    typedef std::shared_ptr<SchDocument> SchDocumentPtr;
    
    class SchDocument
    {
        
    public:
        SchDocument( const std::string& xsdFilePath );
        SchDocument();
        virtual ~SchDocument();
        
        XpDomPtr getXpDom() const;
        bool isImplemented( const XpItemPtr& e ) const;
        static XpItemPtr getElementNodeByID( int ID, const XpItemPtr& e );
        static XpItemPtr getElementNodeByID( int ID );
        void refreshDbQuery();
        
    private:
        void LoadXpDom( const std::string& xsdFilePath );
        XpDomPtr myDocument;
        struct IntBool { int ID; bool IsImplemented; };
        typedef std::vector<IntBool> IntBools;
        static IntBools ourIsImplemented;
        void init();
        static void findElementByID( int ID, const XpItemPtr& e, XpItemPtr& foundElement );
        std::shared_ptr<db::DbQuery> myDbQueryPtr;
    };
}

