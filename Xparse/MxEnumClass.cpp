/* See MusicXML License at the bottom of this code page. */

/* matthew james briggs */

#include "MxEnumClass.h"
#include <sstream>
#include "tab.h"
#include "SectionSeparatorComment.h"
#include "end.h"

namespace mjb
{
    /* ctor */
    MxEnumClass::MxEnumClass( const std::string& name_in )
    :myName( name_in )
    ,myNamespaces()
    ,myHFileHeader( new ClassFileHeader() )
    ,myCppFileHeader( new ClassFileHeader() )
    ,myPrivateFunctionGroups()
    ,myPublicFunctionGroups()
    ,myIsImpl( true )
    ,myPrivateConstStaticDataMembers()
    ,myPrivateDataMembers()
    ,myEnum()
    {
        datachanged();
    }
    
    /* dtor */
    MxEnumClass::~MxEnumClass() {}
    
    void MxEnumClass::setName ( const std::string& name_in )
    {
        myName = name_in;
        datachanged();
    }
    
    void MxEnumClass::setNamespaceNesting ( const std::vector<std::string>& namespaces_in )
    {
        myNamespaces = namespaces_in;
        datachanged();
    }
    
    void MxEnumClass::addPrivateFunctionGroup( const FunctionGroup& functionGroup_in )
    {
        myPrivateFunctionGroups.push_back( functionGroup_in );
        datachanged();
    }
    
    void MxEnumClass::addPublicFunctionGroup( const FunctionGroup& functionGroup_in )
    {
        myPublicFunctionGroups.push_back( functionGroup_in );
        datachanged();
    }
    
    bool MxEnumClass::isImplementationHidden() const
    {
        return myIsImpl;
    }
    
    void MxEnumClass::hideImplementation()
    {
        myIsImpl = true;
        datachanged();
    }
    
    void MxEnumClass::unhideImplementation()
    {
        myIsImpl = false;
        datachanged();
    }
    
    void MxEnumClass::addPrivateConstStaticDatamember(const DataMember& data_member_in)
    {
        myPrivateConstStaticDataMembers.push_back( data_member_in );
        datachanged();
    }
    void MxEnumClass::addPrivateDatamember(const DataMember& data_member_in)
    {
        myPrivateDataMembers.push_back( data_member_in );
        datachanged();
    }
    
    void MxEnumClass::setEnum( const Enum& enum_in )
    {
        myEnum = enum_in;
        datachanged();
    }
    
    std::string MxEnumClass::getHFile() const
    {
        /** **/
        std::stringstream ss;
        ss << myHFileHeader->toString();
        ss << myEnum.toString();
        ss << openNamespaces();
        SectionSeparatorComment classComment( myName, 90 );
        ss << classComment.toString() << std::endl << std::endl;
        
        /** begin class declaration **/
        ss << baselineTabs() << "class " << myName << " : public MxParseableObject" << std::endl;;
        ss << baselineTabs() << "{" << std::endl;
        ss << baselineTabs() << "public:" << std::endl << std::endl;
        
        /** construcor **/
        SectionSeparatorComment constructorsComment( "Constructor, Destructor, Copy, Assignment", 90 );
        ss << constructorsComment.toString() << std::endl;
        ss << std::endl;
        ss << baselineIndent( 1 ) << myName << "( ";
        ss << myEnum.getName( true ) << " value_in" << std::endl;
        ss << baselineIndent( 4 ) << "  = " << myEnum.getName( true ) << "::" << myEnum.getValue(0) << " );" << std::endl;
        
        /** destructor **/
        ss << baselineIndent( 1 ) << "virtual ~" << myName << "();" << std::endl;

        /** copy constructor **/
        ss << baselineIndent( 1 ) << myName;
        ss << "( const " << myName << "& other );" << std::endl;
        
        /** assignment **/
        ss << baselineIndent( 1 ) << myName << "& operator=( const ";
        ss << myName << "& other );";
        ss << std::endl << std::endl;
        
        /** public function groups **/
        for ( FunctionGroup fgrp : myPublicFunctionGroups )
        {
            ss << fgrp.write("", getNamespaceCount()+1, ClassFileHeader::fileType::h, 90 );
            ss << std::endl;
        }
        
        /** private implementation **/
        SectionSeparatorComment implComment( "Impl", 90 );
        ss <<implComment.toString() << std::endl << std::endl;
        ss << baselineTabs() << "private:" << std::endl;
        ss << baselineIndent( 1 ) << "class Impl;" << std::endl;
        ss << baselineIndent( 1 ) << "std::unique_ptr<Impl> myImpl;" << std::endl;
        
        /** close class declaration **/
        ss << std::endl;
        ss << baselineTabs() << "}; // class " << myName << std::endl << std::endl;
        ss << closeNamespaces();
        return ss.str();
    }
    
