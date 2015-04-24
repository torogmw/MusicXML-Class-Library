
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "MusicDataChoiceTest.h"
#include "NoteTest.h"
#include "BackupTest.h"
#include "ForwardTest.h"
#include "DirectionTest.h"
#include "PropertiesTest.h"
#include "HarmonyTest.h"
#include "FiguredBassTest.h"
#include "PrintTest.h"
#include "SoundTest.h"
#include "BarlineTest.h"
#include "GroupingTest.h"


using namespace mx::e;
using namespace mx::t;
using namespace std;
using namespace MxTestHelpers;
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE4_TESTS

TEST( Test01, MusicDataChoice )
{
    variant v = variant::one;
	MusicDataChoicePtr object = tgenMusicDataChoice( v );
	stringstream expected;
	tgenMusicDataChoiceExpected( expected, 1, v );
	stringstream actual;
	bool isOneLineOnly;
	object->streamContents( actual, 1, isOneLineOnly );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test02, MusicDataChoice )
{
    variant v = variant::two;
	MusicDataChoicePtr object = tgenMusicDataChoice( v );
	stringstream expected;
	tgenMusicDataChoiceExpected( expected, 1, v );
	stringstream actual;
	bool isOneLineOnly;
	object->streamContents( actual, 1, isOneLineOnly );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test03, MusicDataChoice )
{
    variant v = variant::three;
	MusicDataChoicePtr object = tgenMusicDataChoice( v );
	stringstream expected;
	tgenMusicDataChoiceExpected( expected, 1, v );
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
    MusicDataChoicePtr tgenMusicDataChoice( variant v )
    {
        MusicDataChoicePtr o;
        switch ( v )
        {
            case variant::one:
            {
                o = makeMusicDataChoice();
            }
                break;
            case variant::two:
            {
                o = tgenMusicDataChoiceAll( v );
                o->setChoice( MusicDataChoice::Choice::barline );
            }
                break;
            case variant::three:
            {
                o = tgenMusicDataChoiceAll( v );
                o->setChoice( MusicDataChoice::Choice::figuredBass );
            }
                break;
            default:
                break;
        }
        return o;
    }
    void tgenMusicDataChoiceExpected( std::ostream& os, int i, variant v )
    {
        
        switch ( v )
        {
            case variant::one:
            {
                tgenNoteExpected( os, i, v );
            }
                break;
            case variant::two:
            {
                tgenBarlineExpected( os, i, v );
            }
                break;
            case variant::three:
            {
                tgenFiguredBassExpected( os, i, v );
            }
                break;
            default:
                break;
        }
    }
    MusicDataChoicePtr tgenMusicDataChoiceAll( variant v )
    {
        MusicDataChoicePtr o = makeMusicDataChoice();
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
        o->setNote( tgenNote( v ) );
        o->setBackup( tgenBackup( v ) );
        o->setForward( tgenForward( v ) );
        o->setDirection( tgenDirection( v ) );
        o->setProperties( tgenProperties( v ) );
        o->setHarmony( tgenHarmony( v ) );
        o->setFiguredBass( tgenFiguredBass( v ) );
        o->setPrint( tgenPrint( v ) );
        o->setSound( tgenSound( v ) );
        o->setBarline( tgenBarline( v ) );
        o->setGrouping( tgenGrouping( v ) );
        StringType linkString;
        StringType bookmarkString;
        switch ( v )
        {
            case variant::one:
            {
                linkString = "linkStringOne";
                bookmarkString = "bookmarkStringOne";
            }
                break;
            case variant::two:
            {
                linkString = "linkStringTwo";
                bookmarkString = "bookmarkStringTwo";
            }
                break;
            case variant::three:
            {
                linkString = "linkStringThree";
                bookmarkString = "bookmarkStringThree";
            }
                break;
            default:
                break;
        }
        LinkPtr link = makeLink();
        BookmarkPtr bookmark = makeBookmark();
        link->getAttributes()->href = XlinkHref( linkString );
        bookmark->getAttributes()->hasName = true;
        bookmark->getAttributes()->name = XsToken( bookmarkString );
        o->setLink( link );
        o->setBookmark( bookmark );
        return o;
    }
}
