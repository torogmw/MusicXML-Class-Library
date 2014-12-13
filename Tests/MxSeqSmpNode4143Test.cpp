#include "TestHarness.h"
#include "MxSeqSmpNode4143.h"
using namespace lexicon;

TEST( Test0000_DefaultCtor, MxSeqSmpNode4143 )
{
	MxSeqSmpNode4143 object;
	CHECK( true )
}
TEST( Test0001_getXmlTypeName, MxSeqSmpNode4143 )
{
	MxSeqSmpNode4143 object;
	std::string expected;
	std::string actual;
	expected = "node-4143";
	actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0002_getClassName, MxSeqSmpNode4143 )
{
	MxSeqSmpNode4143 object;
	std::string expected;
	std::string actual;
	expected = "MxSeqSmpNode4143";
	actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0003_getDocumentation, MxSeqSmpNode4143 )
{
	MxSeqSmpNode4143 object;
	std::string expected;
	std::string actual;
	expected = "No XSD Documentation.";
	actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

