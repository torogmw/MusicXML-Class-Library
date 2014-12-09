/* See MusicXML License at the bottom of this code page. */

/**
  * @file       MxEnumMetal.cpp
  * @class      lexicon::MxEnumMetal
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-06-22
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 82
  * 
  * @brief The MxEnumMetal class serves as a binding for the MusicXml 'metal'
  * simple enum type.
  * 
 **/

#include "MxEnumMetal.h"
#include "_hidden_MxEnum.h"
#include <string>
#include <vector>
#include <sstream>

namespace lexicon
{
		struct MxEnumMetal::Impl
		{
			Impl( lexicon::enums::Metal value_in )
			:myValue( value_in ) {}
			~Impl() {}

			enums::Metal myValue;

			const static std::vector<std::string> myEnumStrings;
			const static std::vector<std::string> myXmlStrings;
			const static std::string myXmlTypeName;
			const static std::string myClassName;
			const static std::string myDocumentation;
			const static int myXsdID;

		}; // struct MxEnumMetal::Impl

		const std::vector<std::string> MxEnumMetal::Impl::myEnumStrings = { "almglocken", "bell", "bellPlate", "brakeDrum", "chineseCymbal", "cowbell", "crashCymbals", "crotale", "cymbalTongs", "domedGong", "fingerCymbals", "flexatone", "gong", "hiHat", "highHatCymbals", "handbell", "sistrum", "sizzleCymbal", "sleighBells", "suspendedCymbal", "tamTam", "triangle", "vietnameseHat" };;
		const std::vector<std::string> MxEnumMetal::Impl::myXmlStrings = { "almglocken", "bell", "bell plate", "brake drum", "Chinese cymbal", "cowbell", "crash cymbals", "crotale", "cymbal tongs", "domed gong", "finger cymbals", "flexatone", "gong", "hi-hat", "high-hat cymbals", "handbell", "sistrum", "sizzle cymbal", "sleigh bells", "suspended cymbal", "tam tam", "triangle", "Vietnamese hat" };;
		const std::string MxEnumMetal::Impl::myXmlTypeName = "metal";
		const std::string MxEnumMetal::Impl::myClassName = "MxEnumMetal";
		const std::string MxEnumMetal::Impl::myDocumentation = "The metal type represents pictograms for metal percussion instruments. The hi-hat value refers to a pictogram like Stone's high-hat cymbals but without the long vertical line at the bottom.";
		const int MxEnumMetal::Impl::myXsdID = 82;

/* MxEnumMetal ------------------------------------------------------------------------ */

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

		MxEnumMetal::MxEnumMetal( lexicon::enums::Metal value_in )
		:myImpl( new Impl( value_in ) ) {}
		MxEnumMetal::~MxEnumMetal() {}
		MxEnumMetal::MxEnumMetal( const MxEnumMetal& other )
		:myImpl( new Impl( other.myImpl->myValue ) ) {}
		MxEnumMetal& MxEnumMetal::operator=( const MxEnumMetal& other )
		{
			this->myImpl = std::unique_ptr<Impl>( new Impl( other.myImpl->myValue ) );
			return *this;
		}

/* Getters ---------------------------------------------------------------------------- */

		/** Returns the internal enum value. **/
		enums::Metal MxEnumMetal::getValue() const
		{
			return myImpl->myValue;
		}

		/** Returns the internal enum value as an int. **/
		int MxEnumMetal::getValueInt() const
		{
			switch ( myImpl->myValue )
			{
				case enums::Metal::almglocken:
					return 0;
					break;
				case enums::Metal::bell:
					return 1;
					break;
				case enums::Metal::bellPlate:
					return 2;
					break;
				case enums::Metal::brakeDrum:
					return 3;
					break;
				case enums::Metal::chineseCymbal:
					return 4;
					break;
				case enums::Metal::cowbell:
					return 5;
					break;
				case enums::Metal::crashCymbals:
					return 6;
					break;
				case enums::Metal::crotale:
					return 7;
					break;
				case enums::Metal::cymbalTongs:
					return 8;
					break;
				case enums::Metal::domedGong:
					return 9;
					break;
				case enums::Metal::fingerCymbals:
					return 10;
					break;
				case enums::Metal::flexatone:
					return 11;
					break;
				case enums::Metal::gong:
					return 12;
					break;
				case enums::Metal::hiHat:
					return 13;
					break;
				case enums::Metal::highHatCymbals:
					return 14;
					break;
				case enums::Metal::handbell:
					return 15;
					break;
				case enums::Metal::sistrum:
					return 16;
					break;
				case enums::Metal::sizzleCymbal:
					return 17;
					break;
				case enums::Metal::sleighBells:
					return 18;
					break;
				case enums::Metal::suspendedCymbal:
					return 19;
					break;
				case enums::Metal::tamTam:
					return 20;
					break;
				case enums::Metal::triangle:
					return 21;
					break;
				case enums::Metal::vietnameseHat:
					return 22;
					break;
				default:
					return -1;
					break;
			}
		}

