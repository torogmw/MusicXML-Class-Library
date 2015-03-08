#include "MsItem.h"
#include "MsItemWeb.h"
#include "MsItemAttribute.h"
#include "MsItemElement.h"
#include "end.h"
#include "tab.h"
#include <iostream>

namespace xsd
{
    inline bool codegenIsValueElement( MsItemElementPtr& e )
    {
        try
        {
            MsItemPtr complextype = e->getInheritedMsItem();
            MsItemPtr simpleContent = *( ++( complextype->getChildrenBegin() ) );
            MsItemPtr extensionBase = *( ( simpleContent->getChildrenBegin() ) );
            MsItemPtr inheritedTypeMsItem = extensionBase->getInheritedMsItem();
            MsItemSimpleTypePtr inheritedSimpleType = std::make_shared<MsItemSimpleType>( *inheritedTypeMsItem );
            MsItemElementSet equivalentElements = findEquivalentElements( e );
            if( ! complextype ) return false;
            if( ! simpleContent ) return false;
            if( ! extensionBase ) return false;
            if( ! inheritedTypeMsItem ) return false;
            if( ! inheritedSimpleType ) return false;
            if( equivalentElements.size() == 0 ) return false;
        }
        catch (...)
        {
            return false;
        }
        return false;
    }
    inline void codegenValueElement( MsItemElementPtr& e )
    {
        std::stringstream h;
        std::stringstream cpp;
        std::stringstream test;
        
        std::string attStructName = e->getCppName() + "Attributes";
        std::string attStructPtrName = attStructName + "Ptr";
        
        MsItemPtr complextype = e->getInheritedMsItem();
        MsItemPtr simpleContent = *( ++( complextype->getChildrenBegin() ) );
        MsItemPtr extensionBase = *( ( simpleContent->getChildrenBegin() ) );
        MsItemPtr inheritedTypeMsItem = extensionBase->getInheritedMsItem();
        MsItemSimpleTypePtr inheritedSimpleType = std::make_shared<MsItemSimpleType>( *inheritedTypeMsItem );
        MsItemElementSet equivalentElements = findEquivalentElements( e );
        h << "/**************** " << e->getCppName() << " ****************" << end();
        for ( auto eq = equivalentElements.cbegin();
                eq != equivalentElements.cend();
              ++eq )
        {
            h << (*eq)->getID();
            if ( eq != (--(equivalentElements.cend() ) ) )
            {
                h << ", ";
            }
            else
            {
                h << end();
            }
        }
        h << e->getXml() << end();
        complextype->getXpItem()->stream( h, 0 );
        //h << end();
        inheritedTypeMsItem->getXpItem()->stream( h, 0 );
        //h << end();
        h << "*/" << end();
        /* H ATTRIBUTES STRUCT */
        h << "struct " << attStructName << ";" << end();
        h << "using " << attStructPtrName << " = std::shared_ptr<" << attStructName << ">;" << end(2);
        h << "struct " << attStructName << " : public AttributesInterface" << end();
        h << "{" << end();
        h << "public:" << end();
        h << tab(1) << attStructName << "();" << end();
        h << tab(1) << "virtual bool hasValues() const;" << end();
        h << tab(1) << "virtual std::ostream& toStream( std::ostream& os ) const;" << end();
        const MsItemAttributeSetIterConst attBegin = e->getAttributes().cbegin();
        const MsItemAttributeSetIterConst attEnd = e->getAttributes().cend();
        for ( auto it = attBegin; it != attEnd; ++it)
        {
            MsItemPtr typeitem = (*it)->getInheritedMsItem();
            std::string curattName = (*it)->getCppName();
            curattName[0] = tolower( curattName[0] );
            h << tab(1) << "types::" << typeitem->getCppName() << " " << curattName << ";" << end();
        }
        for ( auto it = attBegin; it != attEnd; ++it)
        {
            MsItemPtr typeitem = (*it)->getInheritedMsItem();
            std::string curattName = (*it)->getCppName();
            curattName[0] = tolower( curattName[0] );
            if ( (*it)->getIsRequired() )
            {
                h << "const ";
            }
            h << tab(1) << "bool has" << (*it)->getCppName() << ";" << end();
        }
        h << "};" << end(2);

        /* H ELEMENT CLASS */
        h << "class " << e->getCppName() << " : public ElementInterface" << end();
        h << "{" << end();
        h << "public:" << end();
        h << tab(1) << e->getCppName() << "();" << end();
        h << tab(1) << e->getCppName() << "( const types::" << inheritedSimpleType->getCppName() << "& value );" << end();
        h << tab(1) << "virtual bool hasAttributes() const;" << end();
        h << tab(1) << "virtual std::ostream& streamAttributes( std::ostream& os ) const;" << end();
        h << tab(1) << "virtual std::ostream& streamName( std::ostream& os ) const;" << end();
        h << tab(1) << "virtual std::ostream& streamContents( std::ostream& os, const int indentLevel ) const;" << end();
        h << tab(1) << attStructPtrName << " getAttributes() const;" << end();
        h << tab(1) << "void setAttributes( const " << attStructPtrName << "& attributes );" << end();
        h << tab(1) << "types::" << inheritedSimpleType->getCppName() << " getValue() const;" << end();
        h << tab(1) << "void setValue( const types::" << inheritedSimpleType->getCppName() << "& value );" << end();
        h << "private:" << end();
        h << tab(1) << "types::" << inheritedSimpleType->getCppName() << " myValue;" << end();
        h << tab(1) << attStructPtrName << " myAttributes;" << end();
        h << "};" << end();
        
        /* CPP STTRIBUTES STRUCT */
        cpp << "/**************** " << e->getCppName() << " ****************/" << end();
        cpp << attStructName << "::" << attStructName << "()" << end();
        
        for ( auto it = attBegin; it != attEnd; ++it)
        {
            if( it == attBegin )
            {
                cpp << ":";
            }
            else
            {
                cpp << ",";
            }
            std::string curattName = (*it)->getCppName();
            curattName[0] = tolower( curattName[0] );
            cpp << curattName << "(";
            if ( (*it)->getHasDefault() )
            {
                cpp << " " << (*it)->getDefault() << " ";
            }
            cpp << ")" << end();
        }
        for ( auto it = attBegin; it != attEnd; ++it)
        {
            std::string curattName = (*it)->getCppName();
            curattName[0] = tolower( curattName[0] );
            cpp << ",has" << (*it)->getCppName() << "( ";
            cpp << std::boolalpha << (*it)->getHasDefault() << " )" << end();
        }
        cpp << "{}" << end(2);
        
        cpp << "bool " << attStructName << "::hasValues() const" << end();
        cpp << "{" << end();
        for ( auto it = attBegin; it != attEnd; ++it)
        {
            std::string curattName = (*it)->getCppName();
            curattName[0] = tolower( curattName[0] );
            if ( it == attBegin )
            {
                cpp << "return ";
            }
            cpp << "has" << (*it)->getCppName();
            if ( it == ( attEnd - 1 ) )
            {
                cpp << ";" << end();
            }
            else
            {
                cpp << " ||" << end();
            }
        }
        cpp << "}" << end(2);
        
        cpp << "std::ostream& " << attStructName << "::toStream( std::ostream& os ) const" << end();
        cpp << "{" << end();
        cpp << "if ( hasValues() )" << end();
        cpp << "{" << end();
        for ( auto it = attBegin; it != attEnd; ++it)
        {
            std::string curattName = (*it)->getCppName();
            curattName[0] = tolower( curattName[0] );
            cpp << "streamAttribute( os, ";
            cpp << curattName << ", ";
            cpp << "\"" << (*it)->getXmlName() << "\", ";
            cpp << "has" << (*it)->getCppName() << " );" << end();
        }
        cpp << "}" << end();
        cpp << "return os;" << end();
        cpp << "}" << end(2);

        cpp << e->getCppName() << "::" << e->getCppName() << "()" << end();
        cpp << ":myValue()" << end();
        cpp << ",myAttributes( std::make_shared<" << attStructName << ">() )" << end();
        cpp << "{}" << end();
        
        cpp << e->getCppName() << "::" << e->getCppName() << "( const types::" << inheritedSimpleType->getCppName() << "& value )" << end();
        cpp << ":myValue( value )" << end();
        cpp << ",myAttributes( std::make_shared<" << attStructName << ">() )" << end();
        cpp << "{}" << end();
        
        cpp << "bool " << e->getCppName() << "::hasAttributes() const" << end();
        cpp << "{" << end();
        cpp << "return myAttributes->hasValues();" << end();
        cpp << "}" << end();
        
        cpp << "std::ostream& " << e->getCppName() << "::streamAttributes( std::ostream& os ) const" << end();
        cpp << "{" << end();
        cpp << "if ( myAttributes )" << end();
        cpp << "{" << end();
        cpp << "myAttributes->toStream( os );" << end();
        cpp << "}" << end();
        cpp << "return os;" << end();
        cpp << "}" << end();
        
        cpp << "std::ostream& " << e->getCppName() << "::streamName( std::ostream& os ) const" << end();
        cpp << "{" << end();
        cpp << "os << \"" << e->getXmlName() << "\";" << end();
        cpp << "return os;" << end();
        cpp << "}" << end();
        
        cpp << "std::ostream& " << e->getCppName() << "::streamContents( std::ostream& os, const int indentLevel  ) const" << end();
        cpp << "{" << end();
        cpp << "os << myValue;" << end();
        cpp << "return os;" << end();
        cpp << "}" << end();
        
        cpp << attStructPtrName << " " << e->getCppName() << "::getAttributes() const" << end();
        cpp << "{" << end();
        cpp << "return myAttributes;" << end();
        cpp << "}" << end();
        
        cpp << "/* if value.get()==nullptr then this is a no-op" << end();
        cpp << "i.e. this function guards against setting Attributes to nullptr */" << end();
        cpp << "void " << e->getCppName() << "::setAttributes( const " << attStructPtrName << "& value )" << end();
        cpp << "{" << end();
        cpp << "if ( value )" << end();
        cpp << "{" << end();
        cpp << "myAttributes = value;" << end();
        cpp << "}" << end();
        cpp << "}" << end();
        
        cpp << "types::" << inheritedSimpleType->getCppName() << " " << e->getCppName() << "::getValue() const" << end();
        cpp << "{" << end();
        cpp << "return myValue;" << end();
        cpp << "}" << end();
        
        cpp << "void " << e->getCppName() << "::setValue( const types::" << inheritedSimpleType->getCppName() << "& value )" << end();
        cpp << "{" << end();
        cpp << "myValue = value;" << end();
        cpp << "}" << end();
        
        test << "#include \"TestHarness.h\"" << end();
        test << "#include \"Elements.h\"" << end();
        test << "#include <sstream>" << end(2);
        
        test << "using namespace mx::types;" << end();
        test << "using namespace mx::e;" << end(2);
        
        test << "TEST( Test01, " << e->getCppName() << " )" << end();
        test << "{" << end();
        test << tab(1) << "std::string indentString( INDENT );" << end();
        test << tab(1) << inheritedSimpleType->getCppName() << " value1;" << end();
        test << tab(1) << inheritedSimpleType->getCppName() << " value2;" << end();
        test << tab(1) << e->getCppName() << " object1;" << end();
        test << tab(1) << e->getCppName() << " object2( value2 );" << end();
        test << tab(1) << attStructPtrName << " attributes1 = std::make_shared<" << attStructName << ">();" << end();
        test << tab(1) << attStructPtrName << " attributesNull;" << end();
        test << tab(1) << "/* set some attribute1 values here */" << end();
        test << tab(1) << "object2.setAttributes( attributes1 );" << end();
        test << tab(1) << "std::stringstream default_constructed;" << end();
        test << tab(1) << "object1.toStream( default_constructed, 0 );" << end();
        test << tab(1) << "std::stringstream object2_stream;" << end();
        test << tab(1) << "object2.toStream( object2_stream, 2 );" << end();
        test << tab(1) << "std::string expected = \"hello\";" << end();
        test << tab(1) << "std::string actual = default_constructed.str();" << end();
        test << tab(1) << "CHECK_EQUAL( expected, actual )" << end();
        test << tab(1) << "expected = indentString+indentString+\"hello2\";" << end();
        test << tab(1) << "actual = object2_stream.str();" << end();
        test << tab(1) << "CHECK_EQUAL( expected, actual )" << end();
        test << tab(1) << "value1 = object2.getValue();" << end();
        test << tab(1) << "object1.setValue( value1 );" << end();
        test << tab(1) << "std::stringstream o1;";
        test << tab(1) << "std::stringstream o2;";
        test << tab(1) << "bool isOneLineOnly = false;" << end();
        test << tab(1) << "object1.streamContents( o1, 0, isOneLineOnly );" << end();
        test << tab(1) << "object2.streamContents( o2, 0, isOneLineOnly );" << end();
        test << tab(1) << "CHECK( isOneLineOnly )" << end();
        test << tab(1) << "CHECK_EQUAL( o1.str(), o2.str() )" << end();
        test << "}" << end();
        
        std::cout << end() << test.str() << end(2);
    }
}