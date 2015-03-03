
namespace mx
{
    namespace u
    {
        
#pragma once
#include <iostream>
#include <vector>
        
        namespace mx
        {
            namespace types
            {
                template<class T>
                class RangeBoundVector
                {
                public:
                    RangeBoundVector( typename std::vector<T>::size_type minOccurs, typename std::vector<T>::size_type maxOccurs )
                    :myMinOccurs( minOccurs )
                    ,myMaxOccurs( maxOccurs )
                    ,myRangeBoundVector( minOccurs )
                    { }
                    
                    virtual ~RangeBoundVector() {}
                    typename std::vector<T>::const_iterator cbegin() const
                    {
                        return myRangeBoundVector.cbegin();
                    }
                    typename std::vector<T>::const_iterator cend() const
                    {
                        return myRangeBoundVector.cend();
                    }
                    typename std::vector<T>::size_type size() const
                    {
                        return myRangeBoundVector.size();
                    }
                    void add( const T value )
                    {
                        if ( myRangeBoundVector.size() < myMaxOccurs )
                        {
                            myRangeBoundVector.push_back( value );
                        }
                    }
                    void remove( const typename std::vector<T>::const_iterator& it )
                    {
                        if ( myRangeBoundVector.size() > myMinOccurs )
                        {
                            if ( it != myRangeBoundVector.end() )
                            {
                                myRangeBoundVector.erase( it );
                            }
                        }
                    }
                    void clear()
                    {
                        if ( myMinOccurs == 0 )
                        {
                            myRangeBoundVector.clear();
                        }
                        else
                        {
                            myRangeBoundVector = std::vector<T>( myMinOccurs );
                        }
                    }
                private:
                    typename std::vector<T>::size_type myMinOccurs;
                    typename std::vector<T>::size_type myMaxOccurs;
                    std::vector<T> myRangeBoundVector;
                };
            }
        }
    }
}