		/** Returns the enum's internal value as a string matching the C++ enum
		    symbol. **/
		std::string MxEnumMetal::getCppEnumSymbolAsString() const
		{
			return myImpl->myEnumStrings[getValueInt()];
		}

		/** Returns the count of possible enumeration values. **/
		int MxEnumMetal::getSize() const
		{
			return (int)myImpl->myEnumStrings.size();
		}

		/** Returns the name of this enumeration type as found in the musicxml.xsd
		    document. **/
		std::string MxEnumMetal::getXmlTypeName() const
		{
			return myImpl->myXmlTypeName;
		}

		/** Returns the name of this C++ class, i.e. 'MxEnumMetal'. This is a function
		    implemented by all objects that inherit from LexiconObject. **/
		std::string MxEnumMetal::getClassName() const
		{
			return myImpl->myClassName;
		}

		/** Returns the documentation for this musicxml type as found in the musicxml.xsd
		    document. **/
		std::string MxEnumMetal::getDocumentation() const
		{
			return myImpl->myDocumentation;
		}

		/** Returns the internal enum's value as a musicxml string value. All objects
		    inheriting from LexiconObject implement a toString() function. All
		    objects inheriting from MxObject implement this function to
		    return the musicxml representation of their internal value. **/
		std::string MxEnumMetal::toString() const
		{
			return myImpl->myXmlStrings[getValueInt()];
		}

/* Setters ---------------------------------------------------------------------------- */

		/** Sets the internal enum value. **/
		void MxEnumMetal::setValue( enums::Metal value_in )
		{
			myImpl->myValue = value_in;
		}

		/** Sets the internal enum value from an int. Returns true for success,
		    false for failue (i.e. an out-of-range value will leave the internal
		    enum's value unchanged and return 'false'. **/
		bool MxEnumMetal::setValueInt( int value_in )
		{
			switch ( value_in )
			{
				case 0:
					myImpl->myValue = enums::Metal::almglocken;
					return true;
					break;
				case 1:
					myImpl->myValue = enums::Metal::bell;
					return true;
					break;
				case 2:
					myImpl->myValue = enums::Metal::bellPlate;
					return true;
					break;
				case 3:
					myImpl->myValue = enums::Metal::brakeDrum;
					return true;
					break;
				case 4:
					myImpl->myValue = enums::Metal::chineseCymbal;
					return true;
					break;
				case 5:
					myImpl->myValue = enums::Metal::cowbell;
					return true;
					break;
				case 6:
					myImpl->myValue = enums::Metal::crashCymbals;
					return true;
					break;
				case 7:
					myImpl->myValue = enums::Metal::crotale;
					return true;
					break;
				case 8:
					myImpl->myValue = enums::Metal::cymbalTongs;
					return true;
					break;
				case 9:
					myImpl->myValue = enums::Metal::domedGong;
					return true;
					break;
				case 10:
					myImpl->myValue = enums::Metal::fingerCymbals;
					return true;
					break;
				case 11:
					myImpl->myValue = enums::Metal::flexatone;
					return true;
					break;
				case 12:
					myImpl->myValue = enums::Metal::gong;
					return true;
					break;
				case 13:
					myImpl->myValue = enums::Metal::hiHat;
					return true;
					break;
				case 14:
					myImpl->myValue = enums::Metal::highHatCymbals;
					return true;
					break;
				case 15:
					myImpl->myValue = enums::Metal::handbell;
					return true;
					break;
				case 16:
					myImpl->myValue = enums::Metal::sistrum;
					return true;
					break;
				case 17:
					myImpl->myValue = enums::Metal::sizzleCymbal;
					return true;
					break;
				case 18:
					myImpl->myValue = enums::Metal::sleighBells;
					return true;
					break;
				case 19:
					myImpl->myValue = enums::Metal::suspendedCymbal;
					return true;
					break;
				case 20:
					myImpl->myValue = enums::Metal::tamTam;
					return true;
					break;
				case 21:
					myImpl->myValue = enums::Metal::triangle;
					return true;
					break;
				case 22:
					myImpl->myValue = enums::Metal::vietnameseHat;
					return true;
					break;
				default:
					// do nothing
					break;
			}
			return false;
		}

