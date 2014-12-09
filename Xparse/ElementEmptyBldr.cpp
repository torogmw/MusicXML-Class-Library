/* See MusicXML License at the bottom of this code page. */

/* matthew james briggs */



#include "ElementEmptyBldr.h"
#include <sstream>
#include "tab.h"
#include "SectionSeparatorComment.h"
#include "end.h"
#include "ElementEmptyParser.h"

using namespace mjb;
//using namespace xparse;

namespace XsdClasses
{
    /* ctor */
    ElementEmptyBldr::ElementEmptyBldr( const HElementEmptyInfo& info )
    :IClassBldr( info->getElement() )
    ,myName( info->getCppName() )
    ,myNamespaces()
    ,myHFileHeader( new ClassFileHeader() )
    ,myCppFileHeader( new ClassFileHeader() )
    ,myPrivateFunctionGroups()
    ,myPublicFunctionGroups()
    ,myIsImpl( true )
    ,myPrivateConstStaticDataMembers()
    ,myPrivateDataMembers()
    ,myInfo( info )
    ,myOutputDirectoryCpp( "" )
    ,myOutputDirectoryH( "" )
    ,myOutputDirectoryTest( "" )
    ,myClassNamePrefix( "MxEe" )
    {
        init();
        datachanged();
    }
    
    /* dtor */
    ElementEmptyBldr::~ElementEmptyBldr() {}
    
    void ElementEmptyBldr::setName ( const std::string& name_in )
    {
        myName = name_in;
        datachanged();
    }
    std::string ElementEmptyBldr::getName() const
    {
        return myName;
    }
    void ElementEmptyBldr::setNamespaceNesting ( const std::vector<std::string>& namespaces_in )
    {
        myNamespaces = namespaces_in;
        datachanged();
    }
    
    FileInfo ElementEmptyBldr::getCppFileInfo() const
    {
        std::stringstream ss;
        ss << getName() << ".cpp";
        FileInfo f;
        f.setDirectory( getOutputDirectoryCpp() );
        f.setFileName( ss.str() );
        return f;
    }
    FileInfo ElementEmptyBldr::getHFileInfo() const
    {
        std::stringstream ss;
        ss << getName() << ".h";
        FileInfo f;
        f.setDirectory( getOutputDirectoryH() );
        f.setFileName( ss.str() );
        return f;
    }
    
    FileInfo ElementEmptyBldr::getTestFileInfo() const
    {
        std::stringstream ss;
        ss << getName() << "Test" << ".cpp";
        FileInfo f;
        f.setDirectory( getOutputDirectoryTest() );
        f.setFileName( ss.str() );
        return f;
    }
    std::string ElementEmptyBldr::getOutputDirectoryCpp() const
    {
        return myOutputDirectoryCpp;
    }
    void ElementEmptyBldr::setOutputDirectoryCpp( const std::string& value_in )
    {
        FileInfo f;
        f.setDirectory( value_in );
        f.setFileName( "fake.cpp" );
        myOutputDirectoryCpp = f.getDirectory();
    }
    std::string ElementEmptyBldr::getOutputDirectoryH() const
    {
        return myOutputDirectoryH;
    }
    void ElementEmptyBldr::setOutputDirectoryH( const std::string& value_in )
    {
        FileInfo f;
        f.setDirectory( value_in );
        f.setFileName( "fake.h" );
        myOutputDirectoryH = f.getDirectory();
    }
    std::string ElementEmptyBldr::getOutputDirectoryTest() const
    {
        return myOutputDirectoryTest;
    }
    void ElementEmptyBldr::setOutputDirectoryTest( const std::string& value_in )
    {
        FileInfo f;
        f.setDirectory( value_in );
        f.setFileName( "fakeTest.cpp" );
        myOutputDirectoryTest = f.getDirectory();
    }
    
    void ElementEmptyBldr::addPrivateFunctionGroup( const FunctionGroup& functionGroup_in )
    {
        myPrivateFunctionGroups.push_back( functionGroup_in );
        datachanged();
    }
    
    void ElementEmptyBldr::addPublicFunctionGroup( const FunctionGroup& functionGroup_in )
    {
        myPublicFunctionGroups.push_back( functionGroup_in );
        datachanged();
    }
    
    bool ElementEmptyBldr::isImplementationHidden() const
    {
        return myIsImpl;
    }
    
    void ElementEmptyBldr::hideImplementation()
    {
        myIsImpl = true;
        datachanged();
    }
    
    void ElementEmptyBldr::unhideImplementation()
    {
        myIsImpl = false;
        datachanged();
    }
    
    void ElementEmptyBldr::addPrivateConstStaticDatamember(const DataMember& data_member_in)
    {
        myPrivateConstStaticDataMembers.push_back( data_member_in );
        datachanged();
    }
    void ElementEmptyBldr::addPrivateDatamember(const DataMember& data_member_in)
    {
        myPrivateDataMembers.push_back( data_member_in );
        datachanged();
    }
    
