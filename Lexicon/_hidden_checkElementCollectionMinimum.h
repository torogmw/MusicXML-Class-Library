#pragma once
#include <memory>
#include <vector>

namespace lexicon
{
    namespace hidden
    {
        template <typename T>
        inline void checkElementCollectionMinimum( const std::shared_ptr<T>& element, std::vector<std::shared_ptr<T>>& vec )
        {
            if ( vec.size() < element.getMinOccurs() )
            {
                std::size_t count = ( element.getMinOccurs() - vec.size() );
                for ( std::size_t i = 0; i < count; ++i )
                {
                    vec.push_back( element );
                }
            }
        }
    }
}