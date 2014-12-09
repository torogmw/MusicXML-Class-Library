/* See MusicXML License at the bottom of this code page. */

#include "XparseHelperFunctions.h"
#include "LexiconBaseObjects.h"
#include "MxCxEmptyArpeggiate.h"
#include "MxCxEmptyBarre.h"
#include "MxCxEmptyBookmark.h"
#include "MxCxEmptyBracket.h"
#include "MxCxEmptyDashes.h"
#include "MxCxEmptyEmpty.h"
#include "MxCxEmptyEmptyFont.h"
#include "MxCxEmptyEmptyLine.h"
#include "MxCxEmptyEmptyPlacement.h"
#include "MxCxEmptyEmptyPrintObjectStyleAlign.h"
#include "MxCxEmptyEmptyPrintStyle.h"
#include "MxCxEmptyEmptyPrintStyleAlign.h"
#include "MxCxEmptyEmptyTrillSound.h"
#include "MxCxEmptyExtend.h"
#include "MxCxEmptyGrace.h"
#include "MxCxEmptyHorizontalTurn.h"
#include "MxCxEmptyImage.h"
#include "MxCxEmptyInstrument.h"
#include "MxCxEmptyLink.h"
#include "MxCxEmptyLyricFont.h"
#include "MxCxEmptyLyricLanguage.h"
#include "MxCxEmptyNonArpeggiate.h"
#include "MxCxEmptyOctaveShift.h"
#include "MxCxEmptyOpus.h"
#include "MxCxEmptyPedal.h"
#include "MxCxEmptyRepeat.h"
#include "MxCxEmptySlur.h"
#include "MxCxEmptyStringMute.h"
#include "MxCxEmptySupports.h"
#include "MxCxEmptyTie.h"
#include "MxCxEmptyTied.h"
#include "MxCxEmptyTupletDot.h"
#include "MxCxEmptyWavyLine.h"
#include "MxCxEmptyWedge.h"
#include "MxCxSmpAccidental.h"
#include "MxCxSmpAccidentalMark.h"
#include "MxCxSmpAccidentalText.h"
#include "MxCxSmpBarStyleColor.h"
#include "MxCxSmpBassAlter.h"
#include "MxCxSmpBassStep.h"
#include "MxCxSmpBeam.h"
#include "MxCxSmpBeater.h"
#include "MxCxSmpBreathMark.h"
#include "MxCxSmpCancel.h"
#include "MxCxSmpDegreeAlter.h"
#include "MxCxSmpDegreeType.h"
#include "MxCxSmpDegreeValue.h"
#include "MxCxSmpDirective.h"
#include "MxCxSmpDistance.h"
#include "MxCxSmpEnding.h"
#include "MxCxSmpFeature.h"
#include "MxCxSmpFermata.h"
#include "MxCxSmpFingering.h"
#include "MxCxSmpFirstFret.h"
#include "MxCxSmpFormattedText.h"
#include "MxCxSmpFret.h"
#include "MxCxSmpGlissando.h"
#include "MxCxSmpGroupBarline.h"
#include "MxCxSmpGroupName.h"
#include "MxCxSmpGroupSymbol.h"
#include "MxCxSmpHammerOnPullOff.h"
#include "MxCxSmpHandbell.h"
#include "MxCxSmpHoleClosed.h"
#include "MxCxSmpInversion.h"
#include "MxCxSmpKeyOctave.h"
#include "MxCxSmpKind.h"
#include "MxCxSmpLevel.h"
#include "MxCxSmpLineWidth.h"
#include "MxCxSmpMeasureNumbering.h"
#include "MxCxSmpMeasureRepeat.h"
#include "MxCxSmpMetronomeBeam.h"
#include "MxCxSmpMidiDevice.h"
#include "MxCxSmpMiscellaneousField.h"
#include "MxCxSmpMultipleRest.h"
#include "MxCxSmpNotehead.h"
#include "MxCxSmpNoteSize.h"
#include "MxCxSmpNoteType.h"
#include "MxCxSmpOffset.h"
#include "MxCxSmpOtherAppearance.h"
#include "MxCxSmpOtherDirection.h"
#include "MxCxSmpOtherNotation.h"
#include "MxCxSmpOtherPlay.h"
#include "MxCxSmpPartName.h"
#include "MxCxSmpPartSymbol.h"
#include "MxCxSmpPerMinute.h"
#include "MxCxSmpPlacementText.h"
#include "MxCxSmpPrincipalVoice.h"
#include "MxCxSmpRootAlter.h"
#include "MxCxSmpRootStep.h"
#include "MxCxSmpSlide.h"
#include "MxCxSmpStem.h"
#include "MxCxSmpString.h"
#include "MxCxSmpStyleText.h"
#include "MxCxSmpTextElementData.h"
#include "MxCxSmpTextFontColor.h"
#include "MxCxSmpTremolo.h"
#include "MxCxSmpTupletNumber.h"
#include "MxCxSmpTupletType.h"
#include "MxCxSmpTypedText.h"

