/* See MusicXML License at the bottom of this code page. */

/* matthew james briggs */

#pragma once
#include <iostream>
#include "XpDom.h"
#include <vector>
#include <memory>
#include "MsItem.h"

namespace db
{
    class DbQuery;
}

namespace xsd
{
    class MsDocument;
    typedef std::shared_ptr<MsDocument> MsDocumentPtr;
    
    class MsDocument
    {
        
    public:
        MsDocument( const std::string& xsdFilePath );
        MsDocument();
        virtual ~MsDocument();
        
        XpDomPtr getXpDom() const;

        void refreshDbQuery();
        
        MsItemSetIter getMsItemSetBegin();
        MsItemSetIter getMsItemSetEnd();
        
    private:
        
        /* Private Data */
        XpDomPtr myXpDomPtr;
        MsItemSet myMsItemSet;
        
        /* Private Functions */
        void loadXpDom( const std::string& xsdFilePath );
        void init();
        void createMsItemSet();
        static void findItemByID( int ID, const XpItemPtr& e, XpItemPtr& foundItem );
        std::shared_ptr<db::DbQuery> myDbQueryPtr;
        void recursivelyBuildMsItems( const XpItemPtr& i, MsItemSet& output );
    };
}