    void ElementEmptyBldr::setInfo( const HElementEmptyInfo& info_in )
    {
        myInfo = info_in;
        datachanged();
    }
    
    void ElementEmptyBldr::setAuthor( const std::string& author_in )
    {
        myHFileHeader->setAuthor( author_in );
        myCppFileHeader->setAuthor( author_in );
        datachanged();
    }
    
    void ElementEmptyBldr::setDate( const std::string& date_in )
    {
        myHFileHeader->setDate( date_in );
        myCppFileHeader->setDate( date_in );
        datachanged();
    }
    
    void ElementEmptyBldr::setBriefDescription( const std::string& desciption_in )
    {
        myHFileHeader->setBriefDescription( desciption_in );
        myCppFileHeader->setBriefDescription( desciption_in );
        datachanged();
    }
    
    void ElementEmptyBldr::setFullDescription( const std::string& fullDescription_in )
    {
        myHFileHeader->setFullDescription( fullDescription_in );
        datachanged();
    }
    
    void ElementEmptyBldr::setProjectName( const std::string& projectName_in )
    {
        myHFileHeader->setProjectName( projectName_in );
        myCppFileHeader->setProjectName( projectName_in );
        datachanged();
    }
    
    void ElementEmptyBldr::setProjectVersionNumber( const std::string& versionNumber_in )
    {
        myHFileHeader->setProjectVersionNumber( versionNumber_in );
        myCppFileHeader->setProjectVersionNumber( versionNumber_in );
        datachanged();
    }
    
    void ElementEmptyBldr::setPublicIncludes( const std::vector<Include>& includes_in )
    {
        myHFileHeader->setIncludes( includes_in );
        datachanged();
    }
    
    void ElementEmptyBldr::addPublicInclude( const Include& include_in )
    {
        myHFileHeader->addInclude( include_in );
        datachanged();
    }
    
    void ElementEmptyBldr::setPrivateIncludes( const std::vector<Include>& includes_in )
    {
        myCppFileHeader->setIncludes( includes_in );
        datachanged();
    }
    
    void ElementEmptyBldr::addPrivateInclude( const Include& include_in )
    {
        myCppFileHeader->addInclude( include_in );
        datachanged();
    }
    
    void ElementEmptyBldr::setEmail( const std::string& email_in )
    {
        myHFileHeader->setEmail( email_in );
        myCppFileHeader->setEmail( email_in );
        datachanged();
    }
    
    void ElementEmptyBldr::setUrl( const std::string& url_in )
    {
        myHFileHeader->setUrl( url_in );
        myCppFileHeader->setUrl( url_in );
        datachanged();
    }
    
    void ElementEmptyBldr::setMusicXmlID( int id_in )
    {
        myHFileHeader->setMusicXmlID( id_in );
        myCppFileHeader->setMusicXmlID( id_in );
        datachanged();
    }
    
    std::string ElementEmptyBldr::getNamespaceQualifiers() const
    {
        std::stringstream ss;
        for ( auto nameSpace : myNamespaces )
        {
            ss << nameSpace;
            ss << "::";
        }
        return ss.str();
    }
    
    
    int ElementEmptyBldr::getNamespaceCount() const
    {
        return (int)myNamespaces.size();
    }
    
    std::string ElementEmptyBldr::openNamespaces() const
    {
        std::stringstream ss;
        for ( int i=0; i < getNamespaceCount(); ++i )
        {
            ss << tab( i ) << "namespace " << myNamespaces[i] << std::endl;
            ss << tab( i ) << "{" << std::endl;
        }
        return ss.str();
    }
    
    std::string ElementEmptyBldr::closeNamespaces() const
    {
        std::stringstream ss;
        for ( int i=getNamespaceCount()-1; i >= 0; --i )
        {
            ss << tab( i ) << "} // namespace " << myNamespaces[i] << std::endl << std::endl;
        }
        return ss.str();
    }
    
    std::string ElementEmptyBldr::baselineTabs() const
    {
        return tab( getNamespaceCount() );
    }
    
    std::string ElementEmptyBldr::baselineIndent( int indent ) const
    {
        return tab( getNamespaceCount() + indent );
    }
    HElementEmptyInfo ElementEmptyBldr::getInfo() const
    {
        return myInfo;
    }
    ElementEmptyBldrs ElementEmptyBldr::createElementEmptyBldrs()
    {
        ElementEmptyParser parser;
        ElementEmptyInfos infos = parser.createElementEmptyInfos();
        ElementEmptyBldrs bldrs;
        for ( auto i : infos )
        {
            bldrs.push_back( std::make_shared<ElementEmptyBldr>( i ) );
        }
        return bldrs;
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

