/** *******************************************************
  * 
  * MxEmTimeRelationTest.cpp
  * Created: 2014-12-07 16:26:32
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEmTimeRelation.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEmTimeRelation )
{
	MxEmTimeRelation object;
	CHECK( true )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEmTimeRelation )
{
	MxEmTimeRelation object;
	int expected = 0;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEmTimeRelation )
{
	MxEmTimeRelation object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEmTimeRelation )
{
	MxEmTimeRelation object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEmTimeRelation )
{
	MxEmTimeRelation object( lexicon::enums::TimeRelation::parentheses );
	std::string expected;
	std::string actual;
	expected = "parentheses";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumTimeRelation( lexicon::enums::TimeRelation::bracket ) );
	expected = "bracket";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxEmTimeRelation )
{
	MxEmTimeRelation object( lexicon::enums::TimeRelation::equals );
	std::string expected;
	std::string actual;
	expected = "equals";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumTimeRelation( lexicon::enums::TimeRelation::slash ) );
	expected = "slash";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue4, MxEmTimeRelation )
{
	MxEmTimeRelation object( lexicon::enums::TimeRelation::space );
	std::string expected;
	std::string actual;
	expected = "space";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumTimeRelation( lexicon::enums::TimeRelation::hyphen ) );
	expected = "hyphen";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue6, MxEmTimeRelation )
{
	MxEmTimeRelation object( lexicon::enums::TimeRelation::parentheses );
	std::string expected;
	std::string actual;
	expected = "parentheses";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumTimeRelation( lexicon::enums::TimeRelation::bracket ) );
	expected = "bracket";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue8, MxEmTimeRelation )
{
	MxEmTimeRelation object( lexicon::enums::TimeRelation::equals );
	std::string expected;
	std::string actual;
	expected = "equals";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumTimeRelation( lexicon::enums::TimeRelation::slash ) );
	expected = "slash";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEmTimeRelation )
{
	MxEmTimeRelation object;
	std::string expected = "MxEmTimeRelation";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEmTimeRelation )
{
	MxEmTimeRelation object;
	std::string expected = "time-relation";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEmTimeRelation )
{
	MxEmTimeRelation object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEmTimeRelation )
{
	MxEmTimeRelation object( lexicon::enums::TimeRelation::space );
	std::string expected;
	std::string actual;
	expected = "<time-relation>space</time-relation>";
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


