#include "Key.h"

namespace mx
{
    namespace e
    {
        /**************** KeyAttributes ****************/
        /* 2614 */
        KeyAttributes::KeyAttributes()
        :number()
        ,defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::CssFontSize::medium )
        ,fontWeight( types::FontWeight::normal )
        ,printObject( types::YesNo::no )
        ,hasNumber( false )
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        ,hasPrintObject( false )
        {}
        
        bool KeyAttributes::hasValues() const
        {
            return hasNumber ||
            hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight ||
            hasPrintObject;
        }
        
        std::ostream& KeyAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, number, "number", hasNumber );
                streamAttribute( os, defaultX, "default-x", hasDefaultX );
                streamAttribute( os, defaultY, "default-y", hasDefaultY );
                streamAttribute( os, relativeX, "relative-x", hasRelativeX );
                streamAttribute( os, relativeY, "relative-y", hasRelativeY );
                streamAttribute( os, fontFamily, "font-family", hasFontFamily );
                streamAttribute( os, fontStyle, "font-style", hasFontStyle );
                streamAttribute( os, fontSize, "font-size", hasFontSize );
                streamAttribute( os, fontWeight, "font-weight", hasFontWeight );
                streamAttribute( os, printObject, "print-object", hasPrintObject );
            }
            return os;
        }
        
        Key::Key()
        :myAttributes( std::make_shared<KeyAttributes>() )
        ,myKeyChoice( std::make_shared<KeyChoice>() )
        ,myKeyOctaveSet()
        {}
        bool Key::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& Key::streamAttributes( std::ostream& os ) const
        {
            return myAttributes->toStream( os );
            return os;
        }
        std::ostream& Key::streamName( std::ostream& os ) const
        {
            os << "key";
            return os;
        }
        bool Key::hasContents() const
        {
            return myKeyChoice->hasContents() || myKeyOctaveSet.size() > 0;
        }
        std::ostream& Key::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
        {
            if ( myKeyChoice->hasContents() )
            {
                if ( myKeyChoice )
                {
                    myKeyChoice->streamContents( os, indentLevel+1, isOneLineOnly );
                }
            }
            for ( auto it = myKeyOctaveSet.cbegin();
                  it != myKeyOctaveSet.cend();
                  ++it )
            {
                (*it)->streamContents( os, indentLevel+1, isOneLineOnly );
            }
            if ( myKeyChoice->hasContents() )
            {
                isOneLineOnly = false;
            }
            if ( myKeyOctaveSet.size() > 1 )
            {
                isOneLineOnly = false;
            }
            return os;
        }
        KeyAttributesPtr Key::getAttributes() const
        {
            return myAttributes;
        }
        void Key::setAttributes( const KeyAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        KeyChoicePtr Key::getKeyChoice() const
        {
            return myKeyChoice;
        }
        void Key::setKeyChoice( const KeyChoicePtr& value )
        {
            if ( value )
            {
                myKeyChoice = value;
            }
        }
        const KeyOctaveSet& Key::getKeyOctaveSet() const
        {
            return myKeyOctaveSet;
        }
        void Key::removeKeyOctave( const KeyOctaveSetIterConst& value )
        {
            if ( value != myKeyOctaveSet.cend() )
            {
                myKeyOctaveSet.erase( value );
            }
        }
        void Key::addKeyOctave( const KeyOctavePtr& value )
        {
            if ( value )
            {
                myKeyOctaveSet.push_back( value );
            }
        }
        void Key::clearKeyOctaveSet()
        {
            myKeyOctaveSet.clear();
        }
    }
}