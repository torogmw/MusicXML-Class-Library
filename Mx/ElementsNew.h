#pragma once
#include "ElementInterface.h"
#include "Enums.h"
#include "Strings.h"
#include "FontSize.h"
#include "Integers.h"
#include "Decimals.h"
#include "NumberOrNormal.h"
#include "PositiveIntegerOrEmpty.h"
#include "Color.h"
#include "Date.h"
#include <memory>
#include "Elements.h"

namespace mx
{
    namespace e
    {
        

#if 1==0
        class X_______X;
        using X_______XPtr = std::shared_ptr<X_______X>;
        using X_______XUPtr = std::unique_ptr<X_______X>;
        using X_______XSet = std::vector<X_______XPtr>;
        using X_______XSetIter = X_______XSet::iterator;
        using X_______XSetIterConst = X_______XSet::const_iterator;
        inline X_______XPtr makeX_______X() { return std::make_shared<X_______X>(); }
        class X_______X : public ElementInterface
        {
        public:
            X_______X();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
        private:
        };
        
        class X_______X;
        using X_______XPtr = std::shared_ptr<X_______X>;
        using X_______XUPtr = std::unique_ptr<X_______X>;
        using X_______XSet = std::vector<X_______XPtr>;
        using X_______XSetIter = X_______XSet::iterator;
        using X_______XSetIterConst = X_______XSet::const_iterator;
        inline X_______XPtr makeX_______X() { return std::make_shared<X_______X>(); }
        class X_______X : public ElementInterface
        {
        public:
            X_______X();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
        private:
        };
#endif
    }
}