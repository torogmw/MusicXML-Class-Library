#include "TraditionalKey.h"

namespace mx
{
    namespace e
    {
        TraditionalKey::TraditionalKey()
        :ElementInterface()
        ,myCancel()
        ,myFifths( std::make_shared<Fifths>())
        ,myMode()
        // ,myHasCancel( false )
        // ,myHasMode( false )
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
            if ( myCancel )
            {
                myCancel->toStream( os, indentLevel ) << std::endl;
            }
            myFifths->toStream( os, indentLevel );
            if ( myMode )
            {
                os << std::endl;
                myMode->toStream( os, indentLevel );
            }
            isOneLineOnly = ( !myCancel && !myMode );
            return os;
        }
        CancelPtr TraditionalKey::getCancel() const
        {
            return myCancel;
        }
        void TraditionalKey::setCancel( const CancelPtr& value )
        {
            myCancel = value;
        }
//        bool TraditionalKey::getHasCancel() const
//        {
//            return myHasCancel;
//        }
//        void TraditionalKey::setHasCancel( const bool value )
//        {
//            myHasCancel = true;
//        }
        FifthsPtr TraditionalKey::getFifths() const
        {
            return myFifths;
        }
        void TraditionalKey::setFifths( const FifthsPtr& value )
        {
            if ( value )
            {
                myFifths = value;
            }
        }
        ModePtr TraditionalKey::getMode() const
        {
            return myMode;
        }
        void TraditionalKey::setMode( const ModePtr& value )
        {
            myMode = value;
        }
//        bool TraditionalKey::getHasMode() const
//        {
//            return myHasMode;
//        }
//        void TraditionalKey::setHasMode( const bool value )
//        {
//            myHasMode = value;
//        }
    }
}