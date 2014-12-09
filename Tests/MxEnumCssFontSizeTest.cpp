#include "TestHarness.h"
#include "MxEnumCssFontSize.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxSmall );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xSmall );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::small );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum3 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::medium );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum4 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::large );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum5 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xLarge );
	int expected = 5;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum6 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxLarge );
	int expected = 6;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxSmall );
	MxEnumCssFontSize e2( e1 );
	int expected = 0;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 1 );
	expected = 0;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 1;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor1 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xSmall );
	MxEnumCssFontSize e2( e1 );
	int expected = 1;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 2 );
	expected = 1;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 2;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor2 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::small );
	MxEnumCssFontSize e2( e1 );
	int expected = 2;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 3 );
	expected = 2;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 3;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor3 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::medium );
	MxEnumCssFontSize e2( e1 );
	int expected = 3;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 4 );
	expected = 3;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 4;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor4 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::large );
	MxEnumCssFontSize e2( e1 );
	int expected = 4;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 5 );
	expected = 4;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 5;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor5 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xLarge );
	MxEnumCssFontSize e2( e1 );
	int expected = 5;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 6 );
	expected = 5;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 6;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor6 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxLarge );
	MxEnumCssFontSize e2( e1 );
	int expected = 6;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 0 );
	expected = 6;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 0;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* assignment operator */
