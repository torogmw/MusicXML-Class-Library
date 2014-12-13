/* See MusicXML License at the bottom of this code page. */

#include "XparseHelperFunctions.h"
#include "LexiconBaseObjects.h"

/**********************************/
#include "MxEeAccent.h"
#include "MxEeAccordionHigh.h"
#include "MxEeAccordionLow.h"
#include "MxEeBarre.h"
#include "MxEeBeatUnitDot.h"
#include "MxEeBookmark.h"
#include "MxEeBracket.h"
#include "MxEeCaesura.h"
#include "MxEeChord.h"
#include "MxEeCoda.h"
#include "MxEeCue.h"
#include "MxEeDamp.h"
#include "MxEeDampAll.h"
#include "MxEeDashes.h"
#include "MxEeDetachedLegato.h"
#include "MxEeDoit.h"
#include "MxEeDot.h"
#include "MxEeDouble.h"
#include "MxEeDoubleTongue.h"
#include "MxEeDownBow.h"
#include "MxEeEndLine.h"
#include "MxEeEndParagraph.h"
#include "MxEeExtend.h"
#include "MxEeEyeglasses.h"
#include "MxEeF.h"
#include "MxEeFalloff.h"
#include "MxEeFf.h"
#include "MxEeFff.h"
#include "MxEeFfff.h"
#include "MxEeFffff.h"
#include "MxEeFfffff.h"
#include "MxEeFingernails.h"
#include "MxEeFp.h"
#include "MxEeFz.h"
#include "MxEeGrace.h"
#include "MxEeGroupTime.h"
#include "MxEeImage.h"
#include "MxEeInstrument.h"
#include "MxEeLeftDivider.h"
#include "MxEeLink.h"
#include "MxEeLyricFont.h"
#include "MxEeLyricLanguage.h"
#include "MxEeMetronomeDot.h"
#include "MxEeMf.h"
#include "MxEeMp.h"
#include "MxEeMusicFont.h"
#include "MxEeOctaveShift.h"
#include "MxEeOpenString.h"
#include "MxEeOpus.h"
#include "MxEeP.h"
#include "MxEePedal.h"
#include "MxEePlop.h"
#include "MxEePp.h"
#include "MxEePpp.h"
#include "MxEePppp.h"
#include "MxEePpppp.h"
#include "MxEePppppp.h"
#include "MxEeRepeat.h"
#include "MxEeRf.h"
#include "MxEeRfz.h"
#include "MxEeRightDivider.h"
#include "MxEeScoop.h"
#include "MxEeSegno.h"
#include "MxEeSf.h"
#include "MxEeSffz.h"
#include "MxEeSfp.h"
#include "MxEeSfpp.h"
#include "MxEeSfz.h"
#include "MxEeSlashDot.h"
#include "MxEeSnapPizzicato.h"
#include "MxEeSpiccato.h"
#include "MxEeStaccatissimo.h"
#include "MxEeStaccato.h"
#include "MxEeStopped.h"
#include "MxEeStress.h"
#include "MxEeStringMute.h"
#include "MxEeSupports.h"
#include "MxEeTenuto.h"
#include "MxEeThumbPosition.h"
#include "MxEeTie.h"
#include "MxEeTimpani.h"
#include "MxEeTripleTongue.h"
#include "MxEeTupletDot.h"
#include "MxEeUnstress.h"
#include "MxEeUpBow.h"
#include "MxEeWavyLine.h"
#include "MxEeWedge.h"
#include "MxEeWordFont.h"

