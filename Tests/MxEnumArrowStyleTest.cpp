#include "TestHarness.h"
#include "MxEnumArrowStyle.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::single );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::double_ );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::filled );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum3 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::hollow );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum4 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::paired );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum5 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::combined );
	int expected = 5;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum6 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::other );
	int expected = 6;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::single );
	MxEnumArrowStyle e2( e1 );
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
TEST( copyCtor1 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::double_ );
	MxEnumArrowStyle e2( e1 );
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
TEST( copyCtor2 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::filled );
	MxEnumArrowStyle e2( e1 );
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
TEST( copyCtor3 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::hollow );
	MxEnumArrowStyle e2( e1 );
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
TEST( copyCtor4 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::paired );
	MxEnumArrowStyle e2( e1 );
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
TEST( copyCtor5 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::combined );
	MxEnumArrowStyle e2( e1 );
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
TEST( copyCtor6 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::other );
	MxEnumArrowStyle e2( e1 );
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
TEST( assignmentOp0 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::double_ );
	MxEnumArrowStyle e2( enums::ArrowStyle::single );
	e1 = e2;
	string expected = "single";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumArrowStyle e3( enums::ArrowStyle::double_ );
	e2 = e3;
	expected = "double";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "single";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "single";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::filled );
	MxEnumArrowStyle e2( enums::ArrowStyle::double_ );
	e1 = e2;
	string expected = "double";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumArrowStyle e3( enums::ArrowStyle::filled );
	e2 = e3;
	expected = "filled";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "double";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "double";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::hollow );
	MxEnumArrowStyle e2( enums::ArrowStyle::filled );
	e1 = e2;
	string expected = "filled";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumArrowStyle e3( enums::ArrowStyle::hollow );
	e2 = e3;
	expected = "hollow";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "filled";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "filled";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp3 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::paired );
	MxEnumArrowStyle e2( enums::ArrowStyle::hollow );
	e1 = e2;
	string expected = "hollow";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumArrowStyle e3( enums::ArrowStyle::paired );
	e2 = e3;
	expected = "paired";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "hollow";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "hollow";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp4 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::combined );
	MxEnumArrowStyle e2( enums::ArrowStyle::paired );
	e1 = e2;
	string expected = "paired";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumArrowStyle e3( enums::ArrowStyle::combined );
	e2 = e3;
	expected = "combined";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "paired";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "paired";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp5 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::other );
	MxEnumArrowStyle e2( enums::ArrowStyle::combined );
	e1 = e2;
	string expected = "combined";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumArrowStyle e3( enums::ArrowStyle::other );
	e2 = e3;
	expected = "other";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "combined";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "combined";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp6 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::single );
	MxEnumArrowStyle e2( enums::ArrowStyle::other );
	e1 = e2;
	string expected = "other";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumArrowStyle e3( enums::ArrowStyle::single );
	e2 = e3;
	expected = "single";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "other";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "other";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::single );
	CHECK( e1.getValue() == enums::ArrowStyle::single )
}
TEST( getValue1 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::double_ );
	CHECK( e1.getValue() == enums::ArrowStyle::double_ )
}
TEST( getValue2 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::filled );
	CHECK( e1.getValue() == enums::ArrowStyle::filled )
}
TEST( getValue5 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::combined );
	CHECK( e1.getValue() == enums::ArrowStyle::combined )
}
TEST( getValue6 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::other );
	CHECK( e1.getValue() == enums::ArrowStyle::other )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::single );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::double_ );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::filled );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt3 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::hollow );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt4 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::paired );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt5 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::combined );
	int expected = 5;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt6 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::other );
	int expected = 6;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::single );
	string expected = "single";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::double_ );
	string expected = "double_";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::filled );
	string expected = "filled";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString3 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::hollow );
	string expected = "hollow";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString4 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::paired );
	string expected = "paired";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString5 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::combined );
	string expected = "combined";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString6 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::other );
	string expected = "other";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::single );
	string expected = "single";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::double_ );
	string expected = "double";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::filled );
	string expected = "filled";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString3 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::hollow );
	string expected = "hollow";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString4 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::paired );
	string expected = "paired";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString5 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::combined );
	string expected = "combined";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString6 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::other );
	string expected = "other";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::double_ );
	e1.setValue( enums::ArrowStyle::single );
	CHECK( e1.getValue() == enums::ArrowStyle::single )
}
TEST( setValue1 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::filled );
	e1.setValue( enums::ArrowStyle::double_ );
	CHECK( e1.getValue() == enums::ArrowStyle::double_ )
}
TEST( setValue2 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::hollow );
	e1.setValue( enums::ArrowStyle::filled );
	CHECK( e1.getValue() == enums::ArrowStyle::filled )
}
TEST( setValue5 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::other );
	e1.setValue( enums::ArrowStyle::combined );
	CHECK( e1.getValue() == enums::ArrowStyle::combined )
}
TEST( setValue6 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::single );
	e1.setValue( enums::ArrowStyle::other );
	CHECK( e1.getValue() == enums::ArrowStyle::other )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::double_ );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::ArrowStyle::double_ )
}
TEST( setValueInt0 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::filled );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::ArrowStyle::double_ )
}
TEST( setValueInt1 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::hollow );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::ArrowStyle::filled )
}
TEST( setValueInt2 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::paired );
	CHECK( e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::ArrowStyle::hollow )
}
TEST( setValueInt5 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::single );
	CHECK( e1.setValueInt( 6 ) )
	CHECK( e1.getValue() == enums::ArrowStyle::other )
}
TEST( setValueInt6 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::double_ );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::ArrowStyle::single )
}
TEST( setValueInt7 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::filled );
	CHECK( ! e1.setValueInt( 7 ) )
	CHECK( e1.getValue() == enums::ArrowStyle::filled )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::double_ );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::ArrowStyle::double_ )
}
TEST( fromString0 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::filled );
	CHECK( e1.fromString( "double" ) )
	CHECK( e1.getValue() == enums::ArrowStyle::double_ )
}
TEST( fromString1 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::hollow );
	CHECK( e1.fromString( "filled" ) )
	CHECK( e1.getValue() == enums::ArrowStyle::filled )
}
TEST( fromString2 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::paired );
	CHECK( e1.fromString( "hollow" ) )
	CHECK( e1.getValue() == enums::ArrowStyle::hollow )
}
TEST( fromString3 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::combined );
	CHECK( e1.fromString( "paired" ) )
	CHECK( e1.getValue() == enums::ArrowStyle::paired )
}
TEST( fromString4 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::other );
	CHECK( e1.fromString( "combined" ) )
	CHECK( e1.getValue() == enums::ArrowStyle::combined )
}
TEST( fromString5 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::single );
	CHECK( e1.fromString( "other" ) )
	CHECK( e1.getValue() == enums::ArrowStyle::other )
}
TEST( fromString6 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::double_ );
	CHECK( e1.fromString( "single" ) )
	CHECK( e1.getValue() == enums::ArrowStyle::single )
}
TEST( fromString7 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::filled );
	CHECK( ! e1.fromString( "crazyErrantValue7" ) )
	CHECK( e1.getValue() == enums::ArrowStyle::filled )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::single );
	int expected = 7;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::double_ );
	int expected = 7;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize6 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::other );
	int expected = 7;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::single );
	string expected = "arrow-style";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::double_ );
	string expected = "arrow-style";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName6 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::other );
	string expected = "arrow-style";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::single );
	string expected = "MxEnumArrowStyle";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::double_ );
	string expected = "MxEnumArrowStyle";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName6 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::other );
	string expected = "MxEnumArrowStyle";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::single );
	string expected = "The arrow-style type represents the style of an arrow, using Unicode arrow terminology. Filled and hollow arrows indicate polygonal single arrows. Paired arrows are duplicate single arrows in the same direction. Combined arrows apply to double direction arrows like left right, indicating that an arrow in one direction should be combined with an arrow in the other direction.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::double_ );
	string expected = "The arrow-style type represents the style of an arrow, using Unicode arrow terminology. Filled and hollow arrows indicate polygonal single arrows. Paired arrows are duplicate single arrows in the same direction. Combined arrows apply to double direction arrows like left right, indicating that an arrow in one direction should be combined with an arrow in the other direction.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation6 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::other );
	string expected = "The arrow-style type represents the style of an arrow, using Unicode arrow terminology. Filled and hollow arrows indicate polygonal single arrows. Paired arrows are duplicate single arrows in the same direction. Combined arrows apply to double direction arrows like left right, indicating that an arrow in one direction should be combined with an arrow in the other direction.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::single );
	stringstream ss;
	e1.stream( ss );
	string expected = "single";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "single";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::double_ );
	stringstream ss;
	e1.stream( ss );
	string expected = "double";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "double";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream6 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::other );
	stringstream ss;
	e1.stream( ss );
	string expected = "other";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "other";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::single );
	stringstream ss;
	ss << e1;
	string expected = "single";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "single";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::double_ );
	stringstream ss;
	ss << e1;
	string expected = "double";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "double";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator6 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::other );
	stringstream ss;
	ss << e1;
	string expected = "other";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "other";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::single );
	MxEnumArrowStyle e2( enums::ArrowStyle::single );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::double_ );
	MxEnumArrowStyle e2( enums::ArrowStyle::single );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals6 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::other );
	MxEnumArrowStyle e2( enums::ArrowStyle::single );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::single );
	MxEnumArrowStyle e2( enums::ArrowStyle::double_ );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::double_ );
	MxEnumArrowStyle e2( enums::ArrowStyle::double_ );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals6 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::other );
	MxEnumArrowStyle e2( enums::ArrowStyle::double_ );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_6equals0 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::single );
	MxEnumArrowStyle e2( enums::ArrowStyle::other );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_6equals1 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::double_ );
	MxEnumArrowStyle e2( enums::ArrowStyle::other );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_6equals6 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::other );
	MxEnumArrowStyle e2( enums::ArrowStyle::other );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::single );
	MxEnumArrowStyle e2( enums::ArrowStyle::single );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::double_ );
	MxEnumArrowStyle e2( enums::ArrowStyle::single );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals6 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::other );
	MxEnumArrowStyle e2( enums::ArrowStyle::single );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::single );
	MxEnumArrowStyle e2( enums::ArrowStyle::double_ );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::double_ );
	MxEnumArrowStyle e2( enums::ArrowStyle::double_ );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals6 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::other );
	MxEnumArrowStyle e2( enums::ArrowStyle::double_ );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_6equals0 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::single );
	MxEnumArrowStyle e2( enums::ArrowStyle::other );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_6equals1 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::double_ );
	MxEnumArrowStyle e2( enums::ArrowStyle::other );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_6equals6 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::other );
	MxEnumArrowStyle e2( enums::ArrowStyle::other );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::single );
	MxEnumArrowStyle e2( enums::ArrowStyle::single );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::double_ );
	MxEnumArrowStyle e2( enums::ArrowStyle::single );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_6islessthanoreq0 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::other );
	MxEnumArrowStyle e2( enums::ArrowStyle::single );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::single );
	MxEnumArrowStyle e2( enums::ArrowStyle::double_ );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::double_ );
	MxEnumArrowStyle e2( enums::ArrowStyle::double_ );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_6islessthanoreq1 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::other );
	MxEnumArrowStyle e2( enums::ArrowStyle::double_ );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq6 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::single );
	MxEnumArrowStyle e2( enums::ArrowStyle::other );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq6 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::double_ );
	MxEnumArrowStyle e2( enums::ArrowStyle::other );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_6islessthanoreq6 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::other );
	MxEnumArrowStyle e2( enums::ArrowStyle::other );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::single );
	MxEnumArrowStyle e2( enums::ArrowStyle::single );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::double_ );
	MxEnumArrowStyle e2( enums::ArrowStyle::single );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_6isgreaterthanoreq0 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::other );
	MxEnumArrowStyle e2( enums::ArrowStyle::single );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::single );
	MxEnumArrowStyle e2( enums::ArrowStyle::double_ );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::double_ );
	MxEnumArrowStyle e2( enums::ArrowStyle::double_ );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_6isgreaterthanoreq1 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::other );
	MxEnumArrowStyle e2( enums::ArrowStyle::double_ );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq6 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::single );
	MxEnumArrowStyle e2( enums::ArrowStyle::other );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq6 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::double_ );
	MxEnumArrowStyle e2( enums::ArrowStyle::other );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_6isgreaterthanoreq6 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::other );
	MxEnumArrowStyle e2( enums::ArrowStyle::other );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::single );
	MxEnumArrowStyle e2( enums::ArrowStyle::single );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::double_ );
	MxEnumArrowStyle e2( enums::ArrowStyle::single );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_6islessthan0 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::other );
	MxEnumArrowStyle e2( enums::ArrowStyle::single );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::single );
	MxEnumArrowStyle e2( enums::ArrowStyle::double_ );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::double_ );
	MxEnumArrowStyle e2( enums::ArrowStyle::double_ );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_6islessthan1 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::other );
	MxEnumArrowStyle e2( enums::ArrowStyle::double_ );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan6 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::single );
	MxEnumArrowStyle e2( enums::ArrowStyle::other );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan6 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::double_ );
	MxEnumArrowStyle e2( enums::ArrowStyle::other );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_6islessthan6 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::other );
	MxEnumArrowStyle e2( enums::ArrowStyle::other );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::single );
	MxEnumArrowStyle e2( enums::ArrowStyle::single );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::double_ );
	MxEnumArrowStyle e2( enums::ArrowStyle::single );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_6isgreaterthan0 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::other );
	MxEnumArrowStyle e2( enums::ArrowStyle::single );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::single );
	MxEnumArrowStyle e2( enums::ArrowStyle::double_ );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::double_ );
	MxEnumArrowStyle e2( enums::ArrowStyle::double_ );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_6isgreaterthan1 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::other );
	MxEnumArrowStyle e2( enums::ArrowStyle::double_ );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan6 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::single );
	MxEnumArrowStyle e2( enums::ArrowStyle::other );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan6 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::double_ );
	MxEnumArrowStyle e2( enums::ArrowStyle::other );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_6isgreaterthan6 , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::other );
	MxEnumArrowStyle e2( enums::ArrowStyle::other );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_6times , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::single );
	MxEnumArrowStyle e2( enums::ArrowStyle::single );
	for( int i = 0; i < 6; ++i )
	{
		e2 = ++e1;
	}
	string expected = "other";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "other";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_6times , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::double_ );
	MxEnumArrowStyle e2( enums::ArrowStyle::double_ );
	for( int i = 0; i < 6; ++i )
	{
		e2 = ++e1;
	}
	string expected = "single";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "single";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start6_6times , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::other );
	MxEnumArrowStyle e2( enums::ArrowStyle::other );
	for( int i = 0; i < 6; ++i )
	{
		e2 = ++e1;
	}
	string expected = "combined";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "combined";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_7times , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::single );
	MxEnumArrowStyle e2( enums::ArrowStyle::single );
	for( int i = 0; i < 7; ++i )
	{
		e2 = ++e1;
	}
	string expected = "single";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "single";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_7times , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::double_ );
	MxEnumArrowStyle e2( enums::ArrowStyle::double_ );
	for( int i = 0; i < 7; ++i )
	{
		e2 = ++e1;
	}
	string expected = "double_";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "double_";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start6_7times , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::other );
	MxEnumArrowStyle e2( enums::ArrowStyle::other );
	for( int i = 0; i < 7; ++i )
	{
		e2 = ++e1;
	}
	string expected = "other";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "other";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_6times , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::single );
	MxEnumArrowStyle e2( enums::ArrowStyle::single );
	for( int i = 0; i < 6; ++i )
	{
		e2 = --e1;
	}
	string expected = "double_";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "double_";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_6times , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::double_ );
	MxEnumArrowStyle e2( enums::ArrowStyle::double_ );
	for( int i = 0; i < 6; ++i )
	{
		e2 = --e1;
	}
	string expected = "filled";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "filled";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start6_6times , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::other );
	MxEnumArrowStyle e2( enums::ArrowStyle::other );
	for( int i = 0; i < 6; ++i )
	{
		e2 = --e1;
	}
	string expected = "single";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "single";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_7times , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::single );
	MxEnumArrowStyle e2( enums::ArrowStyle::single );
	for( int i = 0; i < 7; ++i )
	{
		e2 = --e1;
	}
	string expected = "single";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "single";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_7times , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::double_ );
	MxEnumArrowStyle e2( enums::ArrowStyle::double_ );
	for( int i = 0; i < 7; ++i )
	{
		e2 = --e1;
	}
	string expected = "double_";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "double_";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start6_7times , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::other );
	MxEnumArrowStyle e2( enums::ArrowStyle::other );
	for( int i = 0; i < 7; ++i )
	{
		e2 = --e1;
	}
	string expected = "other";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "other";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_6times , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::single );
	MxEnumArrowStyle e2( enums::ArrowStyle::single );
	for( int i = 0; i < 6; ++i )
	{
		e2 = e1++;
	}
	string expected = "other";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "combined";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_6times , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::double_ );
	MxEnumArrowStyle e2( enums::ArrowStyle::double_ );
	for( int i = 0; i < 6; ++i )
	{
		e2 = e1++;
	}
	string expected = "single";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "other";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start6_6times , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::other );
	MxEnumArrowStyle e2( enums::ArrowStyle::other );
	for( int i = 0; i < 6; ++i )
	{
		e2 = e1++;
	}
	string expected = "combined";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "paired";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_7times , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::single );
	MxEnumArrowStyle e2( enums::ArrowStyle::single );
	for( int i = 0; i < 7; ++i )
	{
		e2 = e1++;
	}
	string expected = "single";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "other";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_7times , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::double_ );
	MxEnumArrowStyle e2( enums::ArrowStyle::double_ );
	for( int i = 0; i < 7; ++i )
	{
		e2 = e1++;
	}
	string expected = "double_";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "single";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start6_7times , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::other );
	MxEnumArrowStyle e2( enums::ArrowStyle::other );
	for( int i = 0; i < 7; ++i )
	{
		e2 = e1++;
	}
	string expected = "other";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "combined";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_6times , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::single );
	MxEnumArrowStyle e2( enums::ArrowStyle::single );
	for( int i = 0; i < 6; ++i )
	{
		e2 = e1--;
	}
	string expected = "double_";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "filled";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_6times , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::double_ );
	MxEnumArrowStyle e2( enums::ArrowStyle::double_ );
	for( int i = 0; i < 6; ++i )
	{
		e2 = e1--;
	}
	string expected = "filled";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "hollow";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start6_6times , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::other );
	MxEnumArrowStyle e2( enums::ArrowStyle::other );
	for( int i = 0; i < 6; ++i )
	{
		e2 = e1--;
	}
	string expected = "single";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "double_";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_7times , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::single );
	MxEnumArrowStyle e2( enums::ArrowStyle::single );
	for( int i = 0; i < 7; ++i )
	{
		e2 = e1--;
	}
	string expected = "single";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "double_";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_7times , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::double_ );
	MxEnumArrowStyle e2( enums::ArrowStyle::double_ );
	for( int i = 0; i < 7; ++i )
	{
		e2 = e1--;
	}
	string expected = "double_";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "filled";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start6_7times , MxEnumArrowStyle )
{
	MxEnumArrowStyle e1( enums::ArrowStyle::other );
	MxEnumArrowStyle e2( enums::ArrowStyle::other );
	for( int i = 0; i < 7; ++i )
	{
		e2 = e1--;
	}
	string expected = "other";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "single";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

