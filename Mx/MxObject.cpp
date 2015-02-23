
#include "MxObject.h"
#include <sstream>

namespace mx
{
    /* ctor */
    MxObject::MxObject() {}
    
    /* dtor */
    MxObject::~MxObject() {}
    
    std::string MxObject::toString() const
    {
        std::stringstream buffer;
        stream( buffer );
        return buffer.str();
    }
    
    std::ostream& operator<<( std::ostream& os, const mx::MxObject& rhs )
    {
        return rhs.stream( os );
    }
}