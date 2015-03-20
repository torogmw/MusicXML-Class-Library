#include "NonTraditionalKey.h"

namespace mx
{
    namespace e
    {
        NonTraditionalKey::NonTraditionalKey()
        :ElementInterface()
        ,myKeyStep( std::make_shared<KeyStep>() )
        ,myKeyAlter( std::make_shared<KeyAlter>() )
        ,myKeyAccidental()
        {}
        bool NonTraditionalKey::hasAttributes() const
        {
            return false;
        }
        std::ostream& NonTraditionalKey::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& NonTraditionalKey::streamName( std::ostream& os ) const
        {
            return os;
        }
        bool NonTraditionalKey::hasContents() const
        {
            return true;
        }
        std::ostream& NonTraditionalKey::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
        {

            return os;
        }

    }
}