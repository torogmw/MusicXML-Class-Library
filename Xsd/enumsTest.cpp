#include "enumsTest.h"
#include "MsItemSimpleTypeEnum.h"
#include "tab.h"
#include <sstream>
#include "globals.h"
#include "File.h"


namespace xsd
{
    std::string enumTestString( const MsItemSimpleTypeEnum& e )
    {
        std::stringstream ss;
        
        ss << "TEST( " << e.getCppName();
        ss << "_BadParse";
        ss << ", MxEnums )" << end();
        ss << "{" << end();
        
        ss << tab(1) << "mx::types::" << e.getCppName() << " actual = ";
        ss << "mx::types::parse" << e.getCppName() << "( \"";
        ss << (*e.getEnumValues().begin())->getXmlName() << "\" );" << end();
        
        ss << tab(1) << "mx::types::" << e.getCppName() << " expected = ";
        ss << "mx::types::" << e.getCppName() << "::" << (*e.getEnumValues().begin())->getCppName();
        ss << ";" << end();
        
        ss << tab(1) << "CHECK_EQUAL( expected, actual )" << end();
        ss << "}" << end(2);
        
        for ( auto v : e.getEnumValues() )
        {
            ss << "TEST( " << e.getCppName();
            ss << "_" << v->getCppName();
            ss << ", MxEnums )" << end();
            ss << "{" << end();
            ss << tab(1) << "mx::types::" << e.getCppName() << " e = mx::types::" << e.getCppName() << "::" << v->getCppName() << ";" << end();
            ss << tab(1) << "std::string expected = \"" << v->getXmlName() << "\";" << end();
            ss << tab(1) << "std::string actual = toString( e );" << end();
            ss << tab(1) << "CHECK_EQUAL( expected, actual );" << end(2);
            
            ss << tab(1) << "std::stringstream sstr;" << end();
            ss << tab(1) << "mx::types::toStream( sstr, e );" << end();
            ss << tab(1) << "actual = sstr.str();" << end();
            ss << tab(1) << "CHECK_EQUAL( expected, actual );" << end(2);
            
            ss << tab(1) << "sstr.str( \"\" );" << end();
            ss << tab(1) << "sstr << e;" << end();
            ss << tab(1) << "actual = sstr.str();" << end();
            ss << tab(1) << "CHECK_EQUAL( expected, actual );" << end(2);
            
            ss << tab(1) << "mx::types::" << e.getCppName() << " e2 = mx::types::parse" << e.getCppName() << "( expected );" << end();
            ss << tab(1) << "CHECK_EQUAL( e, e2 )" << end();
            ss << "}" << end(2);
        }
        
        
        return ss.str();
    }
    
    void writeEnumTestFile( const MsItemWeb& web )
    {
        std::stringstream ss;
        ss << "#include \"TestHarness.h\"" << end();
        ss << "#include \"MxEnums.h\"" << end(2);
                MsItemSimpleTypeEnumSet eset = MsItemSimpleTypeEnum::construct( web );
        for ( auto e : eset )
        {
            ss << enumTestString( *e );
        }
        fs::writeStringToFile( globals::getOutputDirectory(), "MxEnumsTest.cpp", ss.str() );
    }
}