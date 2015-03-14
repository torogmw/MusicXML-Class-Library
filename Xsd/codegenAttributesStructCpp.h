
#pragma once
#include "MsItem.h"
#include "MsItemElement.h"
#include "tab.h"
#include "end.h"

namespace xsd
{
    inline void codegenAttributesStructCpp( std::ostream& cpp, const std::string& attStructName, const MsItemElementPtr& e )
    {
        std::string attStructPtrName = attStructName+"Ptr";
        cpp << end(2) << "/**************** " << e->getCppName() << " ****************/" << end();
        cpp << attStructName << "::" << attStructName << "()" << end();
        auto attBegin = e->getAttributes().cbegin();
        auto attEnd = e->getAttributes().cend();
        for ( auto it = attBegin; it != attEnd; ++it)
        {
            MsItemPtr typeitem = (*it)->getInheritedMsItem();
            std::string tempTypeName;
            if ( typeitem )
            {
                tempTypeName = typeitem->getCppName();
            }
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
            else if( tempTypeName == "FontWeight" )
            {
                cpp << " types::FontWeight::normal ";
            }
            else if( tempTypeName == "FontSize" )
            {
                cpp << " types::CssFontSize::medium ";
            }
            else if( tempTypeName == "FontStyle" )
            {
                cpp << " types::FontStyle::normal ";
            }
            else if( tempTypeName == "AboveBelow" )
            {
                cpp << " types::AboveBelow::below ";
            }
            else if( tempTypeName == "LeftCenterRight" )
            {
                cpp << " types::LeftCenterRight::center ";
            }
            else if( tempTypeName == "YesNo" )
            {
                cpp << " types::YesNo::no ";
            }
            else if( tempTypeName == "TwoNoteTurn" )
            {
                cpp << " types::TwoNoteTurn::none ";
            }
            else if( tempTypeName == "StartNote" )
            {
                cpp << " types::StartNote::main ";
            }
            else if( tempTypeName == "_____" )
            {
                cpp << " types::______::_____ ";
            }
            else if( tempTypeName == "_____" )
            {
                cpp << " types::______::_____ ";
            }
            else if( tempTypeName == "_____" )
            {
                cpp << " types::______::_____ ";
            }
            else if( tempTypeName == "_____" )
            {
                cpp << " types::______::_____ ";
            }
            else if( tempTypeName == "_____" )
            {
                cpp << " types::______::_____ ";
            }
            cpp << ")" << end();
        }
        for ( auto it = attBegin; it != attEnd; ++it)
        {
            std::string curattName = (*it)->getCppName();
            curattName[0] = tolower( curattName[0] );
            cpp << ",has" << (*it)->getCppName() << "( ";
            cpp << std::boolalpha << (*it)->getIsRequired() << " )" << end();
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
    }
}
