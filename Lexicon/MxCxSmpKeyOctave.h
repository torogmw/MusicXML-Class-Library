/* See MusicXML License at the bottom of this code page. */

#pragma once

/**
  * @file       MxCxSmpKeyOctave.h
  * @class      lexicon::MxCxSmpKeyOctave
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-02 17:31:48
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 2797
  * 
  * @brief The 'KeyOctave' class serves as a binding for the MusicXml 'key-octave'
  * complexType.
  * 
  * The purpose of 'MxCxSmpKeyOctave' is to provide a strongly-typed C++ representation
  * of the 'key-octave' MusicXML complexType with the ability to write the attribute
  * values to XML-appropriate strings. 
  * 
  * Music XML XSD Documentation: The key-octave element specifies in which octave
  * an element of a key signature appears. The content specifies the octave value
  * using the same values as the display-octave element. The number attribute
  * is a positive integer that refers to the key signature element in left-to-right
  * order. If the cancel attribute is set to yes, then this number refers to
  * an element specified by the cancel element. It is no by default.
  * 
  * <xs:complexType name="key-octave">
  * 	<xs:annotation>
  * 		<xs:documentation>The key-octave element specifies in which octave an element
  * of a key signature appears. The content specifies the octave value using
  * the same values as the display-octave element. The number attribute is a
  * positive integer that refers to the key signature element in left-to-right
  * order. If the cancel attribute is set to yes, then this number refers to
  * an element specified by the cancel element. It is no by default.</xs:documentation>
  * </xs:annotation>
  * 	<xs:simpleContent>
  * 		<xs:extension base="octave">
  * 			<xs:attribute name="number" type="xs:positiveInteger" use="required"/>
  * <xs:attribute name="cancel" type="yes-no"/>
  * 		</xs:extension>
  * 	</xs:simpleContent>
  * </xs:complexType>
  * 
  * 
  * 
  * 
 **/

#include <iostream>
#include <string>
#include <memory>
#include "LexiconBaseObjects.h"
#include "MxEnumYesNo.h"
#include "MxNumberOctave.h"
#include "XsPositiveInteger.h"

namespace lexicon
{
/* MxCxSmpKeyOctave ------------------------------------------------------------------- */

	class MxCxSmpKeyOctave : public MxObject
	{
	public:

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

		MxCxSmpKeyOctave( const std::string& elementName = "unknown", const MxNumberOctave& value_in = MxNumberOctave() );
		virtual ~MxCxSmpKeyOctave();
		MxCxSmpKeyOctave( const MxCxSmpKeyOctave& other );
		MxCxSmpKeyOctave& operator=( const MxCxSmpKeyOctave& other );

/* GetSet Value and Element Name ------------------------------------------------------ */

		/** Returns the contained xs:simpleContent value. **/
		MxNumberOctave getValue() const;

		/** Sets the contained xs:simpleContent value. **/
		void setValue( const MxNumberOctave& value_in );

		/** Returns the name of the Xml element employing this ComplexType. **/
		std::string getElementName() const;

/* Get Class Information -------------------------------------------------------------- */

		/** Returns the name of this xs:complexType as found in the musicxml.xsd
		    document. **/
		std::string getXmlTypeName() const;

		/** Returns the name of this C++ class. **/
		std::string getClassName() const;

		/** Returns the documentation for this musicxml type as found in the musicxml.xsd
		    document. **/
		std::string getDocumentation() const;

/* Get Attribute Values --------------------------------------------------------------- */

		/** Returns the internal value of the 'number' (aka 'Number') attribute. **/
		XsPositiveInteger getNumber() const;

		/** Returns the internal value of the 'cancel' (aka 'Cancel') attribute. **/
		MxEnumYesNo getCancel() const;

/* Set Attribute Values --------------------------------------------------------------- */

		/** Sets the internal value of the 'number' (aka 'Number') attribute. **/
		void setNumber( const XsPositiveInteger& value_in );

		/** Sets the internal value of the 'cancel' (aka 'Cancel') attribute. **/
		void setCancel( const MxEnumYesNo& value_in );

/* Get IsAttributeRequired Values ----------------------------------------------------- */

		/** Indicates whether or not the 'number' (aka 'Number') attribute is required
		    to be present in a MusicXML document. **/
		bool getIsNumberRequired() const;

		/** Indicates whether or not the 'cancel' (aka 'Cancel') attribute is required
		    to be present in a MusicXML document. **/
		bool getIsCancelRequired() const;

/* Get IsAttributePresent Values ------------------------------------------------------ */

		/** Indicates whether or not the 'number' (aka 'Number') attribute is (or
		    will be) present in the MusicXML document. Note: because 'number' is
		    required by the MusicXML specification, getIsNumberPresent will always
		    return 'true'. There is no corresponding setIsNumberPresent function
		    for this attribute. **/
		bool getIsNumberPresent() const;

		/** Indicates whether or not the 'cancel' (aka 'Cancel') attribute is (or
		    will be) present in the MusicXML document. **/
		bool getIsCancelPresent() const;

/* Set IsAttributePresent Values ------------------------------------------------------ */

		/** Sets the value which indicates whether or not the 'cancel' (aka 'Cancel')
		    attribute is (or will be) present in the MusicXML document. **/
		void setIsCancelPresent( const bool& value_in );

/* Stringing and Streaming ------------------------------------------------------------ */

		/** Returns the xml representation of the object's value. **/
		std::string toString() const;

		/** Returns the xml representation of the object's value. **/
		std::ostream& stream( std::ostream& os_out ) const;

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

		/** Indicates whether or not the 'number' (aka 'Number') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). **/
		bool getIsNumberDefaultDefined() const;

		/** Indicates whether or not the 'cancel' (aka 'Cancel') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). **/
		bool getIsCancelDefaultDefined() const;

/* Get AttributeDefaultValue ---------------------------------------------------------- */

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'number' (aka 'Number') attribute. **/
		XsPositiveInteger getNumberDefaultValue() const;

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'cancel' (aka 'Cancel') attribute. **/
		MxEnumYesNo getCancelDefaultValue() const;

/* Impl ------------------------------------------------------------------------------- */

	private:
		class Impl;
		std::unique_ptr<Impl> myImpl;

	}; // class MxCxSmpKeyOctave

} // namespace lexicon



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

