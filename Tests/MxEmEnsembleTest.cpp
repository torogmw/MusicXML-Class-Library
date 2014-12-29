/** *******************************************************
 *
 * MxEmEnsembleTest.cpp
 * Created: 2014-12-07 16:26:32
 *
 * *******************************************************
 * **/
#include "TestHarness.h"
#include "MxEmEnsemble.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

/** Constructor **/

TEST( Ctor, MxEmEnsemble )
{
	MxEmEnsemble object;
	CHECK( true )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEmEnsemble )
{
	MxEmEnsemble object;
	int expected = 1;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEmEnsemble )
{
	MxEmEnsemble object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEmEnsemble )
{
	MxEmEnsemble object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEmEnsemble )
{
	MxEmEnsemble object( MxNumberPositiveIntegerOrEmpty( 1 ) );
	std::string expected;
	std::string actual;
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberPositiveIntegerOrEmpty( 2 ) );
	expected = "2";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxEmEnsemble )
{
	MxEmEnsemble object( MxNumberPositiveIntegerOrEmpty( 3 ) );
	std::string expected;
	std::string actual;
	expected = "3";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberPositiveIntegerOrEmpty( 5 ) );
	expected = "5";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue4, MxEmEnsemble )
{
	MxEmEnsemble object( MxNumberPositiveIntegerOrEmpty( 4 ) );
	std::string expected;
	std::string actual;
	expected = "4";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberPositiveIntegerOrEmpty( 2 )  );
	expected = "2";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue6, MxEmEnsemble )
{
	MxEmEnsemble object( MxNumberPositiveIntegerOrEmpty( 3 ) );
	std::string expected;
	std::string actual;
	expected = "3";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberPositiveIntegerOrEmpty( 5 ) );
	expected = "5";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue8, MxEmEnsemble )
{
	MxEmEnsemble object( MxNumberPositiveIntegerOrEmpty( 4 ) );
	std::string expected;
	std::string actual;
	expected = "4";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberPositiveIntegerOrEmpty( 2 )  );
	expected = "2";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEmEnsemble )
{
	MxEmEnsemble object;
	std::string expected = "MxEmEnsemble";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEmEnsemble )
{
	MxEmEnsemble object;
	std::string expected = "ensemble";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEmEnsemble )
{
	MxEmEnsemble object;
	std::string expected = "The ensemble element was added in Version 2.0. It is present if performance is intended by an ensemble such as an orchestral section. The text of the ensemble element contains the size of the section, or is empty if the ensemble size is not specified.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEmEnsemble )
{
	MxEmEnsemble object( MxNumberPositiveIntegerOrEmpty( 3 ) );
	std::string expected;
	std::string actual;
	expected = "<ensemble>3</ensemble>";
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


