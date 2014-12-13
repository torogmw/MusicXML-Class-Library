#include "TestHarness.h"
#include "MxSeqSmpNode6056.h"
using namespace lexicon;

TEST( Test0000_DefaultCtor, MxSeqSmpNode6056 )
{
	MxSeqSmpNode6056 object;
	CHECK( true )
}
TEST( Test0001_getXmlTypeName, MxSeqSmpNode6056 )
{
	MxSeqSmpNode6056 object;
	std::string expected;
	std::string actual;
	expected = "node-6056";
	actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0002_getClassName, MxSeqSmpNode6056 )
{
	MxSeqSmpNode6056 object;
	std::string expected;
	std::string actual;
	expected = "MxSeqSmpNode6056";
	actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0003_getDocumentation, MxSeqSmpNode6056 )
{
	MxSeqSmpNode6056 object;
	std::string expected;
	std::string actual;
	expected = "No XSD Documentation.";
	actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* Level Functions ---------------------------------------------------------- */

TEST( Test0004_getIsLevelPresent, MxSeqSmpNode6056 )
{
	MxSeqSmpNode6056 object;
	bool expected;
	bool actual;
	expected = true;
	actual = object.getIsLevelPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0005_getLevel, MxSeqSmpNode6056 )
{
	MxSeqSmpNode6056 object;
	std::string expected;
	std::string actual;
	HMxEsLevel element;
	expected = "";
	actual = object.getLevel()->toString();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0006_setLevel, MxSeqSmpNode6056 )
{
	MxSeqSmpNode6056 object;
	std::string expected;
	std::string actual;
	HMxEsLevel element;
	expected = "";
	actual = object.getLevel()->toString();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0007_getLevelMinOccurs, MxSeqSmpNode6056 )
{
	MxSeqSmpNode6056 object;
	int expected;
	int actual;
	expected = 1;
	actual = object.getLevelMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0008_getLevelMaxOccurs, MxSeqSmpNode6056 )
{
	MxSeqSmpNode6056 object;
	int expected;
	int actual;
	expected = 1;
	actual = object.getLevelMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0009_getIsLevelUnbounded, MxSeqSmpNode6056 )
{
	MxSeqSmpNode6056 object;
	bool expected;
	bool actual;
	expected = false;
	actual = object.getIsLevelUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: Level Functions ----------------------------------------------------- */