/**********************************/
#include "MxEmAccordionMiddle.h"
#include "MxEmActualNotes.h"
#include "MxEmAlter.h"
#include "MxEmBeats.h"
#include "MxEmBeatType.h"
#include "MxEmBeatUnit.h"
#include "MxEmBendAlter.h"
#include "MxEmBottomMargin.h"
#include "MxEmCapo.h"
#include "MxEmChromatic.h"
#include "MxEmCircularArrow.h"
#include "MxEmClefOctaveChange.h"
#include "MxEmCreditType.h"
#include "MxEmDiatonic.h"
#include "MxEmDisplayOctave.h"
#include "MxEmDisplayStep.h"
#include "MxEmDivisions.h"
#include "MxEmDuration.h"
#include "MxEmEffect.h"
#include "MxEmElevation.h"
#include "MxEmEncodingDate.h"
#include "MxEmEncodingDescription.h"
#include "MxEmFifths.h"
#include "MxEmFrameFrets.h"
#include "MxEmFrameStrings.h"
#include "MxEmGlass.h"
#include "MxEmGroup.h"
#include "MxEmHoleShape.h"
#include "MxEmHoleType.h"
#include "MxEmInstrumentAbbreviation.h"
#include "MxEmInstrumentName.h"
#include "MxEmInstruments.h"
#include "MxEmInstrumentSound.h"
#include "MxEmKeyAccidental.h"
#include "MxEmKeyAlter.h"
#include "MxEmKeyStep.h"
#include "MxEmLeftMargin.h"
#include "MxEmLine.h"
#include "MxEmMeasureDistance.h"
#include "MxEmMembrane.h"
#include "MxEmMetal.h"
#include "MxEmMetronomeRelation.h"
#include "MxEmMetronomeType.h"
#include "MxEmMidiBank.h"
#include "MxEmMidiChannel.h"
#include "MxEmMidiName.h"
#include "MxEmMidiProgram.h"
#include "MxEmMidiUnpitched.h"
#include "MxEmMillimeters.h"
#include "MxEmMode.h"
#include "MxEmMovementNumber.h"
#include "MxEmMovementTitle.h"
#include "MxEmNormalNotes.h"
#include "MxEmOctave.h"
#include "MxEmOctaveChange.h"
#include "MxEmOtherDynamics.h"
#include "MxEmOtherPercussion.h"
#include "MxEmPageHeight.h"
#include "MxEmPageWidth.h"
#include "MxEmPan.h"
#include "MxEmPedalAlter.h"
#include "MxEmPedalStep.h"
#include "MxEmPitched.h"
#include "MxEmRightMargin.h"
#include "MxEmSenzaMisura.h"
#include "MxEmSign.h"
#include "MxEmSlashType.h"
#include "MxEmSoftware.h"
#include "MxEmSource.h"
#include "MxEmStaff.h"
#include "MxEmStaffDistance.h"
#include "MxEmStaffLines.h"
#include "MxEmStaffSize.h"
#include "MxEmStaffType.h"
#include "MxEmStaves.h"
#include "MxEmStep.h"
#include "MxEmStickLocation.h"
#include "MxEmStickMaterial.h"
#include "MxEmStickType.h"
#include "MxEmSyllabic.h"
#include "MxEmSystemDistance.h"
#include "MxEmTenths.h"
#include "MxEmTimeRelation.h"
#include "MxEmTopMargin.h"
#include "MxEmTopSystemDistance.h"
#include "MxEmTuningAlter.h"
#include "MxEmTuningOctave.h"
#include "MxEmTuningStep.h"
#include "MxEmVirtualLibrary.h"
#include "MxEmVirtualName.h"
#include "MxEmVoice.h"
#include "MxEmVolume.h"
#include "MxEmWood.h"
#include "MxEmWorkNumber.h"
#include "MxEmWorkTitle.h"

