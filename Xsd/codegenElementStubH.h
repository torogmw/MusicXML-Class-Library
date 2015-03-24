#pragma once
#include "MsItem.h"
#include "MsItemElement.h"
#include "tab.h"
#include "end.h"
#include "convertFunkyTypeName.h"

namespace xsd
{
    inline void codegenElementStubH( std::ostream& h, const std::string& attStructName, const MsItemElementPtr& e )
    {
        h << "class " << e->getCppName() << ";" << end();
        h << "using " << e->getCppName() << "Ptr = std::shared_ptr<" << e->getCppName() << ">;" << end();
        h << "using " << e->getCppName() << "UPtr = std::unique_ptr<" << e->getCppName() << ">;" << end();
        h << "using " << e->getCppName() << "Set = std::vector<" << e->getCppName() << "Ptr>;" << end();
        h << "using " << e->getCppName() << "SetIter = " << e->getCppName() << "Set::iterator;" << end();
        h << "using " << e->getCppName() << "SetIterConst = " << e->getCppName() << "Set::const_iterator;" << end();
        h << "inline " << e->getCppName() << "Ptr make" << e->getCppName() << "() { return std::make_shared<" << e->getCppName() << ">(); }" << end();
        h << "class " << e->getCppName() << " : public ElementInterface" << end();
        h << "{" << end();
        h << "public:" << end();
        h << tab(1) << "" << e->getCppName() << "();" << end();
        h << tab(1) << "virtual bool hasAttributes() const;" << end();
        h << tab(1) << "virtual std::ostream& streamAttributes( std::ostream& os ) const;" << end();
        h << tab(1) << "virtual std::ostream& streamName( std::ostream& os ) const;" << end();
        h << tab(1) << "virtual bool hasContents() const;" << end();
        h << tab(1) << "virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;" << end();
        h << tab(1) << attStructName << "Ptr getAttributes() const;" << end();
        h << tab(1) << "void setAttributes( const " << attStructName << "Ptr& value );" << end();
        auto children = e->getSubElements();
        for ( auto child : children )
        {
            std::string cname = child->getCppName();
            h << tab(1) << "/* _________ ";
            h << cname << " minOccurs = " << child->getMinOccurs() << ", maxOccurs = ";
            if ( child->getMaxOccurs() == UINT_MAX )
            {
               h << "unbounded";
            }
            else
            {
                h << child->getMaxOccurs();
            }
            h << " _________ */" << end();
            if ( child->getCardinality() == MsItemElementCardinality::RequiredSingleOccurrence )
            {
                h << tab(1) << cname << "Ptr get" << cname << "() const;" << end();
                h << tab(1) << "void set" << cname << "( const " << cname << "Ptr& value );" << end();
            }
            else if ( child->getCardinality() == MsItemElementCardinality::OptionalSingleOccurrence )
            {
                
                h << tab(1) << cname << "Ptr get" << cname << "() const;" << end();
                h << tab(1) << "void set" << cname << "( const " << cname << "Ptr& value );" << end();
                h << tab(1) << "bool getHas" << cname << "() const;" << end();
                h << tab(1) << "void setHas" << cname << "( const bool value );" << end();
                
            }
            else if ( child->getCardinality() == MsItemElementCardinality::ZeroOrMany )
            {
                
                h << tab(1) << "const " << cname << "Set& get" << cname << "Set() const;" << end();
                h << tab(1) << "void add" << cname << "( const " << cname << "Ptr& value );" << end();
                h << tab(1) << "void remove" << cname << "( const " << cname << "SetIterConst& value );" << end();
                //h << tab(1) << "bool getHas" << cname << "() const;" << end();
                //h << tab(1) << "void setHas" << cname << "( const bool value );" << end();
                h << tab(1) << "void clear" << cname << "Set();" << end();
            }
            else if ( child->getCardinality() == MsItemElementCardinality::OneOrMMany )
            {
                
                h << tab(1) << "const " << cname << "Set& get" << cname << "Set() const;" << end();
                h << tab(1) << "void add" << cname << "( const " << cname << "Ptr& value );" << end();
                h << tab(1) << "void remove" << cname << "( const " << cname << "SetIterConst& value );" << end();
                //h << tab(1) << "bool getHas" << cname << "() const;" << end();
                //h << tab(1) << "void setHas" << cname << "( const bool value );" << end();
                h << tab(1) << "void clear" << cname << "Set();" << end();
            }
            else if ( child->getCardinality() == MsItemElementCardinality::RangeBound )
            {
                
                h << tab(1) << "const " << cname << "Set& get" << cname << "Set() const;" << end();
                h << tab(1) << "void add" << cname << "( const " << cname << "Ptr& value );" << end();
                h << tab(1) << "void remove" << cname << "( const " << cname << "SetIterConst& value );" << end();
                //h << tab(1) << "bool getHas" << cname << "() const;" << end();
                //h << tab(1) << "void setHas" << cname << "( const bool value );" << end();
                h << tab(1) << "void clear" << cname << "Set();" << end();
            }
            else if ( child->getCardinality() == MsItemElementCardinality::Unidentified )
            {
                throw std::runtime_error( "Unidentified MsItemElementCardinality" );
            }
        }
        h << "private:" << end();
        h << tab(1) << attStructName << "Ptr myAttributes;" << end();
        for ( auto child : children )
        {
            std::string cname = child->getCppName();
            if ( child->getCardinality() == MsItemElementCardinality::RequiredSingleOccurrence )
            {
                h << tab(1) << cname << "Ptr my" << cname << ";" << end();
            }
            else if ( child->getCardinality() == MsItemElementCardinality::OptionalSingleOccurrence )
            {
                h << tab(1) << cname << "Ptr my" << cname << ";" << end();
                h << tab(1) << "bool myHas" << cname << ";" << end();
            }
            else if ( child->getCardinality() == MsItemElementCardinality::ZeroOrMany )
            {
                h << tab(1) << cname << "Set my" << cname << "Set" << ";" << end();
            }
            else if ( child->getCardinality() == MsItemElementCardinality::OneOrMMany )
            {
                h << tab(1) << cname << "Set my" << cname << "Set" << ";" << end();
            }
            else if ( child->getCardinality() == MsItemElementCardinality::RangeBound )
            {
                h << tab(1) << cname << "Set my" << cname << "Set" << ";" << end();
            }
            else if ( child->getCardinality() == MsItemElementCardinality::Unidentified )
            {
                throw std::runtime_error( "Unidentified MsItemElementCardinality" );
            }
        }
        h << "};" << end();
    }
}