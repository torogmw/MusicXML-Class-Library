#pragma once
#include "MsItem.h"
#include "MsItemElement.h"
#include "tab.h"
#include "end.h"
#include "convertFunkyTypeName.h"
#if 1==0

#endif
namespace
{
    const std::string notImplemented = "throw std::runtime_error{ \"not implemented\" };";
}
namespace xsd
{
    inline void codegenElementStubCpp( std::ostream& cpp, const std::string& attStructName, const MsItemElementPtr& e )
    {
        cpp << tab(2) << "" << e->getCppName() << "::" << e->getCppName() << "()" << end();
        cpp << tab(2) << ":myAttributes( std::make_shared<" << attStructName << ">() )" << end();
        auto children = e->getFirstGenerationSubElements();
        for ( auto child : children )
        {
            std::string cname = child->getCppName();
            if ( child->getCardinality() == MsItemElementCardinality::RequiredSingleOccurrence )
            {
                cpp << tab(2) << ",my" << cname << "( make" << cname << "() )" << end();
            }
            else if ( child->getCardinality() == MsItemElementCardinality::OptionalSingleOccurrence )
            {
                cpp << tab(2) << ",my" << cname << "( make" << cname << "() )" << end();
                cpp << tab(2) << ",myHas" << cname << "( false )" << end();
            }
            else if ( child->getCardinality() == MsItemElementCardinality::ZeroOrMany )
            {
                cpp << tab(2) << ",my" << cname << "Set()" << end();
            }
            else if ( child->getCardinality() == MsItemElementCardinality::OneOrMMany )
            {
                cpp << tab(2) << ",my" << cname << "Set()" << end();
            }
            else if ( child->getCardinality() == MsItemElementCardinality::RangeBound )
            {
                cpp << tab(2) << ",my" << cname << "Set()" << end();
            }
            else if ( child->getCardinality() == MsItemElementCardinality::Unidentified )
            {
                throw std::runtime_error( "Unidentified MsItemElementCardinality" );
            }
        }
        cpp << tab(2) << "{";
        bool emptyConstructorBody = true;
        for ( auto child : children )
        {
            std::string cname = child->getCppName();
            if ( child->getCardinality() == MsItemElementCardinality::RequiredSingleOccurrence )
            {
                ;
            }
            else if ( child->getCardinality() == MsItemElementCardinality::OptionalSingleOccurrence )
            {
                ;
            }
            else if ( child->getCardinality() == MsItemElementCardinality::ZeroOrMany )
            {
                ;
            }
            else if ( child->getCardinality() == MsItemElementCardinality::OneOrMMany )
            {
                cpp << end() << tab(2) << "my" << cname << "Set.push_back( make" << cname << "() );" << end();
                emptyConstructorBody = false;
            }
            else if ( child->getCardinality() == MsItemElementCardinality::RangeBound )
            {
                cpp << end() << tab(2) << "while( my" << cname << "Set.size() < " << e->getMinOccurs() << " )";
                cpp << end() << tab(2) << "{";
                cpp << end() << tab(3) << "my" << cname << "Set.push_back( make" << cname << "() );" << end();
                cpp << end() << tab(2) << "}";
                emptyConstructorBody = false;
            }
            else if ( child->getCardinality() == MsItemElementCardinality::Unidentified )
            {
                throw std::runtime_error( "Unidentified MsItemElementCardinality" );
            }
        }
        if( !emptyConstructorBody )
        {
            cpp << end();
        }
        cpp << "}" << end();
        cpp << tab(2) << "bool " << e->getCppName() << "::hasAttributes() const" << end();
        cpp << tab(2) << "{" << end();
        cpp << tab(3) << "return myAttributes->hasValues();" << end();
        cpp << tab(2) << "}" << end();
        cpp << tab(2) << "std::ostream& " << e->getCppName() << "::streamAttributes( std::ostream& os ) const" << end();
        cpp << tab(2) << "{" << end();
        cpp << tab(3) << "return myAttributes->toStream( os );" << end();
        cpp << tab(3) << "return os;" << end();
        cpp << tab(2) << "}" << end();
        cpp << tab(2) << "std::ostream& " << e->getCppName() << "::streamName( std::ostream& os ) const" << end();
        cpp << tab(2) << "{" << end();
        cpp << tab(3) << "os << \"" << e->getXmlName() << "\";" << end();
        cpp << tab(3) << "return os;" << end();
        cpp << tab(2) << "}" << end();
        cpp << tab(2) << "bool " << e->getCppName() << "::hasContents() const" << end();
        cpp << tab(2) << "{" << end();
        cpp << tab(3) << "return true;" << end();
        cpp << tab(2) << "}" << end();
        cpp << tab(2) << "std::ostream& " << e->getCppName() << "::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const" << end();
        cpp << tab(2) << "{" << end();
        cpp << tab(3) << "isOneLineOnly = false;" << end();
        cpp << tab(3) << "os << std::endl;" << end();
        cpp << tab(3) << "// mySign->toStream( os, indentLevel+1 );" << end();
        cpp << tab(3) << notImplemented << end();
        cpp << tab(2) << "}" << end();
        cpp << tab(2) << "" << attStructName << "Ptr " << e->getCppName() << "::getAttributes() const" << end();
        cpp << tab(2) << "{" << end();
        cpp << tab(3) << "return myAttributes;" << end();
        cpp << tab(2) << "}" << end();
        cpp << tab(2) << "void " << e->getCppName() << "::setAttributes( const " << attStructName << "Ptr& value )" << end();
        cpp << tab(2) << "{" << end();
        cpp << tab(3) << "if ( value )" << end();
        cpp << tab(3) << "{" << end();
        cpp << tab(4) << "myAttributes = value;" << end();
        cpp << tab(3) << "}" << end();
        cpp << tab(2) << "}" << end();
        for ( auto child : children )
        {
            std::string cname = child->getCppName();
            cpp << tab(2) << "/* _________ ";
            cpp << cname << " minOccurs = " << child->getMinOccurs() << ", maxOccurs = ";
            if ( child->getMaxOccurs() == UINT_MAX )
            {
                cpp << "unbounded";
            }
            else
            {
                cpp << child->getMaxOccurs();
            }
            cpp << " _________ */" << end();
            if ( child->getCardinality() == MsItemElementCardinality::RequiredSingleOccurrence )
            {
                cpp << tab(2) << cname << "Ptr " << e->getCppName() << "::get" << cname << "() const" << end();
                cpp << tab(2) << "{" << end();
                cpp << tab(3) << "return my" << cname << ";" << end();
                cpp << tab(2) << "}" << end();
                cpp << tab(2) << "void " << e->getCppName() << "::set" << cname << "( const " << cname << "Ptr& value )" << end();
                cpp << tab(2) << "{" << end();
                cpp << tab(3) << "if( value )" << end();
                cpp << tab(3) << "{" << end();
                cpp << tab(4) << "my" << cname << " = value;" << end();
                cpp << tab(3) << "}" << end();
                cpp << tab(2) << "}" << end();
            }
            else if ( child->getCardinality() == MsItemElementCardinality::OptionalSingleOccurrence )
            {
                cpp << tab(2) << cname << "Ptr " << e->getCppName() << "::get" << cname << "() const" << end();
                cpp << tab(2) << "{" << end();
                cpp << tab(3) << "return my" << cname << ";" << end();
                cpp << tab(2) << "}" << end();
                cpp << tab(2) << "void " << e->getCppName() << "::set" << cname << "( const " << cname << "Ptr& value )" << end();
                cpp << tab(2) << "{" << end();
                cpp << tab(3) << "if( value )" << end();
                cpp << tab(3) << "{" << end();
                cpp << tab(4) << "my" << cname << " = value;" << end();
                cpp << tab(3) << "}" << end();
                cpp << tab(2) << "}" << end();
                cpp << tab(2) << "bool " << e->getCppName() << "::getHas" << cname << "() const" << end();
                cpp << tab(2) << "{" << end();
                cpp << tab(3) << "return myHas" << cname << ";" << end();
                cpp << tab(2) << "}" << end();
                cpp << tab(2) << "void " << e->getCppName() << "::setHas" << cname << "( const bool value )" << end();
                cpp << tab(2) << "{" << end();
                cpp << tab(3) << "myHas" << cname << " = value;" << end();
                cpp << tab(2) << "}" << end();
            }
            else if ( child->getCardinality() == MsItemElementCardinality::ZeroOrMany )
            {
                cpp << tab(2) << "const " << cname << "Set& " << e->getCppName() << "::get" << cname << "Set() const" << end();
                cpp << tab(2) << "{" << end();
                cpp << tab(3) << "return my" << cname << "Set;" << end();
                cpp << tab(2) << "}" << end();
                cpp << tab(2) << "void " << e->getCppName() << "::remove" << cname << "( const " << cname << "SetIterConst& value )" << end();
                cpp << tab(2) << "{" << end();
                cpp << tab(3) << "if ( value != my" << cname << "Set.cend() )" << end();
                cpp << tab(3) << "{" << end();
                cpp << tab(4) << "my" << cname << "Set.erase( value );" << end();
                cpp << tab(3) << "}" << end();
                cpp << tab(2) << "}" << end();
                cpp << tab(2) << "void " << e->getCppName() << "::add" << cname << "( const " << cname << "Ptr& value )" << end();
                cpp << tab(2) << "{" << end();
                cpp << tab(3) << "if ( value )" << end();
                cpp << tab(3) << "{" << end();
                cpp << tab(4) << "my" << cname << "Set.push_back( value );" << end();
                cpp << tab(3) << "}" << end();
                cpp << tab(2) << "}" << end();
                cpp << tab(2) << "void " << e->getCppName() << "::clear" << cname << "Set()" << end();
                cpp << tab(2) << "{" << end();
                cpp << tab(3) << "my" << cname << "Set.clear();" << end();
                cpp << tab(2) << "}" << end();
                cpp << tab(2) << cname << "Ptr " << e->getCppName() << "::get" << cname << "( const " << cname << "SetIterConst& setIterator ) const" << end();
                cpp << tab(2) << "{" << end();
                cpp << tab(3) << "if( setIterator != my" << cname << "Set.cend() )" << end();
                cpp << tab(3) << "{" << end();
                cpp << tab(4) << "return *setIterator;" << end();
                cpp << tab(3) << "}" << end();
                cpp << tab(3) << "return " << cname << "Ptr();" << end();
                cpp << tab(2) << "}" << end();
            }
            else if ( child->getCardinality() == MsItemElementCardinality::OneOrMMany )
            {
                cpp << tab(2) << "const " << cname << "Set& " << e->getCppName() << "::get" << cname << "Set() const" << end();
                cpp << tab(2) << "{" << end();
                cpp << tab(3) << "return my" << cname << "Set;" << end();
                cpp << tab(2) << "}" << end();
                cpp << tab(2) << "void " << e->getCppName() << "::remove" << cname << "( const " << cname << "SetIterConst& value )" << end();
                cpp << tab(2) << "{" << end();
                cpp << tab(3) << "if ( value != my" << cname << "Set.cend() )" << end();
                cpp << tab(3) << "{" << end();
                cpp << tab(4) << "if ( my" << cname << "Set.size() > " << child->getMinOccurs() << " )" << end();
                cpp << tab(4) << "{" << end();
                cpp << tab(5) << "my" << cname << "Set.erase( value );" << end();
                cpp << tab(4) << "}" << end();
                cpp << tab(3) << "}" << end();
                cpp << tab(2) << "}" << end();
                cpp << tab(2) << "void " << e->getCppName() << "::add" << cname << "( const " << cname << "Ptr& value )" << end();
                cpp << tab(2) << "{" << end();
                cpp << tab(3) << "if ( value )" << end();
                cpp << tab(3) << "{" << end();
                cpp << tab(4) << "my" << cname << "Set.push_back( value );" << end();
                cpp << tab(3) << "}" << end();
                cpp << tab(2) << "}" << end();
                cpp << tab(2) << "void " << e->getCppName() << "::clear" << cname << "Set()" << end();
                cpp << tab(2) << "{" << end();
                cpp << tab(3) << "my" << cname << "Set.clear();" << end();
                cpp << tab(3) << "while( " << cname << "Set.size() < " << child->getMinOccurs() << " )" << end();
                cpp << tab(3) << "{" << end();
                cpp << tab(4) << "my" << cname << "Set.push_back( make" << cname << "() );" << end();
                cpp << tab(3) << "}" << end();
                cpp << tab(2) << "}" << end();
                cpp << tab(2) << cname << "Ptr " << e->getCppName() << "::get" << cname << "( const " << cname << "SetIterConst& setIterator ) const" << end();
                cpp << tab(2) << "{" << end();
                cpp << tab(3) << "if( setIterator != my" << cname << "Set.cend() )" << end();
                cpp << tab(3) << "{" << end();
                cpp << tab(4) << "return *setIterator;" << end();
                cpp << tab(3) << "}" << end();
                cpp << tab(3) << "return " << cname << "Ptr();" << end();
                cpp << tab(2) << "}" << end();
            }
            else if ( child->getCardinality() == MsItemElementCardinality::RangeBound )
            {
                cpp << tab(2) << "const " << cname << "Set& " << e->getCppName() << "::get" << cname << "Set() const" << end();
                cpp << tab(2) << "{" << end();
                cpp << tab(3) << "return my" << cname << "Set;" << end();
                cpp << tab(2) << "}" << end();
                cpp << tab(2) << "void " << e->getCppName() << "::remove" << cname << "( const " << cname << "SetIterConst& value )" << end();
                cpp << tab(2) << "{" << end();
                cpp << tab(3) << "if ( value != my" << cname << "Set.cend() )" << end();
                cpp << tab(3) << "{" << end();
                cpp << tab(4) << "if ( my" << cname << "Set.size() > " << child->getMinOccurs() << " )" << end();
                cpp << tab(4) << "{" << end();
                cpp << tab(5) << "my" << cname << "Set.erase( value );" << end();
                cpp << tab(4) << "}" << end();
                cpp << tab(3) << "}" << end();
                cpp << tab(2) << "}" << end();
                cpp << tab(2) << "void " << e->getCppName() << "::add" << cname << "( const " << cname << "Ptr& value )" << end();
                cpp << tab(2) << "{" << end();
                cpp << tab(3) << "if ( value )" << end();
                cpp << tab(3) << "{" << end();
                cpp << tab(4) << "my" << cname << "Set.push_back( value );" << end();
                cpp << tab(3) << "}" << end();
                cpp << tab(2) << "}" << end();
                cpp << tab(2) << "void " << e->getCppName() << "::clear" << cname << "Set()" << end();
                cpp << tab(2) << "{" << end();
                cpp << tab(3) << "my" << cname << "Set.clear();" << end();
                cpp << tab(3) << "while( " << cname << "Set.size() < " << child->getMinOccurs() << " )" << end();
                cpp << tab(3) << "{" << end();
                cpp << tab(4) << "my" << cname << "Set.push_back( make" << cname << "() );" << end();
                cpp << tab(3) << "}" << end();
                cpp << tab(2) << "}" << end();
                cpp << tab(2) << cname << "Ptr " << e->getCppName() << "::get" << cname << "( const " << cname << "SetIterConst& setIterator ) const" << end();
                cpp << tab(2) << "{" << end();
                cpp << tab(3) << "if( setIterator != my" << cname << "Set.cend() )" << end();
                cpp << tab(3) << "{" << end();
                cpp << tab(4) << "return *setIterator;" << end();
                cpp << tab(3) << "}" << end();
                cpp << tab(3) << "return " << cname << "Ptr();" << end();
                cpp << tab(2) << "}" << end();
            }
            else if ( child->getCardinality() == MsItemElementCardinality::Unidentified )
            {
                throw std::runtime_error( "Unidentified MsItemElementCardinality" );
            }
        } // for ( auto child : children )
    } // function body
} // namespace