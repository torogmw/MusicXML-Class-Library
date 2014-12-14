
#include "TestHarness.h"
#include "MxSeqSmpNode3245.h"
using namespace lexicon;

TEST( Test0000_DefaultCtor, MxSeqSmpNode3245 )
{
	MxSeqSmpNode3245 object;
	CHECK( true )
}
TEST( Test0001_getXmlTypeName, MxSeqSmpNode3245 )
{
	MxSeqSmpNode3245 object;
	std::string expected;
	std::string actual;
	expected = "node-3245";
	actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0002_getClassName, MxSeqSmpNode3245 )
{
	MxSeqSmpNode3245 object;
	std::string expected;
	std::string actual;
	expected = "MxSeqSmpNode3245";
	actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0003_getDocumentation, MxSeqSmpNode3245 )
{
	MxSeqSmpNode3245 object;
	std::string expected;
	std::string actual;
	expected = "No XSD Documentation.";
	actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* DegreeValue Functions ---------------------------------------------------- */

TEST( Test0004_getIsDegreeValuePresent, MxSeqSmpNode3245 )
{
	MxSeqSmpNode3245 object;
	bool expected;
	bool actual;
	expected = true;
	actual = object.getIsDegreeValuePresent();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0005_getDegreeValue, MxSeqSmpNode3245 )
{
	MxSeqSmpNode3245 object;
	std::string expected;
	std::string actual;
	HMxEsDegreeValue e1 = std::make_shared<MxEsDegreeValue>();
    e1->setValue( XsPositiveInteger( 1 ) );
    object.setDegreeValue( e1 );
	expected = "<degree-value>1</degree-value>";
	actual = object.getDegreeValue()->toString();
	CHECK_EQUAL( expected, actual )
    e1->setValue( XsPositiveInteger( 2 ) );
    expected = "<degree-value>2</degree-value>";
	actual = object.getDegreeValue()->toString();
	CHECK_EQUAL( expected, actual )
    HMxEsDegreeValue e2 = std::make_shared<MxEsDegreeValue>();
    e2->setValue( XsPositiveInteger( 3 ) );
    object.setDegreeValue( e2 );
    expected = "<degree-value>3</degree-value>";
	actual = object.getDegreeValue()->toString();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0006_setDegreeValue, MxSeqSmpNode3245 )
{
    MxSeqSmpNode3245 object;
	std::string expected;
	std::string actual;
    object.getDegreeValue()->setValue( XsPositiveInteger( 1 ) );
	expected = "<degree-value>1</degree-value>";
	actual = object.getDegreeValue()->toString();
	CHECK_EQUAL( expected, actual )
    object.setDegreeValue( std::make_shared<MxEsDegreeValue>( 2 ) );
    expected = "<degree-value>2</degree-value>";
	actual = object.getDegreeValue()->toString();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0007_getDegreeValueMinOccurs, MxSeqSmpNode3245 )
{
	MxSeqSmpNode3245 object;
	int expected;
	int actual;
	expected = 1;
	actual = object.getDegreeValueMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0008_getDegreeValueMaxOccurs, MxSeqSmpNode3245 )
{
	MxSeqSmpNode3245 object;
	int expected;
	int actual;
	expected = 1;
	actual = object.getDegreeValueMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0009_getIsDegreeValueUnbounded, MxSeqSmpNode3245 )
{
	MxSeqSmpNode3245 object;
	bool expected;
	bool actual;
	expected = false;
	actual = object.getIsDegreeValueUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: DegreeValue Functions ----------------------------------------------- */

/* DegreeAlter Functions ---------------------------------------------------- */

TEST( Test0010_getIsDegreeAlterPresent, MxSeqSmpNode3245 )
{
	MxSeqSmpNode3245 object;
	bool expected;
	bool actual;
	expected = true;
	actual = object.getIsDegreeAlterPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0011_getDegreeAlter, MxSeqSmpNode3245 )
{
    MxSeqSmpNode3245 object;
	std::string expected;
	std::string actual;
	HMxEsDegreeAlter e1 = std::make_shared<MxEsDegreeAlter>();
    e1->setValue( MxNumberSemitones( -1 ) );
    object.setDegreeAlter( e1 );
	expected = "<degree-alter>-1</degree-alter>";
	actual = object.getDegreeAlter()->toString();
	CHECK_EQUAL( expected, actual )
    e1->setValue( MxNumberSemitones( 0 ) );
    expected = "<degree-alter>0</degree-alter>";
	actual = object.getDegreeAlter()->toString();
	CHECK_EQUAL( expected, actual )
    HMxEsDegreeAlter e2 = std::make_shared<MxEsDegreeAlter>();
    e2->setValue( MxNumberSemitones( 1 ) );
    object.setDegreeAlter( e2 );
    expected = "<degree-alter>1</degree-alter>";
	actual = object.getDegreeAlter()->toString();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0012_setDegreeAlter, MxSeqSmpNode3245 )
{
	MxSeqSmpNode3245 object;
	std::string expected;
	std::string actual;
    object.getDegreeAlter()->setValue( MxNumberSemitones( 1 ) );
	expected = "<degree-alter>1</degree-alter>";
	actual = object.getDegreeAlter()->toString();
	CHECK_EQUAL( expected, actual )
    object.setDegreeAlter( std::make_shared<MxEsDegreeAlter>( MxNumberSemitones( 0 ) ) );
    expected = "<degree-alter>0</degree-alter>";
	actual = object.getDegreeAlter()->toString();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0013_getDegreeAlterMinOccurs, MxSeqSmpNode3245 )
{
	MxSeqSmpNode3245 object;
	int expected;
	int actual;
	expected = 1;
	actual = object.getDegreeAlterMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0014_getDegreeAlterMaxOccurs, MxSeqSmpNode3245 )
{
	MxSeqSmpNode3245 object;
	int expected;
	int actual;
	expected = 1;
	actual = object.getDegreeAlterMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0015_getIsDegreeAlterUnbounded, MxSeqSmpNode3245 )
{
	MxSeqSmpNode3245 object;
	bool expected;
	bool actual;
	expected = false;
	actual = object.getIsDegreeAlterUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: DegreeAlter Functions ----------------------------------------------- */

/* DegreeType Functions ----------------------------------------------------- */

TEST( Test0016_getIsDegreeTypePresent, MxSeqSmpNode3245 )
{
	MxSeqSmpNode3245 object;
	bool expected;
	bool actual;
	expected = true;
	actual = object.getIsDegreeTypePresent();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0017_getDegreeType, MxSeqSmpNode3245 )
{
	MxSeqSmpNode3245 object;
	std::string expected;
	std::string actual;
	HMxEsDegreeType e1 = std::make_shared<MxEsDegreeType>();
    e1->setValue( enums::DegreeTypeValue::add );
    object.setDegreeType( e1 );
	expected = "<degree-type>add</degree-type>";
	actual = object.getDegreeType()->toString();
	CHECK_EQUAL( expected, actual )
    e1->setValue( enums::DegreeTypeValue::subtract );
    expected = "<degree-type>subtract</degree-type>";
	actual = object.getDegreeType()->toString();
	CHECK_EQUAL( expected, actual )
    HMxEsDegreeType e2 = std::make_shared<MxEsDegreeType>();
    e2->setValue( enums::DegreeTypeValue::alter );
    object.setDegreeType( e2 );
    expected = "<degree-type>alter</degree-type>";
	actual = object.getDegreeType()->toString();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0018_setDegreeType, MxSeqSmpNode3245 )
{
    MxSeqSmpNode3245 object;
	std::string expected;
	std::string actual;
    object.getDegreeType()->setValue( enums::DegreeTypeValue::alter );
	expected = "<degree-type>alter</degree-type>";
	actual = object.getDegreeType()->toString();
	CHECK_EQUAL( expected, actual )
    object.setDegreeType( std::make_shared<MxEsDegreeType>( enums::DegreeTypeValue::add ) );
    expected = "<degree-type>add</degree-type>";
	actual = object.getDegreeType()->toString();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0019_getDegreeTypeMinOccurs, MxSeqSmpNode3245 )
{
	MxSeqSmpNode3245 object;
	int expected;
	int actual;
	expected = 1;
	actual = object.getDegreeTypeMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0020_getDegreeTypeMaxOccurs, MxSeqSmpNode3245 )
{
	MxSeqSmpNode3245 object;
	int expected;
	int actual;
	expected = 1;
	actual = object.getDegreeTypeMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0021_getIsDegreeTypeUnbounded, MxSeqSmpNode3245 )
{
	MxSeqSmpNode3245 object;
	bool expected;
	bool actual;
	expected = false;
	actual = object.getIsDegreeTypeUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: DegreeType Functions ------------------------------------------------ */

TEST( Test0022_toString, MxSeqSmpNode3245 )
{
	MxSeqSmpNode3245 object;
    std::string expected;
    std::string actual;
    
    HMxEsDegreeValue val1 = object.getDegreeValue();
    HMxEsDegreeAlter val2 = object.getDegreeAlter();
    HMxEsDegreeType val3 = object.getDegreeType();
    val1->setValue( XsPositiveInteger( 2 ) );
    val2->setValue( MxNumberSemitones( -1) );
    val3->setValue( enums::DegreeTypeValue::add );
    std::stringstream acss;
    object.stream( acss, 2 );
    std::stringstream exss;
    exss << "\t\t" << "<degree-value>2</degree-value>" << std::endl;
    exss << "\t\t" << "<degree-alter>-1</degree-alter>" << std::endl;
    exss << "\t\t" << "<degree-type>add</degree-type>";
    expected = exss.str();
	actual = acss.str();
	CHECK_EQUAL( expected, actual )
    
    acss.str( "" );
    object.stream( acss, 1, "\t" );
    exss.str( "" );
    exss << "\t" << "<degree-value>2</degree-value>" << std::endl;
    exss << "\t" << "<degree-alter>-1</degree-alter>" << std::endl;
    exss << "\t" << "<degree-type>add</degree-type>";
    expected = exss.str();
    actual = acss.str();
	CHECK_EQUAL( expected, actual )
    
    acss.str( "" );
    object.stream( acss, 3, "XYZ" );
    exss.str( "" );
    exss << "XYZXYZXYZ" << "<degree-value>2</degree-value>" << std::endl;
    exss << "XYZXYZXYZ" << "<degree-alter>-1</degree-alter>" << std::endl;
    exss << "XYZXYZXYZ" << "<degree-type>add</degree-type>";
    expected = exss.str();
    actual = acss.str();
	CHECK_EQUAL( expected, actual )
    
    acss.str( "" );
    object.stream( acss );
    exss.str( "" );
    exss << "" << "<degree-value>2</degree-value>" << std::endl;
    exss << "" << "<degree-alter>-1</degree-alter>" << std::endl;
    exss << "" << "<degree-type>add</degree-type>";
    expected = exss.str();
    actual = acss.str();
	CHECK_EQUAL( expected, actual )
    
    acss.str( "" );
    acss << object;
    exss.str( "" );
    exss << "" << "<degree-value>2</degree-value>" << std::endl;
    exss << "" << "<degree-alter>-1</degree-alter>" << std::endl;
    exss << "" << "<degree-type>add</degree-type>";
    expected = exss.str();
    actual = acss.str();
	CHECK_EQUAL( expected, actual )
    
    exss.str( "" );
    exss << "" << "<degree-value>2</degree-value>" << std::endl;
    exss << "" << "<degree-alter>-1</degree-alter>" << std::endl;
    exss << "" << "<degree-type>add</degree-type>";
    expected = exss.str();
    actual = object.toString();
	CHECK_EQUAL( expected, actual )
}