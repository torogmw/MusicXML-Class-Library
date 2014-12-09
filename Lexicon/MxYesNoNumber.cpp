/* See MusicXML License at the bottom of this code page. */

/* matthew james briggs */

#include "MxYesNoNumber.h"

namespace lexicon
{
    struct MxYesNoNumber::Impl
    {
    public:
        Impl( const MxEnumYesNo& value_in )
        :myYesNo( value_in )
        ,myNumber( 0 )
        ,myIsNumeric( false )
        {}
        
        Impl( const MxNumberDecimal& value_in )
        :myYesNo( enums::YesNo::no )
        ,myNumber( value_in )
        ,myIsNumeric( true )
        {}
        
        Impl( const std::string& value_in )
        :myYesNo( enums::YesNo::no )
        ,myNumber( 0 )
        ,myIsNumeric( false )
        { fromString( value_in ); }
        
        Impl()
        :myYesNo( enums::YesNo::no )
        ,myNumber( 0 )
        ,myIsNumeric( false )
        {}
        
    public:
        bool fromString( const std::string& value_in )
        {
            MxEnumYesNo tempYesNo;
            MxNumberDecimal tempNumeric( 0L );
            if( tempYesNo.fromString( value_in ) )
            {
                setValue( tempYesNo );
                return true;
            }
            if( tempNumeric.fromString( value_in ) )
            {
                setValue( tempNumeric );
                return true;
            }
            return false;
        }
        
        void setValue( const MxNumberDecimal& value_in )
        {
            myIsNumeric = true;
            myNumber = value_in;
            myYesNo = MxEnumYesNo( enums::YesNo::no );
        }
        
        void setValue( const MxEnumYesNo& value_in )
        {
            myIsNumeric = false;
            myNumber = MxNumberDecimal( 0 );
            myYesNo = MxEnumYesNo( value_in );
        }
        
        bool isYesNo() const
        {
            return ! myIsNumeric;
        }
        
        bool isNumeric() const
        {
            return myIsNumeric;
        }
        
        MxEnumYesNo getValueYesNo() const
        {
            return myYesNo;
        }
        MxNumberDecimal getValueNumeric() const
        {
            return myNumber;
        }
        
        std::ostream& stream( std::ostream& os ) const
        {
            if ( isNumeric() )
            {
                return myNumber.stream( os );
            }
            else
            {
                return myYesNo.stream( os );
            }
        }
        
    private:
        MxEnumYesNo myYesNo;
        MxNumberDecimal myNumber;
        bool myIsNumeric;
        
    public:
        const static std::string myXmlTypeName;
        const static std::string myClassName;
        const static std::string myDocumentation;
        const static int myXsdID;
        
    }; // struct MxNumberDecimal::Impl
    
    const std::string MxYesNoNumber::Impl::myXmlTypeName = "yes-no-number";
    const std::string MxYesNoNumber::Impl::myClassName = "MxYesNoNumber";
    const std::string MxYesNoNumber::Impl::myDocumentation = "The yes-no-number type is used for attributes that can be either boolean or numeric values.";
    const int MxYesNoNumber::Impl::myXsdID = 52;
    
    /* ctor */
    MxYesNoNumber::MxYesNoNumber()
    :myImpl( new Impl() )
    {}
    
    MxYesNoNumber::MxYesNoNumber( const MxEnumYesNo& value_in )
    :myImpl( new Impl( value_in ) )
    {}
    
    MxYesNoNumber::MxYesNoNumber( const MxNumberDecimal& value_in )
    :myImpl( new Impl( value_in ) )
    {}
    
    MxYesNoNumber::MxYesNoNumber( const std::string& value_in )
    :myImpl( new Impl( value_in ) )
    {}
    
    /* dtor */
    MxYesNoNumber::~MxYesNoNumber() {}

    MxYesNoNumber::MxYesNoNumber( const MxYesNoNumber& other )
    :myImpl( new Impl( *( other.myImpl ) ) )
    {}
    
    MxYesNoNumber& MxYesNoNumber::operator=( const MxYesNoNumber& other )
    {
        myImpl = std::unique_ptr<Impl>( new Impl( *( other.myImpl ) ) );
        return *this;
    }
    
    /** Returns the name of this xs:simpleType as found in the musicxml.xsd
     document. **/
    std::string MxYesNoNumber::getXmlTypeName() const
    {
        return myImpl->myXmlTypeName;
    }
    
