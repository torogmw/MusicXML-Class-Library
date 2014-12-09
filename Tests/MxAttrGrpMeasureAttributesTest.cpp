/** *******************************************************
  * 
  * MxAttrGrpMeasureAttributesTest.cpp
  * Created: 2014-11-28 19:17:16
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxAttrGrpMeasureAttributes.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxAttrGrpMeasureAttributes )
{
	MxAttrGrpMeasureAttributes object;
	CHECK( true )
}
TEST( ctorValues0, MxAttrGrpMeasureAttributes )
{
	MxAttrGrpMeasureAttributes object;
	std::string expected = ( XsToken(  ) ).toString();
	std::string actual = object.getNumber().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues1, MxAttrGrpMeasureAttributes )
{
	MxAttrGrpMeasureAttributes object;
	std::string expected = ( MxEnumYesNo(  ) ).toString();
	std::string actual = object.getImplicit().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues2, MxAttrGrpMeasureAttributes )
{
	MxAttrGrpMeasureAttributes object;
	std::string expected = ( MxEnumYesNo(  ) ).toString();
	std::string actual = object.getNonControlling().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues3, MxAttrGrpMeasureAttributes )
{
	MxAttrGrpMeasureAttributes object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getWidth().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxAttrGrpMeasureAttributes )
{
	MxAttrGrpMeasureAttributes object;
	std::string expected = "MxAttrGrpMeasureAttributes";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxAttrGrpMeasureAttributes )
{
	MxAttrGrpMeasureAttributes object;
	std::string expected = "measure-attributes";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxAttrGrpMeasureAttributes )
{
	MxAttrGrpMeasureAttributes object;
	std::string expected = "The measure-attributes group is used by the measure element. Measures have a required number attribute (going from partwise to timewise, measures are grouped via the number). The implicit attribute is set to yes for measures where the measure number should never appear, such as pickup measures and the last half of mid-measure repeats. The value is no if not specified. The non-controlling attribute is intended for use in multimetric music like the Don Giovanni minuet. If set to yes, the left barline in this measure does not coincide with the left barline of measures in other parts. The value is no if not specified. In partwise files, the number attribute should be the same for measures in different parts that share the same left barline. While the number attribute is often numeric, it does not have to be. Non-numeric values are typically used together with the implicit or non-controlling attributes being set to yes. For a pickup measure, the number attribute is typically set to 0 and the implicit attribute is typically set to yes. Further details about measure numbering can be defined using the measure-numbering element. Measure width is specified in tenths. These are the global tenths specified in the scaling element, not local tenths as modified by the staff-size element. The width covers the entire measure from barline or system start to barline or system end.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setNumber0, MxAttrGrpMeasureAttributes )
{
	XsToken value1( "ABC" );
	XsToken value2( "XYZ" );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpMeasureAttributes object;
	object.setNumber( value1 );
	XsToken expected = value1;
	XsToken actual = object.getNumber();
	CHECK_EQUAL( expected, actual )
	object.setNumber( value2 );
	expected = value2;
	actual = object.getNumber();
	CHECK_EQUAL( expected, actual )
}
TEST( setImplicit1, MxAttrGrpMeasureAttributes )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpMeasureAttributes object;
	object.setImplicit( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getImplicit();
	CHECK_EQUAL( expected, actual )
	object.setImplicit( value2 );
	expected = value2;
	actual = object.getImplicit();
	CHECK_EQUAL( expected, actual )
}
TEST( setNonControlling2, MxAttrGrpMeasureAttributes )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpMeasureAttributes object;
	object.setNonControlling( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getNonControlling();
	CHECK_EQUAL( expected, actual )
	object.setNonControlling( value2 );
	expected = value2;
	actual = object.getNonControlling();
	CHECK_EQUAL( expected, actual )
}
TEST( setWidth3, MxAttrGrpMeasureAttributes )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpMeasureAttributes object;
	object.setWidth( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getWidth();
	CHECK_EQUAL( expected, actual )
	object.setWidth( value2 );
	expected = value2;
	actual = object.getWidth();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsNumberRequired0, MxAttrGrpMeasureAttributes )
{
	MxAttrGrpMeasureAttributes object;
	bool expected = true;
	bool actual = object.getIsNumberRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsImplicitRequired1, MxAttrGrpMeasureAttributes )
{
	MxAttrGrpMeasureAttributes object;
	bool expected = false;
	bool actual = object.getIsImplicitRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNonControllingRequired2, MxAttrGrpMeasureAttributes )
{
	MxAttrGrpMeasureAttributes object;
	bool expected = false;
	bool actual = object.getIsNonControllingRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsWidthRequired3, MxAttrGrpMeasureAttributes )
{
	MxAttrGrpMeasureAttributes object;
	bool expected = false;
	bool actual = object.getIsWidthRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsNumberPresent0, MxAttrGrpMeasureAttributes )
{
	MxAttrGrpMeasureAttributes object;
	bool expected = true;
	bool actual = object.getIsNumberPresent();
	CHECK_EQUAL( expected, actual )
	/* setter does not exist because this attribute is required */
	expected = true;
	actual = object.getIsNumberPresent();
	CHECK_EQUAL( expected, actual )
	/* setter does not exist because this attribute is required */
	expected = true;
	actual = object.getIsNumberPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsImplicitPresent1, MxAttrGrpMeasureAttributes )
{
	MxAttrGrpMeasureAttributes object;
	bool expected = false;
	bool actual = object.getIsImplicitPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsImplicitPresent( true );
	expected = true;
	actual = object.getIsImplicitPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsImplicitPresent( false );
	expected = false;
	actual = object.getIsImplicitPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNonControllingPresent2, MxAttrGrpMeasureAttributes )
{
	MxAttrGrpMeasureAttributes object;
	bool expected = false;
	bool actual = object.getIsNonControllingPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsNonControllingPresent( true );
	expected = true;
	actual = object.getIsNonControllingPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsNonControllingPresent( false );
	expected = false;
	actual = object.getIsNonControllingPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsWidthPresent3, MxAttrGrpMeasureAttributes )
{
	MxAttrGrpMeasureAttributes object;
	bool expected = false;
	bool actual = object.getIsWidthPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsWidthPresent( true );
	expected = true;
	actual = object.getIsWidthPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsWidthPresent( false );
	expected = false;
	actual = object.getIsWidthPresent();
	CHECK_EQUAL( expected, actual )
}

