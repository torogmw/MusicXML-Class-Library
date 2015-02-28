#include "enumsH.h"
#include "MsItemSimpleTypeEnum.h"
#include "tab.h"
#include <sstream>
#include "globals.h"
#include "File.h"


namespace xsd
{
    std::string enumHstring( const MsItemSimpleTypeEnum& e )
    {
        int k = 2; // minimum indent level
        std::stringstream ss;
        ss << tab( k ) << "enum class " << e.getCppName() << end();
        ss << tab( k ) << "{" << end();
        int counter = 0;
        auto sizeoflist = e.getEnumValues().size();
        for ( auto v : e.getEnumValues() )
        {
            ss << tab( k+1 ) << v->getCppName() << " = " << counter;
            if ( counter < sizeoflist - 1 )
            {
                ss << ",";
            }
            ss << end();
            ++counter;
        }
        ss << tab( k ) << "};" << end();
        ss << tab( k ) << e.getCppName() << " parse" << e.getCppName() << "( const std::string& value );" << end();
        ss << tab( k ) << "std::string toString( const " << e.getCppName() << " value );" << end();
        ss << tab( k ) << "std::ostream& toStream( std::ostream& os, const " << e.getCppName() << " value );" << end();
        ss << tab( k ) << "std::ostream& operator<<( std::ostream& os, const " << e.getCppName() << " value );" << end(2);
        return ss.str();
    }
    
    void writeEnumHFile( const MsItemWeb& web )
    {
        std::stringstream ss;
        ss << "#pragma once" << end();
        ss << "#include <iostream>" << end();
        ss << "#include <string>" << end(2);
        ss << "namespace mx" << end();
        ss << "{" << end();
        ss << tab(1) << "namespace types" << end();
        ss << tab(1) << "{" << end();
        MsItemSimpleTypeEnumSet eset = MsItemSimpleTypeEnum::construct( web );
        for ( auto e : eset )
        {
            ss << enumHstring( *e );
        }
        ss << tab(1) << "} // namespace types" << end();
        ss << "} // namespace mx";
        fs::writeStringToFile( globals::getOutputDirectory(), "Enums.h", ss.str() );
    }
}