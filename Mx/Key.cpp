#include "KeyChoice.h"

namespace mx
{
    namespace e
    {
        KeyChoice::KeyChoice()
        :myChoice( Choice::traditionalKey )
        ,myTraditionalKey( std::make_shared<TraditionalKey>() )
        ,myNonTraditionalKey( std::make_shared<NonTraditionalKey>() )
        {}
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
        KeyChoice::Choice KeyChoice::getChoice() const
        {
            return myChoice;
        }
        void KeyChoice::setChoice( const Choice value )
        {
            myChoice = value;
        }
        TraditionalKeyPtr KeyChoice::getTraditionalKey() const
        {
            return myTraditionalKey;
        }
        void KeyChoice::setTraditionalKey( const TraditionalKeyPtr& value )
        {
            if ( value )
            {
                myTraditionalKey = value;
            }
        }
        NonTraditionalKeyPtr KeyChoice::getNonTraditionalKey() const
        {
            return myNonTraditionalKey;
        }
        void KeyChoice::setNonTraditionalkey( const NonTraditionalKeyPtr& value )
        {
            if ( value )
            {
                myNonTraditionalKey = value;
            }
        }
    }
}