/**********************************/
#include "MxEsAccidental.h"
#include "MxEsAccidentalMark.h"
#include "MxEsBarStyle.h"
#include "MxEsBassAlter.h"
#include "MxEsBassStep.h"
#include "MxEsBeam.h"
#include "MxEsBeater.h"
#include "MxEsBreathMark.h"
#include "MxEsCancel.h"
#include "MxEsCreator.h"
#include "MxEsCreditWords.h"
#include "MxEsDegreeAlter.h"
#include "MxEsDegreeType.h"
#include "MxEsDegreeValue.h"
#include "MxEsDistance.h"
#include "MxEsElision.h"
#include "MxEsEncoder.h"
#include "MxEsEnding.h"
#include "MxEsFeature.h"
#include "MxEsFermata.h"
#include "MxEsFigureNumber.h"
#include "MxEsFingering.h"
#include "MxEsFirstFret.h"
#include "MxEsFootnote.h"
#include "MxEsFret.h"
#include "MxEsGroupAbbreviation.h"
#include "MxEsGroupBarline.h"
#include "MxEsGroupName.h"
#include "MxEsGroupSymbol.h"
#include "MxEsHammerOn.h"
#include "MxEsHandbell.h"
#include "MxEsHoleClosed.h"
#include "MxEsInversion.h"
#include "MxEsKeyOctave.h"
#include "MxEsKind.h"
#include "MxEsLevel.h"
#include "MxEsLineWidth.h"
#include "MxEsMeasureNumbering.h"
#include "MxEsMeasureRepeat.h"
#include "MxEsMetronomeBeam.h"
#include "MxEsMiscellaneousField.h"
#include "MxEsMultipleRest.h"
#include "MxEsNotehead.h"
#include "MxEsNoteSize.h"
#include "MxEsOffset.h"
#include "MxEsOtherAppearance.h"
#include "MxEsOtherArticulation.h"
#include "MxEsOtherDirection.h"
#include "MxEsOtherTechnical.h"
#include "MxEsPartAbbreviation.h"
#include "MxEsPartName.h"
#include "MxEsPartSymbol.h"
#include "MxEsPerMinute.h"
#include "MxEsPluck.h"
#include "MxEsPrefix.h"
#include "MxEsPrincipalVoice.h"
#include "MxEsPullOff.h"
#include "MxEsRehearsal.h"
#include "MxEsRelation.h"
#include "MxEsRights.h"
#include "MxEsRootAlter.h"
#include "MxEsRootStep.h"
#include "MxEsStem.h"
#include "MxEsString.h"
#include "MxEsSuffix.h"
#include "MxEsTap.h"
#include "MxEsText.h"
#include "MxEsTupletNumber.h"
#include "MxEsTupletType.h"
#include "MxEsType.h"
#include "MxEsWithBar.h"
#include "MxEsWords.h"

