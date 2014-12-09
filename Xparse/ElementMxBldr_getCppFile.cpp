/* See MusicXML License at the bottom of this code page. */

/* matthew james briggs */

#include "ElementMxBldr.h"
#include "SectionSeparatorComment.h"
#include "tab.h"
#include "end.h"

namespace XsdClasses
{
    
    std::string ElementMxBldr::getCppFile() const
    {
        std::stringstream ss;
        
        getCppFileImpl01_Head( ss );
        getCppFileImpl02_DeclareStruct( ss );
        getCppFileImpl03_DeclareDatamembers( ss );
        getCppFileImpl04_DeclareStaticData( ss );
        getCppFileImpl05_DeclarePublicFunctions( ss );
        getCppFileImpl06_DeclarePrivateFunctions( ss );
        getCppFileImpl07_CloseImplDeclaration( ss );
        getCppFileImpl07_DefineStaticData( ss );
        getCppFileImpl09_CloseNamespace( ss );
        
        getCppFileClass01_OpenNamespace( ss );
        getCppFileClass02_BeginClassDefinition( ss );
        getCppFileClass03_DefineConstructor( ss );
        getCppFileClass04_DefineDestructor( ss );
        getCppFileClass05_DefineCopyCtor( ss );
        getCppFileClass06_DefineAssignmentOp( ss );
        getCppFileClass07_DefinePublicFunctions( ss );
        getCppFileClass08_CloseNamespaces( ss );
        getCppFileClass09_FunctionDatabaseTable();
        return ss.str();
    }
    
