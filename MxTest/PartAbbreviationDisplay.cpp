
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "PartAbbreviationDisplayTest.h"

using namespace mx::e;
using namespace mx::types;
using namespace std;
using namespace MxTestHelpers;
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE4_TESTS

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
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
#endif
namespace MxTestHelpers
{
    PartAbbreviationDisplayPtr tgenPartAbbreviationDisplay( variant v )
    {
        PartAbbreviationDisplayPtr o = makePartAbbreviationDisplay();
        switch ( v )
        {
            case variant::one:
            {
                
            }
                break;
            case variant::two:
            {
                o->setChoice( PartAbbreviationDisplay::Choice::accidentalText );
                o->getAccidentalText()->setValue( AccidentalValue::doubleSharp );
                o->getAttributes()->hasPrintObject = true;
                o->getAttributes()->printObject = YesNo::no;
            }
                break;
            case variant::three:
            {
                o->setChoice( PartAbbreviationDisplay::Choice::displayText );
                o->getDisplayText()->setValue( XsString( "My Display String!" ) );
                o->getDisplayText()->getAttributes()->hasSpace = true;
                o->getDisplayText()->getAttributes()->space = XmlSpace::preserve;
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
                streamLine( os, i, R"(<group-abbreviation-display>)" );
                streamLine( os, i+1, R"(<display-text></display-text>)" );
                streamLine( os, i, R"(</group-abbreviation-display>)", false );
            }
                break;
            case variant::two:
            {
                streamLine( os, i, R"(<group-abbreviation-display print-object="no">)" );
                streamLine( os, i+1, R"(<accidental-text>double-sharp</accidental-text>)" );
                streamLine( os, i, R"(</group-abbreviation-display>)", false );
            }
                break;
            case variant::three:
            {
                streamLine( os, i, R"(<group-abbreviation-display>)" );
                streamLine( os, i+1, R"(<display-text xml:space="preserve">My Display String!</display-text>)" );
                streamLine( os, i, R"(</group-abbreviation-display>)", false );
            }
                break;
            default:
                break;
        }
    }
}