namespace lexicon
{
    MxList XparseHelperFunctions::getElementObjects()
    {
        MxList mlist;
        
        /***********************************************************/
        mlist.push_back( std::make_shared<MxEeAccent>() );
        mlist.push_back( std::make_shared<MxEeAccordionHigh>() );
        mlist.push_back( std::make_shared<MxEeAccordionLow>() );
        mlist.push_back( std::make_shared<MxEeBarre>() );
        mlist.push_back( std::make_shared<MxEeBeatUnitDot>() );
        mlist.push_back( std::make_shared<MxEeBookmark>() );
        mlist.push_back( std::make_shared<MxEeBracket>() );
        mlist.push_back( std::make_shared<MxEeCaesura>() );
        mlist.push_back( std::make_shared<MxEeChord>() );
        mlist.push_back( std::make_shared<MxEeCoda>() );
        mlist.push_back( std::make_shared<MxEeCue>() );
        mlist.push_back( std::make_shared<MxEeDamp>() );
        mlist.push_back( std::make_shared<MxEeDampAll>() );
        mlist.push_back( std::make_shared<MxEeDashes>() );
        mlist.push_back( std::make_shared<MxEeDetachedLegato>() );
        mlist.push_back( std::make_shared<MxEeDoit>() );
        mlist.push_back( std::make_shared<MxEeDot>() );
        mlist.push_back( std::make_shared<MxEeDouble>() );
        mlist.push_back( std::make_shared<MxEeDoubleTongue>() );
        mlist.push_back( std::make_shared<MxEeDownBow>() );
        mlist.push_back( std::make_shared<MxEeEndLine>() );
        mlist.push_back( std::make_shared<MxEeEndParagraph>() );
        mlist.push_back( std::make_shared<MxEeExtend>() );
        mlist.push_back( std::make_shared<MxEeEyeglasses>() );
        mlist.push_back( std::make_shared<MxEeF>() );
        mlist.push_back( std::make_shared<MxEeFalloff>() );
        mlist.push_back( std::make_shared<MxEeFf>() );
        mlist.push_back( std::make_shared<MxEeFff>() );
        mlist.push_back( std::make_shared<MxEeFfff>() );
        mlist.push_back( std::make_shared<MxEeFffff>() );
        mlist.push_back( std::make_shared<MxEeFfffff>() );
        mlist.push_back( std::make_shared<MxEeFingernails>() );
        mlist.push_back( std::make_shared<MxEeFp>() );
        mlist.push_back( std::make_shared<MxEeFz>() );
        mlist.push_back( std::make_shared<MxEeGrace>() );
        mlist.push_back( std::make_shared<MxEeGroupTime>() );
        mlist.push_back( std::make_shared<MxEeImage>() );
        mlist.push_back( std::make_shared<MxEeInstrument>() );
        mlist.push_back( std::make_shared<MxEeLeftDivider>() );
        mlist.push_back( std::make_shared<MxEeLink>() );
        mlist.push_back( std::make_shared<MxEeLyricFont>() );
        mlist.push_back( std::make_shared<MxEeLyricLanguage>() );
        mlist.push_back( std::make_shared<MxEeMetronomeDot>() );
        mlist.push_back( std::make_shared<MxEeMf>() );
        mlist.push_back( std::make_shared<MxEeMp>() );
        mlist.push_back( std::make_shared<MxEeMusicFont>() );
        mlist.push_back( std::make_shared<MxEeOctaveShift>() );
        mlist.push_back( std::make_shared<MxEeOpenString>() );
        mlist.push_back( std::make_shared<MxEeOpus>() );
        mlist.push_back( std::make_shared<MxEeP>() );
        mlist.push_back( std::make_shared<MxEePedal>() );
        mlist.push_back( std::make_shared<MxEePlop>() );
        mlist.push_back( std::make_shared<MxEePp>() );
        mlist.push_back( std::make_shared<MxEePpp>() );
        mlist.push_back( std::make_shared<MxEePppp>() );
        mlist.push_back( std::make_shared<MxEePpppp>() );
        mlist.push_back( std::make_shared<MxEePppppp>() );
        mlist.push_back( std::make_shared<MxEeRepeat>() );
        mlist.push_back( std::make_shared<MxEeRf>() );
        mlist.push_back( std::make_shared<MxEeRfz>() );
        mlist.push_back( std::make_shared<MxEeRightDivider>() );
        mlist.push_back( std::make_shared<MxEeScoop>() );
        mlist.push_back( std::make_shared<MxEeSegno>() );
        mlist.push_back( std::make_shared<MxEeSf>() );
        mlist.push_back( std::make_shared<MxEeSffz>() );
        mlist.push_back( std::make_shared<MxEeSfp>() );
        mlist.push_back( std::make_shared<MxEeSfpp>() );
        mlist.push_back( std::make_shared<MxEeSfz>() );
        mlist.push_back( std::make_shared<MxEeSlashDot>() );
        mlist.push_back( std::make_shared<MxEeSnapPizzicato>() );
        mlist.push_back( std::make_shared<MxEeSpiccato>() );
        mlist.push_back( std::make_shared<MxEeStaccatissimo>() );
        mlist.push_back( std::make_shared<MxEeStaccato>() );
        mlist.push_back( std::make_shared<MxEeStopped>() );
        mlist.push_back( std::make_shared<MxEeStress>() );
        mlist.push_back( std::make_shared<MxEeStringMute>() );
        mlist.push_back( std::make_shared<MxEeSupports>() );
        mlist.push_back( std::make_shared<MxEeTenuto>() );
        mlist.push_back( std::make_shared<MxEeThumbPosition>() );
        mlist.push_back( std::make_shared<MxEeTie>() );
        mlist.push_back( std::make_shared<MxEeTimpani>() );
        mlist.push_back( std::make_shared<MxEeTripleTongue>() );
        mlist.push_back( std::make_shared<MxEeTupletDot>() );
        mlist.push_back( std::make_shared<MxEeUnstress>() );
        mlist.push_back( std::make_shared<MxEeUpBow>() );
        mlist.push_back( std::make_shared<MxEeWavyLine>() );
        mlist.push_back( std::make_shared<MxEeWedge>() );
        mlist.push_back( std::make_shared<MxEeWordFont>() );
        
        /***********************************************************/
        mlist.push_back( std::make_shared<MxEmAccordionMiddle>() );
        mlist.push_back( std::make_shared<MxEmActualNotes>() );
        mlist.push_back( std::make_shared<MxEmAlter>() );
        mlist.push_back( std::make_shared<MxEmBeats>() );
        mlist.push_back( std::make_shared<MxEmBeatType>() );
        mlist.push_back( std::make_shared<MxEmBeatUnit>() );
        mlist.push_back( std::make_shared<MxEmBendAlter>() );
        mlist.push_back( std::make_shared<MxEmBottomMargin>() );
        mlist.push_back( std::make_shared<MxEmCapo>() );
        mlist.push_back( std::make_shared<MxEmChromatic>() );
        mlist.push_back( std::make_shared<MxEmCircularArrow>() );
        mlist.push_back( std::make_shared<MxEmClefOctaveChange>() );
        mlist.push_back( std::make_shared<MxEmCreditType>() );
        mlist.push_back( std::make_shared<MxEmDiatonic>() );
        mlist.push_back( std::make_shared<MxEmDisplayOctave>() );
        mlist.push_back( std::make_shared<MxEmDisplayStep>() );
        mlist.push_back( std::make_shared<MxEmDivisions>() );
        mlist.push_back( std::make_shared<MxEmDuration>() );
        mlist.push_back( std::make_shared<MxEmEffect>() );
        mlist.push_back( std::make_shared<MxEmElevation>() );
        mlist.push_back( std::make_shared<MxEmEncodingDate>() );
        mlist.push_back( std::make_shared<MxEmEncodingDescription>() );
        mlist.push_back( std::make_shared<MxEmFifths>() );
        mlist.push_back( std::make_shared<MxEmFrameFrets>() );
        mlist.push_back( std::make_shared<MxEmFrameStrings>() );
        mlist.push_back( std::make_shared<MxEmGlass>() );
        mlist.push_back( std::make_shared<MxEmGroup>() );
        mlist.push_back( std::make_shared<MxEmHoleShape>() );
        mlist.push_back( std::make_shared<MxEmHoleType>() );
        mlist.push_back( std::make_shared<MxEmInstrumentAbbreviation>() );
        mlist.push_back( std::make_shared<MxEmInstrumentName>() );
        mlist.push_back( std::make_shared<MxEmInstruments>() );
        mlist.push_back( std::make_shared<MxEmInstrumentSound>() );
        mlist.push_back( std::make_shared<MxEmKeyAccidental>() );
        mlist.push_back( std::make_shared<MxEmKeyAlter>() );
        mlist.push_back( std::make_shared<MxEmKeyStep>() );
        mlist.push_back( std::make_shared<MxEmLeftMargin>() );
        mlist.push_back( std::make_shared<MxEmLine>() );
        mlist.push_back( std::make_shared<MxEmMeasureDistance>() );
        mlist.push_back( std::make_shared<MxEmMembrane>() );
        mlist.push_back( std::make_shared<MxEmMetal>() );
        mlist.push_back( std::make_shared<MxEmMetronomeRelation>() );
        mlist.push_back( std::make_shared<MxEmMetronomeType>() );
        mlist.push_back( std::make_shared<MxEmMidiBank>() );
        mlist.push_back( std::make_shared<MxEmMidiChannel>() );
        mlist.push_back( std::make_shared<MxEmMidiName>() );
        mlist.push_back( std::make_shared<MxEmMidiProgram>() );
        mlist.push_back( std::make_shared<MxEmMidiUnpitched>() );
        mlist.push_back( std::make_shared<MxEmMillimeters>() );
        mlist.push_back( std::make_shared<MxEmMode>() );
        mlist.push_back( std::make_shared<MxEmMovementNumber>() );
        mlist.push_back( std::make_shared<MxEmMovementTitle>() );
        mlist.push_back( std::make_shared<MxEmNormalNotes>() );
        mlist.push_back( std::make_shared<MxEmOctave>() );
        mlist.push_back( std::make_shared<MxEmOctaveChange>() );
        mlist.push_back( std::make_shared<MxEmOtherDynamics>() );
        mlist.push_back( std::make_shared<MxEmOtherPercussion>() );
        mlist.push_back( std::make_shared<MxEmPageHeight>() );
        mlist.push_back( std::make_shared<MxEmPageWidth>() );
        mlist.push_back( std::make_shared<MxEmPan>() );
        mlist.push_back( std::make_shared<MxEmPedalAlter>() );
        mlist.push_back( std::make_shared<MxEmPedalStep>() );
        mlist.push_back( std::make_shared<MxEmPitched>() );
        mlist.push_back( std::make_shared<MxEmRightMargin>() );
        mlist.push_back( std::make_shared<MxEmSenzaMisura>() );
        mlist.push_back( std::make_shared<MxEmSign>() );
        mlist.push_back( std::make_shared<MxEmSlashType>() );
        mlist.push_back( std::make_shared<MxEmSoftware>() );
        mlist.push_back( std::make_shared<MxEmSource>() );
        mlist.push_back( std::make_shared<MxEmStaff>() );
        mlist.push_back( std::make_shared<MxEmStaffDistance>() );
        mlist.push_back( std::make_shared<MxEmStaffLines>() );
        mlist.push_back( std::make_shared<MxEmStaffSize>() );
        mlist.push_back( std::make_shared<MxEmStaffType>() );
        mlist.push_back( std::make_shared<MxEmStaves>() );
        mlist.push_back( std::make_shared<MxEmStep>() );
        mlist.push_back( std::make_shared<MxEmStickLocation>() );
        mlist.push_back( std::make_shared<MxEmStickMaterial>() );
        mlist.push_back( std::make_shared<MxEmStickType>() );
        mlist.push_back( std::make_shared<MxEmSyllabic>() );
        mlist.push_back( std::make_shared<MxEmSystemDistance>() );
        mlist.push_back( std::make_shared<MxEmTenths>() );
        mlist.push_back( std::make_shared<MxEmTimeRelation>() );
        mlist.push_back( std::make_shared<MxEmTopMargin>() );
        mlist.push_back( std::make_shared<MxEmTopSystemDistance>() );
        mlist.push_back( std::make_shared<MxEmTuningAlter>() );
        mlist.push_back( std::make_shared<MxEmTuningOctave>() );
        mlist.push_back( std::make_shared<MxEmTuningStep>() );
        mlist.push_back( std::make_shared<MxEmVirtualLibrary>() );
        mlist.push_back( std::make_shared<MxEmVirtualName>() );
        mlist.push_back( std::make_shared<MxEmVoice>() );
        mlist.push_back( std::make_shared<MxEmVolume>() );
        mlist.push_back( std::make_shared<MxEmWood>() );
        mlist.push_back( std::make_shared<MxEmWorkNumber>() );
        mlist.push_back( std::make_shared<MxEmWorkTitle>() );
        
        /***********************************************************/
        mlist.push_back( std::make_shared<MxEsAccidental>() );
        mlist.push_back( std::make_shared<MxEsAccidentalMark>() );
        mlist.push_back( std::make_shared<MxEsBarStyle>() );
        mlist.push_back( std::make_shared<MxEsBassAlter>() );
        mlist.push_back( std::make_shared<MxEsBassStep>() );
        mlist.push_back( std::make_shared<MxEsBeam>() );
        mlist.push_back( std::make_shared<MxEsBeater>() );
        mlist.push_back( std::make_shared<MxEsBreathMark>() );
        mlist.push_back( std::make_shared<MxEsCancel>() );
        mlist.push_back( std::make_shared<MxEsCreator>() );
        mlist.push_back( std::make_shared<MxEsCreditWords>() );
        mlist.push_back( std::make_shared<MxEsDegreeAlter>() );
        mlist.push_back( std::make_shared<MxEsDegreeType>() );
        mlist.push_back( std::make_shared<MxEsDegreeValue>() );
        mlist.push_back( std::make_shared<MxEsDistance>() );
        mlist.push_back( std::make_shared<MxEsElision>() );
        mlist.push_back( std::make_shared<MxEsEncoder>() );
        mlist.push_back( std::make_shared<MxEsEnding>() );
        mlist.push_back( std::make_shared<MxEsFeature>() );
        mlist.push_back( std::make_shared<MxEsFermata>() );
        mlist.push_back( std::make_shared<MxEsFigureNumber>() );
        mlist.push_back( std::make_shared<MxEsFingering>() );
        mlist.push_back( std::make_shared<MxEsFirstFret>() );
        mlist.push_back( std::make_shared<MxEsFootnote>() );
        mlist.push_back( std::make_shared<MxEsFret>() );
        mlist.push_back( std::make_shared<MxEsGroupAbbreviation>() );
        mlist.push_back( std::make_shared<MxEsGroupBarline>() );
        mlist.push_back( std::make_shared<MxEsGroupName>() );
        mlist.push_back( std::make_shared<MxEsGroupSymbol>() );
        mlist.push_back( std::make_shared<MxEsHammerOn>() );
        mlist.push_back( std::make_shared<MxEsHandbell>() );
        mlist.push_back( std::make_shared<MxEsHoleClosed>() );
        mlist.push_back( std::make_shared<MxEsInversion>() );
        mlist.push_back( std::make_shared<MxEsKeyOctave>() );
        mlist.push_back( std::make_shared<MxEsKind>() );
        mlist.push_back( std::make_shared<MxEsLevel>() );
        mlist.push_back( std::make_shared<MxEsLineWidth>() );
        mlist.push_back( std::make_shared<MxEsMeasureNumbering>() );
        mlist.push_back( std::make_shared<MxEsMeasureRepeat>() );
        mlist.push_back( std::make_shared<MxEsMetronomeBeam>() );
        mlist.push_back( std::make_shared<MxEsMiscellaneousField>() );
        mlist.push_back( std::make_shared<MxEsMultipleRest>() );
        mlist.push_back( std::make_shared<MxEsNotehead>() );
        mlist.push_back( std::make_shared<MxEsNoteSize>() );
        mlist.push_back( std::make_shared<MxEsOffset>() );
        mlist.push_back( std::make_shared<MxEsOtherAppearance>() );
        mlist.push_back( std::make_shared<MxEsOtherArticulation>() );
        mlist.push_back( std::make_shared<MxEsOtherDirection>() );
        mlist.push_back( std::make_shared<MxEsOtherTechnical>() );
        mlist.push_back( std::make_shared<MxEsPartAbbreviation>() );
        mlist.push_back( std::make_shared<MxEsPartName>() );
        mlist.push_back( std::make_shared<MxEsPartSymbol>() );
        mlist.push_back( std::make_shared<MxEsPerMinute>() );
        mlist.push_back( std::make_shared<MxEsPluck>() );
        mlist.push_back( std::make_shared<MxEsPrefix>() );
        mlist.push_back( std::make_shared<MxEsPrincipalVoice>() );
        mlist.push_back( std::make_shared<MxEsPullOff>() );
        mlist.push_back( std::make_shared<MxEsRehearsal>() );
        mlist.push_back( std::make_shared<MxEsRelation>() );
        mlist.push_back( std::make_shared<MxEsRights>() );
        mlist.push_back( std::make_shared<MxEsRootAlter>() );
        mlist.push_back( std::make_shared<MxEsRootStep>() );
        mlist.push_back( std::make_shared<MxEsStem>() );
        mlist.push_back( std::make_shared<MxEsString>() );
        mlist.push_back( std::make_shared<MxEsSuffix>() );
        mlist.push_back( std::make_shared<MxEsTap>() );
        mlist.push_back( std::make_shared<MxEsText>() );
        mlist.push_back( std::make_shared<MxEsTupletNumber>() );
        mlist.push_back( std::make_shared<MxEsTupletType>() );
        mlist.push_back( std::make_shared<MxEsType>() );
        mlist.push_back( std::make_shared<MxEsWithBar>() );
        mlist.push_back( std::make_shared<MxEsWords>() );
        
        /***********************************************************/
        return mlist;
    }
}


