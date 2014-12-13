/* matthew james briggs */

#pragma once
#include <iostream>
#include <vector>
#include "Include.h"
#include "Function.h"
#include "FunctionGroup.h"
#include "DataMember.h"
#include "FileInfo.h"
#include <memory>
#include "Element.h"
#include "TestCode.h"
#include "TestGroup.h"

namespace mjb
{
    class IClassBldr;
    typedef std::shared_ptr<IClassBldr> HClassBldr;
    
    typedef std::vector<HClassBldr> ClassBldrs;
    
    class IClassBldr
    {

    public:
        IClassBldr( const xparse::ElementPtr& XsdNode );
        IClassBldr( const xparse::ElementPtr& XsdNode, const std::string& classNamePrefix );
        virtual ~IClassBldr();
        
        /* simple values */
        virtual void setName ( const std::string& name_in );
        virtual void setName ( const std::string& name_in, bool add_class_name_prefix );
        virtual std::string getName() const;
        virtual void setNamespaceNesting ( const std::vector<std::string>& namespaces_in );
        virtual std::string getNamespaceQualifiers() const;
        virtual int getNamespaceCount() const;
        virtual void setAuthor( const std::string& author_in );
        virtual void setDate( const std::string& date_in );
        virtual void setBriefDescription( const std::string& desciption_in );
        virtual void setFullDescription( const std::string& fullDescription_in );
        virtual void setProjectName( const std::string& projectName_in );
        virtual void setProjectVersionNumber( const std::string& versionNumber_in );
        virtual void setPublicIncludes( const std::vector<mjb::Include>& includes_in );
        virtual void addPublicInclude( const mjb::Include& include_in );
        virtual void setPrivateIncludes( const std::vector<mjb::Include>& includes_in );
        virtual void addPrivateInclude( const mjb::Include& include_in );
        virtual void setEmail( const std::string& email_in );
        virtual void setUrl( const std::string& url_in );
        virtual void setMusicXmlID( int id_in );
        virtual std::string getClassNamePrefix() const;
        virtual void setClassNamePrefix( const std::string& value_in );
        virtual xparse::ElementPtr getXsdNode() const;
        virtual mjb::HClassFileHeader getHFileHeader() const;
        virtual mjb::HClassFileHeader getCppFileHeader() const;

        /* ADDING FUNCTIONS AND DATA MEMBERS */
        virtual void addPrivateFunctionGroup( const mjb::FunctionGroup& functionGroup_in );
        virtual void addPublicFunctionGroup( const mjb::FunctionGroup& functionGroup_in );
        
        
        virtual void addPrivateConstStaticDatamember( const mjb::DataMember& data_member_in );
        std::vector<DataMember>::iterator getPrivateConstStaticDatamembersBegin();
        std::vector<DataMember>::iterator getPrivateConstStaticDatamembersEnd();
        std::vector<DataMember>::const_iterator getPrivateConstStaticDatamembersBegin() const;
        std::vector<DataMember>::const_iterator getPrivateConstStaticDatamembersEnd() const;
        
        virtual void addPrivateDatamember( const mjb::DataMember& data_member_in );
        std::vector<DataMember>::iterator getPrivateDatamembersBegin();
        std::vector<DataMember>::iterator getPrivateDatamembersEnd();
        std::vector<DataMember>::const_iterator getPrivateDatamembersBegin() const;
        std::vector<DataMember>::const_iterator getPrivateDatamembersEnd() const;
        
        virtual void addPublicDatamember( const mjb::DataMember& data_member_in );
        std::vector<DataMember>::iterator getPublicDatamembersBegin();
        std::vector<DataMember>::iterator getPublicDatamembersEnd();
        std::vector<DataMember>::const_iterator getPublicDatamembersBegin() const;
        std::vector<DataMember>::const_iterator getPublicDatamembersEnd() const;
        
        virtual FunctionGroupCollection getPublicFunctionGroups() const;
        
        /* FILE OUTPUT */
        virtual std::string getOutputDirectoryCpp() const;
        virtual void setOutputDirectoryCpp( const std::string& value_in );
        virtual std::string getOutputDirectoryH() const;
        virtual void setOutputDirectoryH( const std::string& value_in );
        virtual std::string getOutputDirectoryTest() const;
        virtual void setOutputDirectoryTest( const std::string& value_in );
        virtual std::string getHFile() const = 0 ;
        virtual FileInfo getHFileInfo() const;
        virtual std::string getCppFile() const = 0 ;
        virtual FileInfo getCppFileInfo() const;
        virtual std::string getTestFile() const = 0 ;
        virtual FileInfo getTestFileInfo() const;
        virtual std::string getXmlDocumentation() const;
        virtual void setXmlDocumentation( const std::string& value_in );
        virtual std::string getXmlName() const;
        virtual void setXmlName( const std::string& value_in );
        
        
        /* VALUE OBJECT */
        virtual std::string getValueObjectObjectInstantiationString() const = 0 ;
        virtual std::string getValueObjectToString() const = 0 ;
        virtual void changeValueObjectValue() const = 0 ;
        
        /* CONVENIENCE FUNCTIONS */
        virtual std::string openNamespaces() const;
        virtual std::string closeNamespaces() const;
        virtual std::string baselineTabs() const;
        virtual std::string baselineIndent( int indent ) const;
        
        virtual FunctionGroup alterFunctionGroupForImpl( FunctionGroup fgrp ) const;
        
        virtual void addTestGroup( const TestGroup& tests );
        virtual TestGroupCollection getTestGroups() const;
        
    private:
        xparse::ElementPtr myXsdNode;
        std::string myName;
        std::vector<std::string> myNamespaces;
        mjb::HClassFileHeader myHFileHeader;
        mjb::HClassFileHeader myCppFileHeader;
        mjb::FunctionGroupCollection myPrivateFunctionGroups;
        mjb::FunctionGroupCollection myPublicFunctionGroups;
        std::vector<mjb::DataMember> myPrivateConstStaticDataMembers;
        std::vector<mjb::DataMember> myPrivateDataMembers;
        std::vector<mjb::DataMember> myPublicDataMembers;
        std::string myOutputDirectoryCpp;
        std::string myOutputDirectoryH;
        std::string myOutputDirectoryTest;
        std::string myClassNamePrefix;
        std::string myXmlDocumentation;
        std::string myXmlName;
        TestGroupCollection myTests;
        
    protected:
        void datachanged();
        void init();
    };
}