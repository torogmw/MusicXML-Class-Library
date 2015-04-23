
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "NoteTest.h"
#include "MusicDataChoiceTest.h"
#include "NoteTest.h"
#include "BackupTest.h"
#include "ForwardTest.h"
#include "DirectionTest.h"
#include "PropertiesTest.h"
#include "HarmonyTest.h"
#include "FiguredBass.h"
#include "PrintTest.h"
#include "SoundTest.h"

/*
 <xs:element name="note" type="note"/>
 <xs:element name="backup" type="backup"/>
 <xs:element name="forward" type="forward"/>
 <xs:element name="direction" type="direction"/>
 <xs:element name="attributes" type="attributes"/>
 <xs:element name="harmony" type="harmony"/>
 <xs:element name="figured-bass" type="figured-bass"/>
 <xs:element name="print" type="print"/>
 <xs:element name="sound" type="sound"/>
 <xs:element name="barline" type="barline"/>
 <xs:element name="grouping" type="grouping"/>
 <xs:element name="link" type="link"/>
 <xs:element name="bookmark" type="bookmark"/>
 */
using namespace mx::e;
using namespace mx::types;
using namespace std;
using namespace MxTestHelpers;
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE4_TESTS

TEST( Test01, Note )
{
    variant v = variant::one;
	NotePtr object = tgenNote( v );
	stringstream expected;
	tgenNoteExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test02, Note )
{
    variant v = variant::two;
	NotePtr object = tgenNote( v );
	stringstream expected;
	tgenNoteExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test03, Note )
{
    variant v = variant::three;
	NotePtr object = tgenNote( v );
	stringstream expected;
	tgenNoteExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( object->hasAttributes() )
	CHECK( object->hasContents() )
}
#endif
namespace MxTestHelpers
{
    NotePtr tgenNote( variant v )
    {
        NotePtr o = makeNote();
        switch ( v )
        {
            case variant::one:
            {
                
            }
                break;
            case variant::two:
            {
                
            }
                break;
            case variant::three:
            {
                
            }
                break;
            default:
                break;
        }
        return o;
    }
    void tgenNoteExpected( std::ostream& os, int i, variant v )
    {
        
        switch ( v )
        {
            case variant::one:
            {
                
            }
                break;
            case variant::two:
            {
                
            }
                break;
            case variant::three:
            {
                
            }
                break;
            default:
                break;
        }
    }
}
