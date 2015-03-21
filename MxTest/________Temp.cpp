#include "TestHarness.h"
#include "MxTestHelper.h"
#include "Elements.h"

using namespace mx;
using namespace types;
using namespace e;
using namespace MxTestHelpers;
using namespace std;


//TEST( Test01, xxx )
//{
//    Key object;
//    object.getAttributes()->hasNumber = true;
//    object.getAttributes()->number = StaffNumber{ 2 };
//    object.getKeyChoice()->setChoice( KeyChoice::Choice::nonTraditionalKey );
//    NonTraditionalKeyPtr ntk1 = std::make_shared<NonTraditionalKey>();
//    ntk1->setHasKeyAccivental( true );
//    ntk1->setKeyAccidental( std::make_shared<KeyAccidental>( AccidentalValue::flat ) );
//    ntk1->setKeyAlter( std::make_shared<KeyAlter>( Semitones{ -0.2 } ) );
//    object.getKeyChoice()->addNonTraditionalKey( ntk1 );
//    NonTraditionalKeyPtr ntk2 = std::make_shared<NonTraditionalKey>();
//    ntk2->setHasKeyAccivental( true );
//    ntk2->setKeyAccidental( std::make_shared<KeyAccidental>( AccidentalValue::sharp ) );
//    ntk2->setKeyAlter( std::make_shared<KeyAlter>( Semitones{ 2 } ) );
//    object.getKeyChoice()->addNonTraditionalKey( ntk2 );
//    object.toStream( std::cout, 1 );
//    std::cout  << std::endl << std::endl;
//    
//    Key object2;
//    object2.getKeyChoice()->getTraditionalKey()->getFifths()->setValue( FifthsValue{ 3 } );
//    object2.getKeyChoice()->getTraditionalKey()->setHasCancel( true );
//    object2.getKeyChoice()->getTraditionalKey()->getCancel()->setValue( FifthsValue{ 5 } );
//    object2.getKeyChoice()->getTraditionalKey()->setHasMode( true );
//    object2.getKeyChoice()->getTraditionalKey()->getMode()->setValue( ModeValue{ ModeEnum::dorian } );
//    object2.getAttributes()->hasPrintObject = true;
//    object2.getAttributes()->printObject = YesNo::no;
//    object2.getAttributes()->hasFontWeight = true;
//    object2.getAttributes()->fontWeight = FontWeight::bold;
//    object2.toStream( std::cout, 1 );
//    std::cout  << std::endl << std::endl;
//}