/* End: IsAttributePresent -------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxAttrGrpMeasureAttributes )
{
	MxAttrGrpMeasureAttributes object;
	std::string expected;
	std::string actual;
	object.setNumber( XsToken( "ABC" ) );
	object.setImplicit( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setNonControlling( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setWidth( MxNumberTenths( 1.1 ) );
	object.setIsImplicitPresent( true );
	object.setIsNonControllingPresent( true );
	object.setIsWidthPresent( true );
	expected = "number=\"ABC\" implicit=\"no\" non-controlling=\"no\" width=\"1.1\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxAttrGrpMeasureAttributes )
{
	MxAttrGrpMeasureAttributes object;
	std::string expected;
	std::string actual;
	object.setIsImplicitPresent( true );
	object.setIsNonControllingPresent( true );
	object.setIsWidthPresent( true );
	object.setNumber( XsToken( "DEF" ) );
	object.setImplicit( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setNonControlling( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setWidth( MxNumberTenths( 1.2 ) );
	expected = "number=\"DEF\" implicit=\"yes\" non-controlling=\"yes\" width=\"1.2\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxAttrGrpMeasureAttributes )
{
	MxAttrGrpMeasureAttributes object;
	std::string expected;
	std::string actual;
	object.setIsImplicitPresent( false );
	object.setIsNonControllingPresent( true );
	object.setIsWidthPresent( true );
	object.setNumber( XsToken( "XYZ" ) );
	object.setImplicit( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setNonControlling( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setWidth( MxNumberTenths( 1.3 ) );
	expected = "number=\"XYZ\" non-controlling=\"no\" width=\"1.3\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxAttrGrpMeasureAttributes )
{
	MxAttrGrpMeasureAttributes object;
	std::string expected;
	std::string actual;
	object.setIsImplicitPresent( false );
	object.setIsNonControllingPresent( false );
	object.setIsWidthPresent( true );
	object.setNumber( XsToken( "ABC" ) );
	object.setImplicit( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setNonControlling( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setWidth( MxNumberTenths( 1.4 ) );
	expected = "number=\"ABC\" width=\"1.4\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxAttrGrpMeasureAttributes )
{
	MxAttrGrpMeasureAttributes object;
	std::string expected;
	std::string actual;
	object.setIsImplicitPresent( true );
	object.setIsNonControllingPresent( false );
	object.setIsWidthPresent( false );
	object.setNumber( XsToken( "DEF" ) );
	object.setImplicit( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setNonControlling( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setWidth( MxNumberTenths( 1.5 ) );
	expected = "number=\"DEF\" implicit=\"no\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxAttrGrpMeasureAttributes )
{
	MxAttrGrpMeasureAttributes object;
	std::string expected;
	std::string actual;
	object.setIsImplicitPresent( true );
	object.setIsNonControllingPresent( false );
	object.setIsWidthPresent( false );
	object.setNumber( XsToken( "XYZ" ) );
	object.setImplicit( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setNonControlling( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setWidth( MxNumberTenths( 1.6 ) );
	expected = "number=\"XYZ\" implicit=\"yes\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxAttrGrpMeasureAttributes )
{
	MxAttrGrpMeasureAttributes object;
	std::string expected;
	std::string actual;
	object.setIsImplicitPresent( false );
	object.setIsNonControllingPresent( true );
	object.setIsWidthPresent( false );
	object.setNumber( XsToken( "ABC" ) );
	object.setImplicit( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setNonControlling( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setWidth( MxNumberTenths( 1.7 ) );
	expected = "number=\"ABC\" non-controlling=\"no\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxAttrGrpMeasureAttributes )
{
	MxAttrGrpMeasureAttributes object;
	std::string expected;
	std::string actual;
	object.setIsImplicitPresent( false );
	object.setIsNonControllingPresent( true );
	object.setIsWidthPresent( false );
	object.setNumber( XsToken( "DEF" ) );
	object.setImplicit( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setNonControlling( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setWidth( MxNumberTenths( 1.8 ) );
	expected = "number=\"DEF\" non-controlling=\"yes\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxAttrGrpMeasureAttributes )
{
	MxAttrGrpMeasureAttributes object;
	std::string expected;
	std::string actual;
	object.setIsImplicitPresent( true );
	object.setIsNonControllingPresent( false );
	object.setIsWidthPresent( true );
	object.setNumber( XsToken( "XYZ" ) );
	object.setImplicit( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setNonControlling( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setWidth( MxNumberTenths( 1.9 ) );
	expected = "number=\"XYZ\" implicit=\"no\" width=\"1.9\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxAttrGrpMeasureAttributes )
{
	MxAttrGrpMeasureAttributes object;
	std::string expected;
	std::string actual;
	object.setIsImplicitPresent( false );
	object.setIsNonControllingPresent( false );
	object.setIsWidthPresent( true );
	object.setNumber( XsToken( "ABC" ) );
	object.setImplicit( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setNonControlling( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setWidth( MxNumberTenths( 2 ) );
	expected = "number=\"ABC\" width=\"2\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxAttrGrpMeasureAttributes )
{
	MxAttrGrpMeasureAttributes object;
	std::string expected;
	std::string actual;
	object.setIsImplicitPresent( false );
	object.setIsNonControllingPresent( false );
	object.setIsWidthPresent( true );
	object.setNumber( XsToken( "DEF" ) );
	object.setImplicit( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setNonControlling( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setWidth( MxNumberTenths( 2.1 ) );
	expected = "number=\"DEF\" width=\"2.1\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxAttrGrpMeasureAttributes )
{
	MxAttrGrpMeasureAttributes object;
	std::string expected;
	std::string actual;
	object.setIsImplicitPresent( true );
	object.setIsNonControllingPresent( true );
	object.setIsWidthPresent( false );
	object.setNumber( XsToken( "XYZ" ) );
	object.setImplicit( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setNonControlling( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setWidth( MxNumberTenths( 2.2 ) );
	expected = "number=\"XYZ\" implicit=\"yes\" non-controlling=\"yes\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxAttrGrpMeasureAttributes )
{
	MxAttrGrpMeasureAttributes object;
	std::string expected;
	std::string actual;
	object.setIsImplicitPresent( true );
	object.setIsNonControllingPresent( true );
	object.setIsWidthPresent( false );
	object.setNumber( XsToken( "ABC" ) );
	object.setImplicit( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setNonControlling( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setWidth( MxNumberTenths( 2.3 ) );
	expected = "number=\"ABC\" implicit=\"no\" non-controlling=\"no\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxAttrGrpMeasureAttributes )
{
	MxAttrGrpMeasureAttributes object;
	std::string expected;
	std::string actual;
	object.setIsImplicitPresent( false );
	object.setIsNonControllingPresent( true );
	object.setIsWidthPresent( false );
	object.setNumber( XsToken( "DEF" ) );
	object.setImplicit( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setNonControlling( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setWidth( MxNumberTenths( 2.4 ) );
	expected = "number=\"DEF\" non-controlling=\"yes\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxAttrGrpMeasureAttributes )
{
	MxAttrGrpMeasureAttributes object;
	std::string expected;
	std::string actual;
	object.setIsImplicitPresent( false );
	object.setIsNonControllingPresent( false );
	object.setIsWidthPresent( false );
	object.setNumber( XsToken( "XYZ" ) );
	object.setImplicit( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setNonControlling( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setWidth( MxNumberTenths( 2.5 ) );
	expected = "number=\"XYZ\"";
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


/* Is Default Defined ------------------------------------------------------- */

