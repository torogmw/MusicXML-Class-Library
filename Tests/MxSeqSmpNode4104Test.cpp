#include "TestHarness.h"
#include "MxSeqSmpNode4104.h"
using namespace lexicon;

TEST( Test0000_DefaultCtor, MxSeqSmpNode4104 )
{
	MxSeqSmpNode4104 object;
	CHECK( true )
}
TEST( Test0001_getXmlTypeName, MxSeqSmpNode4104 )
{
	MxSeqSmpNode4104 object;
	std::string expected;
	std::string actual;
	expected = "node-4104";
	actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0002_getClassName, MxSeqSmpNode4104 )
{
	MxSeqSmpNode4104 object;
	std::string expected;
	std::string actual;
	expected = "MxSeqSmpNode4104";
	actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0003_getDocumentation, MxSeqSmpNode4104 )
{
	MxSeqSmpNode4104 object;
	std::string expected;
	std::string actual;
	expected = "No XSD Documentation.";
	actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

