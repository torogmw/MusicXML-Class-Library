#include "TestHarness.h"
#include "MxTestHelper.h"
#include "ElementsNew.h"
#include "PartNameDisplayTest.h"
#include "PartAbbreviationDisplayTest.h"

using namespace mx::e;
using namespace mx::types;
using namespace std;
using namespace MxTestHelpers;

TEST( Test01, PartAbbreviationDisplay )
{
    variant v = variant::one;
	PartAbbreviationDisplayPtr object = tgenPartAbbreviationDisplay( v );
	stringstream expected;
	tgenPartAbbreviationDisplayExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test02, PartAbbreviationDisplay )
{
    variant v = variant::two;
	PartAbbreviationDisplayPtr object = tgenPartAbbreviationDisplay( v );
	stringstream expected;
	tgenPartAbbreviationDisplayExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test03, PartAbbreviationDisplay )
{
    variant v = variant::three;
	PartAbbreviationDisplayPtr object = tgenPartAbbreviationDisplay( v );
	stringstream expected;
	tgenPartAbbreviationDisplayExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( object->hasAttributes() )
	CHECK( object->hasContents() )
}
namespace MxTestHelpers
{
    PartAbbreviationDisplayPtr tgenPartAbbreviationDisplay( variant v )
    {
        PartAbbreviationDisplayPtr o = makePartAbbreviationDisplay();
        switch ( v )
        {
            case variant::one:
            {
                ;
            }
                break;
            case variant::two:
            {
                o->getAttributes()->hasPrintObject = true;
                o->getAttributes()->printObject = YesNo::no;
                o->addDisplayTextOrAccidentalText( tgenDisplayTextOrAccidentalText( variant::one ) );
                o->addDisplayTextOrAccidentalText( tgenDisplayTextOrAccidentalText( variant::two ) );
            }
                break;
            case variant::three:
            {
                o->getAttributes()->hasPrintObject = true;
                o->getAttributes()->printObject = YesNo::yes;
                o->addDisplayTextOrAccidentalText( tgenDisplayTextOrAccidentalText( variant::two ) );
                o->addDisplayTextOrAccidentalText( tgenDisplayTextOrAccidentalText( variant::three ) );
                o->addDisplayTextOrAccidentalText( tgenDisplayTextOrAccidentalText( variant::two ) );
                o->addDisplayTextOrAccidentalText( tgenDisplayTextOrAccidentalText( variant::three ) );
                o->addDisplayTextOrAccidentalText( tgenDisplayTextOrAccidentalText( variant::two ) );
                o->addDisplayTextOrAccidentalText( tgenDisplayTextOrAccidentalText( variant::one ) );
            }
                break;
            default:
                break;
        }
        return o;
    }
    void tgenPartAbbreviationDisplayExpected( std::ostream& os, int i, variant v )
    {
        
        switch ( v )
        {
            case variant::one:
            {
                streamLine( os, i, R"(<part-name-display></part-name-display>)", false );
            }
                break;
            case variant::two:
            {
                streamLine( os, i, R"(<part-name-display print-object="no">)" );
                streamLine( os, i+1, R"(<accidental-text enclosure="oval">flat-flat</accidental-text>)" );
                streamLine( os, i+1, R"(<display-text justify="center">two</display-text>)" );
                streamLine( os, i, R"(</part-name-display>)", false );
            }
                break;
            case variant::three:
            {
                streamLine( os, i, R"(<part-name-display print-object="yes">)" );
                streamLine( os, i+1, R"(<display-text justify="center">two</display-text>)" );
                streamLine( os, i+1, R"(<display-text font-weight="bold" halign="right">three</display-text>)" );
                streamLine( os, i+1, R"(<display-text justify="center">two</display-text>)" );
                streamLine( os, i+1, R"(<display-text font-weight="bold" halign="right">three</display-text>)" );
                streamLine( os, i+1, R"(<display-text justify="center">two</display-text>)" );
                streamLine( os, i+1, R"(<accidental-text enclosure="oval">flat-flat</accidental-text>)" );
                streamLine( os, i, R"(</part-name-display>)", false );
            }
                break;
            default:
                break;
        }
    }
}