/* See MusicXML License at the bottom of this code page. */

/**
  * @file       MxEnumWood.cpp
  * @class      lexicon::MxEnumWood
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-06-22
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 93
  * 
  * @brief The MxEnumWood class serves as a binding for the MusicXml 'wood' simple
  * enum type.
  * 
 **/

#include "MxEnumWood.h"
#include "_hidden_MxEnum.h"
#include <string>
#include <vector>
#include <sstream>

namespace lexicon
{
		struct MxEnumWood::Impl
		{
			Impl( lexicon::enums::Wood value_in )
			:myValue( value_in ) {}
			~Impl() {}

			enums::Wood myValue;

			const static std::vector<std::string> myEnumStrings;
			const static std::vector<std::string> myXmlStrings;
			const static std::string myXmlTypeName;
			const static std::string myClassName;
			const static std::string myDocumentation;
			const static int myXsdID;

		}; // struct MxEnumWood::Impl

		const std::vector<std::string> MxEnumWood::Impl::myEnumStrings = { "boardClapper", "cabasa", "castanets", "claves", "guiro", "logDrum", "maraca", "maracas", "ratchet", "sandpaperBlocks", "slitDrum", "templeBlock", "vibraslap", "woodBlock" };;
		const std::vector<std::string> MxEnumWood::Impl::myXmlStrings = { "board clapper", "cabasa", "castanets", "claves", "guiro", "log drum", "maraca", "maracas", "ratchet", "sandpaper blocks", "slit drum", "temple block", "vibraslap", "wood block" };;
		const std::string MxEnumWood::Impl::myXmlTypeName = "wood";
		const std::string MxEnumWood::Impl::myClassName = "MxEnumWood";
		const std::string MxEnumWood::Impl::myDocumentation = "The wood type represents pictograms for wood percussion instruments. The maraca and maracas values distinguish the one- and two-maraca versions of the pictogram. The vibraslap and castanets values are in addition to Stone's list.";
		const int MxEnumWood::Impl::myXsdID = 93;

/* MxEnumWood ------------------------------------------------------------------------- */

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

		MxEnumWood::MxEnumWood( lexicon::enums::Wood value_in )
		:myImpl( new Impl( value_in ) ) {}
		MxEnumWood::~MxEnumWood() {}
		MxEnumWood::MxEnumWood( const MxEnumWood& other )
		:myImpl( new Impl( other.myImpl->myValue ) ) {}
		MxEnumWood& MxEnumWood::operator=( const MxEnumWood& other )
		{
			this->myImpl = std::unique_ptr<Impl>( new Impl( other.myImpl->myValue ) );
			return *this;
		}

/* Getters ---------------------------------------------------------------------------- */

		/** Returns the internal enum value. **/
		enums::Wood MxEnumWood::getValue() const
		{
			return myImpl->myValue;
		}

		/** Returns the internal enum value as an int. **/
		int MxEnumWood::getValueInt() const
		{
			switch ( myImpl->myValue )
			{
				case enums::Wood::boardClapper:
					return 0;
					break;
				case enums::Wood::cabasa:
					return 1;
					break;
				case enums::Wood::castanets:
					return 2;
					break;
				case enums::Wood::claves:
					return 3;
					break;
				case enums::Wood::guiro:
					return 4;
					break;
				case enums::Wood::logDrum:
					return 5;
					break;
				case enums::Wood::maraca:
					return 6;
					break;
				case enums::Wood::maracas:
					return 7;
					break;
				case enums::Wood::ratchet:
					return 8;
					break;
				case enums::Wood::sandpaperBlocks:
					return 9;
					break;
				case enums::Wood::slitDrum:
					return 10;
					break;
				case enums::Wood::templeBlock:
					return 11;
					break;
				case enums::Wood::vibraslap:
					return 12;
					break;
				case enums::Wood::woodBlock:
					return 13;
					break;
				default:
					return -1;
					break;
			}
		}

		/** Returns the enum's internal value as a string matching the C++ enum
		    symbol. **/
		std::string MxEnumWood::getCppEnumSymbolAsString() const
		{
			return myImpl->myEnumStrings[getValueInt()];
		}

		/** Returns the count of possible enumeration values. **/
		int MxEnumWood::getSize() const
		{
			return (int)myImpl->myEnumStrings.size();
		}

		/** Returns the name of this enumeration type as found in the musicxml.xsd
		    document. **/
		std::string MxEnumWood::getXmlTypeName() const
		{
			return myImpl->myXmlTypeName;
		}

		/** Returns the name of this C++ class, i.e. 'MxEnumWood'. This is a function
		    implemented by all objects that inherit from LexiconObject. **/
		std::string MxEnumWood::getClassName() const
		{
			return myImpl->myClassName;
		}

		/** Returns the documentation for this musicxml type as found in the musicxml.xsd
		    document. **/
		std::string MxEnumWood::getDocumentation() const
		{
			return myImpl->myDocumentation;
		}