    std::string MxEnumClass::getCppFile() const
    {
        std::stringstream ss;
        ss << myCppFileHeader->toString( false ) << std::endl;
        ss << openNamespaces();
        
        /* Impl declaration */
        ss << baselineIndent( 1 ) << "struct " << myName << "::Impl" << std::endl;
        ss << baselineIndent( 1 ) << "{" << std::endl;
        ss << baselineIndent( 2 ) << "Impl( " << myEnum.getName( true ) << " value_in )" << std::endl;
        ss << baselineIndent( 2 ) << ":myValue( value_in )" << " {}" << std::endl;
        ss << baselineIndent( 2 ) << "~Impl() {}" << std::endl;
        ss << std::endl;
        
        /* Impl datamember declarations */
        for ( auto datamember: myPrivateDataMembers )
        {
            ss << baselineIndent( 2 ) << datamember.getDataType();
            ss << " " << datamember.getName() << ";" << std::endl;
        }
        ss << std::endl;
        
        /* Impl static const datamember declarations */
        for ( auto datamember: myPrivateConstStaticDataMembers )
        {
            ss << baselineIndent( 2 ) << "const static " << datamember.getDataType();
            ss << " " << datamember.getName() << ";" << std::endl;
        }
        ss << std::endl;
        ss << baselineIndent( 1 ) << "}; // struct " << myName << "::Impl"<< std::endl;
        ss << std::endl;
        
        
        /* Impl static const datamember instantiation */
        for ( auto datamember : myPrivateConstStaticDataMembers )
        {
            ss << baselineIndent( 1 ) << "const " << datamember.getDataType();
            ss << " " << myName << "::Impl::" << datamember.getName() << " = ";
            ss << datamember.getValue() << ";" << std::endl;
        }
        ss << std::endl;
        
        /** begin class definition **/
        SectionSeparatorComment classStart( myName, 90 );
        ss << classStart.toString() << std::endl;
        ss << std::endl;
        
        /** construcor **/
        SectionSeparatorComment constructorsComment( "Constructor, Destructor, Copy, Assignment", 90 );
        ss << constructorsComment.toString() << std::endl;
        ss << std::endl;
        ss << baselineIndent( 1 ) << myName << "::" << myName << "( ";
        ss << myEnum.getName( true ) << " value_in )" << std::endl;
        //ss << baselineIndent( 4 ) << "  = " << myEnum.getName( true ) << "::" << myEnum.getValue(0) << " )" << std::endl;
        ss << baselineIndent( 1 ) << ":myImpl( new Impl( value_in ) ) {}" << std::endl;
        
        /** destructor **/
        ss << baselineIndent( 1 ) << myName << "::" << "~" << myName << "() {}" << std::endl;
        
        /** copy constructor **/
        ss << baselineIndent( 1 ) << myName << "::" << myName;
        ss << "( const " << myName << "& other )" << std::endl;
        ss << baselineIndent( 1 ) << ":myImpl( new Impl( other.myImpl->myValue ) ) {}" << std::endl;
        
        /** assignment **/
        ss << baselineIndent( 1 ) << myName << "& " << myName << "::operator=( const ";
        ss << myName << "& other )" << end();
        ss << baselineIndent( 1 ) << "{" << end();
        ss << baselineIndent( 2 ) << "this->myImpl = std::unique_ptr<Impl>( new Impl( other.myImpl->myValue ) );" << end();
        ss << baselineIndent( 2 ) << "return *this;" << end();
        ss << baselineIndent( 1 ) << "}" << end();
        
        
        
        ss << end();
        
        std::stringstream qualifier_temp;
        qualifier_temp << myName << "::";
        std::string qualifier = qualifier_temp.str();
        for ( FunctionGroup fgrp : myPublicFunctionGroups )
        {
            ss << fgrp.write( qualifier, getNamespaceCount()+1, ClassFileHeader::fileType::cpp, 90 );
            ss << std::endl;
        }
        //ss << std::endl;
        
        ss << closeNamespaces();
        return ss.str();
    }
    
