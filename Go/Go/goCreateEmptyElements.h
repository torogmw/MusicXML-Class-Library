#pragma once
#include "MsItem.h"
#include "MsItemWeb.h"
#include "MsItemAttribute.h"
#include "XpItem.h"
#include <set>
#include "File.h"
#include "globals.h"
#include "MsItemElement.h"
#include "codegenValueElementNoAttributes.h"
#include <sstream>
#include "goSetIsImplemented.h"

namespace go
{
    inline bool goIsEmptyElement( const xsd::MsItemElementPtr& e )
    {
        if ( e->getChildren().size() == 0 )
        {
            if ( e->getInheritedMsItem() )
            {
                if ( e->getInheritedMsItem()->getDtDef() == "empty" )
                {
                    return true;
                }
            }
        }
        else if ( e->getChildren().size() == 1 )
        {
            if ( (*(e->getChildrenBegin()))->getMsItemKind()==xsd::MsItemKind::annotation )
            {
                if ( e->getInheritedMsItem() )
                {
                    if ( e->getInheritedMsItem()->getDtDef() == "empty" )
                    {
                        return true;
                    }
                }
            }
        }
        return false;
    }
    inline void goCreateEmptyElements()
    {
        using namespace xsd;
        using namespace fs;
        using namespace std;
        
        MsItemWeb w;
        MsItemSet iset = w.getFilteredMsItemSet( MsItemKind::element );
        MsItemElementSet elements;
        for ( const auto currentitem : iset )
        {
            if ( currentitem->getIsImplemented() == false )
            {
                
                MsItemElementPtr newe = std::make_shared<MsItemElement>( *currentitem );
                if ( goIsEmptyElement( newe ) )
                {
                    elements.push_back( newe );
                }
            }
        }
        
        stringstream h;
        stringstream cpp;
        stringstream test;
        const string tab1 = "   ";
        const string tab2 = tab1+tab1;
        const string tab3 = tab1+tab1+tab1;
        const string tab4 = tab1+tab1+tab1+tab1;
        const string n = "\n";
        
        for ( auto e : elements )
        {
            string className( "" );
            string xmlName( "" );
            stringstream documentation( "" );
            className = e->getCppName();
            xmlName = e->getXmlName();
            e->getXpItem()->stream( documentation, 0 );
            h << tab2 << "/*" << endl;
            h << tab2 << e->getID() << n;
            h << tab2 << documentation.str() << n;
            h << tab2 << "*/" << n;
            h << tab2 << "class " << className << " : public ElementInterface" << n;
            h << tab2 << "{" << n;
            h << tab2 << "public:" << n;
            h << tab3 << className << "();" << n;
            
            h << tab3 << "virtual bool hasAttributes() const;" << n;
            h << tab3 << "virtual bool hasContents() const;" << n;
            h << tab3 << "virtual std::ostream& streamAttributes( std::ostream& os ) const;" << n;
            h << tab3 << "virtual std::ostream& streamName( std::ostream& os ) const;" << n;
            h << tab3 << "virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;" << n;
            h << tab2 << "};" << n << n;
            
            cpp << tab2 << className << "::" << className << "() : ElementInterface() {}" << n;
            cpp << tab2 << "bool " << className << "::hasAttributes() const { return false; }" << n;
            cpp << tab2 << "bool " << className << "::hasContents() const  { return false; }" << n;
            cpp << tab2 << "std::ostream& " << className << "::streamAttributes( std::ostream& os ) const { return os; }" << n;
            cpp << tab2 << "std::ostream& " << className << "::streamName( std::ostream& os ) const  { os << \"" << xmlName << "\"; return os; }" << n;
            cpp << tab2 << "std::ostream& " << className << "::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const" << n;
            cpp << tab2 << "{" << n;
            cpp << tab3 << "isOneLineOnly = true;" << n;
            cpp << tab3 << "return os;" << n;
            cpp << tab2 << "}" << n << n;
            
            test << R"(#include "TestHarness.h")" << n;
            test << R"(#include "Elements.h")" << n;
            test << R"(#include <sstream>)" << n;
            test << R"(using namespace mx::types;)" << n;
            test << R"(using namespace mx::e;)" << n << n;
            test << "/*" << endl;
            test << e->getID() << n;
            test << documentation.str();
            test << "*/" << n << n;
            test << "TEST( Test01, " << className << " )" << n;
            test << "{" << n;
            test << tab1 << R"(std::string indentString( INDENT );)" << n;
            test << tab1 << className << R"( object1;)" << n;
            test << tab1 << R"(std::stringstream default_constructed;)" << n;
            test << tab1 << R"(object1.toStream( default_constructed, 0 );)" << n;
            test << tab1 << R"(std::stringstream indented_stream;)" << n;
            test << tab1 << R"(object1.toStream( indented_stream, 2 );)" << n;
            test << tab1 << R"|||(std::string expected = "<)|||" << xmlName << R"|||(/>";)|||" << n;
            test << tab1 << R"(std::string actual = default_constructed.str();)" << n;
            test << tab1 << R"(CHECK_EQUAL( expected, actual ))" << n;
            test << tab1 << R"(expected = indentString+indentString+expected;)" << n;
            test << tab1 << R"(actual = indented_stream.str();)" << n;
            test << tab1 << R"(CHECK_EQUAL( expected, actual ))" << n;
            test << tab1 << R"(std::stringstream o1;)" << n;
            test << tab1 << R"(bool isOneLineOnly = false;)" << n;
            test << tab1 << R"(object1.streamContents( o1, 0, isOneLineOnly );)" << n;
            test << tab1 << R"(CHECK( isOneLineOnly ))" << n;
            test << tab1 << R"(CHECK_EQUAL( o1.str(), "" ))" << n;
            test << tab1 << R"(CHECK( ! object1.hasAttributes() ))" << n;
            test << tab1 << R"(CHECK( ! object1.hasContents() ))" << n;
            test << "}" << n;
            
            fs::FileName fn{ className+"Test", "cpp" };
            fs::Directory d{ globals::getOutputDirectory() };
            fs::FileInfo fo{ fn, d };
            fs::File f{ fo };
                                                                                     f.setContents( test.str() );
                                                                                     test.str( "" );
                                                                                     f.writeToDisk();
                                                                                     std::vector<int> impls;
                                                                                     impls.push_back( e->getID() );
                                                                                     // go::goSetIsImplemented( impls );
                                                                                     
            
        }
        cout << test.str() << endl;
    }
}