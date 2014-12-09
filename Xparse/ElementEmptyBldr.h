/* See MusicXML License at the bottom of this code page. */

/* matthew james briggs */

#pragma once
#include <iostream>
#include <vector>
#include <memory>
#include "Function.h"
#include "Parameter.h"
#include "Include.h"
#include "ClassFileHeader.h"
#include "FunctionGroup.h"
#include "DataMember.h"
#include "AttGrpInfo.h"
#include "FileInfo.h"
#include "TestCode.h"
#include "TestFile.h"
#include "TestGroup.h"
#include "ElementEmptyInfo.h"
#include "AttGrpBldr.h"
#include "LexiconBaseObjects.h"
#include "XparseHelperFunctions.h"

namespace XsdClasses
{
    class ElementEmptyBldr;
    typedef std::shared_ptr<ElementEmptyBldr> HElementEmptyBldr;
    typedef std::vector<HElementEmptyBldr> ElementEmptyBldrs;
    
    class ElementEmptyBldr
    {
        
    public:
        ElementEmptyBldr( const HElementEmptyInfo& info );
        virtual ~ElementEmptyBldr();
        static ElementEmptyBldrs createElementEmptyBldrs();

        
        void setName ( const std::string& name_in );
        std::string getName() const;
        void setNamespaceNesting ( const std::vector<std::string>& namespaces_in );
        void addPrivateFunctionGroup( const mjb::FunctionGroup& functionGroup_in );
        void addPublicFunctionGroup( const mjb::FunctionGroup& functionGroup_in );
        bool isImplementationHidden() const;
        void hideImplementation();
        void unhideImplementation();
        void addPrivateConstStaticDatamember( const mjb::DataMember& data_member_in );
        void addPrivateDatamember( const mjb::DataMember& data_member_in );
        void setInfo( const HElementEmptyInfo& info_in );
        std::string getHFile() const;
        FileInfo getHFileInfo() const;
        std::string getCppFile() const;
        FileInfo getCppFileInfo() const;
        std::string getTestFile() const;
        FileInfo getTestFileInfo() const;
        
        void setAuthor( const std::string& author_in );
        void setDate( const std::string& date_in );
        void setBriefDescription( const std::string& desciption_in );
        void setFullDescription( const std::string& fullDescription_in );
        void setProjectName( const std::string& projectName_in );
        void setProjectVersionNumber( const std::string& versionNumber_in );
        void setPublicIncludes( const std::vector<mjb::Include>& includes_in );
        void addPublicInclude( const mjb::Include& include_in );
        void setPrivateIncludes( const std::vector<mjb::Include>& includes_in );
        void addPrivateInclude( const mjb::Include& include_in );
        void setEmail( const std::string& email_in );
        void setUrl( const std::string& url_in );
        void setMusicXmlID( int id_in );
        HElementEmptyInfo getInfo() const;
        
        std::string getNamespaceQualifiers() const;
        
        int getNamespaceCount() const;
        
        std::string getOutputDirectoryCpp() const;
        void setOutputDirectoryCpp( const std::string& value_in );
        std::string getOutputDirectoryH() const;
        void setOutputDirectoryH( const std::string& value_in );
        std::string getOutputDirectoryTest() const;
        void setOutputDirectoryTest( const std::string& value_in );
        
        /* VALUE OBJECT */
        std::string getValueObjectObjectInstantiationString() const;
        std::string getValueObjectToString() const;
        void changeValueObjectValue() const;
        
    private:
        std::string myName;
        std::vector<std::string> myNamespaces;
        mjb::HClassFileHeader myHFileHeader;
        mjb::HClassFileHeader myCppFileHeader;
        mjb::FunctionGroupCollection myPrivateFunctionGroups;
        mjb::FunctionGroupCollection myPublicFunctionGroups;
        bool myIsImpl;
        std::vector<mjb::DataMember> myPrivateConstStaticDataMembers;
        std::vector<mjb::DataMember> myPrivateDataMembers;
        HElementEmptyInfo myInfo;

        CxEmptyInfo::AttributePods myAttributePods;
        
        std::string myOutputDirectoryCpp;
        std::string myOutputDirectoryH;
        std::string myOutputDirectoryTest;
        std::string myClassNamePrefix;
        
        void datachanged();
        std::string openNamespaces() const;
        std::string closeNamespaces() const;
        std::string baselineTabs() const;
        std::string baselineIndent( int indent ) const;
        
        // mutable lexicon::HMxParseableObject myValueObject;

        
        void getHFile01_Top( std::stringstream& ss ) const;
        void getHFile02_DeclareClass( std::stringstream& ss ) const;
        void getHFile03_DeclareConstructors( std::stringstream& ss ) const;
        void getHFile04_DeclarePublicFunctions( std::stringstream& ss ) const;
        void getHFile05_DeclareImpl( std::stringstream& ss ) const;
        void getHFile06_CloseDeclaration( std::stringstream& ss ) const;
        
        void getCppFileImpl01_Head( std::stringstream& ss ) const;
        void getCppFileImpl02_DeclareStruct( std::stringstream& ss ) const;
        void getCppFileImpl03_DeclareDatamembers( std::stringstream& ss ) const;
        void getCppFileImpl04_DeclareStaticData( std::stringstream& ss ) const;
        void getCppFileImpl05_DeclarePublicFunctions( std::stringstream& ss ) const;
        void getCppFileImpl06_DeclarePrivateFunctions( std::stringstream& ss ) const;
        void getCppFileImpl07_CloseImplDeclaration( std::stringstream& ss ) const;
        void getCppFileImpl07_DefineStaticData( std::stringstream& ss ) const;
        void getCppFileImpl09_CloseNamespace( std::stringstream& ss ) const;
        