/*

MusicXML™ Public License Version 3.0

This MusicXML™ work (including software, documents, or other related items) is being provided by the Copyright Holder under the following license. By obtaining, using and/or copying this work, each Contributor and Recipient (hereinafter, collectively known as "Licensee") agree that he/she has read, understood, and will comply with the following terms and conditions:

A. DEFINITIONS

"Copyright Holder" means MakeMusic, Inc.

"Contribution" means:

in the case of MakeMusic, Inc., the Original Program, and
in the case of each Contributor,
changes to the Program, and
additions to the Program;
where such changes and/or additions to the Program originate from and are distributed by that particular Contributor. A Contribution 'originates' from a Contributor if it was added to the Program by such Contributor itself or anyone acting on such Contributor's behalf. Contributions do not include additions to the Program which: (i) are separate modules of software distributed in conjunction with the Program under their own license agreement, and (ii) are not derivative works of the Program.
"Contributor" means MakeMusic, Inc. and any other entity that distributes the Program.

"MusicXML™ Mark" means the MusicXML™ trademark owned by MakeMusic, Inc.

"Original Program" means the original version of the software accompanying this Agreement as released by MakeMusic, Inc., including source code, object code and documentation, if any.

"Program" means the Original Program and Contributions.

"Recipient" means anyone who receives the Program under this Agreement, including all Contributors.

B. GRANT OF RIGHTS

Permission to use, copy, modify, and distribute the Program, with or without modification, for any purpose and without fee or royalty is hereby granted, provided that each Recipient include the following on ALL copies of the Program or portions thereof, including modifications, that he/she make:

The full text of this License in a location viewable to users of the redistributed or derivative work.

Any pre-existing intellectual property disclaimers, notices, or terms and conditions. If none exist, a short notice of the following form (hypertext is preferred, text is permitted) should be used within the body of any redistributed or derivative code: "© MakeMusic, Inc. All rights reserved. http://www.makemusic.com"

Notice of any changes or modifications to the MusicXML™ files, including the date changes were made. (We recommend you provide URLs to the location from which the code is derived.)

In addition, creators of derivative works must include the full text of this License in a location viewable to users of the derivative work.

Title to copyright in the Program will at all times remain with Copyright Holder.

C. NO WARRANTY

EXCEPT AS EXPRESSLY SET FORTH IN THIS AGREEMENT, THE PROGRAM IS PROVIDED ON AN "AS IS" BASIS, AND COPYRIGHT HOLDER MAKES NO WARRANTIES OR CONDITIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED INCLUDING, WITHOUT LIMITATION, ANY WARRANTIES OR CONDITIONS OF TITLE, NON-INFRINGEMENT, MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE. Each Recipient is solely responsible for determining the appropriateness of using and distributing the Program and assumes all risks associated with its exercise of rights under this Agreement, including but not limited to the risks and costs of program errors, compliance with applicable laws, damage to or loss of data, programs or equipment, and unavailability or interruption of operations.

D. DISCLAIMER OF LIABILITY

EXCEPT AS EXPRESSLY SET FORTH IN THIS AGREEMENT, NEITHER COPYRIGHT HOLDER NOR ANY CONTRIBUTORS SHALL HAVE ANY LIABILITY FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING WITHOUT LIMITATION LOST PROFITS), HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OR DISTRIBUTION OF THE PROGRAM OR THE EXERCISE OF ANY RIGHTS GRANTED HEREUNDER, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.

E. TRADEMARK

1. The MusicXML™ Mark (or a derivative Mark, such as MusicXML™ Plus) may not be used to identify any product or service not originating from or licensed by Copyright Holder without specific, written prior permission. However, it is acceptable for a Contributor product or service to be described as being MusicXML™-compatible, assuming that the claim is true in Copyright Holder’s reasonable judgment.

2. This License does not grant any rights to use any other trademarks owned by Copyright Holder, including without limitation "Recordare®", "Dolet®", and "In the Beginning Was the Note®", even if such marks are included in the Program. For purposes of clarification and the avoidance of doubt, the trademarks "Recordare®", "Dolet®", and "In the Beginning Was the Note®" must not be used to endorse or promote Contributor versions of the Program without the prior written permission of Copyright Holder.

3. All rights not expressly granted herein by Copyright Holder with respect to the MusicXML™ Mark or any other trademarks owned by Copyright Holder are reserved by and to Copyright Holder.

F. GENERAL

If any provision of this Agreement is invalid or unenforceable under applicable law, it shall not affect the validity or enforceability of the remainder of the terms of this Agreement, and without further action by the parties hereto, such provision shall be reformed to the minimum extent necessary to make such provision valid and enforceable.

All Recipient's rights under this Agreement shall terminate if it fails to comply with any of the material terms or conditions of this Agreement and does not cure such failure in a reasonable period of time after becoming aware of such noncompliance. If all Recipient's rights under this Agreement terminate, Recipient agrees to cease use and distribution of the Program as soon as reasonably practicable. However, Recipient's obligations under this Agreement and any licenses granted by Recipient relating to the Program shall continue and survive.

MakeMusic, Inc. may publish new versions (including revisions) of this Agreement from time to time. Each new version of the Agreement will be given a distinguishing version number. The Program (including Contributions) may always be distributed subject to the version of the Agreement under which it was received. In addition, after a new version of the Agreement is published, Contributor may elect to distribute the Program (including its Contributions) under the new version. No one other than MakeMusic, Inc. has the right to modify this Agreement. Except as expressly stated in Sections B and E above, Recipient receives no rights or licenses to the intellectual property of any Contributor under this Agreement, whether expressly, by implication, estoppel or otherwise. All rights in the Program not expressly granted under this Agreement are reserved.

This Agreement is governed by the laws of the State of California and the intellectual property laws of the United States of America.


*/