		/** Returns the internal enum's value as a musicxml string value. All objects
		    inheriting from LexiconObject implement a toString() function. All
		    objects inheriting from MxObject implement this function to
		    return the musicxml representation of their internal value. **/
		std::string MxEnumWood::toString() const
		{
			return myImpl->myXmlStrings[getValueInt()];
		}

/* Setters ---------------------------------------------------------------------------- */

		/** Sets the internal enum value. **/
		void MxEnumWood::setValue( enums::Wood value_in )
		{
			myImpl->myValue = value_in;
		}

		/** Sets the internal enum value from an int. Returns true for success,
		    false for failue (i.e. an out-of-range value will leave the internal
		    enum's value unchanged and return 'false'. **/
		bool MxEnumWood::setValueInt( int value_in )
		{
			switch ( value_in )
			{
				case 0:
					myImpl->myValue = enums::Wood::boardClapper;
					return true;
					break;
				case 1:
					myImpl->myValue = enums::Wood::cabasa;
					return true;
					break;
				case 2:
					myImpl->myValue = enums::Wood::castanets;
					return true;
					break;
				case 3:
					myImpl->myValue = enums::Wood::claves;
					return true;
					break;
				case 4:
					myImpl->myValue = enums::Wood::guiro;
					return true;
					break;
				case 5:
					myImpl->myValue = enums::Wood::logDrum;
					return true;
					break;
				case 6:
					myImpl->myValue = enums::Wood::maraca;
					return true;
					break;
				case 7:
					myImpl->myValue = enums::Wood::maracas;
					return true;
					break;
				case 8:
					myImpl->myValue = enums::Wood::ratchet;
					return true;
					break;
				case 9:
					myImpl->myValue = enums::Wood::sandpaperBlocks;
					return true;
					break;
				case 10:
					myImpl->myValue = enums::Wood::slitDrum;
					return true;
					break;
				case 11:
					myImpl->myValue = enums::Wood::templeBlock;
					return true;
					break;
				case 12:
					myImpl->myValue = enums::Wood::vibraslap;
					return true;
					break;
				case 13:
					myImpl->myValue = enums::Wood::woodBlock;
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
		bool MxEnumWood::fromString( const std::string& value_in )
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
		bool MxEnumWood::setCppEnumSymbolAsString( const std::string& value_in )
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

		/** Two MxEnumWood objects are equal if they have the same internal enum
		    value. If they are not equal, then the MxEnumWood with the greater
		    getValueInt() value is considered GreaterThan the MxEnumWood with the
		    smaller getValueInt() value. **/
		bool MxEnumWood::operator==( const MxEnumWood& other_in ) const
		{
			return hidden::mxEnumCompare<MxEnumWood>( *this, other_in ) == 0;
		}

		bool MxEnumWood::operator!=( const MxEnumWood& other_in ) const
		{
			return hidden::mxEnumCompare<MxEnumWood>( *this, other_in ) != 0;
		}

		bool MxEnumWood::operator>( const MxEnumWood& other_in ) const
		{
			return hidden::mxEnumCompare<MxEnumWood>( *this, other_in ) > 0;
		}

		bool MxEnumWood::operator<( const MxEnumWood& other_in ) const
		{
			return hidden::mxEnumCompare<MxEnumWood>( *this, other_in ) < 0;
		}

		bool MxEnumWood::operator>=( const MxEnumWood& other_in ) const
		{
			return hidden::mxEnumCompare<MxEnumWood>( *this, other_in ) >= 0;
		}

		bool MxEnumWood::operator<=( const MxEnumWood& other_in ) const
		{
			return hidden::mxEnumCompare<MxEnumWood>( *this, other_in ) <= 0;
		}

/* Increment/Decrement Operators ------------------------------------------------------ */

		/** Cycle through available enum values. When attempting to increment past
		    the last enum value, wraps to the zeroeth value. When attempting to
		    decrement below the zeroeth value, wraps to the maximum enum value. **/
		MxEnumWood& MxEnumWood::operator++()
		{
			return hidden::mxEnumIncrement<MxEnumWood>( *this );
		}

		MxEnumWood MxEnumWood::operator++( int )
		{
			MxEnumWood temp( *this );
			hidden::mxEnumIncrement<MxEnumWood>( *this );
			return temp;
		}

		MxEnumWood& MxEnumWood::operator--()
		{
			return hidden::mxEnumDecrement<MxEnumWood>( *this );
		}

		MxEnumWood MxEnumWood::operator--( int )
		{
			MxEnumWood temp( *this );
			hidden::mxEnumDecrement<MxEnumWood>( *this );
			return temp;
		}

/* Streaming support ------------------------------------------------------------------ */

		/** Streams the internal value as a MusicXML string to the passed ostream
		    object. Returns the ostream object. This function enables the streaming
		    operator<< by way of inheritence from LexiconObject. **/
		std::ostream& MxEnumWood::stream( std::ostream& os_out ) const
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

