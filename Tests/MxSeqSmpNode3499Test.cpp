#if 1==0

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

/* Feature Functions -------------------------------------------------------- */

TEST( Test0004_getFeatureCount, MxSeqSmpNode3499 )
{
	MxSeqSmpNode3499 object;
	std::size_t expected;
	std::size_t actual;
	expected = 0;
	actual = object.getFeatureCount();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0005_getFeatureBegin, MxSeqSmpNode3499 )
{
	MxSeqSmpNode3499 object;
	MxEsFeaturesIter expected;
	MxEsFeaturesIter actual;
}
TEST( Test0006_getFeatureBeginConst, MxSeqSmpNode3499 )
{
	MxSeqSmpNode3499 object;
	MxEsFeaturesIterConst expected;
	MxEsFeaturesIterConst actual;
}
TEST( Test0007_addFeature, MxSeqSmpNode3499 )
{
	MxSeqSmpNode3499 object;
	std::size_t expected;
	std::size_t actual;
}
TEST( Test0008_removeFeature, MxSeqSmpNode3499 )
{
	MxSeqSmpNode3499 object;
	std::size_t expected;
	std::size_t actual;
	expected = 0;
	//actual = object.removeFeature();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0009_getFeatureMinOccurs, MxSeqSmpNode3499 )
{
	MxSeqSmpNode3499 object;
	int expected;
	int actual;
}
TEST( Test0010_getFeatureMaxOccurs, MxSeqSmpNode3499 )
{
	MxSeqSmpNode3499 object;
	int expected;
	int actual;
	expected = 32767;
	actual = object.getFeatureMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0011_getIsFeatureUnbounded, MxSeqSmpNode3499 )
{
	MxSeqSmpNode3499 object;
	bool expected;
	bool actual;
	expected = true;
	actual = object.getIsFeatureUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: Feature Functions --------------------------------------------------- */

TEST( toString, MxSeqSmpNode3499 )
{
    CHECK( false )
}

#endif