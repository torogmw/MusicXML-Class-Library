/** *******************************************************
  * 
  * MxAttrGrpEnclosureTest.cpp
  * Created: 2014-11-28 19:17:14
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxAttrGrpEnclosure.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxAttrGrpEnclosure )
{
	MxAttrGrpEnclosure object;
	CHECK( true )
}
TEST( ctorValues0, MxAttrGrpEnclosure )
{
	MxAttrGrpEnclosure object;
	std::string expected = ( MxEnumEnclosureShape(  ) ).toString();
	std::string actual = object.getEnclosure().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxAttrGrpEnclosure )
{
	MxAttrGrpEnclosure object;
	std::string expected = "MxAttrGrpEnclosure";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxAttrGrpEnclosure )
{
	MxAttrGrpEnclosure object;
	std::string expected = "enclosure";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxAttrGrpEnclosure )
{
	MxAttrGrpEnclosure object;
	std::string expected = "The enclosure attribute group is used to specify the formatting of an enclosure around text or symbols.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setEnclosure0, MxAttrGrpEnclosure )
{
	MxEnumEnclosureShape value1( lexicon::enums::EnclosureShape::none );
	MxEnumEnclosureShape value2( lexicon::enums::EnclosureShape::diamond );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpEnclosure object;
	object.setEnclosure( value1 );
	MxEnumEnclosureShape expected = value1;
	MxEnumEnclosureShape actual = object.getEnclosure();
	CHECK_EQUAL( expected, actual )
	object.setEnclosure( value2 );
	expected = value2;
	actual = object.getEnclosure();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsEnclosureRequired0, MxAttrGrpEnclosure )
{
	MxAttrGrpEnclosure object;
	bool expected = false;
	bool actual = object.getIsEnclosureRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsEnclosurePresent0, MxAttrGrpEnclosure )
{
	MxAttrGrpEnclosure object;
	bool expected = false;
	bool actual = object.getIsEnclosurePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsEnclosurePresent( true );
	expected = true;
	actual = object.getIsEnclosurePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsEnclosurePresent( false );
	expected = false;
	actual = object.getIsEnclosurePresent();
	CHECK_EQUAL( expected, actual )
}

/* End: IsAttributePresent -------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxAttrGrpEnclosure )
{
	MxAttrGrpEnclosure object;
	std::string expected;
	std::string actual;
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::square ) );
	object.setIsEnclosurePresent( true );
	expected = "enclosure=\"square\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxAttrGrpEnclosure )
{
	MxAttrGrpEnclosure object;
	std::string expected;
	std::string actual;
	object.setIsEnclosurePresent( false );
	object.setEnclosure( MxEnumEnclosureShape( lexicon::enums::EnclosureShape::oval ) );
	expected = "";
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

TEST( getIsEnclosureDefaultDefined, MxAttrGrpEnclosure )
{
	MxAttrGrpEnclosure object;
	bool expected = false;
	bool actual = object.getIsEnclosureDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getEnclosureDefaultValue, MxAttrGrpEnclosure )
{
	MxAttrGrpEnclosure object;
	MxEnumEnclosureShape expected;
	MxEnumEnclosureShape actual = object.getEnclosureDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


