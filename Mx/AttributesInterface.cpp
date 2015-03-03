
#include "AttributesInterface.h"

namespace mx
{
    namespace e
    {
        AttributesInterface::AttributesInterface() {}
        AttributesInterface::~AttributesInterface() {}
        bool AttributesInterface::hasValues() const { return false; }
        std::ostream& AttributesInterface::toStream( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& operator<<( std::ostream& os, const AttributesInterface& value )
        {
            return value.toStream( os );
        }
    }
}