namespace lexicon
{
    MxList XparseHelperFunctions::privateCreateCxSmp()
    {
        MxList olist;
        olist.push_back( HMxObject( new MxCxSmpAccidental() ) );
        olist.push_back( HMxObject( new MxCxSmpAccidentalMark() ) );
        olist.push_back( HMxObject( new MxCxSmpAccidentalText() ) );
        olist.push_back( HMxObject( new MxCxSmpBarStyleColor() ) );
        olist.push_back( HMxObject( new MxCxSmpBassAlter() ) );
        olist.push_back( HMxObject( new MxCxSmpBassStep() ) );
        olist.push_back( HMxObject( new MxCxSmpBeam() ) );
        olist.push_back( HMxObject( new MxCxSmpBeater() ) );
        olist.push_back( HMxObject( new MxCxSmpBreathMark() ) );
        olist.push_back( HMxObject( new MxCxSmpCancel() ) );
        olist.push_back( HMxObject( new MxCxSmpDegreeAlter() ) );
        olist.push_back( HMxObject( new MxCxSmpDegreeType() ) );
        olist.push_back( HMxObject( new MxCxSmpDegreeValue() ) );
        olist.push_back( HMxObject( new MxCxSmpDirective() ) );
        olist.push_back( HMxObject( new MxCxSmpDistance() ) );
        olist.push_back( HMxObject( new MxCxSmpEnding() ) );
        olist.push_back( HMxObject( new MxCxSmpFeature() ) );
        olist.push_back( HMxObject( new MxCxSmpFermata() ) );
        olist.push_back( HMxObject( new MxCxSmpFingering() ) );
        olist.push_back( HMxObject( new MxCxSmpFirstFret() ) );
        olist.push_back( HMxObject( new MxCxSmpFormattedText() ) );
        olist.push_back( HMxObject( new MxCxSmpFret() ) );
        olist.push_back( HMxObject( new MxCxSmpGlissando() ) );
        olist.push_back( HMxObject( new MxCxSmpGroupBarline() ) );
        olist.push_back( HMxObject( new MxCxSmpGroupName() ) );
        olist.push_back( HMxObject( new MxCxSmpGroupSymbol() ) );
        olist.push_back( HMxObject( new MxCxSmpHammerOnPullOff() ) );
        olist.push_back( HMxObject( new MxCxSmpHandbell() ) );
        olist.push_back( HMxObject( new MxCxSmpHoleClosed() ) );
        olist.push_back( HMxObject( new MxCxSmpInversion() ) );
        olist.push_back( HMxObject( new MxCxSmpKeyOctave() ) );
        olist.push_back( HMxObject( new MxCxSmpKind() ) );
        olist.push_back( HMxObject( new MxCxSmpLevel() ) );
        olist.push_back( HMxObject( new MxCxSmpLineWidth() ) );
        olist.push_back( HMxObject( new MxCxSmpMeasureNumbering() ) );
        olist.push_back( HMxObject( new MxCxSmpMeasureRepeat() ) );
        olist.push_back( HMxObject( new MxCxSmpMetronomeBeam() ) );
        olist.push_back( HMxObject( new MxCxSmpMidiDevice() ) );
        olist.push_back( HMxObject( new MxCxSmpMiscellaneousField() ) );
        olist.push_back( HMxObject( new MxCxSmpMultipleRest() ) );
        olist.push_back( HMxObject( new MxCxSmpNotehead() ) );
        olist.push_back( HMxObject( new MxCxSmpNoteSize() ) );
        olist.push_back( HMxObject( new MxCxSmpNoteType() ) );
        olist.push_back( HMxObject( new MxCxSmpOffset() ) );
        olist.push_back( HMxObject( new MxCxSmpOtherAppearance() ) );
        olist.push_back( HMxObject( new MxCxSmpOtherDirection() ) );
        olist.push_back( HMxObject( new MxCxSmpOtherNotation() ) );
        olist.push_back( HMxObject( new MxCxSmpOtherPlay() ) );
        olist.push_back( HMxObject( new MxCxSmpPartName() ) );
        olist.push_back( HMxObject( new MxCxSmpPartSymbol() ) );
        olist.push_back( HMxObject( new MxCxSmpPerMinute() ) );
        olist.push_back( HMxObject( new MxCxSmpPlacementText() ) );
        olist.push_back( HMxObject( new MxCxSmpPrincipalVoice() ) );
        olist.push_back( HMxObject( new MxCxSmpRootAlter() ) );
        olist.push_back( HMxObject( new MxCxSmpRootStep() ) );
        olist.push_back( HMxObject( new MxCxSmpSlide() ) );
        olist.push_back( HMxObject( new MxCxSmpStem() ) );
        olist.push_back( HMxObject( new MxCxSmpString() ) );
        olist.push_back( HMxObject( new MxCxSmpStyleText() ) );
        olist.push_back( HMxObject( new MxCxSmpTextElementData() ) );
        olist.push_back( HMxObject( new MxCxSmpTextFontColor() ) );
        olist.push_back( HMxObject( new MxCxSmpTremolo() ) );
        olist.push_back( HMxObject( new MxCxSmpTupletNumber() ) );
        olist.push_back( HMxObject( new MxCxSmpTupletType() ) );
        olist.push_back( HMxObject( new MxCxSmpTypedText() ) );
        return olist;
    }
    MxList XparseHelperFunctions::privateCreateCxEmpty()
    {
        MxList olist;
        olist.push_back( HMxObject( new MxCxEmptyArpeggiate() ) );
        olist.push_back( HMxObject( new MxCxEmptyBarre() ) );
        olist.push_back( HMxObject( new MxCxEmptyBookmark() ) );
        olist.push_back( HMxObject( new MxCxEmptyBracket() ) );
        olist.push_back( HMxObject( new MxCxEmptyDashes() ) );
        olist.push_back( HMxObject( new MxCxEmptyEmpty() ) );
        olist.push_back( HMxObject( new MxCxEmptyEmptyFont() ) );
        olist.push_back( HMxObject( new MxCxEmptyEmptyLine() ) );
        olist.push_back( HMxObject( new MxCxEmptyEmptyPlacement() ) );
        olist.push_back( HMxObject( new MxCxEmptyEmptyPrintObjectStyleAlign() ) );
        olist.push_back( HMxObject( new MxCxEmptyEmptyPrintStyle() ) );
        olist.push_back( HMxObject( new MxCxEmptyEmptyPrintStyleAlign() ) );
        olist.push_back( HMxObject( new MxCxEmptyEmptyTrillSound() ) );
        olist.push_back( HMxObject( new MxCxEmptyExtend() ) );
        olist.push_back( HMxObject( new MxCxEmptyGrace() ) );
        olist.push_back( HMxObject( new MxCxEmptyHorizontalTurn() ) );
        olist.push_back( HMxObject( new MxCxEmptyImage() ) );
        olist.push_back( HMxObject( new MxCxEmptyInstrument() ) );
        olist.push_back( HMxObject( new MxCxEmptyLink() ) );
        olist.push_back( HMxObject( new MxCxEmptyLyricFont() ) );
        olist.push_back( HMxObject( new MxCxEmptyLyricLanguage() ) );
        olist.push_back( HMxObject( new MxCxEmptyNonArpeggiate() ) );
        olist.push_back( HMxObject( new MxCxEmptyOctaveShift() ) );
        olist.push_back( HMxObject( new MxCxEmptyOpus() ) );
        olist.push_back( HMxObject( new MxCxEmptyPedal() ) );
        olist.push_back( HMxObject( new MxCxEmptyRepeat() ) );
        olist.push_back( HMxObject( new MxCxEmptySlur() ) );
        olist.push_back( HMxObject( new MxCxEmptyStringMute() ) );
        olist.push_back( HMxObject( new MxCxEmptySupports() ) );
        olist.push_back( HMxObject( new MxCxEmptyTie() ) );
        olist.push_back( HMxObject( new MxCxEmptyTied() ) );
        olist.push_back( HMxObject( new MxCxEmptyTupletDot() ) );
        olist.push_back( HMxObject( new MxCxEmptyWavyLine() ) );
        olist.push_back( HMxObject( new MxCxEmptyWedge() ) );
        return olist;
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

