/* See MusicXML License at the bottom of this code page. */

/* matthew james briggs */

#pragma once
#include <iostream>
#include <string>
#include <memory>

namespace lexicon
{
    class LexiconObject;
    typedef std::shared_ptr<LexiconObject> HLexiconObject;
    class LexiconObject
    {

    public:
        virtual ~LexiconObject();
        virtual std::string getClassName() const = 0;
        virtual std::ostream& stream( std::ostream& os ) const = 0;
        virtual std::string toString() const;
    };
}

std::ostream& operator<<( std::ostream& os, lexicon::LexiconObject& rhs );

namespace lexicon
{
    class MxObject;
    typedef std::shared_ptr<MxObject> HMxObject;
    class MxObject : public LexiconObject
    {
    public:
        virtual ~MxObject();
        virtual std::string getXmlTypeName() const = 0;
        virtual std::string getDocumentation() const = 0;
        
        /*
         This function should return the internal value
         of the object in MusicXml valid format. */
        virtual std::ostream& stream( std::ostream& os ) const = 0;

    };
}

namespace lexicon
{
    class MxParseableObject;
    typedef std::shared_ptr<MxParseableObject> HMxParseableObject;
    class MxParseableObject : public MxObject
    {
    public:
        virtual ~MxParseableObject();
        
        /* set the internal value by passing a string
         the string should be consistent with the value(s)
         possible in a MusicXml document. returns true if
         the value was successfully set, returns false if
         the value could not be set due to improper input */
        virtual bool fromString( const std::string& value ) = 0;
    };
}


namespace lexicon
{
    class MxEnum;
    typedef std::shared_ptr<MxEnum> HMxEnum;
    
    class MxEnum : public MxParseableObject
    {

    public:
        
        virtual ~MxEnum();
/* Getters ---------------------------------------------------------------------------- */
        
        /** Returns the internal enum value as an int. **/
		virtual int getValueInt() const = 0 ;
        
		/** Returns the enum's internal value as a string matching the C++ enum
         symbol. **/
		virtual std::string getCppEnumSymbolAsString() const = 0 ;
        
		/** Returns the count of possible enumeration values. **/
		virtual int getSize() const = 0 ;
        
		/** Returns the name of this enumeration type as found in the musicxml.xsd
         document. **/
		virtual std::string getXmlTypeName() const = 0 ;
        
		/** Returns the name of this C++ class, i.e. 'MxEnumYesNo'. This is a function
         implemented by all objects that inherit from LexiconObject. **/
		virtual std::string getClassName() const = 0 ;
        
		/** Returns the documentation for this musicxml type as found in the musicxml.xsd
         document. **/
		virtual std::string getDocumentation() const = 0 ;
        
		/** Returns the internal enum's value as a musicxml string value. All objects
         inheriting from LexiconObject implement a toString() function. All
         objects inheriting from MxObject implement this function to
         return the musicxml representation of their internal value. **/
		virtual std::string toString() const = 0 ;
        
/* Setters ---------------------------------------------------------------------------- */
        
		/** Sets the internal enum value from an int. Returns true for success,
         false for failue (i.e. an out-of-range value will leave the internal
         enum's value unchanged and return 'false'. **/
		virtual bool setValueInt( int value_in ) = 0 ;
        
/** Sets the internal enum value by parsing a string.  The string value
         should match what is found in a MusicXML document.  All MxObject
         objects implement a 'from String' function which parses MusicXML data.
         Returns true if parsing was successful.  If the passed string is invalid,
         returns false and does not change the internal enum value. **/
		virtual bool fromString( const std::string& value_in ) = 0 ;
        
/** Sets the internal enum value by parsing a string. The string value
         should match the C++ enum symblol. If the passed string is invalid,
         returns false and does not change the internal enum value. **/
		virtual bool setCppEnumSymbolAsString( const std::string& value_in ) = 0 ;
        
/* Streaming support ------------------------------------------------------------------ */
        
		/** Streams the internal value as a MusicXML string to the passed ostream
         object. Returns the ostream object. This function enables the streaming
         operator<< by way of inheritence from LexiconObject. **/
		virtual std::ostream& stream( std::ostream& os_out ) const = 0 ;
    };
    
    template <typename T>
    class MxNumber;
    
    typedef std::shared_ptr<MxNumber<int>> HMxNumberInt;
    typedef std::shared_ptr<MxNumber<long double>> HMxNumberLongDouble;
    
