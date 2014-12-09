/* See MusicXML License at the bottom of this code page. */

/* matthew james briggs */

#pragma once
#include <iostream>
#include <vector>
#include "Function.h"
#include "DataMember.h"
#include <memory.h>
#include "row.h"
#include "getAttributeGroupResults.h"
#include "AttributeInfoV2.h"
#include <list>
#include "FunctionGroup.h"

using namespace mjb;

namespace XsdClasses
{
    
    enum AGCategory
    {
        Onesie = 0,
        Simple = 1,
        Combo = 2,
        ComboPlus = 3
    };
    
    struct AttributeGroupTableFields;
    typedef std::vector<AttributeGroupTableFields> AttributeGroupTable;
    typedef AttributeGroupTable::iterator AttributeGroupTableIter;
    typedef AttributeGroupTable::const_iterator AttributeGroupTableIterConst;

/******************************************************************
DEFINE AttributeGroupTableFields Struct
*******************************************************************/
    struct AttributeGroupTableFields
    {
        AttributeGroupTableFields( const mysqlpp::Row& row )
        :ID( -1 )
        ,Name( "" )
        ,CppName( "" )
        ,Category( AGCategory::Onesie )
        ,NestedAGCount( 0 )
        ,ChildAttrCount( 0 )
        ,IsImplemented( false )
        ,Documentation( "" )
        {
            std::stringstream sstr;
            sstr << row["ID"];
            sstr >> ID;
            sstr.str( "" );
            
            (row["Name"]).to_string( Name );
            (row["CppName"]).to_string( CppName );
            
            std::string tempCategory;
            (row["Category"]).to_string( tempCategory );
            if( tempCategory == "Onesie" )
            {
                Category = AGCategory::Onesie;
            }
            else if( tempCategory == "Combo" )
            {
                Category = AGCategory::Combo;
            }
            else if( tempCategory == "ComboPlus" )
            {
                Category = AGCategory::ComboPlus;
            }
            else if( tempCategory == "Simple" )
            {
                Category = AGCategory::Simple;
            }
            
            std::stringstream sstrNestedAGCount;
            std::string tempNestedAGCount;
            (row["NestedAttributeGroups"]).to_string( tempNestedAGCount );
            sstrNestedAGCount << tempNestedAGCount;
            sstrNestedAGCount >> NestedAGCount;
            
            std::stringstream sstrChildAttrCount;
            std::string tempChildAttrCount;
            (row["AttributeCount"]).to_string( tempChildAttrCount );
            sstrChildAttrCount << tempChildAttrCount;
            sstrChildAttrCount >> ChildAttrCount;
            
            std::stringstream sstrIsImplemented;
            std::string tempIsImplemented;
            (row["IsImplemented"]).to_string( tempIsImplemented );
            sstrIsImplemented << tempIsImplemented;
            sstrIsImplemented >> IsImplemented;
            
            (row["Documentation"]).to_string( Documentation );
            
        }
        
        AttributeGroupTableFields()
        :ID( -1 )
        ,Name( "" )
        ,CppName( "" )
        ,Category( AGCategory::Onesie )
        ,NestedAGCount( 0 )
        ,ChildAttrCount( 0 )
        ,IsImplemented( false )
        ,Documentation( "" )
        {}
        
        int ID;
        std::string Name;
        std::string CppName;
        AGCategory Category;
        int NestedAGCount;
        int ChildAttrCount;
        bool IsImplemented;
        std::string Documentation;
        
        static AttributeGroupTable getAttributeGroupTable()
        {
            AttributeGroupTable output;
            mysqlpp::StoreQueryResult res = getAttributeGroupResults();
            for( auto it = res.begin(); it != res.end(); ++it )
            {
                mysqlpp::Row row = *it;
                AttributeGroupTableFields fields( row );
                output.push_back( fields );
            }
            return output;
        }
    };

    
    class AttGrpInfo;
    typedef std::shared_ptr<AttGrpInfo> HAttGrpInfo;
    typedef std::vector<HAttGrpInfo> AGs;
    typedef AGs::iterator AGsIter;
    typedef AGs::const_iterator AGsIterCont;
    
    /*
        String = 0,
        MxEnum = 1,
        MxNumberLongDouble = 2,
        MxNumberInt = 3,
        MxColor = 4,
        MxFontSize = 5,
        Other = -1
        */
        
