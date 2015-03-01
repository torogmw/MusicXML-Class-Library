
#include "YesNoNumber.h"
#include <string>
#include <sstream>

namespace mx
{
    namespace types
    {
        
        class YesNoNumber::impl
        {
        public:
            explicit impl()
            :myYesNo( YesNo::no )
            ,myDecimal( 0 )
            ,myIsDecimal( false )
            {}
            
            explicit impl( const Decimal& value )
            :myYesNo( YesNo::no )
            ,myDecimal( value )
            ,myIsDecimal( true )
            {}
            
            explicit impl( const YesNo value )
            :myYesNo( value )
            ,myDecimal( 0 )
            ,myIsDecimal( false )
            {}
            
            explicit impl( const std::string& value )
            :myYesNo( YesNo::no )
            ,myDecimal( 0 )
            ,myIsDecimal( false )
            {
                parse( value );
            }
            
            bool getIsYesNo() const
            {
                return !myIsDecimal;
            }
            bool getIsDecimal() const
            {
                return myIsDecimal;
            }
            void setValue( const YesNo value )
            {
                myYesNo = value;
                myIsDecimal = false;
            }
            void setValue( const Decimal& value )
            {
                myDecimal = Decimal( value );
                myIsDecimal = true;
            }
            YesNo getValueYesNo() const
            {
                return myYesNo;
            }
            Decimal getValueDecimal() const
            {
                return myDecimal;
            }
            void parse( const std::string& value )
            {
                Decimal d( 0 );
                YesNo e = YesNo::no;
                if ( value.find_first_not_of( "-.0123456789" ) != std::string::npos )
                {
                    if ( value.find_first_not_of( "yesno" ) == std::string::npos )
                    {
                        /* it must be an enum if it has
                         non numeric characters */
                        e = parseYesNo( value );
                        this->setValue( e );
                    }
                }
                else
                {
                    /* if it contains only numeric
                     characters it must be a number */
                    d.parse( value );
                    this->setValue( d );
                }
            }
            
        private:
            YesNo myYesNo;
            Decimal myDecimal;
            bool myIsDecimal;
        };
        
        
        YesNoNumber::YesNoNumber()
        :myImpl( new impl() )
        {}
        
        YesNoNumber::YesNoNumber( const Decimal& value )
        :myImpl( new impl( value ) )
        {}
        
        YesNoNumber::YesNoNumber( const YesNo value )
        :myImpl( new impl( value ) )
        {}
        
        YesNoNumber::YesNoNumber( const std::string& value )
        :myImpl( new impl( value ) )
        {}
        
        YesNoNumber::~YesNoNumber() {}
        
        YesNoNumber::YesNoNumber( const YesNoNumber& other )
        :myImpl( new YesNoNumber::impl( *myImpl ) )
        {}
        
        YesNoNumber::YesNoNumber( YesNoNumber&& other ) = default;
        
        YesNoNumber& YesNoNumber::operator=( YesNoNumber&& other ) = default;
        
        YesNoNumber& YesNoNumber::operator=( const YesNoNumber& other )
        {
            this->myImpl = std::unique_ptr<YesNoNumber::impl>( new YesNoNumber::impl( *myImpl ) );
            return *this;
        }
        
        bool YesNoNumber::getIsYesNo() const
        {
            return myImpl->getIsYesNo();
        }
        bool YesNoNumber::getIsDecimal() const
        {
            return myImpl->getIsDecimal();
        }
        void YesNoNumber::setValue( const YesNo value )
        {
            myImpl->setValue( value );
        }
        void YesNoNumber::setValue( const Decimal& value )
        {
            myImpl->setValue( value );
        }
        
        YesNo YesNoNumber::getValueYesNo() const
        {
            return myImpl->getValueYesNo();
        }
        Decimal YesNoNumber::getValueDecimal() const
        {
            return Decimal( myImpl->getValueDecimal().getValue() );
        }
        
        void YesNoNumber::parse( const std::string& value )
        {
            myImpl->parse( value );
        }
        
        std::string toString( const YesNoNumber& value )
        {
            std::stringstream ss;
            toStream( ss, value );
            return ss.str();
        }
		std::ostream& toStream( std::ostream& os, const YesNoNumber& value )
        {
            if ( value.getIsDecimal() )
            {
                toStream( os, value.getValueDecimal() );
            }
            else
            {
                toStream( os, value.getValueYesNo() );
            }
            return os;
        }
		std::ostream& operator<<( std::ostream& os, const YesNoNumber& value )
        {
            return toStream( os, value );
        }
        
        
    }
}
