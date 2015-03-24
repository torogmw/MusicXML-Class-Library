#include "TestHarness.h"
#include "MxTestHelper.h"
#include "ElementsNew.h"

using namespace mx::e;
using namespace mx::types;
using namespace std;
using namespace MxTestHelpers;

TEST( Test01, MeasureStyle )
{
	MeasureStyle object;
	stringstream expected;
	streamLine( expected, 1, R"(<measure-style>)" );
	streamLine( expected, 2, R"(<multiple-rest></multiple-rest>)" );
	streamLine( expected, 1, R"(</measure-style>)", false );
	stringstream actual;
	// object.toStream( std::cout, 1 );
	object.toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object.hasAttributes() )
	CHECK( object.hasContents() )
}
TEST( Test02, MeasureStyle )
{
	MeasureStyle object;
    object.getMeasureStyleChoice()->setChoice( MeasureStyleChoice::Choice::beatRepeat );
    object.getMeasureStyleChoice()->getBeatRepeat()->addSlashDot( makeSlashDot() );
    object.getAttributes()->hasColor = true;
    object.getAttributes()->color = Color{ 76, 58, 201, 43 };
	stringstream expected;
	streamLine( expected, 1, R"(<measure-style color="#4C3AC92B">)" );
	streamLine( expected, 2, R"(<beat-repeat type="start">)" );
	streamLine( expected, 3, R"(<slash-type>eighth</slash-type>)" );
	streamLine( expected, 2, R"(</beat-repeat>)" );
	streamLine( expected, 1, R"(</measure-style>)", false );
	stringstream actual;
	// object.toStream( std::cout, 1 );
	object.toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( object.hasAttributes() )
	CHECK( object.hasContents() )
}
TEST( Test03, MeasureStyle )
{
	MeasureStyle object;
	object.getMeasureStyleChoice()->setChoice( MeasureStyleChoice::Choice::slash );
    stringstream expected;
	streamLine( expected, 1, R"(<measure-style>)" );
	streamLine( expected, 2, R"(<multiple-rest></multiple-rest>)" );
	streamLine( expected, 1, R"(</measure-style>)", false );
	stringstream actual;
	// object.toStream( std::cout, 1 );
	object.toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object.hasAttributes() )
	CHECK( object.hasContents() )
}
//TEST( Test02, MeasureStyle )
//{
//	MeasureStyle object;
//	stringstream expected;
//	streamLine( expected, 1, R"()" );
//	streamLine( expected, 2, R"()" );
//	streamLine( expected, 2, R"()" );
//	streamLine( expected, 2, R"()" );
//	streamLine( expected, 1, R"()", false );
//	stringstream actual;
//	object.toStream( std::cout, 1 );
//	// object.toStream( actual, 1 );
//	CHECK_EQUAL( expected.str(), actual.str() )
//	CHECK( object.hasAttributes() )
//	CHECK( object.hasContents() )
//}
