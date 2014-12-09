/** *******************************************************
  * 
  * MxEmSyllabicTest.cpp
  * Created: 2014-12-07 16:26:32
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEmSyllabic.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEmSyllabic )
{
	MxEmSyllabic object;
	CHECK( true )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEmSyllabic )
{
	MxEmSyllabic object;
	int expected = 0;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEmSyllabic )
{
	MxEmSyllabic object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEmSyllabic )
{
	MxEmSyllabic object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEmSyllabic )
{
	MxEmSyllabic object( lexicon::enums::Syllabic::single );
	std::string expected;
	std::string actual;
	expected = "single";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumSyllabic( lexicon::enums::Syllabic::begin ) );
	expected = "begin";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxEmSyllabic )
{
	MxEmSyllabic object( lexicon::enums::Syllabic::end );
	std::string expected;
	std::string actual;
	expected = "end";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumSyllabic( lexicon::enums::Syllabic::middle ) );
	expected = "middle";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue4, MxEmSyllabic )
{
	MxEmSyllabic object( lexicon::enums::Syllabic::single );
	std::string expected;
	std::string actual;
	expected = "single";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumSyllabic( lexicon::enums::Syllabic::begin ) );
	expected = "begin";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue6, MxEmSyllabic )
{
	MxEmSyllabic object( lexicon::enums::Syllabic::end );
	std::string expected;
	std::string actual;
	expected = "end";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumSyllabic( lexicon::enums::Syllabic::middle ) );
	expected = "middle";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue8, MxEmSyllabic )
{
	MxEmSyllabic object( lexicon::enums::Syllabic::single );
	std::string expected;
	std::string actual;
	expected = "single";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumSyllabic( lexicon::enums::Syllabic::begin ) );
	expected = "begin";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEmSyllabic )
{
	MxEmSyllabic object;
	std::string expected = "MxEmSyllabic";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEmSyllabic )
{
	MxEmSyllabic object;
	std::string expected = "syllabic";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEmSyllabic )
{
	MxEmSyllabic object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEmSyllabic )
{
	MxEmSyllabic object( lexicon::enums::Syllabic::end );
	std::string expected;
	std::string actual;
	expected = "<syllabic>end</syllabic>";
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


