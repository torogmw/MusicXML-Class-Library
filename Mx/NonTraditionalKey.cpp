#include "NonTraditionalKey.h"

namespace mx
{
    namespace e
    {
        NonTraditionalKey::NonTraditionalKey()
        :ElementInterface()
        ,myKeyStep( std::make_shared<KeyStep>() )
        ,myKeyAlter( std::make_shared<KeyAlter>() )
        ,myKeyAccidental( std::make_shared<KeyAccidental>() )
        ,myHasKeyAccidental( false )
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
            isOneLineOnly = false;
            if ( myKeyStep )
            {
                myKeyStep->toStream( os, indentLevel ) << std::endl;
            }
            if ( myKeyAlter )
            {
                myKeyStep->toStream( os, indentLevel );
            }
            if ( myKeyAccidental && myHasKeyAccidental )
            {
                os << std::endl;
                myKeyAccidental->toStream( os, indentLevel );
            }
            return os;
        }
        KeyStepPtr NonTraditionalKey::getKeyStep() const
        {
            return myKeyStep;
        }
        void NonTraditionalKey::setKeyStep( const KeyStepPtr& value )
        {
            if ( value )
            {
                myKeyStep = value;
            }
        }
        KeyAlterPtr NonTraditionalKey::getKeyAlter() const
        {
            return myKeyAlter;
        }
        void NonTraditionalKey::setKeyAlter( const KeyAlterPtr& value )
        {
            if ( value )
            {
                myKeyAlter = value;
            }
        }
        KeyAccidentalPtr NonTraditionalKey::getKeyAccidental() const
        {
            return myKeyAccidental;
        }
        void NonTraditionalKey::setKeyAccidental( const KeyAccidentalPtr& value )
        {
            if ( value )
            {
                myKeyAccidental = value;
            }
        }
        bool NonTraditionalKey::getHasKeyAccidental() const
        {
            return myHasKeyAccidental;
        }
        void NonTraditionalKey::setHasKeyAccivental( const bool value )
        {
            myHasKeyAccidental = value;
        }
    }
}