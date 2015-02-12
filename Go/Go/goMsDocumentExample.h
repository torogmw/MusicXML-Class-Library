#pragma once

#include "MsDocument.h"
#include "MsItem.h"

namespace go
{
    inline void goMsDocumentExample()
    {
        using namespace xsd;
        MsDocument musicxmlxsd;
        XpItemPtr root = musicxmlxsd.getXpDom()->getRootItem();
        int pause = 1;
        ++pause;
        
    }
}