    template <typename T>
    class MxNumber : public MxParseableObject
    {
    public:
        virtual ~MxNumber() {};
        virtual std::string getClassName() const { return ""; }
        virtual std::string getXmlTypeName() const { return ""; }
        virtual std::string getDocumentation() const { return ""; }
        
        /**
         Gets the internal numeric value. **/
        virtual T getValue() const { return myValue; }
        
        /**
         Gets the internal numeric value. **/
        virtual bool setValue( const T& new_value ) { myValue = new_value; return true; }
        
        /**
         This function should return the internal value
         of the object in MusicXml valid format. **/
        virtual std::ostream& stream( std::ostream& os ) const { return os; }
        
        
        /* set the internal value by passing a string
         the string should be consistent with the value(s)
         possible in a MusicXml document. returns true if
         the value was successfully set, returns false if
         the value could not be set due to improper input */
        virtual bool fromString( const std::string& value )  { return false; }
        
        /** returns true if there is an upper-limit to the possible
         numeric values **/
        virtual bool isUpperRangeBound() const { return false; }
        /** specifies whether the upper bound is inclusive **/
        virtual bool isUpperRangeLimitInclusive() const { return false; }
        
        /** returns true if there is an lower limit to the possible
         numeric values **/
        virtual bool isLowerRangeBound() const { return false; }
        /** specifies whether the lower bound is inclusive **/
        virtual bool isLowerRangeLimitInclusive() const { return false; }
        
        /** returns the lower bound of the allowable range of values,
         isLowerRangeLimitInclusive() tells you whether the lower bound
         is in-range or out-of-range **/
        virtual T getLowerBound() const = 0;
        
        /** returns the upper bound of the allowable range of values,
         isUpperRangeLimitInclusive() tells you whether the upper bound
         is in-range or out-of-range **/
        virtual T getUpperBound() const = 0;
        
    private:
        T myValue;
        
    };
}

namespace lexicon
{

	class MxAttrGrp : public MxObject
	{
	public:
        
/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */
        
		MxAttrGrp();
		virtual ~MxAttrGrp();
        
/* Get Class Information -------------------------------------------------------------- */
        
		/** Returns the name of this xs:simpleType as found in the musicxml.xsd
         document. **/
		virtual std::string getXmlTypeName() const = 0;
        
		/** Returns the name of this C++ class. **/
		virtual std::string getClassName() const = 0;
        
		/** Returns the documentation for this musicxml type as found in the musicxml.xsd
         document. **/
		virtual std::string getDocumentation() const = 0;
        
	}; // class MxAttrGrpColor
    
} // namespace lexicon


namespace lexicon
{
    class MxElement;
    typedef std::shared_ptr<MxElement> HMxElement;
    typedef std::unique_ptr<MxElement> UMxElement;
    
	class MxElement : public MxObject
	{
	public:
		MxElement();
		virtual ~MxElement();
        virtual int getMinOccurs() const = 0;
        virtual int getMaxOccurs() const = 0;
        virtual bool getIsMaxOccursUnbounded() const = 0;
	}; // class MxAttrGrpColor
    
} // namespace lexicon
    
namespace lexicon
{
    class MxElementEmpty;
    typedef std::shared_ptr<MxElementEmpty> HMxElementEmpty;
    typedef std::unique_ptr<MxElementEmpty> UMxElementEmpty;
    
	class MxElementEmpty : public MxElement
	{
	public:
		MxElementEmpty();
		virtual ~MxElementEmpty();
        
	};
    
} // namespace lexicon

namespace lexicon
{
    class MxElementSimple;
    typedef std::shared_ptr<MxElementEmpty> HMxElementSimple;
    typedef std::unique_ptr<MxElementEmpty> UMxElementSimple;
    
	class MxElementSimple : public MxElement
	{
	public:
		MxElementSimple();
		virtual ~MxElementSimple();
        
	};
    
} // namespace lexicon

namespace lexicon
{
    class MxIndentable;
    typedef std::shared_ptr<MxIndentable> HMxIndentable;
    typedef std::unique_ptr<MxIndentable> UMxIndentable;
    
	class MxIndentable : public MxElement
	{
	public:
		MxIndentable();
		virtual ~MxIndentable();
        virtual std::ostream& stream( std::ostream& os_out ) const;
        virtual std::ostream& stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in = "\t" ) const = 0;
        
	};
    
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