    void MxEnumClass::setAuthor( const std::string& author_in )
    {
        myHFileHeader->setAuthor( author_in );
        myCppFileHeader->setAuthor( author_in );
        datachanged();
    }
    
    void MxEnumClass::setDate( const std::string& date_in )
    {
        myHFileHeader->setDate( date_in );
        myCppFileHeader->setDate( date_in );
        datachanged();
    }
    
    
    void MxEnumClass::setBriefDescription( const std::string& desciption_in )
    {
        myHFileHeader->setBriefDescription( desciption_in );
        myCppFileHeader->setBriefDescription( desciption_in );
        datachanged();
    }
    
    void MxEnumClass::setFullDescription( const std::string& fullDescription_in )
    {
        myHFileHeader->setFullDescription( fullDescription_in );
        datachanged();
    }
    
    void MxEnumClass::setProjectName( const std::string& projectName_in )
    {
        myHFileHeader->setProjectName( projectName_in );
        myCppFileHeader->setProjectName( projectName_in );
        datachanged();
    }
    
    void MxEnumClass::setProjectVersionNumber( const std::string& versionNumber_in )
    {
        myHFileHeader->setProjectVersionNumber( versionNumber_in );
        myCppFileHeader->setProjectVersionNumber( versionNumber_in );
        datachanged();
    }
    
    void MxEnumClass::setPublicIncludes( const std::vector<Include>& includes_in )
    {
        myHFileHeader->setIncludes( includes_in );
        datachanged();
    }
    
    void MxEnumClass::addPublicInclude( const Include& include_in )
    {
        myHFileHeader->addInclude( include_in );
        datachanged();
    }
    
    void MxEnumClass::setPrivateIncludes( const std::vector<Include>& includes_in )
    {
        myCppFileHeader->setIncludes( includes_in );
        datachanged();
    }
    
    void MxEnumClass::addPrivateInclude( const Include& include_in )
    {
        myCppFileHeader->addInclude( include_in );
        datachanged();
    }
    
    void MxEnumClass::setEmail( const std::string& email_in )
    {
        myHFileHeader->setEmail( email_in );
        myCppFileHeader->setEmail( email_in );
        datachanged();
    }
    
    void MxEnumClass::setUrl( const std::string& url_in )
    {
        myHFileHeader->setUrl( url_in );
        myCppFileHeader->setUrl( url_in );
        datachanged();
    }
    
    void MxEnumClass::setMusicXmlID( int id_in )
    {
        myHFileHeader->setMusicXmlID( id_in );
        myCppFileHeader->setMusicXmlID( id_in );
        datachanged();
    }
    
    std::string MxEnumClass::getNamespaceQualifiers() const
    {
        std::stringstream ss;
        for ( auto nameSpace : myNamespaces )
        {
            ss << nameSpace;
            ss << "::";
        }
        return ss.str();
    }
    
    void MxEnumClass::datachanged()
    {
        myHFileHeader->setClassNameNamespaceQualifier( getNamespaceQualifiers() );
        myCppFileHeader->setClassNameNamespaceQualifier( getNamespaceQualifiers() );
        myHFileHeader->setClassName( myName );
        myCppFileHeader->setClassName( myName );
        myHFileHeader->setFileType( ClassFileHeader::fileType::h );
        myCppFileHeader->setFileType( ClassFileHeader::fileType::cpp );
    }
    
    int MxEnumClass::getNamespaceCount() const
    {
        return (int)myNamespaces.size();
    }
    
    std::string MxEnumClass::openNamespaces() const
    {
        std::stringstream ss;
        for ( int i=0; i < getNamespaceCount(); ++i )
        {
            ss << tab( i ) << "namespace " << myNamespaces[i] << std::endl;
            ss << tab( i ) << "{" << std::endl;
        }
        return ss.str();
    }
    
    std::string MxEnumClass::closeNamespaces() const
    {
        std::stringstream ss;
        for ( int i=getNamespaceCount()-1; i >= 0; --i )
        {
            ss << tab( i ) << "} // namespace " << myNamespaces[i] << std::endl << std::endl;
        }
        return ss.str();
    }
    
    std::string MxEnumClass::baselineTabs() const
    {
        return tab( getNamespaceCount() );
    }
    
    std::string MxEnumClass::baselineIndent( int indent ) const
    {
        return tab( getNamespaceCount() + indent );
    }
    Enum MxEnumClass::getEnum() const
    {
        return myEnum;
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

