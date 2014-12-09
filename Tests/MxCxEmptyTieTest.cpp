/** *******************************************************
  * 
  * MxCxEmptyTieTest.cpp
  * Created: 2014-12-03 16:31:30
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxEmptyTie.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxEmptyTie )
{
	MxCxEmptyTie object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxEmptyTie )
{
	MxCxEmptyTie object;
	std::string expected = ( MxEnumStartStop(  ) ).toString();
	std::string actual = object.getType().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxCxEmptyTie )
{
	MxCxEmptyTie object;
	std::string expected = ( MxTimeOnly(  ) ).toString();
	std::string actual = object.getTimeOnly().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxEmptyTie )
{
	MxCxEmptyTie object( "booksmart" );
	std::string expected;
	std::string actual;
	expected = "booksmart";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName2, MxCxEmptyTie )
{
	MxCxEmptyTie object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	expected = "musicxmlishard";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName4, MxCxEmptyTie )
{
	MxCxEmptyTie object( "charlie" );
	std::string expected;
	std::string actual;
	expected = "charlie";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName6, MxCxEmptyTie )
{
	MxCxEmptyTie object( "quiet" );
	std::string expected;
	std::string actual;
	expected = "quiet";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName8, MxCxEmptyTie )
{
	MxCxEmptyTie object( "bishop" );
	std::string expected;
	std::string actual;
	expected = "bishop";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxCxEmptyTie )
{
	MxCxEmptyTie object;
	std::string expected = "MxCxEmptyTie";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxEmptyTie )
{
	MxCxEmptyTie object;
	std::string expected = "tie";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxEmptyTie )
{
	MxCxEmptyTie object;
	std::string expected = "The tie element indicates that a tie begins or ends with this note. If the tie element applies only particular times through a repeat, the time-only attribute indicates which times to apply it. The tie element indicates sound; the tied element indicates notation.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setType0, MxCxEmptyTie )
{
	MxEnumStartStop value1( lexicon::enums::StartStop::stop );
	MxEnumStartStop value2( lexicon::enums::StartStop::start );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyTie object;
	object.setType( value1 );
	MxEnumStartStop expected = value1;
	MxEnumStartStop actual = object.getType();
	CHECK_EQUAL( expected, actual )
	object.setType( value2 );
	expected = value2;
	actual = object.getType();
	CHECK_EQUAL( expected, actual )
}
TEST( setTimeOnly1, MxCxEmptyTie )
{
	MxTimeOnly value1( "1,2,3" );
	MxTimeOnly value2( "4,5,6" );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyTie object;
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

TEST( getIsTypeRequired0, MxCxEmptyTie )
{
	MxCxEmptyTie object;
	bool expected = true;
	bool actual = object.getIsTypeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTimeOnlyRequired1, MxCxEmptyTie )
{
	MxCxEmptyTie object;
	bool expected = false;
	bool actual = object.getIsTimeOnlyRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsTypePresent0, MxCxEmptyTie )
{
	MxCxEmptyTie object;
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
TEST( getIsTimeOnlyPresent1, MxCxEmptyTie )
{
	MxCxEmptyTie object;
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

TEST( getIsTypeDefaultDefined, MxCxEmptyTie )
{
	MxCxEmptyTie object;
	bool expected = false;
	bool actual = object.getIsTypeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTimeOnlyDefaultDefined, MxCxEmptyTie )
{
	MxCxEmptyTie object;
	bool expected = false;
	bool actual = object.getIsTimeOnlyDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getTypeDefaultValue, MxCxEmptyTie )
{
	MxCxEmptyTie object;
	MxEnumStartStop expected;
	MxEnumStartStop actual = object.getTypeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getTimeOnlyDefaultValue, MxCxEmptyTie )
{
	MxCxEmptyTie object;
	MxTimeOnly expected;
	MxTimeOnly actual = object.getTimeOnlyDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxCxEmptyTie )
{
	MxCxEmptyTie object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setTimeOnly( MxTimeOnly( "" ) );
	object.setIsTimeOnlyPresent( true );
	expected = "<booksmart type=\"start\" time-only=\"\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxEmptyTie )
{
	MxCxEmptyTie object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsTimeOnlyPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setTimeOnly( MxTimeOnly( "" ) );
	expected = "<quiet type=\"start\" time-only=\"\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxCxEmptyTie )
{
	MxCxEmptyTie object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsTimeOnlyPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setTimeOnly( MxTimeOnly( "" ) );
	expected = "<musicxmlishard type=\"start\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxCxEmptyTie )
{
	MxCxEmptyTie object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsTimeOnlyPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setTimeOnly( MxTimeOnly( "" ) );
	expected = "<bishop type=\"start\"/>";
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


