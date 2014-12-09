/** *******************************************************
  * 
  * MxEsRelationTest.cpp
  * Created: 2014-12-05 20:57:54
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEsRelation.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEsRelation )
{
	MxEsRelation object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxEsRelation )
{
	MxEsRelation object;
	std::string expected = ( XsToken(  ) ).toString();
	std::string actual = object.getType().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEsRelation )
{
	MxEsRelation object;
	int expected = 0;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEsRelation )
{
	MxEsRelation object;
	int expected = 32767;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEsRelation )
{
	MxEsRelation object;
	bool expected = true;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEsRelation )
{
	MxEsRelation object( XsString( "" ) );
	std::string expected;
	std::string actual;
	expected = "";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsString( XsString( "A,B,C" ) ) );
	expected = "A,B,C";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxEsRelation )
{
	MxEsRelation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	expected = "D,E,F";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsString( XsString( "WOOF" ) ) );
	expected = "WOOF";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue4, MxEsRelation )
{
	MxEsRelation object( XsString( "X,Y,Z" ) );
	std::string expected;
	std::string actual;
	expected = "X,Y,Z";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsString( XsString( "A,B,C" ) ) );
	expected = "A,B,C";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue6, MxEsRelation )
{
	MxEsRelation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	expected = "D,E,F";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsString( XsString( "WOOF" ) ) );
	expected = "WOOF";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue8, MxEsRelation )
{
	MxEsRelation object( XsString( "X,Y,Z" ) );
	std::string expected;
	std::string actual;
	expected = "X,Y,Z";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsString( XsString( "A,B,C" ) ) );
	expected = "A,B,C";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEsRelation )
{
	MxEsRelation object;
	std::string expected = "MxEsRelation";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEsRelation )
{
	MxEsRelation object;
	std::string expected = "relation";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEsRelation )
{
	MxEsRelation object;
	std::string expected = "A related resource for the music that is encoded. This is similar to the Dublin Core relation element. Standard type values are music, words, and arrangement, but other types may be used.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setType0, MxEsRelation )
{
	XsToken value1( "ABC" );
	XsToken value2( "XYZ" );
	CHECK( ( value1 != value2 ) )
	MxEsRelation object;
	object.setType( value1 );
	XsToken expected = value1;
	XsToken actual = object.getType();
	CHECK_EQUAL( expected, actual )
	object.setType( value2 );
	expected = value2;
	actual = object.getType();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsTypeRequired0, MxEsRelation )
{
	MxEsRelation object;
	bool expected = false;
	bool actual = object.getIsTypeRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsTypePresent0, MxEsRelation )
{
	MxEsRelation object;
	bool expected = false;
	bool actual = object.getIsTypePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsTypePresent( true );
	expected = true;
	actual = object.getIsTypePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsTypePresent( false );
	expected = false;
	actual = object.getIsTypePresent();
	CHECK_EQUAL( expected, actual )
}

/* End: IsAttributePresent -------------------------------------------------- */


/* Is Default Defined ------------------------------------------------------- */

TEST( getIsTypeDefaultDefined, MxEsRelation )
{
	MxEsRelation object;
	bool expected = false;
	bool actual = object.getIsTypeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getTypeDefaultValue, MxEsRelation )
{
	MxEsRelation object;
	XsToken expected;
	XsToken actual = object.getTypeDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEsRelation )
{
	MxEsRelation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setType( XsToken( "" ) );
	object.setIsTypePresent( true );
	expected = "<relation type=\"\">D,E,F</relation>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxEsRelation )
{
	MxEsRelation object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setType( XsToken( "" ) );
	expected = "<relation>D,E,F</relation>";
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


