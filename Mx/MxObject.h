
#pragma once
#include <iostream>
#include <string>

namespace mx
{
    class MxObject
    {

    public:
        MxObject();
        virtual ~MxObject();
        virtual std::ostream& stream( std::ostream& os ) const = 0;
        virtual std::string toString() const;
    };
    
    std::ostream& operator<<( std::ostream& os, const mx::MxObject& rhs );
}