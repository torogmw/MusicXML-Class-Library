#include "TestHarness.h"
#include "MxSeqSmpNode3154.h"
using namespace lexicon;

TEST( Test0000_DefaultCtor, MxSeqSmpNode3154 )
{
	MxSeqSmpNode3154 object;
	CHECK( true )
}
TEST( Test0001_getXmlTypeName, MxSeqSmpNode3154 )
{
	MxSeqSmpNode3154 object;
	std::string expected;
	std::string actual;
	expected = "node-3154";
	actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0002_getClassName, MxSeqSmpNode3154 )
{
	MxSeqSmpNode3154 object;
	std::string expected;
	std::string actual;
	expected = "MxSeqSmpNode3154";
	actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0003_getDocumentation, MxSeqSmpNode3154 )
{
	MxSeqSmpNode3154 object;
	std::string expected;
	std::string actual;
	expected = "No XSD Documentation.";
	actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* BassStep Functions ------------------------------------------------------- */

TEST( Test0004_getIsBassStepPresent, MxSeqSmpNode3154 )
{
	MxSeqSmpNode3154 object;
	bool expected;
	bool actual;
	expected = true;
	actual = object.getIsBassStepPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0005_getBassStep, MxSeqSmpNode3154 )
{
	MxSeqSmpNode3154 object;
	std::string expected;
	std::string actual;
	HMxEsBassStep element;
	expected = "";
	actual = object.getBassStep()->toString();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0006_setBassStep, MxSeqSmpNode3154 )
{
	MxSeqSmpNode3154 object;
	std::string expected;
	std::string actual;
	HMxEsBassStep element;
	expected = "";
	actual = object.getBassStep()->toString();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0007_getBassStepMinOccurs, MxSeqSmpNode3154 )
{
	MxSeqSmpNode3154 object;
	int expected;
	int actual;
	expected = 1;
	actual = object.getBassStepMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0008_getBassStepMaxOccurs, MxSeqSmpNode3154 )
{
	MxSeqSmpNode3154 object;
	int expected;
	int actual;
	expected = 1;
	actual = object.getBassStepMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0009_getIsBassStepUnbounded, MxSeqSmpNode3154 )
{
	MxSeqSmpNode3154 object;
	bool expected;
	bool actual;
	expected = false;
	actual = object.getIsBassStepUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: BassStep Functions -------------------------------------------------- */

/* BassAlter Functions ------------------------------------------------------ */

TEST( Test0010_getIsBassAlterPresent, MxSeqSmpNode3154 )
{
	MxSeqSmpNode3154 object;
	bool expected;
	bool actual;
	expected = false;
	actual = object.getIsBassAlterPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0011_setIsBassAlterPresent, MxSeqSmpNode3154 )
{
	MxSeqSmpNode3154 object;
	bool expected;
	bool actual;
	expected = false;
	actual = object.getIsBassAlterPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsBassAlterPresent( true );
	expected = true;
	actual = object.getIsBassAlterPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0012_getBassAlter, MxSeqSmpNode3154 )
{
	MxSeqSmpNode3154 object;
	std::string expected;
	std::string actual;
	HMxEsBassAlter element;
	expected = "";
	actual = object.getBassAlter()->toString();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0013_setBassAlter, MxSeqSmpNode3154 )
{
	MxSeqSmpNode3154 object;
	std::string expected;
	std::string actual;
	HMxEsBassAlter element;
	expected = "";
	actual = object.getBassAlter()->toString();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0014_getBassAlterMinOccurs, MxSeqSmpNode3154 )
{
	MxSeqSmpNode3154 object;
	int expected;
	int actual;
	expected = 0;
	actual = object.getBassAlterMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0015_getBassAlterMaxOccurs, MxSeqSmpNode3154 )
{
	MxSeqSmpNode3154 object;
	int expected;
	int actual;
	expected = 1;
	actual = object.getBassAlterMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0016_getIsBassAlterUnbounded, MxSeqSmpNode3154 )
{
	MxSeqSmpNode3154 object;
	bool expected;
	bool actual;
	expected = false;
	actual = object.getIsBassAlterUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: BassAlter Functions ------------------------------------------------- */

