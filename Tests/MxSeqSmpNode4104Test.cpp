#if 1==0

#include "TestHarness.h"
#include "MxSeqSmpNode4104.h"
using namespace lexicon;

TEST( Test0000_DefaultCtor, MxSeqSmpNode4104 )
{
	MxSeqSmpNode4104 object;
	CHECK( true )
}
TEST( Test0001_getXmlTypeName, MxSeqSmpNode4104 )
{
	MxSeqSmpNode4104 object;
	std::string expected;
	std::string actual;
	expected = "node-4104";
	actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0002_getClassName, MxSeqSmpNode4104 )
{
	MxSeqSmpNode4104 object;
	std::string expected;
	std::string actual;
	expected = "MxSeqSmpNode4104";
	actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0003_getDocumentation, MxSeqSmpNode4104 )
{
	MxSeqSmpNode4104 object;
	std::string expected;
	std::string actual;
	expected = "No XSD Documentation.";
	actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* MiscellaneousField Functions --------------------------------------------- */

TEST( Test0004_getMiscellaneousFieldCount, MxSeqSmpNode4104 )
{
	MxSeqSmpNode4104 object;
	std::size_t expected;
	std::size_t actual;
	expected = 0;
	actual = object.getMiscellaneousFieldCount();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0005_getMiscellaneousFieldBegin, MxSeqSmpNode4104 )
{
	MxSeqSmpNode4104 object;
	MxEsMiscellaneousFieldsIter expected;
	MxEsMiscellaneousFieldsIter actual;
}
TEST( Test0006_getMiscellaneousFieldBeginConst, MxSeqSmpNode4104 )
{
	MxSeqSmpNode4104 object;
	MxEsMiscellaneousFieldsIterConst expected;
	MxEsMiscellaneousFieldsIterConst actual;
}
TEST( Test0007_addMiscellaneousField, MxSeqSmpNode4104 )
{
	MxSeqSmpNode4104 object;
	std::size_t expected;
	std::size_t actual;
}
TEST( Test0008_removeMiscellaneousField, MxSeqSmpNode4104 )
{
	MxSeqSmpNode4104 object;
	std::size_t expected;
	std::size_t actual;
	expected = 0;
	// actual = object.removeMiscellaneousField();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0009_getMiscellaneousFieldMinOccurs, MxSeqSmpNode4104 )
{
	MxSeqSmpNode4104 object;
	int expected;
	int actual;
}
TEST( Test0010_getMiscellaneousFieldMaxOccurs, MxSeqSmpNode4104 )
{
	MxSeqSmpNode4104 object;
	int expected;
	int actual;
	expected = 32767;
	actual = object.getMiscellaneousFieldMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0011_getIsMiscellaneousFieldUnbounded, MxSeqSmpNode4104 )
{
	MxSeqSmpNode4104 object;
	bool expected;
	bool actual;
	expected = true;
	actual = object.getIsMiscellaneousFieldUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: MiscellaneousField Functions ---------------------------------------- */

TEST( toString, MxSeqSmpNode4104 )
{
    CHECK( false )
}

#endif