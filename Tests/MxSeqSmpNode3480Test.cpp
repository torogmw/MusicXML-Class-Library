#if 1==0

#include "TestHarness.h"
#include "MxSeqSmpNode3480.h"
using namespace lexicon;

TEST( Test0000_DefaultCtor, MxSeqSmpNode3480 )
{
	MxSeqSmpNode3480 object;
	CHECK( true )
}
TEST( Test0001_getXmlTypeName, MxSeqSmpNode3480 )
{
	MxSeqSmpNode3480 object;
	std::string expected;
	std::string actual;
	expected = "node-3480";
	actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0002_getClassName, MxSeqSmpNode3480 )
{
	MxSeqSmpNode3480 object;
	std::string expected;
	std::string actual;
	expected = "MxSeqSmpNode3480";
	actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0003_getDocumentation, MxSeqSmpNode3480 )
{
	MxSeqSmpNode3480 object;
	std::string expected;
	std::string actual;
	expected = "No XSD Documentation.";
	actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* String Functions --------------------------------------------------------- */

TEST( Test0004_getIsStringPresent, MxSeqSmpNode3480 )
{
	MxSeqSmpNode3480 object;
	bool expected;
	bool actual;
	expected = true;
	actual = object.getIsStringPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0005_getString, MxSeqSmpNode3480 )
{
	MxSeqSmpNode3480 object;
	std::string expected;
	std::string actual;
	HMxEsString element;
	expected = "";
	actual = object.getString()->toString();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0006_setString, MxSeqSmpNode3480 )
{
	MxSeqSmpNode3480 object;
	std::string expected;
	std::string actual;
	HMxEsString element;
	expected = "";
	actual = object.getString()->toString();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0007_getStringMinOccurs, MxSeqSmpNode3480 )
{
	MxSeqSmpNode3480 object;
	int expected;
	int actual;
	expected = 1;
	actual = object.getStringMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0008_getStringMaxOccurs, MxSeqSmpNode3480 )
{
	MxSeqSmpNode3480 object;
	int expected;
	int actual;
	expected = 1;
	actual = object.getStringMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0009_getIsStringUnbounded, MxSeqSmpNode3480 )
{
	MxSeqSmpNode3480 object;
	bool expected;
	bool actual;
	expected = false;
	actual = object.getIsStringUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: String Functions ---------------------------------------------------- */

/* Fret Functions ----------------------------------------------------------- */

TEST( Test0010_getIsFretPresent, MxSeqSmpNode3480 )
{
	MxSeqSmpNode3480 object;
	bool expected;
	bool actual;
	expected = true;
	actual = object.getIsFretPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0011_getFret, MxSeqSmpNode3480 )
{
	MxSeqSmpNode3480 object;
	std::string expected;
	std::string actual;
	HMxEsFret element;
	expected = "";
	actual = object.getFret()->toString();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0012_setFret, MxSeqSmpNode3480 )
{
	MxSeqSmpNode3480 object;
	std::string expected;
	std::string actual;
	HMxEsFret element;
	expected = "";
	actual = object.getFret()->toString();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0013_getFretMinOccurs, MxSeqSmpNode3480 )
{
	MxSeqSmpNode3480 object;
	int expected;
	int actual;
	expected = 1;
	actual = object.getFretMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0014_getFretMaxOccurs, MxSeqSmpNode3480 )
{
	MxSeqSmpNode3480 object;
	int expected;
	int actual;
	expected = 1;
	actual = object.getFretMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0015_getIsFretUnbounded, MxSeqSmpNode3480 )
{
	MxSeqSmpNode3480 object;
	bool expected;
	bool actual;
	expected = false;
	actual = object.getIsFretUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: Fret Functions ------------------------------------------------------ */

/* Fingering Functions ------------------------------------------------------ */

TEST( Test0016_getIsFingeringPresent, MxSeqSmpNode3480 )
{
	MxSeqSmpNode3480 object;
	bool expected;
	bool actual;
	expected = false;
	actual = object.getIsFingeringPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0017_setIsFingeringPresent, MxSeqSmpNode3480 )
{
	MxSeqSmpNode3480 object;
	bool expected;
	bool actual;
	expected = false;
	actual = object.getIsFingeringPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsFingeringPresent( true );
	expected = true;
	actual = object.getIsFingeringPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0018_getFingering, MxSeqSmpNode3480 )
{
	MxSeqSmpNode3480 object;
	std::string expected;
	std::string actual;
	HMxEsFingering element;
	expected = "";
	actual = object.getFingering()->toString();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0019_setFingering, MxSeqSmpNode3480 )
{
	MxSeqSmpNode3480 object;
	std::string expected;
	std::string actual;
	HMxEsFingering element;
	expected = "";
	actual = object.getFingering()->toString();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0020_getFingeringMinOccurs, MxSeqSmpNode3480 )
{
	MxSeqSmpNode3480 object;
	int expected;
	int actual;
	expected = 0;
	actual = object.getFingeringMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0021_getFingeringMaxOccurs, MxSeqSmpNode3480 )
{
	MxSeqSmpNode3480 object;
	int expected;
	int actual;
	expected = 1;
	actual = object.getFingeringMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0022_getIsFingeringUnbounded, MxSeqSmpNode3480 )
{
	MxSeqSmpNode3480 object;
	bool expected;
	bool actual;
	expected = false;
	actual = object.getIsFingeringUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: Fingering Functions ------------------------------------------------- */

/* Barre Functions ---------------------------------------------------------- */

TEST( Test0023_getIsBarrePresent, MxSeqSmpNode3480 )
{
	MxSeqSmpNode3480 object;
	bool expected;
	bool actual;
	expected = false;
	actual = object.getIsBarrePresent();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0024_setIsBarrePresent, MxSeqSmpNode3480 )
{
	MxSeqSmpNode3480 object;
	bool expected;
	bool actual;
	expected = false;
	actual = object.getIsBarrePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsBarrePresent( true );
	expected = true;
	actual = object.getIsBarrePresent();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0025_getBarre, MxSeqSmpNode3480 )
{
	MxSeqSmpNode3480 object;
	std::string expected;
	std::string actual;
	HMxEeBarre element;
	expected = "";
	actual = object.getBarre()->toString();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0026_setBarre, MxSeqSmpNode3480 )
{
	MxSeqSmpNode3480 object;
	std::string expected;
	std::string actual;
	HMxEeBarre element;
	expected = "";
	actual = object.getBarre()->toString();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0027_getBarreMinOccurs, MxSeqSmpNode3480 )
{
	MxSeqSmpNode3480 object;
	int expected;
	int actual;
	expected = 0;
	actual = object.getBarreMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0028_getBarreMaxOccurs, MxSeqSmpNode3480 )
{
	MxSeqSmpNode3480 object;
	int expected;
	int actual;
	expected = 1;
	actual = object.getBarreMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0029_getIsBarreUnbounded, MxSeqSmpNode3480 )
{
	MxSeqSmpNode3480 object;
	bool expected;
	bool actual;
	expected = false;
	actual = object.getIsBarreUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: Barre Functions ----------------------------------------------------- */

#endif
