
#include "FontSize.h"
#include <sstream>



namespace mx
{
    namespace types
    {

        class FontSize::impl
        {
        public:
            explicit impl()
            :myCssFontSize( CssFontSize::medium )
            ,myDecimal( 0 )
            ,myIsDecimal( false )
            {}
            
            explicit impl( const Decimal& value )
            :myCssFontSize( CssFontSize::medium )
            ,myDecimal( value )
            ,myIsDecimal( true )
            {}
            
            explicit impl( const CssFontSize value )
            :myCssFontSize( value )
            ,myDecimal( 0 )
            ,myIsDecimal( false )
            {}
            
            explicit impl( const std::string& value )
            :myCssFontSize( CssFontSize::medium )
            ,myDecimal( 0 )
            ,myIsDecimal( false )
            {
                parse( value );
            }
            
            bool getIsCssFontSize() const
            {
                return !myIsDecimal;
            }
            bool getIsDecimal() const
            {
                return myIsDecimal;
            }
            void setValue( const CssFontSize value )
            {
                myCssFontSize = value;
                myIsDecimal = false;
            }
            void setValue( const Decimal& value )
            {
                myDecimal = Decimal( value );
                myIsDecimal = true;
            }
            CssFontSize getValueCssFontSize() const
            {
                return myCssFontSize;
            }
            Decimal getValueDecimal() const
            {
                return myDecimal;
            }
            void parse( const std::string& value )
            {
                
            }
            
        private:
            CssFontSize myCssFontSize;
            Decimal myDecimal;
            bool myIsDecimal;
        };

        
        FontSize::FontSize()
        :myImpl()
        {}
        
        FontSize::FontSize( const Decimal& value )
        :myImpl( new impl( value ) )
        {}
        
        FontSize::FontSize( const CssFontSize value )
        :myImpl( new impl( value ) )
        {}
        
        FontSize::FontSize( const std::string& value )
        :myImpl( new impl( value ) )
        {}
        
        FontSize::~FontSize() {}
        
        FontSize::FontSize( const FontSize& other )
        :myImpl( new FontSize::impl( *myImpl ) )
        {}
        
        FontSize::FontSize( FontSize&& other ) = default;
        
        FontSize& FontSize::operator=( FontSize&& other ) = default;
        
        FontSize& FontSize::operator=( const FontSize& other )
        {
            this->myImpl = std::unique_ptr<FontSize::impl>( new FontSize::impl( *myImpl ) );
            return *this;
        }

        bool FontSize::getIsCssFontSize() const
        {
            return myImpl->getIsCssFontSize();
        }
        bool FontSize::getIsDecimal() const
        {
            return myImpl->getIsDecimal();
        }
        void FontSize::setValue( const CssFontSize value )
        {
            myImpl->setValue( value );
        }
        void FontSize::setValue( const Decimal& value )
        {
            myImpl->setValue( value );
        }

        CssFontSize FontSize::getValueCssFontSize() const
        {
            return myImpl->getValueCssFontSize();
        }
        Decimal FontSize::getValueDecimal() const
        {
            return Decimal( myImpl->getValueDecimal().getValue() );
        }
  
        void FontSize::parse( const std::string& value )
        {
            myImpl->parse( value );
        }

        std::string toString( const FontSize& value )
        {
            std::stringstream ss;
            toStream( ss, value );
            return ss.str();
        }
		std::ostream& toStream( std::ostream& os, const FontSize& value )
        {
            if ( value.getIsDecimal() )
            {
                toStream( os, value.getValueDecimal() );
            }
            else
            {
                toStream( os, value.getValueCssFontSize() );
            }
            return os;
        }
		std::ostream& operator<<( std::ostream& os, const FontSize& value )
        {
            return toStream( os, value );
        }
        

    }
}
