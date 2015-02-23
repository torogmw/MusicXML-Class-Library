#include "enumsCpp.h"
#include "MsItemSimpleTypeEnum.h"
#include "tab.h"
#include <sstream>
#include "globals.h"
#include "File.h"


namespace xsd
{
    std::string enumCppstring( const MsItemSimpleTypeEnum& e )
    {
        int k = 2; // minimum indent level
        std::stringstream ss;
        
        ss << tab( k ) << e.getCppName() << " parse" << e.getCppName() << "( const std::string& value )" << end();
        ss << tab( k ) << "{" << end();
        int counter = 0;
        for ( auto v : e.getEnumValues() )
        {
            if ( counter == 0 )
            {
                ss << tab( k+1 ) << "if ( value == \"";
            }
            else
            {
                ss << tab( k+1 ) << "else if ( value == \"";
            }
            ss << v->getXmlName() << "\" )";
            ss << " { return " << e.getCppName() << "::" << v->getCppName() << "; }" << end();
            ++counter;
        }
        ss << tab( k+1 ) << "return " << e.getCppName() << "::" << (*e.getEnumValues().begin())->getCppName() << ";" << end();
        ss << tab( k ) << "}" << end();
        
        
        ss << tab( k ) << "std::string toString( const " << e.getCppName() << " value )" << end();
        ss << tab( k ) << "{" << end();
        ss << tab( k+1 ) << "switch ( value ) " << end();
        ss << tab( k+1 ) << "{" << end();
        counter = 0;
        for ( auto v : e.getEnumValues() )
        {
            ss << tab( k+2 ) << "case " << e.getCppName() << "::" << v->getCppName() << ": ";
            ss << "return \"" << v->getXmlName() << "\"; break;" << end();
            ++counter;
        }
        ss << tab( k+2 ) << "default: break;" << end();
        ss << tab( k+1 ) << "}" << end();
        ss << tab( k+1 ) << "return \"" << (*e.getEnumValues().begin())->getXmlName() << "\";" << end();
        ss << tab( k ) << "}" << end();
        
        
        ss << tab( k ) << "std::ostream& toStream( std::ostream& os, const " << e.getCppName() << " value )" << end();
        ss << tab( k ) << "{" << end();
        ss << tab( k+1 ) << "return os << toString( value );" << end();
        ss << tab( k ) << "}" << end();
        
        ss << tab( k ) << "std::ostream& operator<<( std::ostream& os, const " << e.getCppName() << " value )" << end();
        ss << tab( k ) << "{" << end();
        ss << tab( k+1 ) << "return toStream( os, value );" << end();
        ss << tab( k ) << "}" << end(2);
        
        return ss.str();
    }
    
    void writeEnumCppFile( const MsItemWeb& web )
    {
        std::stringstream ss;
        ss << "#include \"MxEnums.h\"" << end(2);
        ss << "namespace mx" << end();
        ss << "{" << end();
        ss << tab(1) << "namespace types" << end();
        ss << tab(1) << "{" << end();
        MsItemSimpleTypeEnumSet eset = MsItemSimpleTypeEnum::construct( web );
        for ( auto e : eset )
        {
            ss << enumCppstring( *e );
        }
        ss << tab(1) << "} // namespace types" << end();
        ss << "} // namespace mx";
        fs::writeStringToFile( globals::getOutputDirectory(), "MxEnums.cpp", ss.str() );
    }
}