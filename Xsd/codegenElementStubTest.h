#pragma once
#include "MsItem.h"
#include "MsItemElement.h"
#include "tab.h"
#include "end.h"
#include "convertFunkyTypeName.h"

namespace xsd
{
    inline void codegenElementStubTest( std::ostream& test, const std::string& attStructName, const MsItemElementPtr& e )
    {
        test << tab(0) << "#include \"TestHarness.h\"" << end();
        test << tab(0) << "#include \"MxTestHelper.h\"" << end();
        test << tab(0) << "#include \"Elements.h\"" << end();
        test << tab(0) << "" << end();
        test << tab(0) << "using namespace mx::e;" << end();
        test << tab(0) << "using namespace mx::types;" << end();
        test << tab(0) << "using namespace std;" << end();
        test << tab(0) << "using namespace MxTestHelpers;" << end();
        test << tab(0) << "" << end();
        test << tab(0) << "TEST( Test01, " << e->getCppName() << " )" << end();
        test << tab(0) << "{" << end();
        test << tab(1) << "" << e->getCppName() << " object;" << end();
        test << tab(1) << "stringstream expected;" << end();
        test << tab(1) << "streamLine( expected, 1, R\"()\" );" << end();
        test << tab(1) << "streamLine( expected, 2, R\"()\" );" << end();
        test << tab(1) << "streamLine( expected, 2, R\"()\" );" << end();
        test << tab(1) << "streamLine( expected, 2, R\"()\" );" << end();
        test << tab(1) << "streamLine( expected, 1, R\"()\", false );" << end();
        test << tab(1) << "stringstream actual;" << end();
        test << tab(1) << "object.toStream( actual, 1 );" << end();
        test << tab(1) << "CHECK_EQUAL( expected.str(), actual.str() )" << end();
        test << tab(1) << "CHECK( object.hasAttributes() )" << end();
        test << tab(1) << "CHECK( object.hasContents() )" << end();
        test << tab(0) << "}" << end();
    }
}