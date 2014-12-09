/* See MusicXML License at the bottom of this code page. */

#include "XparseHelperFunctions.h"
#include <iostream>
#include "_hidden_AttributeRemoveSpaces.h"
#include "_hidden_Decimal.h"
#include "_hidden_decimalParse.h"
#include "_hidden_intParse.h"
#include "_hidden_MxEnum.h"
#include "_hidden_StringParser.h"
#include "LexiconBaseObjects.h"
#include "MxColor.h"
#include "MxCommaSeparatedText.h"
#include "MxDate.h"
#include "MxEndingNumber.h"
#include "MxEnumAboveBelow.h"
#include "MxEnumAccidentalValue.h"
#include "MxEnumArrowDirection.h"
#include "MxEnumArrowStyle.h"
#include "MxEnumBackwardForward.h"
#include "MxEnumBarStyle.h"
#include "MxEnumBeamValue.h"
#include "MxEnumBeaterValue.h"
#include "MxEnumBreathMarkValue.h"
#include "MxEnumCancelLocation.h"
#include "MxEnumCircularArrow.h"
#include "MxEnumClefSign.h"
#include "MxEnumCssFontSize.h"
#include "MxEnumDegreeSymbolValue.h"
#include "MxEnumDegreeTypeValue.h"
#include "MxEnumDistanceType.h"
#include "MxEnumEffect.h"
#include "MxEnumEnclosureShape.h"
#include "MxEnumFan.h"
#include "MxEnumFermataShape.h"
#include "MxEnumFontStyle.h"
#include "MxEnumFontWeight.h"
#include "MxEnumGlass.h"
#include "MxEnumGroupBarlineValue.h"
#include "MxEnumGroupSymbolValue.h"
#include "MxEnumHandbellValue.h"
#include "MxEnumHarmonyType.h"
#include "MxEnumHoleClosedLocation.h"
#include "MxEnumHoleClosedValue.h"
#include "MxEnumKindValue.h"
#include "MxEnumLeftCenterRight.h"
#include "MxEnumLeftRight.h"
#include "MxEnumLineEnd.h"
#include "MxEnumLineShape.h"
#include "MxEnumLineType.h"
#include "MxEnumLineWidthType.h"
#include "MxEnumMarginType.h"
#include "MxEnumMeasureNumberingValue.h"
#include "MxEnumMembrane.h"
#include "MxEnumMetal.h"
#include "MxEnumMode.h"
#include "MxEnumMute.h"
#include "MxEnumNoteheadValue.h"
#include "MxEnumNoteSizeType.h"
#include "MxEnumNoteTypeValue.h"
#include "MxEnumOnOff.h"
#include "MxEnumOverUnder.h"
#include "MxEnumPitched.h"
#include "MxEnumPrincipalVoiceSymbol.h"
#include "MxEnumRightLeftMiddle.h"
#include "MxEnumSemiPitched.h"
#include "MxEnumShowFrets.h"
#include "MxEnumShowTuplet.h"
#include "MxEnumStaffType.h"
#include "MxEnumStartNote.h"
#include "MxEnumStartStop.h"
#include "MxEnumStartStopChangeContinue.h"
#include "MxEnumStartStopContinue.h"
#include "MxEnumStartStopDiscontinue.h"
#include "MxEnumStartStopSingle.h"
#include "MxEnumStemValue.h"
#include "MxEnumStep.h"
#include "MxEnumStickLocation.h"
#include "MxEnumStickMaterial.h"
#include "MxEnumStickType.h"
#include "MxEnumSyllabic.h"
#include "MxEnumSymbolSize.h"
#include "MxEnumTextDirection.h"
#include "MxEnumTimeRelation.h"
#include "MxEnumTimeSeparator.h"
#include "MxEnumTimeSymbol.h"
#include "MxEnumTipDirection.h"
#include "MxEnumTopBottom.h"
#include "MxEnumTrillStep.h"
#include "MxEnumTwoNoteTurn.h"
#include "MxEnumUpDown.h"
#include "MxEnumUpDownStopContinue.h"
#include "MxEnumUprightInverted.h"
#include "MxEnumValign.h"
#include "MxEnumValignImage.h"
#include "MxEnumWedgeType.h"
#include "MxEnumWinged.h"
#include "MxEnumWood.h"
#include "MxEnumYesNo.h"
#include "MxFontSize.h"
#include "MxNumber.h"
#include "MxNumberAccordionMiddle.h"
#include "MxNumberBeamLevel.h"
#include "MxNumberDecimal.h"
#include "MxNumberDivisions.h"
#include "MxNumberFifths.h"
#include "MxNumberMidi128.h"
#include "MxNumberMidi16.h"
#include "MxNumberMidi16384.h"
#include "MxNumberMillimeters.h"
#include "MxNumberNonNegativeDecimal.h"
#include "MxNumberNumberLevel.h"
#include "MxNumberNumberOfLines.h"
#include "MxNumberOctave.h"
#include "MxNumberOrNormal.h"
#include "MxNumberPercent.h"
#include "MxNumberPositiveDecimal.h"
#include "MxNumberPositiveDivisions.h"
#include "MxNumberPositiveIntegerOrEmpty.h"
#include "MxNumberRotationDegrees.h"
#include "MxNumberSemitones.h"
#include "MxNumberStaffLine.h"
#include "MxNumberStaffNumber.h"
#include "MxNumberStringNumber.h"
#include "MxNumberTenths.h"
#include "MxNumberTremoloMarks.h"
#include "MxNumberTrillBeats.h"
#include "MxTimeOnly.h"
#include "MxYesNoNumber.h"
#include "XlinkActuate.h"
#include "XlinkHref.h"
#include "XlinkRole.h"
#include "XlinkShow.h"
#include "XlinkTitle.h"
#include "XlinkType.h"
#include "XmlLang.h"
#include "XmlSpace.h"
#include "XsAnyUri.h"
#include "XsId.h"
#include "XsIdRef.h"
#include "XsInteger.h"
#include "XsNonNegativeInteger.h"
#include "XsNmToken.h"
#include "XsPositiveInteger.h"
#include "XsString.h"
#include "XsToken.h"
#include <vector>