    struct AttributeWithObject
    {
        AttributeInfoV2 Attribute;
        lexicon::HMxParseableObject Object;
        lexicon::HMxParseableObject StringCast;
        lexicon::HMxEnum EnumCast;
        lexicon::HMxNumberLongDouble LongDoubleCast;
        lexicon::HMxNumberInt IntCast;
        std::shared_ptr<lexicon::MxColor> MxColorCast;
        std::shared_ptr<lexicon::MxFontSize> MxFontSizeCast;
    };
    typedef std::vector<AttributeWithObject> AttributeObjectList;

/******************************************************************
DECLARE AttGrpInfo Class
*******************************************************************/
    class AttGrpInfo
    {

    public:
        AttGrpInfo();
        virtual ~AttGrpInfo();
        
        int getID() const;
        std::string getName() const;
        std::string getCppName() const;
        AGCategory getCategory() const;
        int getChildAttributeGroupCount() const;
        int getChildAttributeCount() const;
        bool getIsImplemented() const;
        std::string getDocumentation() const;
        Attributes getAttributes() const;
        Attributes getAttributesAndChildAttributes() const;
        AGs getChildAttributeGroups() const;
        
        FunctionCollection getGetValueFunctions() const;
        FunctionCollection getSetValueFunctions() const;
        FunctionCollection getGetIsRequiredFunctions() const;
        FunctionCollection getGetIsPresentFunctions() const;
        FunctionCollection getSetIsPresentFunctions() const;
        FunctionCollection getHasDefaultFunctions() const;
        FunctionCollection getGetDefaultValueFunctions() const;
        DataMemberCollection getDataMemberCollection() const;
        DataMemberCollection getDataMemberCollection( const std::string& attributeGroupNamePrefix ) const;
        Function getStreamFunction() const;
        
        static void step01CreateNesting( AttributeGroupTable& tbl, AGs& ags );
        static void step02AddAttributes( AGs& ags );
        static std::string getSqlInsertFunction( const Function& f, int ID, const HAttGrpInfo& AGInfo, const std::string& FunctionGroup );
        static void sqlDeleteFunctions( int attributeGroupID );
        static void sqlInsertFunctionGroup( const FunctionGroup& grp, int& FirstFunctionID, const HAttGrpInfo& AGInfo );
        
        AttributeObjectList getAttributeObjectList() const;
        static std::string toString( const std::vector<bool>& isPresentPattern, const Attributes& attributes, bool escape );
        
    private:
        struct ChildAG { int AbsolutePositionID; HAttGrpInfo referencedAttributeGroup; };
        typedef std::vector<ChildAG> ChildAttributeGroups;
        typedef ChildAttributeGroups::iterator ChildAttributeGroupIter;
        typedef ChildAttributeGroups::const_iterator ChildAttributeGroupIterConst;
        
        /* MEMBER DATA HERE */
        AttributeGroupTableFields myFields;
        ChildAttributeGroups myChildAttributeGroups;
        Attributes myAttributes;
        
        enum itemType { attribute = 0, attributeGroup = 1 };
        struct Item
        {
        public:
            Item()
            :ID( -1 )
            ,AbsolutePositionID( -1 )
            ,attributeInfo()
            ,attributeGroup( nullptr )
            {}
            
        public:
            int ID;
            itemType Type;
            int AbsolutePositionID;
            AttributeInfoV2 attributeInfo;
            AttGrpInfo* attributeGroup;
            bool operator<( const Item& rhs ) const { return AbsolutePositionID < rhs.AbsolutePositionID; }
        };
        typedef std::list<Item> OrderList;
        typedef OrderList::iterator OrderListIter;
        typedef OrderList::const_iterator OrderListIterConst;
        
        /* MORE DATA HERE */
        OrderList myOrder;
        
        void setOrder();
        std::string replaceMyWith( const std::string& input, const std::string& replaceMyWithThis ) const;
        std::string replaceMyWithGet( const std::string& input ) const;
        std::string replaceMyWithSet( const std::string& input ) const;
    };
}

/*
 three.`ID`
 ,three.`Name`
 ,data.`CppName`
 ,three.`Category`
 ,data.`IsImplemented`
 ,three.`NestedAttributeGroups`
 ,three.`AttributeCount`
*/


namespace XsdClasses
{
    
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

