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

namespace mjb
{
    class IClassBldr;
    typedef std::shared_ptr<IClassBldr> HClassBldr;
    
    typedef std::vector<HClassBldr> ClassBldrs;
    
    class IClassBldr
    {

    public:
        IClassBldr( const xparse::ElementPtr& XsdNode );
        virtual ~IClassBldr();
        
        /* simple values */
        virtual void setName ( const std::string& name_in );
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
        
        /* ADDING FUNCTIONS AND DATA MEMBERS */
        virtual void addPrivateFunctionGroup( const mjb::FunctionGroup& functionGroup_in );
        virtual void addPublicFunctionGroup( const mjb::FunctionGroup& functionGroup_in );
        virtual void addPrivateConstStaticDatamember( const mjb::DataMember& data_member_in );
        virtual void addPrivateDatamember( const mjb::DataMember& data_member_in );
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
        
        /* VALUE OBJECT */
        virtual std::string getValueObjectObjectInstantiationString() const = 0 ;
        virtual std::string getValueObjectToString() const = 0 ;
        virtual void changeValueObjectValue() const = 0 ;
        
        /* CONVENIENCE FUNCTIONS */
        virtual std::string openNamespaces() const;
        virtual std::string closeNamespaces() const;
        virtual std::string baselineTabs() const;
        virtual std::string baselineIndent( int indent ) const;
        
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
        std::string myOutputDirectoryCpp;
        std::string myOutputDirectoryH;
        std::string myOutputDirectoryTest;
        std::string myClassNamePrefix;
    protected:
        void datachanged();
    };
}