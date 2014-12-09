/** *******************************************************
  * 
  * MxCxEmptyRepeatTest.cpp
  * Created: 2014-12-03 16:31:28
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxEmptyRepeat.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxEmptyRepeat )
{
	MxCxEmptyRepeat object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxEmptyRepeat )
{
	MxCxEmptyRepeat object;
	std::string expected = ( MxEnumBackwardForward(  ) ).toString();
	std::string actual = object.getDirection().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxCxEmptyRepeat )
{
	MxCxEmptyRepeat object;
	std::string expected = ( XsNonNegativeInteger(  ) ).toString();
	std::string actual = object.getTimes().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxCxEmptyRepeat )
{
	MxCxEmptyRepeat object;
	std::string expected = ( MxEnumWinged(  ) ).toString();
	std::string actual = object.getWinged().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxEmptyRepeat )
{
	MxCxEmptyRepeat object( "booksmart" );
	std::string expected;
	std::string actual;
	expected = "booksmart";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName2, MxCxEmptyRepeat )
{
	MxCxEmptyRepeat object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	expected = "musicxmlishard";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName4, MxCxEmptyRepeat )
{
	MxCxEmptyRepeat object( "charlie" );
	std::string expected;
	std::string actual;
	expected = "charlie";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName6, MxCxEmptyRepeat )
{
	MxCxEmptyRepeat object( "quiet" );
	std::string expected;
	std::string actual;
	expected = "quiet";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName8, MxCxEmptyRepeat )
{
	MxCxEmptyRepeat object( "bishop" );
	std::string expected;
	std::string actual;
	expected = "bishop";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxCxEmptyRepeat )
{
	MxCxEmptyRepeat object;
	std::string expected = "MxCxEmptyRepeat";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxEmptyRepeat )
{
	MxCxEmptyRepeat object;
	std::string expected = "repeat";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxEmptyRepeat )
{
	MxCxEmptyRepeat object;
	std::string expected = "The repeat type represents repeat marks. The start of the repeat has a forward direction while the end of the repeat has a backward direction. Backward repeats that are not part of an ending can use the times attribute to indicate the number of times the repeated section is played.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setDirection0, MxCxEmptyRepeat )
{
	MxEnumBackwardForward value1( lexicon::enums::BackwardForward::forward );
	MxEnumBackwardForward value2( lexicon::enums::BackwardForward::backward );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyRepeat object;
	object.setDirection( value1 );
	MxEnumBackwardForward expected = value1;
	MxEnumBackwardForward actual = object.getDirection();
	CHECK_EQUAL( expected, actual )
	object.setDirection( value2 );
	expected = value2;
	actual = object.getDirection();
	CHECK_EQUAL( expected, actual )
}
TEST( setTimes1, MxCxEmptyRepeat )
{
	XsNonNegativeInteger value1( 1 );
	XsNonNegativeInteger value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyRepeat object;
	object.setTimes( value1 );
	XsNonNegativeInteger expected = value1;
	XsNonNegativeInteger actual = object.getTimes();
	CHECK_EQUAL( expected, actual )
	object.setTimes( value2 );
	expected = value2;
	actual = object.getTimes();
	CHECK_EQUAL( expected, actual )
}
TEST( setWinged2, MxCxEmptyRepeat )
{
	MxEnumWinged value1( lexicon::enums::Winged::doubleCurved );
	MxEnumWinged value2( lexicon::enums::Winged::doubleStraight );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyRepeat object;
	object.setWinged( value1 );
	MxEnumWinged expected = value1;
	MxEnumWinged actual = object.getWinged();
	CHECK_EQUAL( expected, actual )
	object.setWinged( value2 );
	expected = value2;
	actual = object.getWinged();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsDirectionRequired0, MxCxEmptyRepeat )
{
	MxCxEmptyRepeat object;
	bool expected = true;
	bool actual = object.getIsDirectionRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTimesRequired1, MxCxEmptyRepeat )
{
	MxCxEmptyRepeat object;
	bool expected = false;
	bool actual = object.getIsTimesRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsWingedRequired2, MxCxEmptyRepeat )
{
	MxCxEmptyRepeat object;
	bool expected = false;
	bool actual = object.getIsWingedRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsDirectionPresent0, MxCxEmptyRepeat )
{
	MxCxEmptyRepeat object;
	bool expected = true;
	bool actual = object.getIsDirectionPresent();
	CHECK_EQUAL( expected, actual )
	/* setter does not exist because this attribute is required */
	expected = true;
	actual = object.getIsDirectionPresent();
	CHECK_EQUAL( expected, actual )
	/* setter does not exist because this attribute is required */
	expected = true;
	actual = object.getIsDirectionPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTimesPresent1, MxCxEmptyRepeat )
{
	MxCxEmptyRepeat object;
	bool expected = false;
	bool actual = object.getIsTimesPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsTimesPresent( true );
	expected = true;
	actual = object.getIsTimesPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsTimesPresent( false );
	expected = false;
	actual = object.getIsTimesPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsWingedPresent2, MxCxEmptyRepeat )
{
	MxCxEmptyRepeat object;
	bool expected = false;
	bool actual = object.getIsWingedPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsWingedPresent( true );
	expected = true;
	actual = object.getIsWingedPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsWingedPresent( false );
	expected = false;
	actual = object.getIsWingedPresent();
	CHECK_EQUAL( expected, actual )
}

