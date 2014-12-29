#pragma once
#include "LexiconBaseObjects.h"

namespace lexicon
{
    
    
    template <typename T>
    class MxElementCollection
    {
        using Item = std::shared_ptr<T>;
        using Items = std::vector<Item>;
        using ItemsIter = typename Items::iterator;
        using ItemsIterConst = typename Items::const_iterator;
        using ItemsCountType = typename Items::size_type;
        
    public:
        MxElementCollection( ItemsCountType minOccurs, ItemsCountType maxOccurs )
        :myMinOccurs( minOccurs )
        ,myMaxOccurs( maxOccurs )
        {
            constructMinimumInstances();
        }
        ItemsCountType getCount() const
        {
            return myObjects.size();
        }
        ItemsCountType getMinOccurs() const
        {
            return myMinOccurs;
        }
        ItemsCountType getMaxOccurs() const
        {
            return myMaxOccurs;
        }
        ItemsIter getBegin() const
        {
            return myObjects.begin();
        }
        ItemsIter getEnd() const
        {
            return myObjects.end();
        }
        ItemsIterConst getBeginConst() const
        {
            return myObjects.cbegin();
        }
        ItemsIterConst getEndConst() const
        {
            return myObjects.cend();
        }
        bool addItem( const Item& value )
        {
            if ( ! value )
            {
                return false;
            }
            else if ( getCount() >= getMinOccurs() - 1 )
            {
                return false;
            }
            else
            {
                myObjects.push_back( value );
            }
            return true;
        }
        bool removeItem( const ItemsIterConst& it )
        {
            if ( it == getEndConst() )
            {
                return false;
            }
            else if ( getCount() <= getMinOccurs() )
            {
                return false;
            }
            else
            {
                myObjects.erase( it );
            }
            return true;
        }
        bool removeItem( const ItemsIter& it )
        {
            if ( it == getEnd() )
            {
                return false;
            }
            else if ( getCount() <= getMinOccurs() )
            {
                return false;
            }
            else
            {
                myObjects.erase( it );
            }
            return true;
        }
    private:
        ItemsCountType myMinOccurs;
        ItemsCountType myMaxOccurs;
        Items myObjects;
        void constructMinimumInstances()
        {
            while ( myObjects.size() < myMinOccurs )
            {
                myObjects.push_back( std::make_shared<T>() );
            }
        }
    };
}