
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "MusicDataGroupTest.h"
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

TEST( Test01, MusicDataGroup )
{
    variant v = variant::one;
	MusicDataGroupPtr object = tgenMusicDataGroup( v );
	stringstream expected;
	tgenMusicDataGroupExpected( expected, 1, v );
	stringstream actual;
	bool isOneLineOnly;
	object->streamContents( actual, 1, isOneLineOnly );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( ! object->hasContents() )
}
TEST( Test02, MusicDataGroup )
{
    variant v = variant::two;
	MusicDataGroupPtr object = tgenMusicDataGroup( v );
	stringstream expected;
	tgenMusicDataGroupExpected( expected, 1, v );
	stringstream actual;
	bool isOneLineOnly;
	object->streamContents( actual, 1, isOneLineOnly );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test03, MusicDataGroup )
{
    variant v = variant::three;
	MusicDataGroupPtr object = tgenMusicDataGroup( v );
	stringstream expected;
	tgenMusicDataGroupExpected( expected, 1, v );
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
    MusicDataGroupPtr tgenMusicDataGroup( variant v )
    {
        MusicDataGroupPtr o = makeMusicDataGroup();
        switch ( v )
        {
            case variant::one:
            {

            }
                break;
            case variant::two:
            {
                /* <xs:element name="note" type="note"/>
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
                 <xs:element name="bookmark" type="bookmark"/> */
                auto x = tgenMusicDataChoiceAll( v );
                x->setChoice( MusicDataChoice::Choice::note );
                o->addMusicDataChoice( x );
                x.reset();
                
                x = tgenMusicDataChoiceAll( v );
                x->setChoice( MusicDataChoice::Choice::forward );
                o->addMusicDataChoice( x );
                x.reset();
                
                x = tgenMusicDataChoiceAll( v );
                x->setChoice( MusicDataChoice::Choice::properties );
                o->addMusicDataChoice( x );
                x.reset();
                
                x = tgenMusicDataChoiceAll( v );
                x->setChoice( MusicDataChoice::Choice::figuredBass );
                o->addMusicDataChoice( x );
                x.reset();
                
                x = tgenMusicDataChoiceAll( v );
                x->setChoice( MusicDataChoice::Choice::sound );
                o->addMusicDataChoice( x );
                x.reset();
                
                x = tgenMusicDataChoiceAll( v );
                x->setChoice( MusicDataChoice::Choice::grouping );
                o->addMusicDataChoice( x );
                x.reset();
                
                x = tgenMusicDataChoiceAll( v );
                x->setChoice( MusicDataChoice::Choice::bookmark );
                o->addMusicDataChoice( x );
                x.reset();
            }
                break;
            case variant::three:
            {
                /* <xs:element name="note" type="note"/>
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
                 <xs:element name="bookmark" type="bookmark"/> */
                auto x = tgenMusicDataChoiceAll( v );
                x->setChoice( MusicDataChoice::Choice::backup );
                o->addMusicDataChoice( x );
                x.reset();
                
                x = tgenMusicDataChoiceAll( v );
                x->setChoice( MusicDataChoice::Choice::direction );
                o->addMusicDataChoice( x );
                x.reset();
                
                x = tgenMusicDataChoiceAll( v );
                x->setChoice( MusicDataChoice::Choice::harmony );
                o->addMusicDataChoice( x );
                x.reset();
                
                x = tgenMusicDataChoiceAll( v );
                x->setChoice( MusicDataChoice::Choice::print );
                o->addMusicDataChoice( x );
                x.reset();
                
                x = tgenMusicDataChoiceAll( v );
                x->setChoice( MusicDataChoice::Choice::barline );
                o->addMusicDataChoice( x );
                x.reset();
                
                x = tgenMusicDataChoiceAll( v );
                x->setChoice( MusicDataChoice::Choice::link );
                o->addMusicDataChoice( x );
                x.reset();
            }
                break;
            default:
                break;
        }
        return o;
    }
    void tgenMusicDataGroupExpected( std::ostream& os, int i, variant v )
    {
        
        switch ( v )
        {
            case variant::one:
            {

            }
                break;
            case variant::two:
            {
                tgenNoteExpected( os, i, v );
                os << std::endl;
                tgenForwardExpected( os, i, v );
                os << std::endl;
                tgenPropertiesExpected( os, i, v );
                os << std::endl;
                tgenFiguredBassExpected( os, i, v );
                os << std::endl;
                tgenSoundExpected( os, i, v );
                os << std::endl;
                tgenGroupingExpected( os, i, v );
                os << std::endl;
                streamLine( os, i, R"(<bookmark id="ID" name="bookmarkStringTwo"/>)", false );
            }
                break;
            case variant::three:
            {
                tgenBackupExpected( os, i, v );
                os << std::endl;
                tgenDirectionExpected( os, i, v );
                os << std::endl;
                tgenHarmonyExpected( os, i, v );
                os << std::endl;
                tgenPrintExpected( os, i, v );
                os << std::endl;
                tgenBarlineExpected( os, i, v );
                os << std::endl;
                streamLine( os, i, R"(<link xlink:href="linkStringThree"/>)", false );
            }
                break;
            default:
                break;
        }
    }
}
