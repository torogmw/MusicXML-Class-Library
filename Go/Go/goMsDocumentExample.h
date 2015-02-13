#pragma once

#include "MsItemWeb.h"
#include "MsItem.h"

namespace go
{
    inline void goMsItemWebExample()
    {
        using namespace xsd;
        MsItemWeb musicxmlxsd;
        XpItemPtr root = musicxmlxsd.getXpDom()->getRootItem();
        int pause = 1;
        ++pause;
        
    }
}

