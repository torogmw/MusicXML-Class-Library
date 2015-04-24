#include <iostream>
#include "Functions.h"

int main(int argc, const char * argv[])
{
    auto doc = makeDocStub();
    auto s = doc->getScorePartwise();
    auto part = *( s->getPartwisePartSet().cbegin() );
    auto measure = *( part->getPartwiseMeasureSet().cbegin() );
    
    measure->getAttributes()->number = XsToken( "1" );
    measure->getMusicDataGroup()->addMusicDataChoice( makeMeasureProperties() );
    measure->getMusicDataGroup()->addMusicDataChoice( makeSixteenthNote( StepEnum::c, 4, BeamValue::begin ) );
    measure->getMusicDataGroup()->addMusicDataChoice( makeSixteenthNote( StepEnum::d, 4, BeamValue::continue_ ) );
    measure->getMusicDataGroup()->addMusicDataChoice( makeSixteenthNote( StepEnum::c, 4, BeamValue::continue_ ) );
    measure->getMusicDataGroup()->addMusicDataChoice( makeSixteenthNote( StepEnum::e, 4, BeamValue::end ) );
    
    measure->getMusicDataGroup()->addMusicDataChoice( makeSixteenthNote( StepEnum::c, 4, BeamValue::begin ) );
    measure->getMusicDataGroup()->addMusicDataChoice( makeSixteenthNote( StepEnum::f, 4, BeamValue::continue_ ) );
    measure->getMusicDataGroup()->addMusicDataChoice( makeSixteenthNote( StepEnum::c, 4, BeamValue::continue_ ) );
    measure->getMusicDataGroup()->addMusicDataChoice( makeSixteenthNote( StepEnum::g, 4, BeamValue::end ) );
    
    measure->getMusicDataGroup()->addMusicDataChoice( makeSixteenthNote( StepEnum::c, 4, BeamValue::begin ) );
    measure->getMusicDataGroup()->addMusicDataChoice( makeSixteenthNote( StepEnum::a, 4, BeamValue::continue_ ) );
    measure->getMusicDataGroup()->addMusicDataChoice( makeSixteenthNote( StepEnum::c, 4, BeamValue::continue_ ) );
    measure->getMusicDataGroup()->addMusicDataChoice( makeSixteenthNote( StepEnum::b, 4, BeamValue::end ) );
    
    measure->getMusicDataGroup()->addMusicDataChoice( makeSixteenthNote( StepEnum::c, 4, BeamValue::begin ) );
    measure->getMusicDataGroup()->addMusicDataChoice( makeSixteenthNote( StepEnum::c, 5, BeamValue::continue_ ) );
    measure->getMusicDataGroup()->addMusicDataChoice( makeSixteenthNote( StepEnum::c, 4, BeamValue::continue_ ) );
    measure->getMusicDataGroup()->addMusicDataChoice( makeSixteenthNote( StepEnum::c, 5, BeamValue::end ) );
    
    doc->toStream( cout );

    return 0;
}

