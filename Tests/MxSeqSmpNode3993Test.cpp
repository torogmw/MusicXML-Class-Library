#if 1==0

#include "TestHarness.h"
#include "MxSeqSmpNode3993.h"
using namespace lexicon;

TEST( Test0000_DefaultCtor, MxSeqSmpNode3993 )
{
	MxSeqSmpNode3993 object;
	CHECK( true )
}
TEST( Test0001_getXmlTypeName, MxSeqSmpNode3993 )
{
	MxSeqSmpNode3993 object;
	std::string expected;
	std::string actual;
	expected = "node-3993";
	actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0002_getClassName, MxSeqSmpNode3993 )
{
	MxSeqSmpNode3993 object;
	std::string expected;
	std::string actual;
	expected = "MxSeqSmpNode3993";
	actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0003_getDocumentation, MxSeqSmpNode3993 )
{
	MxSeqSmpNode3993 object;
	std::string expected;
	std::string actual;
	expected = "No XSD Documentation.";
	actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* StickType Functions ------------------------------------------------------ */

TEST( Test0004_getIsStickTypePresent, MxSeqSmpNode3993 )
{
	MxSeqSmpNode3993 object;
	bool expected;
	bool actual;
	expected = true;
	actual = object.getIsStickTypePresent();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0005_getStickType, MxSeqSmpNode3993 )
{
	MxSeqSmpNode3993 object;
	std::string expected;
	std::string actual;
	HMxEmStickType element;
	expected = "";
	actual = object.getStickType()->toString();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0006_setStickType, MxSeqSmpNode3993 )
{
	MxSeqSmpNode3993 object;
	std::string expected;
	std::string actual;
	HMxEmStickType element;
	expected = "";
	actual = object.getStickType()->toString();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0007_getStickTypeMinOccurs, MxSeqSmpNode3993 )
{
	MxSeqSmpNode3993 object;
	int expected;
	int actual;
	expected = 1;
	actual = object.getStickTypeMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0008_getStickTypeMaxOccurs, MxSeqSmpNode3993 )
{
	MxSeqSmpNode3993 object;
	int expected;
	int actual;
	expected = 1;
	actual = object.getStickTypeMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0009_getIsStickTypeUnbounded, MxSeqSmpNode3993 )
{
	MxSeqSmpNode3993 object;
	bool expected;
	bool actual;
	expected = false;
	actual = object.getIsStickTypeUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: StickType Functions ------------------------------------------------- */

/* StickMaterial Functions -------------------------------------------------- */

TEST( Test0010_getIsStickMaterialPresent, MxSeqSmpNode3993 )
{
	MxSeqSmpNode3993 object;
	bool expected;
	bool actual;
	expected = true;
	actual = object.getIsStickMaterialPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0011_getStickMaterial, MxSeqSmpNode3993 )
{
	MxSeqSmpNode3993 object;
	std::string expected;
	std::string actual;
	HMxEmStickMaterial element;
	expected = "";
	actual = object.getStickMaterial()->toString();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0012_setStickMaterial, MxSeqSmpNode3993 )
{
	MxSeqSmpNode3993 object;
	std::string expected;
	std::string actual;
	HMxEmStickMaterial element;
	expected = "";
	actual = object.getStickMaterial()->toString();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0013_getStickMaterialMinOccurs, MxSeqSmpNode3993 )
{
	MxSeqSmpNode3993 object;
	int expected;
	int actual;
	expected = 1;
	actual = object.getStickMaterialMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0014_getStickMaterialMaxOccurs, MxSeqSmpNode3993 )
{
	MxSeqSmpNode3993 object;
	int expected;
	int actual;
	expected = 1;
	actual = object.getStickMaterialMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0015_getIsStickMaterialUnbounded, MxSeqSmpNode3993 )
{
	MxSeqSmpNode3993 object;
	bool expected;
	bool actual;
	expected = false;
	actual = object.getIsStickMaterialUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: StickMaterial Functions --------------------------------------------- */

TEST( toString, MxSeqSmpNode3993 )
{
    CHECK( false )
}

#endif