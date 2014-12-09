/* See MusicXML License at the bottom of this code page. */

/* matthew james briggs */

#include "AttributeInfo.h"
#include <sstream>

namespace xparse
{
    /* ctor */
    AttributeInfo::AttributeInfo()
    :myDefault( "UnknownDefault" )
    ,myFixed( "UnknownFixed" )
    ,myName( "UnknownName" )
    ,myRef( "UnknownRef" )
    ,myType( "UnknownType" )
    ,myUse( "UnknownUse" )
    ,myParentType( "UnknownParentType" )
    ,myParentName( "UnknownParentName" )
    ,myTopLevelElementType( "UnknownTopLevelType" )
    ,myTopLevelElementName( "UnknownTopLevelName" )
    ,myAttributeID( 0 )
    {}
    
    AttributeInfo::AttributeInfo( const std::string& Name,
                                  const std::string& Type,
                                  const std::string& Default,
                                  const std::string& Use,
                                  const std::string& Ref,
                                  const std::string& Fixed )
    :myDefault( Default )
    ,myFixed( Fixed )
    ,myName( Name )
    ,myRef( Ref )
    ,myType( Type )
    ,myUse( Use )
    ,myParentType( "UnknownParentType" )
    ,myParentName( "UnknownParentName" )
    ,myTopLevelElementType( "UnknownTopLevelType" )
    ,myTopLevelElementName( "UnknownTopLevelName" )
    ,myAttributeID( 0 )
    {}
    
    AttributeInfo::AttributeInfo( const std::string& Name,
                                 const std::string& Type,
                                 const std::string& Default,
                                 const std::string& Use,
                                 const std::string& Ref,
                                 const std::string& Fixed,
                                 const std::string& ParentType,
                                 const std::string& ParentName )
    :myDefault( Default )
    ,myFixed( Fixed )
    ,myName( Name )
    ,myRef( Ref )
    ,myType( Type )
    ,myUse( Use )
    ,myParentType( ParentType )
    ,myParentName( ParentName )
    ,myTopLevelElementType( "UnknownTopLevelType" )
    ,myTopLevelElementName( "UnknownTopLevelName" )
    ,myAttributeID( 0 )
    {}
    
    std::string AttributeInfo::getDefault() const
    {
        return myDefault;
    }
    std::string AttributeInfo::getFixed() const
    {
        return AttributeInfo::myFixed;
    }
    std::string AttributeInfo::getName() const
    {
        return myName;
    }
    std::string AttributeInfo::getRef() const
    {
        return myRef;
    }
    std::string AttributeInfo::getType() const
    {
        return myType;
    }
    std::string AttributeInfo::getUse() const
    {
        return myUse;
    }
    std::string AttributeInfo::getParentType() const
    {
        return myParentType;
    }
    std::string AttributeInfo::getParentName() const
    {
        return myParentName;
    }
    std::string AttributeInfo::getTopLevelElementName() const
    {
        return myTopLevelElementName;
    }
    std::string AttributeInfo::getTopLevelElementType() const
    {
        return myTopLevelElementType;
    }
    std::string AttributeInfo::getHeaderRow()
    {
        return "ID,Name,Type,Default,Use,Ref,Fixed,ParentType,ParentName,TopLevelType,TopLevelName,ParentIsTopLevel";
    }
    int AttributeInfo::getAttributeID() const
    {
        return myAttributeID;
    }
    bool AttributeInfo::parentIsTopLevel() const
    {
        return ( getParentName() == getTopLevelElementName() ) && ( getParentType() == getTopLevelElementType() );
    }
    std::string AttributeInfo::toString() const
    {
        std::stringstream ss;
        ss << getAttributeID() << ",";
        ss << getName() << ",";
        ss << getType() << ",";
        ss << getDefault() << ",";
        ss << getUse() << ",";
        ss << getRef() << ",";
        ss << getFixed() << ",";
        ss << getParentType() << ",";
        ss << getParentName() << ",";
        ss << getTopLevelElementType() << ",";
        ss << getTopLevelElementName() << ",";
        ss << std::boolalpha << parentIsTopLevel();
        
        
        return ss.str();
    }
    
    void AttributeInfo::setDefault( const std::string& value )
    {
        myDefault = value;
    }
    void AttributeInfo::setFixed( const std::string& value )
    {
        myFixed = value;
    }
    void AttributeInfo::setName( const std::string& value )
    {
        myName = value;
    }
    void AttributeInfo::setRef( const std::string& value )
    {
        myRef = value;
    }
    void AttributeInfo::setType( const std::string& value )
    {
        myType = value;
    }
    void AttributeInfo::setUse( const std::string& value )
    {
        myUse = value;
    }
    void AttributeInfo::setParentType( const std::string& value )
    {
        myParentType = value;
    }
    void AttributeInfo::setParentName( const std::string& value )
    {
        myParentName = value;
    }
    void AttributeInfo::setTopLevelElementName( const std::string& value )
    {
        myTopLevelElementName = value;
    }
    void AttributeInfo::setTopLevelElementType( const std::string& value )
    {
        myTopLevelElementType = value;
    }
    void AttributeInfo::setAttributeID(int value)
    {
        myAttributeID = value;
    }
    int AttributeInfo::compare( const AttributeInfo& other ) const
    {
        int result = compare( this->getName(), other.getName() );
        if (  result != 0 )
        {
            return result;
        }
        else
        {
            result = compare( this->getType(), other.getType() );
            if ( result != 0 )
            {
                return result;
            }
            else
            {
                result = compare( this->getDefault(), other.getDefault() );
                if ( result != 0 )
                {
                    return result;
                }
                else
                {
                    result = compare( this->getUse(), other.getUse() );
                    if ( result != 0 )
                    {
                        return result;
                    }
                    else
                    {
                        result = compare( this->getRef(), other.getRef() );
                        if ( result != 0 )
                        {
                            return result;
                        }
                        else
                        {
                            result = compare( this->getFixed(), other.getFixed() );
                            if ( result != 0 )
                            {
                                return result;
                            }
                            else
                            {
                                result = compare( this->getParentType(), other.getParentType() );
                                if ( result != 0 )
                                {
                                    return result;
                                }
                                else
                                {
                                    result = compare( this->getTopLevelElementType(), other.getTopLevelElementType() );
                                    if ( result != 0 )
                                    {
                                        return result;
                                    }
                                    else
                                    {
                                        result = compare( this->getAttributeID(), other.getAttributeID() );
                                        if ( result != 0 )
                                        {
                                            return result;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        return 0;
    }
    
    int AttributeInfo::compare( const std::string& left, const std::string right ) const
    {
        if ( left > right )
        {
            return 1;
        }
        else if ( left < right )
        {
            return -1;
        }
        return 0;
    }
    int AttributeInfo::compare( int left, const int right ) const
    {
        if ( left > right )
        {
            return 1;
        }
        else if ( left < right )
        {
            return -1;
        }
        return 0;
    }
    bool AttributeInfo::operator==( const AttributeInfo& other ) const
    {
        return compare( other ) == 0;
    }
    bool AttributeInfo::operator!=( const AttributeInfo& other ) const
    {
        return compare( other ) != 0;
    }
    bool AttributeInfo::operator>=( const AttributeInfo& other ) const
    {
        return compare( other ) >= 0;
    }
    bool AttributeInfo::operator<=( const AttributeInfo& other ) const
    {
        return compare( other ) <= 0;
    }
    bool AttributeInfo::operator>( const AttributeInfo& other ) const
    {
        return compare( other ) > 0;
    }
    bool AttributeInfo::operator<( const AttributeInfo& other ) const
    {
        return compare( other ) < 0;
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