    void ElementMxBldr::getCppFileImpl01_Head( std::stringstream& ss ) const
    {
        ss << myCppFileHeader->toString( false ) << std::endl;
        SectionSeparatorComment classStart( "Impl", 90 );
        ss << classStart.toString() << std::endl;
        ss << end();
        ss << openNamespaces();
    }
    void ElementMxBldr::getCppFileImpl02_DeclareStruct( std::stringstream& ss ) const
    {
        /* Impl declaration */
        ss << baselineIndent( 0 ) << "struct " << myName << "::Impl" << std::endl;
        ss << baselineIndent( 0 ) << "{" << end();
        /* get the simple type */
        // std::string valuetype = createFunctionGetValue( FuncLoc::Public ).getReturnType();
        ss << baselineIndent( 1 ) << "Impl( ";
        std::string valtype = getInfo()->getSimpleContentCppDataType();;
        ss << "const " << valtype << "& value_in";
        ss << " )" << end();
        int i = 0;
        for ( DataMember dm : this->createDataMembers() )
        {
            ss << baselineIndent( 1 );
            if ( i == 0 )
            {
                ss << ":";
                ++i;
            }
            else
            {
                ss << ",";
            }
            ss << dm.getName() << "(";
            if ( dm.getMemberInitializationValue().size() > 0 )
            {
                ss << " " << dm.getMemberInitializationValue() << " ";
            }
            ss << ")" << end();
            
        }
        ss << baselineIndent( 1 ) << "{}" << end();
        ss << std::endl;
    }
    void ElementMxBldr::getCppFileImpl03_DeclareDatamembers( std::stringstream& ss ) const
    {
        /* Impl datamember declarations */
        ss << baselineIndent( 0 ) << "private:" << end();
        for ( auto datamember: createDataMembers() )
        {
            
            ss << baselineIndent( 1 ) << datamember.getDataType();
            ss << " " << datamember.getName() << ";" << std::endl;
        }
        ss << std::endl;
    }
    void ElementMxBldr::getCppFileImpl04_DeclareStaticData( std::stringstream& ss ) const
    {
        /* Impl static const datamember declarations */
        for ( auto datamember: myPrivateConstStaticDataMembers )
        {
            ss << baselineIndent( 1 ) << "const static " << datamember.getDataType();
            ss << " " << datamember.getName() << ";" << std::endl;
        }
        ss << std::endl;
    }
    void ElementMxBldr::getCppFileImpl05_DeclarePublicFunctions( std::stringstream& ss ) const
    {
        /* this is for the sql inserts */
        //int functionID = myInfo->getID() * 1000;
        AttGrpInfo::sqlDeleteFunctions( myInfo->getID() );
        
        ss << baselineIndent( 0 ) << "public:" << end() << end();;
        for ( FunctionGroup fgrp : createFnGroups( FuncLoc::Impl ) )
        {
            if ( fgrp.isPublic() )
            {
                if ( fgrp.size() > 0 )
                {
                    ss << fgrp.write("", getNamespaceCount()+1, ClassFileHeader::fileType::cpp, 90 );
                    ss << std::endl;
                    
                    /* this is for the sql inserts */
                    // AttGrpInfo::sqlInsertFunctionGroup( fgrp, functionID, myInfo );
                }
            }
        }
    }
    void ElementMxBldr::getCppFileImpl06_DeclarePrivateFunctions( std::stringstream& ss ) const
    {
        
    }
    void ElementMxBldr::getCppFileImpl07_CloseImplDeclaration( std::stringstream& ss ) const
    {
        ss << baselineIndent( 0 ) << "}; // struct " << myName << "::Impl"<< std::endl;
        ss << std::endl;
    }
    void ElementMxBldr::getCppFileImpl07_DefineStaticData( std::stringstream& ss ) const
    {
        /* Impl static const datamember instantiation */
        for ( auto datamember : myPrivateConstStaticDataMembers )
        {
            ss << baselineIndent( 0 ) << "const " << datamember.getDataType();
            ss << " " << myName << "::Impl::" << datamember.getName() << " = ";
            ss << datamember.getValue() << ";" << std::endl;
        }
        ss << std::endl;
    }
    void ElementMxBldr::getCppFileImpl09_CloseNamespace( std::stringstream& ss ) const
    {
        // ??? ss << baselineIndent( 0 ) << "const std::unique_ptr<" << myInfo->getCppName() << "::Impl> ";
        // ??? ss << myInfo->getCppName() << "::" << "myImpl" << "( new " << myInfo->getCppName() << "::Impl() );" << end();
        ss << closeNamespaces();
        ss << end();
    }
    void ElementMxBldr::getCppFileClass01_OpenNamespace( std::stringstream& ss ) const
    {
        /** begin class definition **/
        SectionSeparatorComment classStart( myName, 90 );
        ss << classStart.toString() << std::endl;
        ss << std::endl;
        
    }
    void ElementMxBldr::getCppFileClass02_BeginClassDefinition( std::stringstream& ss ) const
    {
        ss << openNamespaces();
        ss << end();
    }
    void ElementMxBldr::getCppFileClass03_DefineConstructor( std::stringstream& ss ) const
    {
        /** construcor **/
        SectionSeparatorComment constructorsComment( "Constructor, Destructor, Copy, Assignment", 90 );
        // std::string valuetype = createFunctionGetValue( FuncLoc::Public ).getReturnType();
        ss << constructorsComment.toString() << std::endl;
        ss << std::endl;
        ss << baselineIndent( 0 ) << myName << "::" << myName << "( ";
        ss << "const " << getInfo()->getSimpleContentCppDataType() << "& value_in";
        ss << " )" << std::endl;
        //ss << baselineIndent( 4 ) << "  = " << myInfo.getName( true ) << "::" << myInfo.getValue(0) << " )" << std::endl;
        ss << baselineIndent( 0 ) << ":myImpl( new Impl( value_in ) ) {}" << end() << end();
        //ss << 5 << ", " << 6  << " ) {}" << std::endl;
    }
    void ElementMxBldr::getCppFileClass04_DefineDestructor( std::stringstream& ss ) const
    {
        /** destructor **/
        ss << baselineIndent( 0 ) << myName << "::" << "~" << myName << "() {}" << end() << end();
    }
    void ElementMxBldr::getCppFileClass05_DefineCopyCtor( std::stringstream& ss ) const
    {
        /** copy constructor **/
        ss << baselineIndent( 0 ) << myName << "::" << myName;
        ss << "( const " << myName << "& other )" << std::endl;
        ss << baselineIndent( 0 ) << ":myImpl( new Impl( *(other.myImpl) ) ) {}" << end() << end();
    }
    void ElementMxBldr::getCppFileClass06_DefineAssignmentOp( std::stringstream& ss ) const
    {
        /** assignment **/
        ss << baselineIndent( 0 ) << myName << "& " << myName << "::operator=( const ";
        ss << myName << "& other )" << end();
        ss << baselineIndent( 0 ) << "{" << end();
        ss << baselineIndent( 1 ) << "this->myImpl = std::unique_ptr<Impl>( new Impl( *(other.myImpl) ) );" << end();
        ss << baselineIndent( 1 ) << "return *this;" << end();
        ss << baselineIndent( 0 ) << "}" << end() << end();
    }
    void ElementMxBldr::getCppFileClass07_DefinePublicFunctions( std::stringstream& ss ) const
    {
        /* this is for the cpp file */
        std::stringstream qualifier_temp;
        qualifier_temp << myName << "::";
        std::string qualifier = qualifier_temp.str();
        for ( FunctionGroup fgrp : createFnGroups( FuncLoc::Public ) )
        {
            if ( fgrp.isPublic() )
            {
                if ( fgrp.size() > 0 )
                {
                    ss << fgrp.write( qualifier, getNamespaceCount(), ClassFileHeader::fileType::cpp, 90 );
                    ss << std::endl;
                }
            }
        }
    }
    void ElementMxBldr::getCppFileClass08_CloseNamespaces( std::stringstream& ss ) const
    {
        ss << end();
        ss << closeNamespaces();
    }
    void ElementMxBldr::getCppFileClass09_FunctionDatabaseTable() const
    {

    }
    
}
#if 1==0
#endif


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