namespace lexicon
{
    ObjectList XparseHelperFunctions::loadSimpleTypes()
    {
        ObjectList listToFill;
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxColor() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxCommaSeparatedText() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxDate() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEndingNumber() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumAboveBelow() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumAccidentalValue() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumArrowDirection() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumArrowStyle() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumBackwardForward() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumBarStyle() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumBeamValue() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumBeaterValue() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumBreathMarkValue() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumCancelLocation() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumCircularArrow() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumClefSign() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumCssFontSize() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumDegreeSymbolValue() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumDegreeTypeValue() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumDistanceType() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumEffect() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumEnclosureShape() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumFan() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumFermataShape() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumFontStyle() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumFontWeight() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumGlass() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumGroupBarlineValue() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumGroupSymbolValue() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumHandbellValue() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumHarmonyType() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumHoleClosedLocation() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumHoleClosedValue() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumKindValue() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumLeftCenterRight() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumLeftRight() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumLineEnd() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumLineShape() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumLineType() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumLineWidthType() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumMarginType() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumMeasureNumberingValue() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumMembrane() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumMetal() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumMode() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumMute() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumNoteheadValue() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumNoteSizeType() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumNoteTypeValue() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumOnOff() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumOverUnder() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumPitched() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumPrincipalVoiceSymbol() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumRightLeftMiddle() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumSemiPitched() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumShowFrets() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumShowTuplet() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumStaffType() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumStartNote() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumStartStop() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumStartStopChangeContinue() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumStartStopContinue() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumStartStopDiscontinue() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumStartStopSingle() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumStemValue() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumStep() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumStickLocation() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumStickMaterial() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumStickType() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumSyllabic() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumSymbolSize() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumTextDirection() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumTimeRelation() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumTimeSeparator() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumTimeSymbol() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumTipDirection() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumTopBottom() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumTrillStep() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumTwoNoteTurn() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumUpDown() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumUpDownStopContinue() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumUprightInverted() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumValign() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumValignImage() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumWedgeType() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumWinged() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumWood() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxEnumYesNo() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxFontSize() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxNumberAccordionMiddle() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxNumberBeamLevel() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxNumberDecimal() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxNumberDivisions() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxNumberFifths() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxNumberMidi128() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxNumberMidi16() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxNumberMidi16384() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxNumberMillimeters() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxNumberNonNegativeDecimal() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxNumberNumberLevel() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxNumberNumberOfLines() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxNumberOctave() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxNumberOrNormal() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxNumberPercent() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxNumberPositiveDecimal() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxNumberPositiveDivisions() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxNumberPositiveIntegerOrEmpty() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxNumberRotationDegrees() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxNumberSemitones() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxNumberStaffLine() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxNumberStaffNumber() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxNumberStringNumber() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxNumberTenths() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxNumberTremoloMarks() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxNumberTrillBeats() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxTimeOnly() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::MxYesNoNumber() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::XlinkActuate() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::XlinkHref() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::XlinkRole() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::XlinkShow() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::XlinkTitle() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::XlinkType() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::XmlLang() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::XmlSpace() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::XsAnyUri() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::XsId() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::XsIdRef() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::XsInteger() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::XsNmToken() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::XsNonNegativeInteger() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::XsPositiveInteger() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::XsString() ) );
        listToFill.push_back( lexicon::HMxParseableObject( new lexicon::XsToken() ) );
        return listToFill;
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

