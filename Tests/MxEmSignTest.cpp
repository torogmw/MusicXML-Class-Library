/** *******************************************************
  * 
  * MxEmSignTest.cpp
  * Created: 2014-12-07 16:26:32
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEmSign.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEmSign )
{
	MxEmSign object;
	CHECK( true )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEmSign )
{
	MxEmSign object;
	int expected = 1;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEmSign )
{
	MxEmSign object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEmSign )
{
	MxEmSign object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEmSign )
{
	MxEmSign object( lexicon::enums::ClefSign::g );
	std::string expected;
	std::string actual;
	expected = "G";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumClefSign( lexicon::enums::ClefSign::f ) );
	expected = "F";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxEmSign )
{
	MxEmSign object( lexicon::enums::ClefSign::c );
	std::string expected;
	std::string actual;
	expected = "C";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumClefSign( lexicon::enums::ClefSign::percussion ) );
	expected = "percussion";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue4, MxEmSign )
{
	MxEmSign object( lexicon::enums::ClefSign::tab );
	std::string expected;
	std::string actual;
	expected = "TAB";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumClefSign( lexicon::enums::ClefSign::jianpu ) );
	expected = "jianpu";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue6, MxEmSign )
{
	MxEmSign object( lexicon::enums::ClefSign::none );
	std::string expected;
	std::string actual;
	expected = "none";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumClefSign( lexicon::enums::ClefSign::g ) );
	expected = "G";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue8, MxEmSign )
{
	MxEmSign object( lexicon::enums::ClefSign::f );
	std::string expected;
	std::string actual;
	expected = "F";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumClefSign( lexicon::enums::ClefSign::c ) );
	expected = "C";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEmSign )
{
	MxEmSign object;
	std::string expected = "MxEmSign";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEmSign )
{
	MxEmSign object;
	std::string expected = "sign";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEmSign )
{
	MxEmSign object;
	std::string expected = "The sign element represents the clef symbol.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEmSign )
{
	MxEmSign object( lexicon::enums::ClefSign::percussion );
	std::string expected;
	std::string actual;
	expected = "<sign>percussion</sign>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}

/* End: toString ------------------------------------------------------------ */


