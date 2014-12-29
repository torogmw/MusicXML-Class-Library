#include "TestHarness.h"
#include "MxSeqSmpNode4190.h"
#include "streamLinesTestHelper.h"

using namespace lexicon;

TEST( Test0000_DefaultCtor, MxSeqSmpNode4190 )
{
	MxSeqSmpNode4190 object;
	CHECK( true )
}
TEST( Test0001_getXmlTypeName, MxSeqSmpNode4190 )
{
	MxSeqSmpNode4190 object;
	std::string expected;
	std::string actual;
	expected = "node-4190";
	actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0002_getClassName, MxSeqSmpNode4190 )
{
	MxSeqSmpNode4190 object;
	std::string expected;
	std::string actual;
	expected = "MxSeqSmpNode4190";
	actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0003_getDocumentation, MxSeqSmpNode4190 )
{
	MxSeqSmpNode4190 object;
	std::string expected;
	std::string actual;
	expected = "No XSD Documentation.";
	actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* MeasureDistance Functions ------------------------------------------------ */

TEST( Test0004_getIsMeasureDistancePresent, MxSeqSmpNode4190 )
{
	MxSeqSmpNode4190 object;
	bool expected;
	bool actual;
	expected = false;
	actual = object.getIsMeasureDistancePresent();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0005_setIsMeasureDistancePresent, MxSeqSmpNode4190 )
{
	MxSeqSmpNode4190 object;
	bool expected;
	bool actual;
	expected = false;
	actual = object.getIsMeasureDistancePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsMeasureDistancePresent( true );
	expected = true;
	actual = object.getIsMeasureDistancePresent();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0006_getMeasureDistance, MxSeqSmpNode4190 )
{
	MxSeqSmpNode4190 object;
	std::string expected;
	std::string actual;
	expected = "<measure-distance>1</measure-distance>";
	actual = object.getMeasureDistance()->toString();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0007_setMeasureDistance, MxSeqSmpNode4190 )
{
	MxSeqSmpNode4190 object;
	std::string expected;
	std::string actual;
	HMxEmMeasureDistance element = std::make_shared<MxEmMeasureDistance>( MxNumberTenths( 2.03 ) );
	object.setIsMeasureDistancePresent( true );
    object.setMeasureDistance( element );
    expected = "<measure-distance>2.03</measure-distance>";
	actual = object.getMeasureDistance()->toString();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0008_getMeasureDistanceMinOccurs, MxSeqSmpNode4190 )
{
	MxSeqSmpNode4190 object;
	int expected;
	int actual;
	expected = 0;
	actual = object.getMeasureDistanceMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0009_getMeasureDistanceMaxOccurs, MxSeqSmpNode4190 )
{
	MxSeqSmpNode4190 object;
	int expected;
	int actual;
	expected = 1;
	actual = object.getMeasureDistanceMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0010_getIsMeasureDistanceUnbounded, MxSeqSmpNode4190 )
{
	MxSeqSmpNode4190 object;
	bool expected;
	bool actual;
	expected = false;
	actual = object.getIsMeasureDistanceUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: MeasureDistance Functions ------------------------------------------- */


//TEST( toString, MxSeqSmpNode4190 )
//{
//    CHECK( false )
//}