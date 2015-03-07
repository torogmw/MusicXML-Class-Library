#include "MsItem.h"
#include "MsItemWeb.h"
#include "MsItemAttribute.h"
#include "MsItemElement.h"
#include "end.h"
#include "tab.h"
#include <iostream>

namespace xsd
{
    inline void codegenAccidentalText( MsItemElementPtr& e )
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
        
        h << "/**************** " << e->getCppName() << " ****************/" << end();
        
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
        h << tab(1) << "virtual std::ostream& streamContents( std::ostream& os, const int indent_level ) const;" << end();
        h << tab(1) << attStructPtrName << " getAttributes() const;" << end();
        h << tab(1) << "void setAttributes( const " << attStructPtrName << "& attributes );" << end();
        h << tab(1) << "types::" << inheritedSimpleType->getCppName() << " getValue() const;" << end();
        h << tab(1) << "void setValue( const types::" << inheritedSimpleType->getCppName() << "& value );" << end();
        h << "private:" << end();
        h << tab(1) << "types::" << inheritedSimpleType->getCppName() << " myValue;" << end();
        h << tab(1) << attStructPtrName << " myattributes;" << end();
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

        
        std::cout << end() << cpp.str() << end(2);
    }
}