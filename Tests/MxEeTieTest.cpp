/** *******************************************************
  * 
  * MxEeTieTest.cpp
  * Created: 2014-12-05 16:47:07
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEeTie.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEeTie )
{
	MxEeTie object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxEeTie )
{
	MxEeTie object;
	std::string expected = ( MxEnumStartStop(  ) ).toString();
	std::string actual = object.getType().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxEeTie )
{
	MxEeTie object;
	std::string expected = ( MxTimeOnly(  ) ).toString();
	std::string actual = object.getTimeOnly().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEeTie )
{
	MxEeTie object;
	int expected = 0;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEeTie )
{
	MxEeTie object;
	int expected = 2;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEeTie )
{
	MxEeTie object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEeTie )
{
	MxEeTie object;
	std::string expected = "MxEeTie";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEeTie )
{
	MxEeTie object;
	std::string expected = "tie";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEeTie )
{
	MxEeTie object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setType0, MxEeTie )
{
	MxEnumStartStop value1( lexicon::enums::StartStop::stop );
	MxEnumStartStop value2( lexicon::enums::StartStop::start );
	CHECK( ( value1 != value2 ) )
	MxEeTie object;
	object.setType( value1 );
	MxEnumStartStop expected = value1;
	MxEnumStartStop actual = object.getType();
	CHECK_EQUAL( expected, actual )
	object.setType( value2 );
	expected = value2;
	actual = object.getType();
	CHECK_EQUAL( expected, actual )
}
TEST( setTimeOnly1, MxEeTie )
{
	MxTimeOnly value1( "1,2,3" );
	MxTimeOnly value2( "4,5,6" );
	CHECK( ( value1 != value2 ) )
	MxEeTie object;
	object.setTimeOnly( value1 );
	MxTimeOnly expected = value1;
	MxTimeOnly actual = object.getTimeOnly();
	CHECK_EQUAL( expected, actual )
	object.setTimeOnly( value2 );
	expected = value2;
	actual = object.getTimeOnly();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsTypeRequired0, MxEeTie )
{
	MxEeTie object;
	bool expected = true;
	bool actual = object.getIsTypeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTimeOnlyRequired1, MxEeTie )
{
	MxEeTie object;
	bool expected = false;
	bool actual = object.getIsTimeOnlyRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsTypePresent0, MxEeTie )
{
	MxEeTie object;
	bool expected = true;
	bool actual = object.getIsTypePresent();
	CHECK_EQUAL( expected, actual )
	/* setter does not exist because this attribute is required */
	expected = true;
	actual = object.getIsTypePresent();
	CHECK_EQUAL( expected, actual )
	/* setter does not exist because this attribute is required */
	expected = true;
	actual = object.getIsTypePresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTimeOnlyPresent1, MxEeTie )
{
	MxEeTie object;
	bool expected = false;
	bool actual = object.getIsTimeOnlyPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsTimeOnlyPresent( true );
	expected = true;
	actual = object.getIsTimeOnlyPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsTimeOnlyPresent( false );
	expected = false;
	actual = object.getIsTimeOnlyPresent();
	CHECK_EQUAL( expected, actual )
}

/* End: IsAttributePresent -------------------------------------------------- */


/* Is Default Defined ------------------------------------------------------- */

TEST( getIsTypeDefaultDefined, MxEeTie )
{
	MxEeTie object;
	bool expected = false;
	bool actual = object.getIsTypeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTimeOnlyDefaultDefined, MxEeTie )
{
	MxEeTie object;
	bool expected = false;
	bool actual = object.getIsTimeOnlyDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getTypeDefaultValue, MxEeTie )
{
	MxEeTie object;
	MxEnumStartStop expected;
	MxEnumStartStop actual = object.getTypeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getTimeOnlyDefaultValue, MxEeTie )
{
	MxEeTie object;
	MxTimeOnly expected;
	MxTimeOnly actual = object.getTimeOnlyDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEeTie )
{
	MxEeTie object;
	std::string expected;
	std::string actual;
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setTimeOnly( MxTimeOnly( "" ) );
	object.setIsTimeOnlyPresent( true );
	expected = "<tie type=\"start\" time-only=\"\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxEeTie )
{
	MxEeTie object;
	std::string expected;
	std::string actual;
	object.setIsTimeOnlyPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setTimeOnly( MxTimeOnly( "" ) );
	expected = "<tie type=\"start\" time-only=\"\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxEeTie )
{
	MxEeTie object;
	std::string expected;
	std::string actual;
	object.setIsTimeOnlyPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setTimeOnly( MxTimeOnly( "" ) );
	expected = "<tie type=\"start\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxEeTie )
{
	MxEeTie object;
	std::string expected;
	std::string actual;
	object.setIsTimeOnlyPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setTimeOnly( MxTimeOnly( "" ) );
	expected = "<tie type=\"start\"/>";
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


