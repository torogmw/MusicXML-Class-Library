#include "TestHarness.h"
#include "MxSeqSmpNode4261.h"
using namespace lexicon;

TEST( Test0000_DefaultCtor, MxSeqSmpNode4261 )
{
	MxSeqSmpNode4261 object;
	CHECK( true )
}
TEST( Test0001_getXmlTypeName, MxSeqSmpNode4261 )
{
	MxSeqSmpNode4261 object;
	std::string expected;
	std::string actual;
	expected = "node-4261";
	actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0002_getClassName, MxSeqSmpNode4261 )
{
	MxSeqSmpNode4261 object;
	std::string expected;
	std::string actual;
	expected = "MxSeqSmpNode4261";
	actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0003_getDocumentation, MxSeqSmpNode4261 )
{
	MxSeqSmpNode4261 object;
	std::string expected;
	std::string actual;
	expected = "No XSD Documentation.";
	actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* StaffDistance Functions -------------------------------------------------- */

TEST( Test0004_getIsStaffDistancePresent, MxSeqSmpNode4261 )
{
	MxSeqSmpNode4261 object;
	bool expected;
	bool actual;
	expected = false;
	actual = object.getIsStaffDistancePresent();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0005_setIsStaffDistancePresent, MxSeqSmpNode4261 )
{
	MxSeqSmpNode4261 object;
	bool expected;
	bool actual;
	expected = false;
	actual = object.getIsStaffDistancePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsStaffDistancePresent( true );
	expected = true;
	actual = object.getIsStaffDistancePresent();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0006_getStaffDistance, MxSeqSmpNode4261 )
{
	MxSeqSmpNode4261 object;
	std::string expected;
	std::string actual;
	HMxEmStaffDistance element;
	expected = "";
	actual = object.getStaffDistance()->toString();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0007_setStaffDistance, MxSeqSmpNode4261 )
{
	MxSeqSmpNode4261 object;
	std::string expected;
	std::string actual;
	HMxEmStaffDistance element;
	expected = "";
	actual = object.getStaffDistance()->toString();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0008_getStaffDistanceMinOccurs, MxSeqSmpNode4261 )
{
	MxSeqSmpNode4261 object;
	int expected;
	int actual;
	expected = 0;
	actual = object.getStaffDistanceMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0009_getStaffDistanceMaxOccurs, MxSeqSmpNode4261 )
{
	MxSeqSmpNode4261 object;
	int expected;
	int actual;
	expected = 1;
	actual = object.getStaffDistanceMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0010_getIsStaffDistanceUnbounded, MxSeqSmpNode4261 )
{
	MxSeqSmpNode4261 object;
	bool expected;
	bool actual;
	expected = false;
	actual = object.getIsStaffDistanceUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: StaffDistance Functions --------------------------------------------- */

