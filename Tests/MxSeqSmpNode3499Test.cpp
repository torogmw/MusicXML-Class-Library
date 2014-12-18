

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
    object.addFeature( std::make_shared<MxEsFeature>( XsString() ) );
    expected = 1;
	actual = object.getFeatureCount();
    CHECK_EQUAL( expected, actual )
}
TEST( Test0005_getFeatureBegin, MxSeqSmpNode3499 )
{
	MxSeqSmpNode3499 object;
	MxEsFeaturesIter expected;
	MxEsFeaturesIter actual;
	CHECK( object.getFeatureBegin() == object.getFeatureEnd() )
    object.addFeature( std::make_shared<MxEsFeature>( XsString() ) );
    CHECK( object.getFeatureBegin() != object.getFeatureEnd() )
}
TEST( Test0006_getFeatureBeginConst, MxSeqSmpNode3499 )
{
	MxSeqSmpNode3499 object;
	MxEsFeaturesIter expected;
	MxEsFeaturesIter actual;
	CHECK( object.getFeatureBeginConst() == object.getFeatureEndConst() )
    object.addFeature( std::make_shared<MxEsFeature>( XsString() ) );
    CHECK( object.getFeatureBeginConst() != object.getFeatureEndConst() )
}
TEST( Test0008_removeFeature, MxSeqSmpNode3499 )
{
	MxSeqSmpNode3499 object;
    object.addFeature( std::make_shared<MxEsFeature>( XsString( "Hello" ) ) );
    object.addFeature( std::make_shared<MxEsFeature>( XsString( "World" ) ) );
    object.addFeature( std::make_shared<MxEsFeature>( XsString( "!" ) ) );
	std::string expected = "<feature>World</feature>";
    auto it = object.getFeatureBegin();
    ++it;
	std::string actual( (*it)->toString() );
	CHECK_EQUAL( expected, actual )
    CHECK( object.removeFeature( it ) );
    expected = "<feature>!</feature>";
    it = object.getFeatureBegin();
    ++it;
	actual = (*it)->toString();
	CHECK_EQUAL( expected, actual )
    it = object.getFeatureEnd();
    CHECK( ! object.removeFeature( it ) );
}
TEST( Test0009_getFeatureMinOccurs, MxSeqSmpNode3499 )
{
	MxSeqSmpNode3499 object;
	int expected = 0;
	int actual = object.getFeatureMinOccurs();
    CHECK_EQUAL( expected, actual )
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
