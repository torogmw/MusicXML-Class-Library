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
    class MsItemWeb;
    typedef std::shared_ptr<MsItemWeb> MsItemWebPtr;
    
    class MsItemWeb
    {
        
    public:
        MsItemWeb( const std::string& xsdFilePath );
        MsItemWeb();
        virtual ~MsItemWeb();
        
        XpDomPtr getXpDom() const;

        void refreshDbQuery();
        
        MsItemSetIter getMsItemSetBegin();
        MsItemSetIter getMsItemSetEnd();
        MsItemSetIterConst getMsItemSetBeginConst() const;
        MsItemSetIterConst getMsItemSetEndConst() const;
        const MsItemSet& getMsItemSet() const;
        const MsItemPtr& getMsItemByID( int ID ) const;
        
        MsItemSet getFilteredMsItemSet( MsItemKind kind ) const;
        
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
        //void recursivelyBuildMsItems( const XpItemPtr& i, MsItemSet& output );
        const static std::vector<int> ourImplementedOverrides;
    };
}