    /** Returns the name of this C++ class, i.e. 'MxNumberDecimal'. This is
     a function implemented by all objects that inherit from LexiconObject. **/
    std::string MxYesNoNumber::getClassName() const
    {
        return myImpl->myClassName;
    }
    
    /** Returns the documentation for this musicxml type as found in the musicxml.xsd
     document. **/
    std::string MxYesNoNumber::getDocumentation() const
    {
        return myImpl->myDocumentation;
    }
    
    /** Returns true if the contained value is a MxEnumYesNo value. **/
    bool MxYesNoNumber::isYesNo() const
    {
        return ! myImpl->isNumeric();
    }
    
    /** Returns true if the contained value is a MxNumberDecimal value. **/
    bool MxYesNoNumber::isNumeric() const
    {
        return myImpl->isNumeric();
    }
    
    /** if isYesNo()==true then returns the MxEnumYesNo value.
     if isYesNo()==false then will always return an "no" valued MxEnumYesNo.
     **/
    MxEnumYesNo MxYesNoNumber::getValueYesNo() const
    {
        return myImpl->getValueYesNo();
    }
    
    /** if isNumeric()==true then returns the MxNumberDecimal value.
     if isNumeric()==false then will always return an "0" valued MxNumberDecimal.
     **/
    MxNumberDecimal MxYesNoNumber::getValueNumeric() const
    {
        return myImpl->getValueNumeric();
    }
    
    /** will set the MxEnumYesNo value, will zero-out the
     MxNumberDeciml value, and will cause isYesNo() to return true. **/
    void MxYesNoNumber::setValue( const MxEnumYesNo& value_in )
    {
        myImpl->setValue( value_in );
    }
    
    /** will set the MxNumberDeciml value, will set the
     MxEnumYesNo value to "no", and will cause isNumeric() to return true. **/
    void MxYesNoNumber::setValue( const long double& value_in )
    {
        myImpl->setValue( value_in );
    }
    
    /** will return either "yes", "no" or a string representation
     of the numeric value, depending on internal state. **/
    std::ostream& MxYesNoNumber::stream( std::ostream& os_out ) const
    {
        return myImpl->stream( os_out );
    }
    
    /** if the passed string is "yes" or "no", will set the MxEnumYesNo
     value.  Otherwise will try to parse the string as a numeric. Returns
     true if either of these efforts succeeds. **/
    bool MxYesNoNumber::fromString( const std::string& value_in )
    {
        return myImpl->fromString( value_in );
    }

    bool MxYesNoNumber::operator==( const MxYesNoNumber& other ) const
    {
        if ( isYesNo() )
        {
            return getValueYesNo().operator==( other.getValueYesNo() );
        }
        else
        {
            return getValueNumeric().operator==( other.getValueNumeric() );
        }
    }
    bool MxYesNoNumber::operator!=( const MxYesNoNumber& other ) const
    {
        if ( isYesNo() )
        {
            return getValueYesNo().operator!=( other.getValueYesNo() );
        }
        else
        {
            return getValueNumeric().operator!=( other.getValueNumeric() );
        }
    }
    bool MxYesNoNumber::operator<=( const MxYesNoNumber& other ) const
    {
        if ( isYesNo() )
        {
            return getValueYesNo().operator<=( other.getValueYesNo() );
        }
        else
        {
            return getValueNumeric().operator<=( other.getValueNumeric() );
        }
    }
    bool MxYesNoNumber::operator>=( const MxYesNoNumber& other ) const
    {
        if ( isYesNo() )
        {
            return getValueYesNo().operator>=( other.getValueYesNo() );
        }
        else
        {
            return getValueNumeric().operator>=( other.getValueNumeric() );
        }
    }
    bool MxYesNoNumber::operator>( const MxYesNoNumber& other ) const
    {
        if ( isYesNo() )
        {
            return getValueYesNo().operator>( other.getValueYesNo() );
        }
        else
        {
            return getValueNumeric().operator>( other.getValueNumeric() );
        }
    }
    bool MxYesNoNumber::operator<( const MxYesNoNumber& other ) const
    {
        if ( isYesNo() )
        {
            return getValueYesNo().operator<( other.getValueYesNo() );
        }
        else
        {
            return getValueNumeric().operator<( other.getValueNumeric() );
        }
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

