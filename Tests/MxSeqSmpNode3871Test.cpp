#if 1==0

#include "TestHarness.h"
#include "MxSeqSmpNode3871.h"
using namespace lexicon;

TEST( Test0000_DefaultCtor, MxSeqSmpNode3871 )
{
	MxSeqSmpNode3871 object;
	CHECK( true )
}
TEST( Test0001_getXmlTypeName, MxSeqSmpNode3871 )
{
	MxSeqSmpNode3871 object;
	std::string expected;
	std::string actual;
	expected = "node-3871";
	actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0002_getClassName, MxSeqSmpNode3871 )
{
	MxSeqSmpNode3871 object;
	std::string expected;
	std::string actual;
	expected = "MxSeqSmpNode3871";
	actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0003_getDocumentation, MxSeqSmpNode3871 )
{
	MxSeqSmpNode3871 object;
	std::string expected;
	std::string actual;
	expected = "No XSD Documentation.";
	actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* RootStep Functions ------------------------------------------------------- */

TEST( Test0004_getIsRootStepPresent, MxSeqSmpNode3871 )
{
	MxSeqSmpNode3871 object;
	bool expected;
	bool actual;
	expected = true;
	actual = object.getIsRootStepPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0005_getRootStep, MxSeqSmpNode3871 )
{
	MxSeqSmpNode3871 object;
	std::string expected;
	std::string actual;
	HMxEsRootStep element;
	expected = "";
	actual = object.getRootStep()->toString();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0006_setRootStep, MxSeqSmpNode3871 )
{
	MxSeqSmpNode3871 object;
	std::string expected;
	std::string actual;
	HMxEsRootStep element;
	expected = "";
	actual = object.getRootStep()->toString();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0007_getRootStepMinOccurs, MxSeqSmpNode3871 )
{
	MxSeqSmpNode3871 object;
	int expected;
	int actual;
	expected = 1;
	actual = object.getRootStepMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0008_getRootStepMaxOccurs, MxSeqSmpNode3871 )
{
	MxSeqSmpNode3871 object;
	int expected;
	int actual;
	expected = 1;
	actual = object.getRootStepMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0009_getIsRootStepUnbounded, MxSeqSmpNode3871 )
{
	MxSeqSmpNode3871 object;
	bool expected;
	bool actual;
	expected = false;
	actual = object.getIsRootStepUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: RootStep Functions -------------------------------------------------- */

/* RootAlter Functions ------------------------------------------------------ */

TEST( Test0010_getIsRootAlterPresent, MxSeqSmpNode3871 )
{
	MxSeqSmpNode3871 object;
	bool expected;
	bool actual;
	expected = false;
	actual = object.getIsRootAlterPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0011_setIsRootAlterPresent, MxSeqSmpNode3871 )
{
	MxSeqSmpNode3871 object;
	bool expected;
	bool actual;
	expected = false;
	actual = object.getIsRootAlterPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsRootAlterPresent( true );
	expected = true;
	actual = object.getIsRootAlterPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0012_getRootAlter, MxSeqSmpNode3871 )
{
	MxSeqSmpNode3871 object;
	std::string expected;
	std::string actual;
	HMxEsRootAlter element;
	expected = "";
	actual = object.getRootAlter()->toString();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0013_setRootAlter, MxSeqSmpNode3871 )
{
	MxSeqSmpNode3871 object;
	std::string expected;
	std::string actual;
	HMxEsRootAlter element;
	expected = "";
	actual = object.getRootAlter()->toString();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0014_getRootAlterMinOccurs, MxSeqSmpNode3871 )
{
	MxSeqSmpNode3871 object;
	int expected;
	int actual;
	expected = 0;
	actual = object.getRootAlterMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0015_getRootAlterMaxOccurs, MxSeqSmpNode3871 )
{
	MxSeqSmpNode3871 object;
	int expected;
	int actual;
	expected = 1;
	actual = object.getRootAlterMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0016_getIsRootAlterUnbounded, MxSeqSmpNode3871 )
{
	MxSeqSmpNode3871 object;
	bool expected;
	bool actual;
	expected = false;
	actual = object.getIsRootAlterUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: RootAlter Functions ------------------------------------------------- */


TEST( toString, MxSeqSmpNode3871 )
{
    CHECK( false )
}

#endif