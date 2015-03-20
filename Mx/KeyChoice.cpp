#include "KeyChoice.h"

namespace mx
{
    namespace e
    {
        KeyChoice::KeyChoice()
        :myChoice( Choice::traditionalKey )
        ,myTraditionalKey( std::make_shared<TraditionalKey>() )
        ,myNonTraditionalKeySet()
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
                for ( auto it = myNonTraditionalKeySet.cbegin();
                      it != myNonTraditionalKeySet.cend();
                      ++it )
                {
                    if ( it != myNonTraditionalKeySet.cbegin() )
                    {
                        os << std::endl;
                    }
                    (*it)->streamContents( os, indentLevel, isOneLineOnly );
                }
                if ( myNonTraditionalKeySet.size() > 1 )
                {
                    isOneLineOnly = false;
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
        const NonTraditionalKeySet& KeyChoice::getNonTraditionalKeySet() const
        {
            return myNonTraditionalKeySet;
        }
        void KeyChoice::removeNonTraditionalKey( const NonTraditionalKeySetIterConst& value )
        {
            if ( value != myNonTraditionalKeySet.cend() )
            {
                myNonTraditionalKeySet.erase( value );
            }
        }
        void KeyChoice::addNonTraditionalKey( const NonTraditionalKeyPtr& value )
        {
            if ( value )
            {
                myNonTraditionalKeySet.push_back( value );
            }
        }
        void KeyChoice::clearNonTraditionalKeySet()
        {
            myNonTraditionalKeySet.clear();
        }
    }
}