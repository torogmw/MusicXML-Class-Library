#pragma once
#include "setIsImplemented.h"

namespace go
{
    inline void goSetIsImplemented( const std::vector<int>& IDs )
    {
        for (auto i : IDs )
        {
            xsd::setIsImplemented( i );
        }
    }
}