TEST( assignmentOp0 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xSmall );
	MxEnumCssFontSize e2( enums::CssFontSize::xxSmall );
	e1 = e2;
	string expected = "xx-small";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumCssFontSize e3( enums::CssFontSize::xSmall );
	e2 = e3;
	expected = "x-small";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "xx-small";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "xx-small";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::small );
	MxEnumCssFontSize e2( enums::CssFontSize::xSmall );
	e1 = e2;
	string expected = "x-small";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumCssFontSize e3( enums::CssFontSize::small );
	e2 = e3;
	expected = "small";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "x-small";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "x-small";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::medium );
	MxEnumCssFontSize e2( enums::CssFontSize::small );
	e1 = e2;
	string expected = "small";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumCssFontSize e3( enums::CssFontSize::medium );
	e2 = e3;
	expected = "medium";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "small";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "small";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp3 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::large );
	MxEnumCssFontSize e2( enums::CssFontSize::medium );
	e1 = e2;
	string expected = "medium";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumCssFontSize e3( enums::CssFontSize::large );
	e2 = e3;
	expected = "large";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "medium";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "medium";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp4 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xLarge );
	MxEnumCssFontSize e2( enums::CssFontSize::large );
	e1 = e2;
	string expected = "large";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumCssFontSize e3( enums::CssFontSize::xLarge );
	e2 = e3;
	expected = "x-large";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "large";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "large";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp5 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxLarge );
	MxEnumCssFontSize e2( enums::CssFontSize::xLarge );
	e1 = e2;
	string expected = "x-large";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumCssFontSize e3( enums::CssFontSize::xxLarge );
	e2 = e3;
	expected = "xx-large";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "x-large";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "x-large";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp6 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxSmall );
	MxEnumCssFontSize e2( enums::CssFontSize::xxLarge );
	e1 = e2;
	string expected = "xx-large";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumCssFontSize e3( enums::CssFontSize::xxSmall );
	e2 = e3;
	expected = "xx-small";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "xx-large";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "xx-large";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxSmall );
	CHECK( e1.getValue() == enums::CssFontSize::xxSmall )
}
TEST( getValue1 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xSmall );
	CHECK( e1.getValue() == enums::CssFontSize::xSmall )
}
TEST( getValue2 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::small );
	CHECK( e1.getValue() == enums::CssFontSize::small )
}
TEST( getValue5 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xLarge );
	CHECK( e1.getValue() == enums::CssFontSize::xLarge )
}
TEST( getValue6 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxLarge );
	CHECK( e1.getValue() == enums::CssFontSize::xxLarge )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxSmall );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xSmall );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::small );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt3 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::medium );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt4 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::large );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt5 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xLarge );
	int expected = 5;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt6 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxLarge );
	int expected = 6;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxSmall );
	string expected = "xxSmall";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xSmall );
	string expected = "xSmall";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::small );
	string expected = "small";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString3 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::medium );
	string expected = "medium";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString4 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::large );
	string expected = "large";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString5 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xLarge );
	string expected = "xLarge";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString6 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxLarge );
	string expected = "xxLarge";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxSmall );
	string expected = "xx-small";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xSmall );
	string expected = "x-small";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::small );
	string expected = "small";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString3 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::medium );
	string expected = "medium";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString4 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::large );
	string expected = "large";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString5 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xLarge );
	string expected = "x-large";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString6 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxLarge );
	string expected = "xx-large";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xSmall );
	e1.setValue( enums::CssFontSize::xxSmall );
	CHECK( e1.getValue() == enums::CssFontSize::xxSmall )
}
TEST( setValue1 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::small );
	e1.setValue( enums::CssFontSize::xSmall );
	CHECK( e1.getValue() == enums::CssFontSize::xSmall )
}
TEST( setValue2 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::medium );
	e1.setValue( enums::CssFontSize::small );
	CHECK( e1.getValue() == enums::CssFontSize::small )
}
TEST( setValue5 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxLarge );
	e1.setValue( enums::CssFontSize::xLarge );
	CHECK( e1.getValue() == enums::CssFontSize::xLarge )
}
TEST( setValue6 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxSmall );
	e1.setValue( enums::CssFontSize::xxLarge );
	CHECK( e1.getValue() == enums::CssFontSize::xxLarge )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xSmall );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::CssFontSize::xSmall )
}
TEST( setValueInt0 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::small );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::CssFontSize::xSmall )
}
TEST( setValueInt1 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::medium );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::CssFontSize::small )
}
TEST( setValueInt2 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::large );
	CHECK( e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::CssFontSize::medium )
}
TEST( setValueInt5 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxSmall );
	CHECK( e1.setValueInt( 6 ) )
	CHECK( e1.getValue() == enums::CssFontSize::xxLarge )
}
TEST( setValueInt6 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xSmall );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::CssFontSize::xxSmall )
}
TEST( setValueInt7 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::small );
	CHECK( ! e1.setValueInt( 7 ) )
	CHECK( e1.getValue() == enums::CssFontSize::small )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xSmall );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::CssFontSize::xSmall )
}
TEST( fromString0 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::small );
	CHECK( e1.fromString( "x-small" ) )
	CHECK( e1.getValue() == enums::CssFontSize::xSmall )
}
TEST( fromString1 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::medium );
	CHECK( e1.fromString( "small" ) )
	CHECK( e1.getValue() == enums::CssFontSize::small )
}
TEST( fromString2 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::large );
	CHECK( e1.fromString( "medium" ) )
	CHECK( e1.getValue() == enums::CssFontSize::medium )
}
TEST( fromString3 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xLarge );
	CHECK( e1.fromString( "large" ) )
	CHECK( e1.getValue() == enums::CssFontSize::large )
}
TEST( fromString4 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxLarge );
	CHECK( e1.fromString( "x-large" ) )
	CHECK( e1.getValue() == enums::CssFontSize::xLarge )
}
TEST( fromString5 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxSmall );
	CHECK( e1.fromString( "xx-large" ) )
	CHECK( e1.getValue() == enums::CssFontSize::xxLarge )
}
TEST( fromString6 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xSmall );
	CHECK( e1.fromString( "xx-small" ) )
	CHECK( e1.getValue() == enums::CssFontSize::xxSmall )
}
TEST( fromString7 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::small );
	CHECK( ! e1.fromString( "crazyErrantValue7" ) )
	CHECK( e1.getValue() == enums::CssFontSize::small )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxSmall );
	int expected = 7;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xSmall );
	int expected = 7;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize6 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxLarge );
	int expected = 7;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxSmall );
	string expected = "css-font-size";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xSmall );
	string expected = "css-font-size";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName6 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxLarge );
	string expected = "css-font-size";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxSmall );
	string expected = "MxEnumCssFontSize";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xSmall );
	string expected = "MxEnumCssFontSize";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName6 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxLarge );
	string expected = "MxEnumCssFontSize";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxSmall );
	string expected = "The css-font-size type includes the CSS font sizes used as an alternative to a numeric point size.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xSmall );
	string expected = "The css-font-size type includes the CSS font sizes used as an alternative to a numeric point size.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation6 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxLarge );
	string expected = "The css-font-size type includes the CSS font sizes used as an alternative to a numeric point size.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxSmall );
	stringstream ss;
	e1.stream( ss );
	string expected = "xx-small";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "xx-small";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xSmall );
	stringstream ss;
	e1.stream( ss );
	string expected = "x-small";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "x-small";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream6 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxLarge );
	stringstream ss;
	e1.stream( ss );
	string expected = "xx-large";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "xx-large";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxSmall );
	stringstream ss;
	ss << e1;
	string expected = "xx-small";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "xx-small";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xSmall );
	stringstream ss;
	ss << e1;
	string expected = "x-small";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "x-small";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator6 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxLarge );
	stringstream ss;
	ss << e1;
	string expected = "xx-large";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "xx-large";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxSmall );
	MxEnumCssFontSize e2( enums::CssFontSize::xxSmall );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xSmall );
	MxEnumCssFontSize e2( enums::CssFontSize::xxSmall );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals6 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxLarge );
	MxEnumCssFontSize e2( enums::CssFontSize::xxSmall );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxSmall );
	MxEnumCssFontSize e2( enums::CssFontSize::xSmall );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xSmall );
	MxEnumCssFontSize e2( enums::CssFontSize::xSmall );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals6 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxLarge );
	MxEnumCssFontSize e2( enums::CssFontSize::xSmall );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_6equals0 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxSmall );
	MxEnumCssFontSize e2( enums::CssFontSize::xxLarge );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_6equals1 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xSmall );
	MxEnumCssFontSize e2( enums::CssFontSize::xxLarge );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_6equals6 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxLarge );
	MxEnumCssFontSize e2( enums::CssFontSize::xxLarge );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxSmall );
	MxEnumCssFontSize e2( enums::CssFontSize::xxSmall );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xSmall );
	MxEnumCssFontSize e2( enums::CssFontSize::xxSmall );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals6 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxLarge );
	MxEnumCssFontSize e2( enums::CssFontSize::xxSmall );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxSmall );
	MxEnumCssFontSize e2( enums::CssFontSize::xSmall );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xSmall );
	MxEnumCssFontSize e2( enums::CssFontSize::xSmall );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals6 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxLarge );
	MxEnumCssFontSize e2( enums::CssFontSize::xSmall );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_6equals0 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxSmall );
	MxEnumCssFontSize e2( enums::CssFontSize::xxLarge );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_6equals1 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xSmall );
	MxEnumCssFontSize e2( enums::CssFontSize::xxLarge );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_6equals6 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxLarge );
	MxEnumCssFontSize e2( enums::CssFontSize::xxLarge );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxSmall );
	MxEnumCssFontSize e2( enums::CssFontSize::xxSmall );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xSmall );
	MxEnumCssFontSize e2( enums::CssFontSize::xxSmall );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_6islessthanoreq0 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxLarge );
	MxEnumCssFontSize e2( enums::CssFontSize::xxSmall );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxSmall );
	MxEnumCssFontSize e2( enums::CssFontSize::xSmall );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xSmall );
	MxEnumCssFontSize e2( enums::CssFontSize::xSmall );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_6islessthanoreq1 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxLarge );
	MxEnumCssFontSize e2( enums::CssFontSize::xSmall );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq6 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxSmall );
	MxEnumCssFontSize e2( enums::CssFontSize::xxLarge );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq6 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xSmall );
	MxEnumCssFontSize e2( enums::CssFontSize::xxLarge );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_6islessthanoreq6 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxLarge );
	MxEnumCssFontSize e2( enums::CssFontSize::xxLarge );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxSmall );
	MxEnumCssFontSize e2( enums::CssFontSize::xxSmall );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xSmall );
	MxEnumCssFontSize e2( enums::CssFontSize::xxSmall );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_6isgreaterthanoreq0 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxLarge );
	MxEnumCssFontSize e2( enums::CssFontSize::xxSmall );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxSmall );
	MxEnumCssFontSize e2( enums::CssFontSize::xSmall );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xSmall );
	MxEnumCssFontSize e2( enums::CssFontSize::xSmall );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_6isgreaterthanoreq1 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxLarge );
	MxEnumCssFontSize e2( enums::CssFontSize::xSmall );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq6 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxSmall );
	MxEnumCssFontSize e2( enums::CssFontSize::xxLarge );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq6 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xSmall );
	MxEnumCssFontSize e2( enums::CssFontSize::xxLarge );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_6isgreaterthanoreq6 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxLarge );
	MxEnumCssFontSize e2( enums::CssFontSize::xxLarge );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxSmall );
	MxEnumCssFontSize e2( enums::CssFontSize::xxSmall );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xSmall );
	MxEnumCssFontSize e2( enums::CssFontSize::xxSmall );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_6islessthan0 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxLarge );
	MxEnumCssFontSize e2( enums::CssFontSize::xxSmall );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxSmall );
	MxEnumCssFontSize e2( enums::CssFontSize::xSmall );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xSmall );
	MxEnumCssFontSize e2( enums::CssFontSize::xSmall );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_6islessthan1 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxLarge );
	MxEnumCssFontSize e2( enums::CssFontSize::xSmall );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan6 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxSmall );
	MxEnumCssFontSize e2( enums::CssFontSize::xxLarge );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan6 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xSmall );
	MxEnumCssFontSize e2( enums::CssFontSize::xxLarge );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_6islessthan6 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxLarge );
	MxEnumCssFontSize e2( enums::CssFontSize::xxLarge );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxSmall );
	MxEnumCssFontSize e2( enums::CssFontSize::xxSmall );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xSmall );
	MxEnumCssFontSize e2( enums::CssFontSize::xxSmall );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_6isgreaterthan0 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxLarge );
	MxEnumCssFontSize e2( enums::CssFontSize::xxSmall );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxSmall );
	MxEnumCssFontSize e2( enums::CssFontSize::xSmall );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xSmall );
	MxEnumCssFontSize e2( enums::CssFontSize::xSmall );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_6isgreaterthan1 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxLarge );
	MxEnumCssFontSize e2( enums::CssFontSize::xSmall );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan6 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxSmall );
	MxEnumCssFontSize e2( enums::CssFontSize::xxLarge );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan6 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xSmall );
	MxEnumCssFontSize e2( enums::CssFontSize::xxLarge );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_6isgreaterthan6 , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxLarge );
	MxEnumCssFontSize e2( enums::CssFontSize::xxLarge );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_6times , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxSmall );
	MxEnumCssFontSize e2( enums::CssFontSize::xxSmall );
	for( int i = 0; i < 6; ++i )
	{
		e2 = ++e1;
	}
	string expected = "xxLarge";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "xxLarge";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_6times , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xSmall );
	MxEnumCssFontSize e2( enums::CssFontSize::xSmall );
	for( int i = 0; i < 6; ++i )
	{
		e2 = ++e1;
	}
	string expected = "xxSmall";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "xxSmall";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start6_6times , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxLarge );
	MxEnumCssFontSize e2( enums::CssFontSize::xxLarge );
	for( int i = 0; i < 6; ++i )
	{
		e2 = ++e1;
	}
	string expected = "xLarge";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "xLarge";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_7times , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxSmall );
	MxEnumCssFontSize e2( enums::CssFontSize::xxSmall );
	for( int i = 0; i < 7; ++i )
	{
		e2 = ++e1;
	}
	string expected = "xxSmall";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "xxSmall";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_7times , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xSmall );
	MxEnumCssFontSize e2( enums::CssFontSize::xSmall );
	for( int i = 0; i < 7; ++i )
	{
		e2 = ++e1;
	}
	string expected = "xSmall";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "xSmall";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start6_7times , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxLarge );
	MxEnumCssFontSize e2( enums::CssFontSize::xxLarge );
	for( int i = 0; i < 7; ++i )
	{
		e2 = ++e1;
	}
	string expected = "xxLarge";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "xxLarge";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_6times , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxSmall );
	MxEnumCssFontSize e2( enums::CssFontSize::xxSmall );
	for( int i = 0; i < 6; ++i )
	{
		e2 = --e1;
	}
	string expected = "xSmall";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "xSmall";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_6times , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xSmall );
	MxEnumCssFontSize e2( enums::CssFontSize::xSmall );
	for( int i = 0; i < 6; ++i )
	{
		e2 = --e1;
	}
	string expected = "small";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "small";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start6_6times , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxLarge );
	MxEnumCssFontSize e2( enums::CssFontSize::xxLarge );
	for( int i = 0; i < 6; ++i )
	{
		e2 = --e1;
	}
	string expected = "xxSmall";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "xxSmall";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_7times , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxSmall );
	MxEnumCssFontSize e2( enums::CssFontSize::xxSmall );
	for( int i = 0; i < 7; ++i )
	{
		e2 = --e1;
	}
	string expected = "xxSmall";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "xxSmall";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_7times , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xSmall );
	MxEnumCssFontSize e2( enums::CssFontSize::xSmall );
	for( int i = 0; i < 7; ++i )
	{
		e2 = --e1;
	}
	string expected = "xSmall";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "xSmall";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start6_7times , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxLarge );
	MxEnumCssFontSize e2( enums::CssFontSize::xxLarge );
	for( int i = 0; i < 7; ++i )
	{
		e2 = --e1;
	}
	string expected = "xxLarge";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "xxLarge";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_6times , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxSmall );
	MxEnumCssFontSize e2( enums::CssFontSize::xxSmall );
	for( int i = 0; i < 6; ++i )
	{
		e2 = e1++;
	}
	string expected = "xxLarge";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "xLarge";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_6times , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xSmall );
	MxEnumCssFontSize e2( enums::CssFontSize::xSmall );
	for( int i = 0; i < 6; ++i )
	{
		e2 = e1++;
	}
	string expected = "xxSmall";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "xxLarge";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start6_6times , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxLarge );
	MxEnumCssFontSize e2( enums::CssFontSize::xxLarge );
	for( int i = 0; i < 6; ++i )
	{
		e2 = e1++;
	}
	string expected = "xLarge";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "large";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_7times , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxSmall );
	MxEnumCssFontSize e2( enums::CssFontSize::xxSmall );
	for( int i = 0; i < 7; ++i )
	{
		e2 = e1++;
	}
	string expected = "xxSmall";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "xxLarge";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_7times , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xSmall );
	MxEnumCssFontSize e2( enums::CssFontSize::xSmall );
	for( int i = 0; i < 7; ++i )
	{
		e2 = e1++;
	}
	string expected = "xSmall";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "xxSmall";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start6_7times , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxLarge );
	MxEnumCssFontSize e2( enums::CssFontSize::xxLarge );
	for( int i = 0; i < 7; ++i )
	{
		e2 = e1++;
	}
	string expected = "xxLarge";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "xLarge";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_6times , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxSmall );
	MxEnumCssFontSize e2( enums::CssFontSize::xxSmall );
	for( int i = 0; i < 6; ++i )
	{
		e2 = e1--;
	}
	string expected = "xSmall";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "small";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_6times , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xSmall );
	MxEnumCssFontSize e2( enums::CssFontSize::xSmall );
	for( int i = 0; i < 6; ++i )
	{
		e2 = e1--;
	}
	string expected = "small";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "medium";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start6_6times , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxLarge );
	MxEnumCssFontSize e2( enums::CssFontSize::xxLarge );
	for( int i = 0; i < 6; ++i )
	{
		e2 = e1--;
	}
	string expected = "xxSmall";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "xSmall";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_7times , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxSmall );
	MxEnumCssFontSize e2( enums::CssFontSize::xxSmall );
	for( int i = 0; i < 7; ++i )
	{
		e2 = e1--;
	}
	string expected = "xxSmall";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "xSmall";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_7times , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xSmall );
	MxEnumCssFontSize e2( enums::CssFontSize::xSmall );
	for( int i = 0; i < 7; ++i )
	{
		e2 = e1--;
	}
	string expected = "xSmall";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "small";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start6_7times , MxEnumCssFontSize )
{
	MxEnumCssFontSize e1( enums::CssFontSize::xxLarge );
	MxEnumCssFontSize e2( enums::CssFontSize::xxLarge );
	for( int i = 0; i < 7; ++i )
	{
		e2 = e1--;
	}
	string expected = "xxLarge";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "xxSmall";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

