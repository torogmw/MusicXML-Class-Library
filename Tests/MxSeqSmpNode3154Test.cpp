#include "TestHarness.h"
#include "MxSeqSmpNode3154.h"
using namespace lexicon;

TEST( Test0000_DefaultCtor, MxSeqSmpNode3154 )
{
	MxSeqSmpNode3154 object;
	CHECK( object.getBassStep() )
}
TEST( Test0001_getXmlTypeName, MxSeqSmpNode3154 )
{
	MxSeqSmpNode3154 object;
	std::string expected;
	std::string actual;
	expected = "node-3154";
	actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0002_getClassName, MxSeqSmpNode3154 )
{
	MxSeqSmpNode3154 object;
	std::string expected;
	std::string actual;
	expected = "MxSeqSmpNode3154";
	actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0003_getDocumentation, MxSeqSmpNode3154 )
{
	MxSeqSmpNode3154 object;
	std::string expected;
	std::string actual;
	expected = "No XSD Documentation.";
	actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* BassStep Functions ------------------------------------------------------- */

TEST( Test0004_getIsBassStepPresent, MxSeqSmpNode3154 )
{
	MxSeqSmpNode3154 object;
	bool expected;
	bool actual;
	expected = true;
	actual = object.getIsBassStepPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0005_getBassStep, MxSeqSmpNode3154 )
{
	MxSeqSmpNode3154 object;
	std::string expected;
	std::string actual;
	HMxEsBassStep e1 = std::make_shared<MxEsBassStep>();
    e1->setValue( enums::Step::b );
    object.setBassStep( e1 );
	expected = "<bass-step>B</bass-step>";
	actual = object.getBassStep()->toString();
	CHECK_EQUAL( expected, actual )
    e1->setValue( enums::Step::f );
    expected = "<bass-step>F</bass-step>";
	actual = object.getBassStep()->toString();
	CHECK_EQUAL( expected, actual )
    HMxEsBassStep e2 = std::make_shared<MxEsBassStep>();
    e2->setValue( enums::Step::c );
    object.setBassStep( e2 );
    expected = "<bass-step>C</bass-step>";
	actual = object.getBassStep()->toString();
	CHECK_EQUAL( expected, actual )
    
}
TEST( Test0006_setBassStep, MxSeqSmpNode3154 )
{
	MxSeqSmpNode3154 object;
	std::string expected;
	std::string actual;
    object.getBassStep()->setValue( enums::Step::d );
	expected = "<bass-step>D</bass-step>";
	actual = object.getBassStep()->toString();
	CHECK_EQUAL( expected, actual )
    object.setBassStep( std::make_shared<MxEsBassStep>( enums::Step::e ) );
    expected = "<bass-step>E</bass-step>";
	actual = object.getBassStep()->toString();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0007_getBassStepMinOccurs, MxSeqSmpNode3154 )
{
	MxSeqSmpNode3154 object;
	int expected;
	int actual;
	expected = 1;
	actual = object.getBassStepMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0008_getBassStepMaxOccurs, MxSeqSmpNode3154 )
{
	MxSeqSmpNode3154 object;
	int expected;
	int actual;
	expected = 1;
	actual = object.getBassStepMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0009_getIsBassStepUnbounded, MxSeqSmpNode3154 )
{
	MxSeqSmpNode3154 object;
	bool expected;
	bool actual;
	expected = false;
	actual = object.getIsBassStepUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: BassStep Functions -------------------------------------------------- */

/* BassAlter Functions ------------------------------------------------------ */

TEST( Test0010_getIsBassAlterPresent, MxSeqSmpNode3154 )
{
	MxSeqSmpNode3154 object;
	bool expected;
	bool actual;
	expected = false;
	actual = object.getIsBassAlterPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0011_setIsBassAlterPresent, MxSeqSmpNode3154 )
{
	MxSeqSmpNode3154 object;
	bool expected;
	bool actual;
	expected = false;
	actual = object.getIsBassAlterPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsBassAlterPresent( true );
	expected = true;
	actual = object.getIsBassAlterPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0012_getBassAlter, MxSeqSmpNode3154 )
{
    MxSeqSmpNode3154 object;
	std::string expected;
	std::string actual;
	HMxEsBassAlter e1 = std::make_shared<MxEsBassAlter>();
    e1->setValue( MxNumberSemitones( -1 ) );
    object.setBassAlter( e1 );
    object.setIsBassAlterPresent( false );
	expected = "<bass-alter>-1</bass-alter>";
	actual = object.getBassAlter()->toString();
	CHECK_EQUAL( expected, actual )
    e1->setValue( MxNumberSemitones( 1 ) );
    object.setIsBassAlterPresent( true );
    expected = "<bass-alter>1</bass-alter>";
	actual = object.getBassAlter()->toString();
	CHECK_EQUAL( expected, actual )
    HMxEsBassAlter e2 = std::make_shared<MxEsBassAlter>();
    e2->setValue( MxNumberSemitones( 2 ) );
    object.setBassAlter( e2 );
    object.setIsBassAlterPresent( false );
    expected = "<bass-alter>2</bass-alter>";
	actual = object.getBassAlter()->toString();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0013_setBassAlter, MxSeqSmpNode3154 )
{
	MxSeqSmpNode3154 object;
	std::string expected;
	std::string actual;
    object.getBassAlter()->setValue( MxNumberSemitones( 0 ) );
	expected = "<bass-alter>0</bass-alter>";
	actual = object.getBassAlter()->toString();
	CHECK_EQUAL( expected, actual )
    object.setBassAlter( std::make_shared<MxEsBassAlter>( MxNumberSemitones( 3 ) ) );
    expected = "<bass-alter>3</bass-alter>";
	actual = object.getBassAlter()->toString();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0014_getBassAlterMinOccurs, MxSeqSmpNode3154 )
{
	MxSeqSmpNode3154 object;
	int expected;
	int actual;
	expected = 0;
	actual = object.getBassAlterMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0015_getBassAlterMaxOccurs, MxSeqSmpNode3154 )
{
	MxSeqSmpNode3154 object;
	int expected;
	int actual;
	expected = 1;
	actual = object.getBassAlterMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0016_getIsBassAlterUnbounded, MxSeqSmpNode3154 )
{
	MxSeqSmpNode3154 object;
	bool expected;
	bool actual;
	expected = false;
	actual = object.getIsBassAlterUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: BassAlter Functions ------------------------------------------------- */

TEST( Test0017_toString, MxSeqSmpNode3154 )
{
	MxSeqSmpNode3154 object;
    std::string expected;
    std::string actual;
    
    object.setIsBassAlterPresent( false );
    HMxEsBassStep val1 = object.getBassStep();
    val1->setValue( enums::Step::f );
    std::stringstream acss;
    object.stream( acss, 2 );
    expected = "\t\t<bass-step>F</bass-step>";
	actual = acss.str();
	CHECK_EQUAL( expected, actual )
    
    acss.str( "" );
    HMxEsBassAlter val2 = object.getBassAlter();
    val2->setValue( MxNumberSemitones(-1) );
    object.setIsBassAlterPresent( true );
    object.stream( acss, 1, "\t" );
    std::stringstream exss;
    exss << '\t' << "<bass-step>F</bass-step>" << std::endl;
    exss << '\t' << "<bass-alter>-1</bass-alter>";
    expected = exss.str();
    actual = acss.str();
	CHECK_EQUAL( expected, actual )
    
    acss.str( "" );
    val2->setValue( MxNumberSemitones(-1) );
    object.setIsBassAlterPresent( true );
    object.stream( acss, 3, "_" );
    exss.str( "" );
    exss << "___" << "<bass-step>F</bass-step>" << std::endl;
    exss << "___" << "<bass-alter>-1</bass-alter>";
    expected = exss.str();
    actual = acss.str();
	CHECK_EQUAL( expected, actual )
    
    acss.str( "" );
    val2->setValue( MxNumberSemitones( 0 ) );
    object.setIsBassAlterPresent( true );
    object.stream( acss );
    exss.str( "" );
    exss << "" << "<bass-step>F</bass-step>" << std::endl;
    exss << "" << "<bass-alter>0</bass-alter>";
    expected = exss.str();
    actual = acss.str();
	CHECK_EQUAL( expected, actual )
    
    acss.str( "" );
    object.setIsBassAlterPresent( true );
    val2->setValue( MxNumberSemitones(1) );
    acss << object;
    exss.str( "" );
    exss << "" << "<bass-step>F</bass-step>" << std::endl;
    exss << "" << "<bass-alter>1</bass-alter>";
    expected = exss.str();
    actual = acss.str();
	CHECK_EQUAL( expected, actual )
    
    object.setIsBassAlterPresent( true );
    val1->setValue( enums::Step::g );
    object.getBassAlter()->setValue( MxNumberSemitones( 2 ) );
    exss.str( "" );
    exss << "" << "<bass-step>G</bass-step>" << std::endl;
    exss << "" << "<bass-alter>2</bass-alter>";
    expected = exss.str();
    actual = object.toString();
	CHECK_EQUAL( expected, actual )
}