#include "KeyChoice.h"

namespace mx
{
    namespace e
    {
        bool KeyChoice::hasAttributes() const
        {
            return false;
        }
        std::ostream& KeyChoice::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& KeyChoice::streamName( std::ostream& os ) const
        {
            return os;
        }
        bool KeyChoice::hasContents() const
        {
            return true;
        }
        std::ostream& KeyChoice::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
        {
            if ( myChoice == Choice::traditionalKey )
            {
                if ( myTraditionalKey )
                {
                    myTraditionalKey->streamContents( os, indentLevel, isOneLineOnly );
                }
            }
            else if ( myChoice == Choice::nonTraditionalKey )
            {
                if ( myNonTraditionalKey )
                {
                    myNonTraditionalKey->streamContents( os, indentLevel, isOneLineOnly );
                }
            }
            return os;
        }
    }
}