
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "BackupTest.h"
#include "EditorialGroupTest.h"

using namespace mx::e;
using namespace mx::types;
using namespace std;
using namespace MxTestHelpers;
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE4_TESTS

TEST( Test01, Backup )
{
    variant v = variant::one;
	BackupPtr object = tgenBackup( v );
	stringstream expected;
	tgenBackupExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test02, Backup )
{
    variant v = variant::two;
	BackupPtr object = tgenBackup( v );
	stringstream expected;
	tgenBackupExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test03, Backup )
{
    variant v = variant::three;
	BackupPtr object = tgenBackup( v );
	stringstream expected;
	tgenBackupExpected( expected, 1, v );
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
    BackupPtr tgenBackup( variant v )
    {
        BackupPtr o = makeBackup();
        switch ( v )
        {
            case variant::one:
            {
                
            }
                break;
            case variant::two:
            {
                o->getDuration()->setValue( PositiveDivisionsValue( 31 ) );
            }
                break;
            case variant::three:
            {
                o->getDuration()->setValue( PositiveDivisionsValue( 32 ) );
                o->setEditorialGroup( tgenEditorialGroup( v ) );
            }
                break;
            default:
                break;
        }
        return o;
    }
    void tgenBackupExpected( std::ostream& os, int i, variant v )
    {
        
        switch ( v )
        {
            case variant::one:
            {
                streamLine( os, i, R"(<backup>)" );
                streamLine( os, i+1, R"(<duration>0.00000000001</duration>)" );
                streamLine( os, i, R"(</backup>)", false );
            }
                break;
            case variant::two:
            {
                streamLine( os, i, R"(<backup>)" );
                streamLine( os, i+1, R"(<duration>31</duration>)" );
                streamLine( os, i, R"(</backup>)", false );
            }
                break;
            case variant::three:
            {
                streamLine( os, i, R"(<backup>)" );
                streamLine( os, i+1, R"(<duration>32</duration>)" );
                tgenEditorialGroupExpected( os, i+1, v );
                os << std::endl;
                streamLine( os, i, R"(</backup>)", false );
            }
                break;
            default:
                break;
        }
    }
}