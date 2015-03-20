#include "Key.h"

namespace mx
{
    namespace e
    {
        Key::Key()
        :myChoice( Choice::traditionalKey )
        ,myTraditionalKey( std::make_shared<TraditionalKey>() )
        ,myNonTraditionalKey( std::make_shared<NonTraditionalKey>() )
        {}
        bool Key::hasAttributes() const
        {
            return false;
        }
        std::ostream& Key::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& Key::streamName( std::ostream& os ) const
        {
            return os;
        }
        bool Key::hasContents() const
        {
            return true;
        }
        std::ostream& Key::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
        {
            /*
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
             */
            return os;
        }
        
    }
}