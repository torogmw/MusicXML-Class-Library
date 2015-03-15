#include "MsItem.h"
#include "MsItemWeb.h"
#include "MsItemAttribute.h"
#include "MsItemElement.h"
#include "end.h"
#include "tab.h"
#include <iostream>
#include "File.h"
#include "globals.h"
#include "setIsImplemented.h"

namespace xsd
{
    
    inline void codegenEmptyElementWithAttributesTest( std::ostream& test, const std::string& attStructName, const MsItemElementPtr& e )
    {
        
        std::string attStructPtrName = attStructName + "Ptr";
        
        const MsItemPtr complextypeYYY = e->getInheritedMsItem();
//        MsItemPtr simpleContent = *( ++( complextypeYYY->getChildrenBegin() ) );
//        MsItemPtr extensionBase = *( ( simpleContent->getChildrenBegin() ) );
//        MsItemPtr inheritedTypeMsItem = extensionBase->getInheritedMsItem();
//        MsItemSimpleTypePtr inheritedSimpleType = std::make_shared<MsItemSimpleType>( *inheritedTypeMsItem );
        test << "/*" << end();
        MsItemElementSet equivalentElements = findEquivalentElements( e );
        for ( auto eq = equivalentElements.cbegin();
             eq != equivalentElements.cend();
             ++eq )
        {
            test << (*eq)->getID();
            if ( eq != (--(equivalentElements.cend() ) ) )
            {
                test << ", ";
            }
            else
            {
                test << end();
            }
        }
        // h << e->getXml() << end();
        e->getXpItem()->stream( test, 0 );
        complextypeYYY->getXpItem()->stream( test, 0 );
        //test << end();
        //inheritedTypeMsItem->getXpItem()->stream( test, 0 );
        //test << end();
        test << "*/" << end();
        /* H ATTRIBUTES STRUCT */
        
        
        test << "#include \"TestHarness.h\"" << end();
        test << "#include \"Elements.h\"" << end();
        test << "#include <sstream>" << end(2);
        
        test << "using namespace mx::types;" << end();
        test << "using namespace mx::e;" << end(2);
        
        test << "TEST( Test01, " << e->getCppName() << " )" << end();
        test << "{" << end();
        test << tab(1) << "std::string indentString( INDENT );" << end();
        // test << tab(1) << inheritedSimpleType->getCppName() << " value1;" << end();
        // test << tab(1) << inheritedSimpleType->getCppName() << " value2;" << end();
        test << tab(1) << e->getCppName() << " object1;" << end();
        test << tab(1) << e->getCppName() << " object2;" << end();
        test << tab(1) << attStructPtrName << " attributes1 = std::make_shared<" << attStructName << ">();" << end();
        test << tab(1) << attStructPtrName << " attributesNull;" << end();
        test << tab(1) << "/* set some attribute1 values here */" << end( 2 );
        test << tab(1) << "object2.setAttributes( attributes1 );" << end();
        test << tab(1) << "object2.setAttributes( attributesNull ); /* should have no affect */" << end();
        test << tab(1) << "std::stringstream default_constructed;" << end();
        test << tab(1) << "object1.toStream( default_constructed, 0 );" << end();
        test << tab(1) << "std::stringstream object2_stream;" << end();
        test << tab(1) << "object2.toStream( object2_stream, 2 );" << end();
        test << tab(1) << "std::string expected = R\"(hello)\";" << end();
        test << tab(1) << "std::string actual = default_constructed.str();" << end();
        test << tab(1) << "CHECK_EQUAL( expected, actual )" << end();
        test << tab(1) << "expected = indentString+indentString+R\"(hello2)\";" << end();
        test << tab(1) << "actual = object2_stream.str();" << end();
        test << tab(1) << "CHECK_EQUAL( expected, actual )" << end();
        // test << tab(1) << "value1 = object2.getValue();" << end();
        // test << tab(1) << "object1.setValue( value1 );" << end();
        test << tab(1) << "std::stringstream o1;";
        test << tab(1) << "std::stringstream o2;";
        test << tab(1) << "bool isOneLineOnly = false;" << end();
        test << tab(1) << "object1.streamContents( o1, 0, isOneLineOnly );" << end();
        test << tab(1) << "object2.streamContents( o2, 0, isOneLineOnly );" << end();
        test << tab(1) << "CHECK( isOneLineOnly )" << end();
        test << tab(1) << "CHECK_EQUAL( o1.str(), o2.str() )" << end();
        test << tab(1) << "CHECK( !object1.hasContents() )" << end();
        test << tab(1) << "CHECK( !object1.hasAttributes() )" << end();
        test << tab(1) << "CHECK( object2.hasAttributes() )" << end();
        test << "}" << end();
        
//        std::string hstring;
//        std::string cppstring;
//        
//        fs::FileName hfilename( "h", "h" );
//        fs::FileName cppfilename( "cpp", "cpp" );
//        fs::Directory dir( globals::getOutputDirectory() );
//        fs::File hFile{ fs::FileInfo{ hfilename, dir } };
//        fs::File cppFile{ fs::FileInfo{ cppfilename, dir } };
//        
//        if ( append )
//        {
//            hFile.readIntoMemory();
//            cppFile.readIntoMemory();
//            hFile.setContents( hFile.getContents()+h.str() );
//            cppFile.setContents( cppFile.getContents()+cpp.str() );
//        }
//        else
//        {
//            hFile.setContents( h.str() );
//            cppFile.setContents( cpp.str() );
//        }
//        std::string testFileName = e->getCppName() + "Test.cpp";
//        fs::writeStringToFile( globals::getOutputDirectory(), testFileName, test.str() );
//        hFile.writeToDisk();
//        cppFile.writeToDisk();
//        if ( setImplemented )
//        {
//            for ( auto equiv : equivalentElements )
//            {
//                setIsImplemented( equiv->getID() );
//            }
//        }
    }
}