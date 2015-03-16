#pragma once
#include "MsItem.h"
#include "MsItemElement.h"
#include "tab.h"
#include "end.h"

namespace xsd
{
    inline void codegenEmptyElementWithAttributesCpp( std::ostream& cpp, const std::string& attStructName, const MsItemElementPtr& e )
    {
        MsItemElementSet equivs = findEquivalentElements( e );
        bool isDuplicate = !doesElementHaveTheLowestIDAmongPeers( e, equivs );
        if ( !isDuplicate )
        {
            const std::string n = end();
            const std::string tab1 = "   ";
            const std::string tab2 = tab1+tab1;
            const std::string tab3 = tab1+tab1+tab1;
            const std::string className = e->getCppName();
            const std::string xmlName = e->getXmlName();
            const std::string attStructPtrName = attStructName+"Ptr";
            cpp << end(2) << "/**************** " << className << " ****************/" << end();
            cpp << "/* " << e->getID() << " */" << end();
            cpp << tab2 << className << "::" << className << "()" << end();
            cpp << ":ElementInterface()" << n;
            cpp << ",myAttributes( std::make_shared<" << attStructName << ">() )" << end();
            cpp << "{}" << n;
            cpp << "bool " << e->getCppName() << "::hasAttributes() const" << end();
            cpp << "{" << end();
            cpp << "return myAttributes->hasValues();" << end();
            cpp << "}" << end();
            
            cpp << tab2 << "bool " << className << "::hasContents() const  { return false; }" << n;
            cpp << "std::ostream& " << e->getCppName() << "::streamAttributes( std::ostream& os ) const" << end();
            cpp << "{" << end();
            cpp << "if ( myAttributes )" << end();
            cpp << "{" << end();
            cpp << "myAttributes->toStream( os );" << end();
            cpp << "}" << end();
            cpp << "return os;" << end();
            cpp << "}" << end();
            cpp << tab2 << "std::ostream& " << className << "::streamName( std::ostream& os ) const  { os << \"" << xmlName << "\"; return os; }" << n;
            cpp << tab2 << "std::ostream& " << className << "::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const" << n;
            cpp << tab2 << "{" << n;
            cpp << tab3 << "isOneLineOnly = true;" << n;
            cpp << tab3 << "return os;" << n;
            cpp << tab2 << "}" << n << n;
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
            cpp << "}" << end(2);
        }
        else
        {
            cpp << "/* skipped " << e->getID() << " " << e->getCppName() << " */" << end(2);
        }
    }
}