/* End: IsAttributePresent -------------------------------------------------- */


/* Is Default Defined ------------------------------------------------------- */

TEST( getIsDirectionDefaultDefined, MxCxEmptyRepeat )
{
	MxCxEmptyRepeat object;
	bool expected = false;
	bool actual = object.getIsDirectionDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTimesDefaultDefined, MxCxEmptyRepeat )
{
	MxCxEmptyRepeat object;
	bool expected = false;
	bool actual = object.getIsTimesDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsWingedDefaultDefined, MxCxEmptyRepeat )
{
	MxCxEmptyRepeat object;
	bool expected = false;
	bool actual = object.getIsWingedDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getDirectionDefaultValue, MxCxEmptyRepeat )
{
	MxCxEmptyRepeat object;
	MxEnumBackwardForward expected;
	MxEnumBackwardForward actual = object.getDirectionDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getTimesDefaultValue, MxCxEmptyRepeat )
{
	MxCxEmptyRepeat object;
	XsNonNegativeInteger expected;
	XsNonNegativeInteger actual = object.getTimesDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getWingedDefaultValue, MxCxEmptyRepeat )
{
	MxCxEmptyRepeat object;
	MxEnumWinged expected;
	MxEnumWinged actual = object.getWingedDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxCxEmptyRepeat )
{
	MxCxEmptyRepeat object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setDirection( MxEnumBackwardForward( lexicon::enums::BackwardForward::backward ) );
	object.setTimes( XsNonNegativeInteger( 1 ) );
	object.setWinged( MxEnumWinged( lexicon::enums::Winged::none ) );
	object.setIsTimesPresent( true );
	object.setIsWingedPresent( true );
	expected = "<booksmart direction=\"backward\" times=\"1\" winged=\"none\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxEmptyRepeat )
{
	MxCxEmptyRepeat object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsTimesPresent( true );
	object.setIsWingedPresent( true );
	object.setDirection( MxEnumBackwardForward( lexicon::enums::BackwardForward::backward ) );
	object.setTimes( XsNonNegativeInteger( 1 ) );
	object.setWinged( MxEnumWinged( lexicon::enums::Winged::none ) );
	expected = "<quiet direction=\"backward\" times=\"1\" winged=\"none\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxCxEmptyRepeat )
{
	MxCxEmptyRepeat object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsTimesPresent( false );
	object.setIsWingedPresent( true );
	object.setDirection( MxEnumBackwardForward( lexicon::enums::BackwardForward::backward ) );
	object.setTimes( XsNonNegativeInteger( 1 ) );
	object.setWinged( MxEnumWinged( lexicon::enums::Winged::none ) );
	expected = "<musicxmlishard direction=\"backward\" winged=\"none\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxCxEmptyRepeat )
{
	MxCxEmptyRepeat object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsTimesPresent( false );
	object.setIsWingedPresent( false );
	object.setDirection( MxEnumBackwardForward( lexicon::enums::BackwardForward::backward ) );
	object.setTimes( XsNonNegativeInteger( 1 ) );
	object.setWinged( MxEnumWinged( lexicon::enums::Winged::none ) );
	expected = "<bishop direction=\"backward\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxCxEmptyRepeat )
{
	MxCxEmptyRepeat object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsTimesPresent( true );
	object.setIsWingedPresent( false );
	object.setDirection( MxEnumBackwardForward( lexicon::enums::BackwardForward::backward ) );
	object.setTimes( XsNonNegativeInteger( 1 ) );
	object.setWinged( MxEnumWinged( lexicon::enums::Winged::none ) );
	expected = "<charlie direction=\"backward\" times=\"1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxCxEmptyRepeat )
{
	MxCxEmptyRepeat object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsTimesPresent( true );
	object.setIsWingedPresent( false );
	object.setDirection( MxEnumBackwardForward( lexicon::enums::BackwardForward::backward ) );
	object.setTimes( XsNonNegativeInteger( 1 ) );
	object.setWinged( MxEnumWinged( lexicon::enums::Winged::none ) );
	expected = "<booksmart direction=\"backward\" times=\"1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxCxEmptyRepeat )
{
	MxCxEmptyRepeat object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsTimesPresent( false );
	object.setIsWingedPresent( true );
	object.setDirection( MxEnumBackwardForward( lexicon::enums::BackwardForward::backward ) );
	object.setTimes( XsNonNegativeInteger( 1 ) );
	object.setWinged( MxEnumWinged( lexicon::enums::Winged::none ) );
	expected = "<quiet direction=\"backward\" winged=\"none\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxCxEmptyRepeat )
{
	MxCxEmptyRepeat object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsTimesPresent( false );
	object.setIsWingedPresent( true );
	object.setDirection( MxEnumBackwardForward( lexicon::enums::BackwardForward::backward ) );
	object.setTimes( XsNonNegativeInteger( 1 ) );
	object.setWinged( MxEnumWinged( lexicon::enums::Winged::none ) );
	expected = "<musicxmlishard direction=\"backward\" winged=\"none\"/>";
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


