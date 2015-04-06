
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "GroupNameDisplayTest.h"

using namespace mx::e;
using namespace mx::types;
using namespace std;
using namespace MxTestHelpers;
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE4_TESTS

TEST( Test01, GroupNameDisplay )
{
    variant v = variant::one;
	GroupNameDisplayPtr object = tgenGroupNameDisplay( v );
	stringstream expected;
	tgenGroupNameDisplayExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test02, GroupNameDisplay )
{
    variant v = variant::two;
	GroupNameDisplayPtr object = tgenGroupNameDisplay( v );
	stringstream expected;
	tgenGroupNameDisplayExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test03, GroupNameDisplay )
{
    variant v = variant::three;
	GroupNameDisplayPtr object = tgenGroupNameDisplay( v );
	stringstream expected;
	tgenGroupNameDisplayExpected( expected, 1, v );
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
    GroupNameDisplayPtr tgenGroupNameDisplay( variant v )
    {
        GroupNameDisplayPtr o = makeGroupNameDisplay();
        switch ( v )
        {
            case variant::one:
            {
                
            }
                break;
            case variant::two:
            {
                o->setChoice( GroupNameDisplay::Choice::accidentalText );
                o->getAccidentalText()->setValue( AccidentalValue::doubleSharp );
                o->getAttributes()->hasPrintObject = true;
                o->getAttributes()->printObject = YesNo::no;
            }
                break;
            case variant::three:
            {
                o->setChoice( GroupNameDisplay::Choice::displayText );
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
    void tgenGroupNameDisplayExpected( std::ostream& os, int i, variant v )
    {
        
        switch ( v )
        {
            case variant::one:
            {
                streamLine( os, i, R"(<group-name-display>)" );
                streamLine( os, i+1, R"(<display-text></display-text>)" );
                streamLine( os, i, R"(</group-name-display>)", false );
            }
                break;
            case variant::two:
            {
                streamLine( os, i, R"(<group-name-display print-object="no">)" );
                streamLine( os, i+1, R"(<accidental-text>double-sharp</accidental-text>)" );
                streamLine( os, i, R"(</group-name-display>)", false );
            }
                break;
            case variant::three:
            {
                streamLine( os, i, R"(<group-name-display>)" );
                streamLine( os, i+1, R"(<display-text xml:space="preserve">My Display String!</display-text>)" );
                streamLine( os, i, R"(</group-name-display>)", false );
            }
                break;
            default:
                break;
        }
    }
}