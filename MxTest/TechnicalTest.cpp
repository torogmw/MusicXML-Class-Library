
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "TechnicalTest.h"
#include "TechnicalChoiceTest.h"

using namespace mx::e;
using namespace mx::types;
using namespace std;
using namespace MxTestHelpers;
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE4_TESTS

TEST( Test01, Technical )
{
    variant v = variant::one;
	TechnicalPtr object = tgenTechnical( v );
	stringstream expected;
	tgenTechnicalExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( ! object->hasContents() )
}
TEST( Test02, Technical )
{
    variant v = variant::two;
	TechnicalPtr object = tgenTechnical( v );
	stringstream expected;
	tgenTechnicalExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test03, Technical )
{
    variant v = variant::three;
	TechnicalPtr object = tgenTechnical( v );
	stringstream expected;
	tgenTechnicalExpected( expected, 1, v );
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
    TechnicalPtr tgenTechnical( variant v )
    {
        TechnicalPtr o = makeTechnical();
        switch ( v )
        {
            case variant::one:
            {

            }
                break;
            case variant::two:
            {
                o->addTechnicalChoice( tgenTechnicalChoice( variant::one ) );
                o->addTechnicalChoice( tgenTechnicalChoice( variant::two ) );
                auto x = makeTechnicalChoice();
                x->setChoice( TechnicalChoice::Choice::handbell );
                x->getHandbell()->setValue( HandbellValue::gyro );
                o->addTechnicalChoice( x );
            }
                break;
            case variant::three:
            {
                o->addTechnicalChoice( tgenTechnicalChoice( v ) );
                auto x = makeTechnicalChoice();
                x->setChoice( TechnicalChoice::Choice::otherTechnical );
                x->getOtherTechnical()->setValue( XsString( "Jump up and down" ) );
                x->getOtherTechnical()->getAttributes()->hasFontStyle = true;
                x->getOtherTechnical()->getAttributes()->fontStyle = FontStyle::italic;
                o->addTechnicalChoice( x );
            }
                break;
            default:
                break;
        }
        return o;
    }
    void tgenTechnicalExpected( std::ostream& os, int i, variant v )
    {
        
        switch ( v )
        {
            case variant::one:
            {
                streamLine( os, i, R"(<technical/>)", false );
            }
                break;
            case variant::two:
            {
                streamLine( os, i, R"(<technical>)" );
                tgenTechnicalChoiceExpected( os, i+1, variant::one );
                os << std::endl;
                tgenTechnicalChoiceExpected( os, i+1, variant::two );
                os << std::endl;
                streamLine( os, i+1, R"(<handbell>gyro</handbell>)" );
                streamLine( os, i, R"(</technical>)", false );
            }
                break;
            case variant::three:
            {
                streamLine( os, i, R"(<technical>)" );
                tgenTechnicalChoiceExpected( os, i+1, v );
                os << std::endl;
                streamLine( os, i+1, R"(<other-technical font-style="italic">Jump up and down</other-technical>)" );
                streamLine( os, i, R"(</technical>)", false );
            }
                break;
            default:
                break;
        }
    }
}
