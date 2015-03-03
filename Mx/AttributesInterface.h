
#include <iostream>
#include <memory>

namespace mx
{
    namespace e
    {
        struct AttributesInterface;
        using AttributesPtr = std::shared_ptr<AttributesInterface>;
        using AttributesUPtr = std::unique_ptr<AttributesInterface>;

        struct AttributesInterface
        {
            AttributesInterface();
            virtual ~AttributesInterface();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
        };

        std::ostream& operator<<( std::ostream& os, const AttributesInterface& value );
        
        template<class T>
        std::ostream& streamAttribute( std::ostream& os,
                                       const T& value,
                                       const char* attribute_name,
                                       bool& is_first )
        {
            os << attribute_name;
            os << "=\"";
            os << value;
            os <<"\"";
            if ( ! is_first )
            {
                os << " ";
                is_first = false;
            }
            return os;
        }
    }
}