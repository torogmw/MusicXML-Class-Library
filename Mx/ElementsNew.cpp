#include "ElementsNew.h"

namespace mx
{
    namespace e
    {
        
        
        /**************** TransposeAttributes ****************/
        /* 2660 */
        TransposeAttributes::TransposeAttributes()
        :number()
        ,hasNumber( false )
        {}
        
        bool TransposeAttributes::hasValues() const
        {
            return hasNumber;
        }
        
        std::ostream& TransposeAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, number, "number", hasNumber );
            }
            return os;
        }
        
		Transpose::Transpose()
		:myAttributes( std::make_shared<TransposeAttributes>() )
		,myDiatonic( makeDiatonic() )
		,myHasDiatonic( false )
		,myChromatic( makeChromatic() )
		,myOctaveChange( makeOctaveChange() )
		,myHasOctaveChange( false )
		,myDouble( makeDouble() )
		,myHasDouble( false )
		{}
		bool Transpose::hasAttributes() const
		{
			return myAttributes->hasValues();
		}
		std::ostream& Transpose::streamAttributes( std::ostream& os ) const
		{
			return myAttributes->toStream( os );
			return os;
		}
		std::ostream& Transpose::streamName( std::ostream& os ) const
		{
			os << "transpose";
			return os;
		}
		bool Transpose::hasContents() const
		{
			return true;
		}
		std::ostream& Transpose::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			isOneLineOnly = false;
            if( myHasDiatonic )
            {
                os << std::endl;
                myDiatonic->toStream( os, indentLevel+1 );
            }
            os << std::endl;
            myChromatic->toStream( os, indentLevel+1 );
            if( myHasOctaveChange )
            {
                os << std::endl;
                myOctaveChange->toStream( os, indentLevel+1 );
            }
            if( myHasDiatonic )
            {
                os << std::endl;
                myDouble->toStream( os, indentLevel+1 );
            }
            os << std::endl;
            return os;
		}
		TransposeAttributesPtr Transpose::getAttributes() const
		{
			return myAttributes;
		}
		void Transpose::setAttributes( const TransposeAttributesPtr& value )
		{
			if ( value )
			{
				myAttributes = value;
			}
		}
		/* _________ Diatonic minOccurs = 0, maxOccurs = 1 _________ */
		DiatonicPtr Transpose::getDiatonic() const
		{
			return myDiatonic;
		}
		void Transpose::setDiatonic( const DiatonicPtr& value )
		{
			if( value )
			{
				myDiatonic = value;
			}
		}
		bool Transpose::getHasDiatonic() const
		{
			return myHasDiatonic;
		}
		void Transpose::setHasDiatonic( const bool value )
		{
			myHasDiatonic = value;
		}
		/* _________ Chromatic minOccurs = 1, maxOccurs = 1 _________ */
		ChromaticPtr Transpose::getChromatic() const
		{
			return myChromatic;
		}
		void Transpose::setChromatic( const ChromaticPtr& value )
		{
			if( value )
			{
				myChromatic = value;
			}
		}
		/* _________ OctaveChange minOccurs = 0, maxOccurs = 1 _________ */
		OctaveChangePtr Transpose::getOctaveChange() const
		{
			return myOctaveChange;
		}
		void Transpose::setOctaveChange( const OctaveChangePtr& value )
		{
			if( value )
			{
				myOctaveChange = value;
			}
		}
		bool Transpose::getHasOctaveChange() const
		{
			return myHasOctaveChange;
		}
		void Transpose::setHasOctaveChange( const bool value )
		{
			myHasOctaveChange = value;
		}
		/* _________ Double minOccurs = 0, maxOccurs = 1 _________ */
		DoublePtr Transpose::getDouble() const
		{
			return myDouble;
		}
		void Transpose::setDouble( const DoublePtr& value )
		{
			if( value )
			{
				myDouble = value;
			}
		}
		bool Transpose::getHasDouble() const
		{
			return myHasDouble;
		}
		void Transpose::setHasDouble( const bool value )
		{
			myHasDouble = value;
		}

    }
}