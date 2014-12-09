/** *******************************************************
  * 
  * MxEeRepeatTest.cpp
  * Created: 2014-12-05 16:47:03
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEeRepeat.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEeRepeat )
{
	MxEeRepeat object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxEeRepeat )
{
	MxEeRepeat object;
	std::string expected = ( MxEnumBackwardForward(  ) ).toString();
	std::string actual = object.getDirection().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxEeRepeat )
{
	MxEeRepeat object;
	std::string expected = ( XsNonNegativeInteger(  ) ).toString();
	std::string actual = object.getTimes().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxEeRepeat )
{
	MxEeRepeat object;
	std::string expected = ( MxEnumWinged(  ) ).toString();
	std::string actual = object.getWinged().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEeRepeat )
{
	MxEeRepeat object;
	int expected = 0;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEeRepeat )
{
	MxEeRepeat object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEeRepeat )
{
	MxEeRepeat object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEeRepeat )
{
	MxEeRepeat object;
	std::string expected = "MxEeRepeat";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEeRepeat )
{
	MxEeRepeat object;
	std::string expected = "repeat";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEeRepeat )
{
	MxEeRepeat object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setDirection0, MxEeRepeat )
{
	MxEnumBackwardForward value1( lexicon::enums::BackwardForward::forward );
	MxEnumBackwardForward value2( lexicon::enums::BackwardForward::backward );
	CHECK( ( value1 != value2 ) )
	MxEeRepeat object;
	object.setDirection( value1 );
	MxEnumBackwardForward expected = value1;
	MxEnumBackwardForward actual = object.getDirection();
	CHECK_EQUAL( expected, actual )
	object.setDirection( value2 );
	expected = value2;
	actual = object.getDirection();
	CHECK_EQUAL( expected, actual )
}
TEST( setTimes1, MxEeRepeat )
{
	XsNonNegativeInteger value1( 1 );
	XsNonNegativeInteger value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxEeRepeat object;
	object.setTimes( value1 );
	XsNonNegativeInteger expected = value1;
	XsNonNegativeInteger actual = object.getTimes();
	CHECK_EQUAL( expected, actual )
	object.setTimes( value2 );
	expected = value2;
	actual = object.getTimes();
	CHECK_EQUAL( expected, actual )
}
TEST( setWinged2, MxEeRepeat )
{
	MxEnumWinged value1( lexicon::enums::Winged::doubleCurved );
	MxEnumWinged value2( lexicon::enums::Winged::doubleStraight );
	CHECK( ( value1 != value2 ) )
	MxEeRepeat object;
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

TEST( getIsDirectionRequired0, MxEeRepeat )
{
	MxEeRepeat object;
	bool expected = true;
	bool actual = object.getIsDirectionRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTimesRequired1, MxEeRepeat )
{
	MxEeRepeat object;
	bool expected = false;
	bool actual = object.getIsTimesRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsWingedRequired2, MxEeRepeat )
{
	MxEeRepeat object;
	bool expected = false;
	bool actual = object.getIsWingedRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsDirectionPresent0, MxEeRepeat )
{
	MxEeRepeat object;
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
TEST( getIsTimesPresent1, MxEeRepeat )
{
	MxEeRepeat object;
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
TEST( getIsWingedPresent2, MxEeRepeat )
{
	MxEeRepeat object;
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

TEST( getIsDirectionDefaultDefined, MxEeRepeat )
{
	MxEeRepeat object;
	bool expected = false;
	bool actual = object.getIsDirectionDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTimesDefaultDefined, MxEeRepeat )
{
	MxEeRepeat object;
	bool expected = false;
	bool actual = object.getIsTimesDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsWingedDefaultDefined, MxEeRepeat )
{
	MxEeRepeat object;
	bool expected = false;
	bool actual = object.getIsWingedDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getDirectionDefaultValue, MxEeRepeat )
{
	MxEeRepeat object;
	MxEnumBackwardForward expected;
	MxEnumBackwardForward actual = object.getDirectionDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getTimesDefaultValue, MxEeRepeat )
{
	MxEeRepeat object;
	XsNonNegativeInteger expected;
	XsNonNegativeInteger actual = object.getTimesDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getWingedDefaultValue, MxEeRepeat )
{
	MxEeRepeat object;
	MxEnumWinged expected;
	MxEnumWinged actual = object.getWingedDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEeRepeat )
{
	MxEeRepeat object;
	std::string expected;
	std::string actual;
	object.setDirection( MxEnumBackwardForward( lexicon::enums::BackwardForward::backward ) );
	object.setTimes( XsNonNegativeInteger( 1 ) );
	object.setWinged( MxEnumWinged( lexicon::enums::Winged::none ) );
	object.setIsTimesPresent( true );
	object.setIsWingedPresent( true );
	expected = "<repeat direction=\"backward\" times=\"1\" winged=\"none\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxEeRepeat )
{
	MxEeRepeat object;
	std::string expected;
	std::string actual;
	object.setIsTimesPresent( true );
	object.setIsWingedPresent( true );
	object.setDirection( MxEnumBackwardForward( lexicon::enums::BackwardForward::backward ) );
	object.setTimes( XsNonNegativeInteger( 1 ) );
	object.setWinged( MxEnumWinged( lexicon::enums::Winged::none ) );
	expected = "<repeat direction=\"backward\" times=\"1\" winged=\"none\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxEeRepeat )
{
	MxEeRepeat object;
	std::string expected;
	std::string actual;
	object.setIsTimesPresent( false );
	object.setIsWingedPresent( true );
	object.setDirection( MxEnumBackwardForward( lexicon::enums::BackwardForward::backward ) );
	object.setTimes( XsNonNegativeInteger( 1 ) );
	object.setWinged( MxEnumWinged( lexicon::enums::Winged::none ) );
	expected = "<repeat direction=\"backward\" winged=\"none\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxEeRepeat )
{
	MxEeRepeat object;
	std::string expected;
	std::string actual;
	object.setIsTimesPresent( false );
	object.setIsWingedPresent( false );
	object.setDirection( MxEnumBackwardForward( lexicon::enums::BackwardForward::backward ) );
	object.setTimes( XsNonNegativeInteger( 1 ) );
	object.setWinged( MxEnumWinged( lexicon::enums::Winged::none ) );
	expected = "<repeat direction=\"backward\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxEeRepeat )
{
	MxEeRepeat object;
	std::string expected;
	std::string actual;
	object.setIsTimesPresent( true );
	object.setIsWingedPresent( false );
	object.setDirection( MxEnumBackwardForward( lexicon::enums::BackwardForward::backward ) );
	object.setTimes( XsNonNegativeInteger( 1 ) );
	object.setWinged( MxEnumWinged( lexicon::enums::Winged::none ) );
	expected = "<repeat direction=\"backward\" times=\"1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxEeRepeat )
{
	MxEeRepeat object;
	std::string expected;
	std::string actual;
	object.setIsTimesPresent( true );
	object.setIsWingedPresent( false );
	object.setDirection( MxEnumBackwardForward( lexicon::enums::BackwardForward::backward ) );
	object.setTimes( XsNonNegativeInteger( 1 ) );
	object.setWinged( MxEnumWinged( lexicon::enums::Winged::none ) );
	expected = "<repeat direction=\"backward\" times=\"1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxEeRepeat )
{
	MxEeRepeat object;
	std::string expected;
	std::string actual;
	object.setIsTimesPresent( false );
	object.setIsWingedPresent( true );
	object.setDirection( MxEnumBackwardForward( lexicon::enums::BackwardForward::backward ) );
	object.setTimes( XsNonNegativeInteger( 1 ) );
	object.setWinged( MxEnumWinged( lexicon::enums::Winged::none ) );
	expected = "<repeat direction=\"backward\" winged=\"none\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxEeRepeat )
{
	MxEeRepeat object;
	std::string expected;
	std::string actual;
	object.setIsTimesPresent( false );
	object.setIsWingedPresent( true );
	object.setDirection( MxEnumBackwardForward( lexicon::enums::BackwardForward::backward ) );
	object.setTimes( XsNonNegativeInteger( 1 ) );
	object.setWinged( MxEnumWinged( lexicon::enums::Winged::none ) );
	expected = "<repeat direction=\"backward\" winged=\"none\"/>";
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