        void getCppFileClass01_OpenNamespace( std::stringstream& ss ) const;
        void getCppFileClass02_BeginClassDefinition( std::stringstream& ss ) const;
        void getCppFileClass03_DefineConstructor( std::stringstream& ss ) const;
        void getCppFileClass04_DefineDestructor( std::stringstream& ss ) const;
        void getCppFileClass05_DefineCopyCtor( std::stringstream& ss ) const;
        void getCppFileClass06_DefineAssignmentOp( std::stringstream& ss ) const;
        void getCppFileClass07_DefinePublicFunctions( std::stringstream& ss ) const;
        void getCppFileClass08_CloseNamespaces( std::stringstream& ss ) const;
        void getCppFileClass09_FunctionDatabaseTable() const;
        
        enum FuncLoc { Public = 0, Impl = 1 };
        // Function createFunctionGetValue( FuncLoc loc ) const;
        // Function createFunctionSetValue( FuncLoc loc ) const;
        Function createFunctionGetElementName( FuncLoc loc ) const;
        
        Function createFunctionGetXmlTypeName( FuncLoc loc ) const;
        Function createFunctionGetClassName( FuncLoc loc ) const;
        Function createFunctionGetDocumentation( FuncLoc loc ) const;
        Function createFunctionToString( FuncLoc loc ) const;
        Parameter createParameterComparisonOperators() const;
        Function createFunctionOperatorEqEq( FuncLoc loc ) const;
        Function createFunctionOperatorNotEq( FuncLoc loc ) const;
        Function createFunctionStream( FuncLoc loc ) const;
        FunctionCollection createFunctionGetValues( FuncLoc loc ) const;
        FunctionCollection createFunctionSetValues( FuncLoc loc ) const;
        FunctionCollection createFunctionGetIsRequred( FuncLoc loc ) const;
        FunctionCollection createFunctionGetIsPresent( FuncLoc loc ) const;
        FunctionCollection createFunctionSetIsPresent( FuncLoc loc ) const;
        FunctionCollection createFunctionGetHasDefault( FuncLoc loc ) const;
        FunctionCollection createFunctionGetDefaultValue( FuncLoc loc ) const;
        Function createFunctionGetMinOccurs( FuncLoc loc ) const;
        Function createFunctionGetMaxOccurs( FuncLoc loc ) const;
        Function createFunctionGetIsMaxOccursUnbounded( FuncLoc loc ) const;
        
        
        FunctionGroupCollection createFnGroups( FuncLoc loc ) const;
        FunctionGroup createFnGrpElementAndValue( FuncLoc loc ) const;
        FunctionGroup createFnGrpGetClassInfo( FuncLoc loc ) const;
        FunctionGroup createFnGrpGetStrings( FuncLoc loc ) const;
        FunctionGroup createFnGrpComparisonOps( FuncLoc loc ) const;
        FunctionGroup createFnGrpGetValues( FuncLoc loc ) const;
        FunctionGroup createFnGrpSetValues( FuncLoc loc ) const;
        FunctionGroup createFnGrpGetIsRequired( FuncLoc loc ) const;
        FunctionGroup createFnGrpGetIsPresent( FuncLoc loc ) const;
        FunctionGroup createFnGrpSetIsPresent( FuncLoc loc ) const;
        FunctionGroup createFnGrpGetHasDefault( FuncLoc loc ) const;
        FunctionGroup createFnGrpGetDefaultValue( FuncLoc loc ) const;
        FunctionGroup createFnGrpOccurs( FuncLoc loc ) const;
        
        DataMemberCollection createDataMembers() const;
        // DataMember createSimpleContentDataMember() const;
        
        void init();
        void init01_CreateNames();
        void init02_StaticDataMembers();
        void init02b_AddAttributesAndAttributeGroups();
        void init03_IncludeFiles();
        void init04_Documentation();
        void init05_Namespaces();
        
        /***** TESTS ******/
        mjb::TestGroup testGenConstructor() const;
        mjb::TestGroup testGenClassInfoGetters() const;
        mjb::TestGroup testGenSetValueFuncs() const;
        mjb::TestGroup testGenGetIsRequiredFuncs() const;
        mjb::TestGroup testGenIsPresent() const;
        mjb::TestGroup testGenToString() const;
        mjb::TestGroup testGenIsDefaultDefined() const;
        mjb::TestGroup testGenGetDefaultValue() const;
        mjb::TestGroup testGenCtorValue() const;
        mjb::TestGroup testGenOccurs() const;
        std::string testGenToStringExpected( std::vector<bool> bools, XsdClasses::Attributes attributes, bool escape, const std::string& elementName, const std::string& value ) const;
        std::string testGenToStringRandomElementName( int testNumber ) const;
        
        /***** TESTFILE ******/
        mjb::TestFile tfileGen() const;
        
        /****** HELPERS *********/
        void writeBools( std::vector<bool>& bools ) const;
        bool allBoolsTrue( std::vector<bool>& bools ) const;
        bool allBoolsFalse( std::vector<bool>& bools ) const;
        void changeAttributeValues( Attributes& attributes ) const;
        Strings isPresentPatternCodeLines( std::vector<bool>& bools, Attributes& attributes, const std::string& objectVariableName ) const;
        Strings setValueLines( Attributes& attributes, const std::string& objectVariableName ) const;
        std::string testName( const std::string& testName, int& testNum ) const;
        TestCode startToStringTest( int& testNum, const std::string& className ) const;
        void toStringTestAddCheckingLines( TestCode& test ) const;
        
    };
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