		/** Sets the internal enum value by parsing a string.  The string value
		    should match what is found in a MusicXML document.  All MxObject
		    objects implement a 'from String' function which parses MusicXML data.
		    Returns true if parsing was successful.  If the passed string is invalid,
		    returns false and does not change the internal enum value. **/
		bool MxEnumMetal::fromString( const std::string& value_in )
		{
			for (int i=0; i < getSize(); ++i)
			{
				if ( value_in == myImpl->myXmlStrings[i] )
					{
						setValueInt( i );
						return true;
					}
			}
			return false;
		}

		/** Sets the internal enum value by parsing a string. The string value
		    should match the C++ enum symblol. If the passed string is invalid,
		    returns false and does not change the internal enum value. **/
		bool MxEnumMetal::setCppEnumSymbolAsString( const std::string& value_in )
		{
			for (int i=0; i < getSize(); ++i)
			{
				if ( value_in == myImpl->myEnumStrings[i] )
					{
						setValueInt( i );
						return true;
					}
			}
			return false;
		}

/* Comparison Operators --------------------------------------------------------------- */

		/** Two MxEnumMetal objects are equal if they have the same internal enum
		    value. If they are not equal, then the MxEnumMetal with the greater
		    getValueInt() value is considered GreaterThan the MxEnumMetal with
		    the smaller getValueInt() value. **/
		bool MxEnumMetal::operator==( const MxEnumMetal& other_in ) const
		{
			return hidden::mxEnumCompare<MxEnumMetal>( *this, other_in ) == 0;
		}

		bool MxEnumMetal::operator!=( const MxEnumMetal& other_in ) const
		{
			return hidden::mxEnumCompare<MxEnumMetal>( *this, other_in ) != 0;
		}

		bool MxEnumMetal::operator>( const MxEnumMetal& other_in ) const
		{
			return hidden::mxEnumCompare<MxEnumMetal>( *this, other_in ) > 0;
		}

		bool MxEnumMetal::operator<( const MxEnumMetal& other_in ) const
		{
			return hidden::mxEnumCompare<MxEnumMetal>( *this, other_in ) < 0;
		}

		bool MxEnumMetal::operator>=( const MxEnumMetal& other_in ) const
		{
			return hidden::mxEnumCompare<MxEnumMetal>( *this, other_in ) >= 0;
		}

		bool MxEnumMetal::operator<=( const MxEnumMetal& other_in ) const
		{
			return hidden::mxEnumCompare<MxEnumMetal>( *this, other_in ) <= 0;
		}

/* Increment/Decrement Operators ------------------------------------------------------ */

		/** Cycle through available enum values. When attempting to increment past
		    the last enum value, wraps to the zeroeth value. When attempting to
		    decrement below the zeroeth value, wraps to the maximum enum value. **/
		MxEnumMetal& MxEnumMetal::operator++()
		{
			return hidden::mxEnumIncrement<MxEnumMetal>( *this );
		}

		MxEnumMetal MxEnumMetal::operator++( int )
		{
			MxEnumMetal temp( *this );
			hidden::mxEnumIncrement<MxEnumMetal>( *this );
			return temp;
		}

		MxEnumMetal& MxEnumMetal::operator--()
		{
			return hidden::mxEnumDecrement<MxEnumMetal>( *this );
		}

		MxEnumMetal MxEnumMetal::operator--( int )
		{
			MxEnumMetal temp( *this );
			hidden::mxEnumDecrement<MxEnumMetal>( *this );
			return temp;
		}

/* Streaming support ------------------------------------------------------------------ */

		/** Streams the internal value as a MusicXML string to the passed ostream
		    object. Returns the ostream object. This function enables the streaming
		    operator<< by way of inheritence from LexiconObject. **/
		std::ostream& MxEnumMetal::stream( std::ostream& os_out ) const
		{
			os_out << myImpl->myXmlStrings[ getValueInt() ];
			return os_out;
		}

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

