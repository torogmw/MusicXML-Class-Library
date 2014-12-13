#include "TestHarness.h"
#include "MxSeqSmpNode4250.h"
using namespace lexicon;

TEST( Test0000_DefaultCtor, MxSeqSmpNode4250 )
{
	MxSeqSmpNode4250 object;
	CHECK( true )
}
TEST( Test0001_getXmlTypeName, MxSeqSmpNode4250 )
{
	MxSeqSmpNode4250 object;
	std::string expected;
	std::string actual;
	expected = "node-4250";
	actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0002_getClassName, MxSeqSmpNode4250 )
{
	MxSeqSmpNode4250 object;
	std::string expected;
	std::string actual;
	expected = "MxSeqSmpNode4250";
	actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0003_getDocumentation, MxSeqSmpNode4250 )
{
	MxSeqSmpNode4250 object;
	std::string expected;
	std::string actual;
	expected = "No XSD Documentation.";
	actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* Millimeters Functions ---------------------------------------------------- */

TEST( Test0004_getIsMillimetersPresent, MxSeqSmpNode4250 )
{
	MxSeqSmpNode4250 object;
	bool expected;
	bool actual;
	expected = true;
	actual = object.getIsMillimetersPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0005_getMillimeters, MxSeqSmpNode4250 )
{
	MxSeqSmpNode4250 object;
	std::string expected;
	std::string actual;
	HMxEmMillimeters element;
	expected = "";
	actual = object.getMillimeters()->toString();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0006_setMillimeters, MxSeqSmpNode4250 )
{
	MxSeqSmpNode4250 object;
	std::string expected;
	std::string actual;
	HMxEmMillimeters element;
	expected = "";
	actual = object.getMillimeters()->toString();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0007_getMillimetersMinOccurs, MxSeqSmpNode4250 )
{
	MxSeqSmpNode4250 object;
	int expected;
	int actual;
	expected = 1;
	actual = object.getMillimetersMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0008_getMillimetersMaxOccurs, MxSeqSmpNode4250 )
{
	MxSeqSmpNode4250 object;
	int expected;
	int actual;
	expected = 1;
	actual = object.getMillimetersMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0009_getIsMillimetersUnbounded, MxSeqSmpNode4250 )
{
	MxSeqSmpNode4250 object;
	bool expected;
	bool actual;
	expected = false;
	actual = object.getIsMillimetersUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: Millimeters Functions ----------------------------------------------- */

/* Tenths Functions --------------------------------------------------------- */

TEST( Test0010_getIsTenthsPresent, MxSeqSmpNode4250 )
{
	MxSeqSmpNode4250 object;
	bool expected;
	bool actual;
	expected = true;
	actual = object.getIsTenthsPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0011_getTenths, MxSeqSmpNode4250 )
{
	MxSeqSmpNode4250 object;
	std::string expected;
	std::string actual;
	HMxEmTenths element;
	expected = "";
	actual = object.getTenths()->toString();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0012_setTenths, MxSeqSmpNode4250 )
{
	MxSeqSmpNode4250 object;
	std::string expected;
	std::string actual;
	HMxEmTenths element;
	expected = "";
	actual = object.getTenths()->toString();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0013_getTenthsMinOccurs, MxSeqSmpNode4250 )
{
	MxSeqSmpNode4250 object;
	int expected;
	int actual;
	expected = 1;
	actual = object.getTenthsMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0014_getTenthsMaxOccurs, MxSeqSmpNode4250 )
{
	MxSeqSmpNode4250 object;
	int expected;
	int actual;
	expected = 1;
	actual = object.getTenthsMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0015_getIsTenthsUnbounded, MxSeqSmpNode4250 )
{
	MxSeqSmpNode4250 object;
	bool expected;
	bool actual;
	expected = false;
	actual = object.getIsTenthsUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: Tenths Functions ---------------------------------------------------- */

