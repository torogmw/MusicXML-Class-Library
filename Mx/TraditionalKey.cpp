#include "TraditionalKey.h"

namespace mx
{
    namespace e
    {
        TraditionalKey::TraditionalKey()
        :ElementInterface()
        ,myCancel()
        ,myFifths()
        ,myMode()
        ,myHasCancel( false )
        ,myHasMode( false )
        {}
        bool TraditionalKey::hasAttributes() const
        {
            return false;
        }
        std::ostream& TraditionalKey::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& TraditionalKey::streamName( std::ostream& os ) const
        {
            return os;
        }
        bool TraditionalKey::hasContents() const
        {
            return true;
        }
        std::ostream& TraditionalKey::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
        {
            if ( myHasCancel )
            {
                myCancel.toStream( os, indentLevel ) << std::endl;
            }
            myFifths.toStream( os, indentLevel );
            if ( myHasMode )
            {
                os << std::endl;
                myMode.toStream( os, indentLevel );
            }
            isOneLineOnly = ( !myHasCancel && !myHasMode );
            return os;
        }
        Cancel TraditionalKey::getCancel() const
        {
            return myCancel;
        }
        void TraditionalKey::setCancel( const Cancel& value )
        {
            myCancel = value;
        }
        bool TraditionalKey::getHasCancel() const
        {
            return myHasCancel;
        }
        void TraditionalKey::setHasCancel( const bool value )
        {
            myHasCancel = true;
        }
        Fifths TraditionalKey::getFifths() const
        {
            return myFifths;
        }
        void TraditionalKey::setFifths( const Fifths& value )
        {
            myFifths = value;
        }
        Mode TraditionalKey::getMode() const
        {
            return myMode;
        }
        void TraditionalKey::setMode( const Mode& value )
        {
            myMode = value;
        }
        bool TraditionalKey::getHasMode() const
        {
            return myHasMode;
        }
        void TraditionalKey::setHasMode( const bool value )
        {
            myHasMode = value;
        }
    }
}