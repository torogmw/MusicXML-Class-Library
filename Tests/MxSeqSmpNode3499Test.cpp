#include "TestHarness.h"
#include "MxSeqSmpNode3499.h"
using namespace lexicon;

TEST( Test0000_DefaultCtor, MxSeqSmpNode3499 )
{
	MxSeqSmpNode3499 object;
	CHECK( true )
}
TEST( Test0001_getXmlTypeName, MxSeqSmpNode3499 )
{
	MxSeqSmpNode3499 object;
	std::string expected;
	std::string actual;
	expected = "node-3499";
	actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0002_getClassName, MxSeqSmpNode3499 )
{
	MxSeqSmpNode3499 object;
	std::string expected;
	std::string actual;
	expected = "MxSeqSmpNode3499";
	actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0003_getDocumentation, MxSeqSmpNode3499 )
{
	MxSeqSmpNode3499 object;
	std::string expected;
	std::string actual;
	expected = "No XSD Documentation.";
	actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

