
#include "TestHarness.h"
#include "MxSeqSmpNode3480.h"
using namespace lexicon;

TEST( Test0000_DefaultCtor, MxSeqSmpNode3480 )
{
	MxSeqSmpNode3480 object;
	CHECK( true )
}
TEST( Test0001_getXmlTypeName, MxSeqSmpNode3480 )
{
	MxSeqSmpNode3480 object;
	std::string expected;
	std::string actual;
	expected = "node-3480";
	actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0002_getClassName, MxSeqSmpNode3480 )
{
	MxSeqSmpNode3480 object;
	std::string expected;
	std::string actual;
	expected = "MxSeqSmpNode3480";
	actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0003_getDocumentation, MxSeqSmpNode3480 )
{
	MxSeqSmpNode3480 object;
	std::string expected;
	std::string actual;
	expected = "No XSD Documentation.";
	actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* String Functions --------------------------------------------------------- */

TEST( Test0004_getIsStringPresent, MxSeqSmpNode3480 )
{
	MxSeqSmpNode3480 object;
	bool expected;
	bool actual;
	expected = true;
	actual = object.getIsStringPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0005_getString, MxSeqSmpNode3480 )
{
	MxSeqSmpNode3480 object;
	std::string expected;
	std::string actual;
	HMxEsString e1 = std::make_shared<MxEsString>();
    e1->setValue( MxNumberStringNumber( 1 ) );
    object.setString( e1 );
	expected = "<string>1</string>";
	actual = object.getString()->toString();
	CHECK_EQUAL( expected, actual )
    e1->setValue( MxNumberStringNumber( 2 ) );
    expected = "<string>2</string>";
	actual = object.getString()->toString();
	CHECK_EQUAL( expected, actual )
    HMxEsString e2 = std::make_shared<MxEsString>();
    e2->setValue( MxNumberStringNumber( 3 ) );
    object.setString( e2 );
    expected = "<string>3</string>";
	actual = object.getString()->toString();
	CHECK_EQUAL( expected, actual )
}

TEST( Test0007_getStringMinOccurs, MxSeqSmpNode3480 )
{
	MxSeqSmpNode3480 object;
	int expected;
	int actual;
	expected = 1;
	actual = object.getStringMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0008_getStringMaxOccurs, MxSeqSmpNode3480 )
{
	MxSeqSmpNode3480 object;
	int expected;
	int actual;
	expected = 1;
	actual = object.getStringMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0009_getIsStringUnbounded, MxSeqSmpNode3480 )
{
	MxSeqSmpNode3480 object;
	bool expected;
	bool actual;
	expected = false;
	actual = object.getIsStringUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: String Functions ---------------------------------------------------- */

/* Fret Functions ----------------------------------------------------------- */

TEST( Test0010_getIsFretPresent, MxSeqSmpNode3480 )
{
	MxSeqSmpNode3480 object;
	bool expected;
	bool actual;
	expected = true;
	actual = object.getIsFretPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0011_getFret, MxSeqSmpNode3480 )
{
	MxSeqSmpNode3480 object;
	std::string expected;
	std::string actual;
	HMxEsFret e1 = std::make_shared<MxEsFret>();
    e1->setValue( XsNonNegativeInteger( 0 ) );
    object.setFret( e1 );
	expected = "<fret>0</fret>";
	actual = object.getFret()->toString();
	CHECK_EQUAL( expected, actual )
    e1->setValue( XsNonNegativeInteger( 1 ) );
    expected = "<fret>1</fret>";
	actual = object.getFret()->toString();
	CHECK_EQUAL( expected, actual )
    HMxEsFret e2 = std::make_shared<MxEsFret>();
    e2->setValue( XsNonNegativeInteger( 2 ) );
    object.setFret( e2 );
    expected = "<fret>2</fret>";
	actual = object.getFret()->toString();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0013_getFretMinOccurs, MxSeqSmpNode3480 )
{
	MxSeqSmpNode3480 object;
	int expected;
	int actual;
	expected = 1;
	actual = object.getFretMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0014_getFretMaxOccurs, MxSeqSmpNode3480 )
{
	MxSeqSmpNode3480 object;
	int expected;
	int actual;
	expected = 1;
	actual = object.getFretMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0015_getIsFretUnbounded, MxSeqSmpNode3480 )
{
	MxSeqSmpNode3480 object;
	bool expected;
	bool actual;
	expected = false;
	actual = object.getIsFretUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: Fret Functions ------------------------------------------------------ */

/* Fingering Functions ------------------------------------------------------ */

TEST( Test0016_getIsFingeringPresent, MxSeqSmpNode3480 )
{
	MxSeqSmpNode3480 object;
	bool expected;
	bool actual;
	expected = false;
	actual = object.getIsFingeringPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0017_setIsFingeringPresent, MxSeqSmpNode3480 )
{
	MxSeqSmpNode3480 object;
	bool expected;
	bool actual;
	expected = false;
	actual = object.getIsFingeringPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsFingeringPresent( true );
	expected = true;
	actual = object.getIsFingeringPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0018_getFingering, MxSeqSmpNode3480 )
{
	MxSeqSmpNode3480 object;
	std::string expected;
	std::string actual;
	HMxEsFingering e1 = std::make_shared<MxEsFingering>();
    e1->setValue( XsString( "Hello" ) );
    object.setFingering( e1 );
	expected = "<fingering>Hello</fingering>";
	actual = object.getFingering()->toString();
	CHECK_EQUAL( expected, actual )
    e1->setValue( XsString( "World" ) );
    expected = "<fingering>World</fingering>";
	actual = object.getFingering()->toString();
	CHECK_EQUAL( expected, actual )
    HMxEsFingering e2 = std::make_shared<MxEsFingering>();
    e2->setValue( XsString( "MusicXML" ) );
    object.setFingering( e2 );
    expected = "<fingering>MusicXML</fingering>";
	actual = object.getFingering()->toString();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0020_getFingeringMinOccurs, MxSeqSmpNode3480 )
{
	MxSeqSmpNode3480 object;
	int expected;
	int actual;
	expected = 0;
	actual = object.getFingeringMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0021_getFingeringMaxOccurs, MxSeqSmpNode3480 )
{
	MxSeqSmpNode3480 object;
	int expected;
	int actual;
	expected = 1;
	actual = object.getFingeringMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0022_getIsFingeringUnbounded, MxSeqSmpNode3480 )
{
	MxSeqSmpNode3480 object;
	bool expected;
	bool actual;
	expected = false;
	actual = object.getIsFingeringUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: Fingering Functions ------------------------------------------------- */

/* Barre Functions ---------------------------------------------------------- */

TEST( Test0023_getIsBarrePresent, MxSeqSmpNode3480 )
{
	MxSeqSmpNode3480 object;
	bool expected;
	bool actual;
	expected = false;
	actual = object.getIsBarrePresent();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0024_setIsBarrePresent, MxSeqSmpNode3480 )
{
	MxSeqSmpNode3480 object;
	bool expected;
	bool actual;
	expected = false;
	actual = object.getIsBarrePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsBarrePresent( true );
	expected = true;
	actual = object.getIsBarrePresent();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0025_getBarre, MxSeqSmpNode3480 )
{
	MxSeqSmpNode3480 object;
	std::string expected;
	std::string actual;
	HMxEeBarre e1 = std::make_shared<MxEeBarre>();
    object.setBarre( e1 );
	expected = "<barre type=\"start\"/>";
	actual = object.getBarre()->toString();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0026_setBarre, MxSeqSmpNode3480 )
{
	MxSeqSmpNode3480 object;
	std::string expected;
	std::string actual;
	expected = "<barre type=\"start\"/>";
	actual = object.getBarre()->toString();
	CHECK_EQUAL( expected, actual )
    HMxEeBarre val = std::make_shared<MxEeBarre>();
    val->setType( enums::StartStop::stop );
    object.setBarre( val );
    expected = "<barre type=\"stop\"/>";
	actual = object.getBarre()->toString();
	CHECK_EQUAL( expected, actual )
    
}
TEST( Test0027_getBarreMinOccurs, MxSeqSmpNode3480 )
{
	MxSeqSmpNode3480 object;
	int expected;
	int actual;
	expected = 0;
	actual = object.getBarreMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0028_getBarreMaxOccurs, MxSeqSmpNode3480 )
{
	MxSeqSmpNode3480 object;
	int expected;
	int actual;
	expected = 1;
	actual = object.getBarreMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0029_getIsBarreUnbounded, MxSeqSmpNode3480 )
{
	MxSeqSmpNode3480 object;
	bool expected;
	bool actual;
	expected = false;
	actual = object.getIsBarreUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: Barre Functions ----------------------------------------------------- */

TEST( toString, MxSeqSmpNode3480 )
{
    MxSeqSmpNode3480 object;
    std::string expected;
    std::string actual;
    
    object.getString()->setValue( MxNumberStringNumber( 1 ) );
    object.getString()->setIsColorPresent( true );
    object.getString()->setColor( MxColor( "#121314" ) );
    object.getFret()->setValue( XsNonNegativeInteger( 2 ) );
    object.getFingering()->setValue( XsString( "hello" ) );
    object.setIsFingeringPresent( true );
    object.getBarre()->setType( enums::StartStop::stop );
    object.setIsBarrePresent( true );
    
    std::stringstream acss;
    object.stream( acss, 2 );
    std::stringstream exss;
    exss << "\t\t" << "<string color=\"#121314\">1</string>" << std::endl;
    exss << "\t\t" << "<fret>2<fret>" << std::endl;
    exss << "\t\t" << "<fingering>hello</fingering>" << std::endl;
    exss << "\t\t" << "<barre type=\"stop\"/>";
    expected = exss.str();
	actual = acss.str();
	CHECK_EQUAL( expected, actual )
    
//    acss.str( "" );
//    HMxEsString val2 = object.getString();
//    val2->setValue( MxNumberSemitones(-1) );
//    object.setIsStringPresent( true );
//    object.stream( acss, 1, "\t" );
//    std::stringstream exss;
//    exss << '\t' << "<bass-step>F</bass-step>" << std::endl;
//    exss << '\t' << "<string>-1</string>";
//    expected = exss.str();
//    actual = acss.str();
//	CHECK_EQUAL( expected, actual )
//    
//    acss.str( "" );
//    val2->setValue( MxNumberSemitones(-1) );
//    object.setIsStringPresent( true );
//    object.stream( acss, 3, "_" );
//    exss.str( "" );
//    exss << "___" << "<bass-step>F</bass-step>" << std::endl;
//    exss << "___" << "<string>-1</string>";
//    expected = exss.str();
//    actual = acss.str();
//	CHECK_EQUAL( expected, actual )
//    
//    acss.str( "" );
//    val2->setValue( MxNumberSemitones( 0 ) );
//    object.setIsStringPresent( true );
//    object.stream( acss );
//    exss.str( "" );
//    exss << "" << "<bass-step>F</bass-step>" << std::endl;
//    exss << "" << "<string>0</string>";
//    expected = exss.str();
//    actual = acss.str();
//	CHECK_EQUAL( expected, actual )
//    
//    acss.str( "" );
//    object.setIsStringPresent( true );
//    val2->setValue( MxNumberSemitones(1) );
//    acss << object;
//    exss.str( "" );
//    exss << "" << "<bass-step>F</bass-step>" << std::endl;
//    exss << "" << "<string>1</string>";
//    expected = exss.str();
//    actual = acss.str();
//	CHECK_EQUAL( expected, actual )
//    
//    object.setIsStringPresent( true );
//    val1->setValue( enums::Step::g );
//    object.getString()->setValue( MxNumberSemitones( 2 ) );
//    exss.str( "" );
//    exss << "" << "<bass-step>G</bass-step>" << std::endl;
//    exss << "" << "<string>2</string>";
//    expected = exss.str();
//    actual = object.toString();
//	CHECK_EQUAL( expected, actual )
}