
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "ScoreHeaderGroupTest.h"
#include "WorkTest.h"
#include "IdentificationTest.h"
#include "DefaultsTest.h"
#include "CreditTest.h"
#include "PartListTest.h"

/*
 
 WorkPtr myWork;
 bool myHasWork;
 MovementNumberPtr myMovementNumber;
 bool myHasMovementNumber;
 MovementTitlePtr myMovementTitle;
 bool myHasMovementTitle;
 IdentificationPtr myIdentification;
 bool myHasIdentification;
 DefaultsPtr myDefaults;
 bool myHasDefaults;
 CreditPtr myCredit;
 bool myHasCredit;
 PartListPtr myPartList;
 
 */

using namespace mx::e;
using namespace mx::types;
using namespace std;
using namespace MxTestHelpers;
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE4_TESTS

TEST( Test01, ScoreHeaderGroup )
{
    variant v = variant::one;
	ScoreHeaderGroupPtr object = tgenScoreHeaderGroup( v );
	stringstream expected;
	tgenScoreHeaderGroupExpected( expected, 1, v );
	stringstream actual;
	bool isOneLineOnly;
	object->streamContents( actual, 1, isOneLineOnly );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test02, ScoreHeaderGroup )
{
    variant v = variant::two;
	ScoreHeaderGroupPtr object = tgenScoreHeaderGroup( v );
	stringstream expected;
	tgenScoreHeaderGroupExpected( expected, 1, v );
	stringstream actual;
	bool isOneLineOnly;
	object->streamContents( actual, 1, isOneLineOnly );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test03, ScoreHeaderGroup )
{
    variant v = variant::three;
	ScoreHeaderGroupPtr object = tgenScoreHeaderGroup( v );
	stringstream expected;
	tgenScoreHeaderGroupExpected( expected, 1, v );
	stringstream actual;
	bool isOneLineOnly;
	object->streamContents( actual, 1, isOneLineOnly );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
#endif
namespace MxTestHelpers
{
    ScoreHeaderGroupPtr tgenScoreHeaderGroup( variant v )
    {
        ScoreHeaderGroupPtr o = makeScoreHeaderGroup();
        switch ( v )
        {
            case variant::one:
            {
                
            }
                break;
            case variant::two:
            {
                o->setHasWork( true );
                o->setWork( tgenWork( v ) );
                o->setHasMovementNumber( true );
                o->getMovementNumber()->setValue( XsString( "I" ) );
                o->setHasMovementTitle( true );
                o->getMovementTitle()->setValue( XsString( "Allegro" ) );
                o->setPartList( tgenPartList( v ) );
            }
                break;
            case variant::three:
            {
                o->addCredit( tgenCredit( variant::two ) );
                o->addCredit( tgenCredit( variant::three ) );
                o->setPartList( tgenPartList( v ) );
            }
                break;
            default:
                break;
        }
        return o;
    }
    void tgenScoreHeaderGroupExpected( std::ostream& os, int i, variant v )
    {
        
        switch ( v )
        {
            case variant::one:
            {
                tgenPartListExpected( os, i, v );
            }
                break;
            case variant::two:
            {
                tgenWorkExpected( os, i, v );
                os << std::endl;
                streamLine( os, i, R"(<movement-number>I</movement-number>)" );
                streamLine( os, i, R"(<movement-title>Allegro</movement-title>)" );
                tgenPartListExpected( os, i, v );
            }
                break;
            case variant::three:
            {
                tgenCreditExpected( os, i, variant::two );
                os << std::endl;
                tgenCreditExpected( os, i, variant::three );
                os << std::endl;
                tgenPartListExpected( os, i, v );
            }
                break;
            default:
                break;
        }
    }
}