TEST( getIsNumberDefaultDefined, MxAttrGrpMeasureAttributes )
{
	MxAttrGrpMeasureAttributes object;
	bool expected = false;
	bool actual = object.getIsNumberDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsImplicitDefaultDefined, MxAttrGrpMeasureAttributes )
{
	MxAttrGrpMeasureAttributes object;
	bool expected = false;
	bool actual = object.getIsImplicitDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNonControllingDefaultDefined, MxAttrGrpMeasureAttributes )
{
	MxAttrGrpMeasureAttributes object;
	bool expected = false;
	bool actual = object.getIsNonControllingDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsWidthDefaultDefined, MxAttrGrpMeasureAttributes )
{
	MxAttrGrpMeasureAttributes object;
	bool expected = false;
	bool actual = object.getIsWidthDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getNumberDefaultValue, MxAttrGrpMeasureAttributes )
{
	MxAttrGrpMeasureAttributes object;
	XsToken expected;
	XsToken actual = object.getNumberDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getImplicitDefaultValue, MxAttrGrpMeasureAttributes )
{
	MxAttrGrpMeasureAttributes object;
	MxEnumYesNo expected;
	MxEnumYesNo actual = object.getImplicitDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getNonControllingDefaultValue, MxAttrGrpMeasureAttributes )
{
	MxAttrGrpMeasureAttributes object;
	MxEnumYesNo expected;
	MxEnumYesNo actual = object.getNonControllingDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getWidthDefaultValue, MxAttrGrpMeasureAttributes )
{
	MxAttrGrpMeasureAttributes object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getWidthDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


