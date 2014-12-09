/* matthew james briggs */

#include "IClassBldr.h"
#include <string>
#include <sstream>
#include "tab.h"

namespace mjb
{
    /* ctor */
    IClassBldr::IClassBldr( const xparse::ElementPtr& XsdNode )
    :myXsdNode( XsdNode )
    ,myName( "DefaultConstructed" )
    ,myNamespaces()
    ,myHFileHeader( new ClassFileHeader() )
    ,myCppFileHeader( new ClassFileHeader() )
    ,myPrivateFunctionGroups()
    ,myPublicFunctionGroups()
    ,myPrivateConstStaticDataMembers()
    ,myPrivateDataMembers()
    ,myOutputDirectoryCpp()
    ,myOutputDirectoryH()
    ,myOutputDirectoryTest()
    ,myClassNamePrefix()
    {}
    
    /* dtor */
    IClassBldr::~IClassBldr() {}
    
    void IClassBldr::datachanged()
    {
        myHFileHeader->setClassNameNamespaceQualifier( getNamespaceQualifiers() );
        myCppFileHeader->setClassNameNamespaceQualifier( getNamespaceQualifiers() );
        myHFileHeader->setClassName( myName );
        myCppFileHeader->setClassName( myName );
        myHFileHeader->setFileType( ClassFileHeader::fileType::h );
        myCppFileHeader->setFileType( ClassFileHeader::fileType::cpp );
    }
    
    FunctionGroupCollection IClassBldr::getPublicFunctionGroups() const
    {
        return myPublicFunctionGroups;
    }
    
    std::string IClassBldr::getClassNamePrefix() const
    {
        return myClassNamePrefix;
    }

    void IClassBldr::setClassNamePrefix( const std::string& value_in )
    {
        myClassNamePrefix = value_in;
    }
    
    void IClassBldr::setName ( const std::string& name_in )
    {
        myName = name_in;
        datachanged();
    }
    std::string IClassBldr::getName() const
    {
        return myName;
    }
    void IClassBldr::setNamespaceNesting ( const std::vector<std::string>& namespaces_in )
    {
        myNamespaces = namespaces_in;
        datachanged();
    }
    
    FileInfo IClassBldr::getCppFileInfo() const
    {
        std::stringstream ss;
        ss << getName() << ".cpp";
        FileInfo f;
        f.setDirectory( getOutputDirectoryCpp() );
        f.setFileName( ss.str() );
        return f;
    }
    FileInfo IClassBldr::getHFileInfo() const
    {
        std::stringstream ss;
        ss << getName() << ".h";
        FileInfo f;
        f.setDirectory( getOutputDirectoryH() );
        f.setFileName( ss.str() );
        return f;
    }
    
    FileInfo IClassBldr::getTestFileInfo() const
    {
        std::stringstream ss;
        ss << getName() << "Test" << ".cpp";
        FileInfo f;
        f.setDirectory( getOutputDirectoryTest() );
        f.setFileName( ss.str() );
        return f;
    }
    std::string IClassBldr::getOutputDirectoryCpp() const
    {
        return myOutputDirectoryCpp;
    }
    void IClassBldr::setOutputDirectoryCpp( const std::string& value_in )
    {
        FileInfo f;
        f.setDirectory( value_in );
        f.setFileName( "fake.cpp" );
        myOutputDirectoryCpp = f.getDirectory();
    }
    std::string IClassBldr::getOutputDirectoryH() const
    {
        return myOutputDirectoryH;
    }
    void IClassBldr::setOutputDirectoryH( const std::string& value_in )
    {
        FileInfo f;
        f.setDirectory( value_in );
        f.setFileName( "fake.h" );
        myOutputDirectoryH = f.getDirectory();
    }
    std::string IClassBldr::getOutputDirectoryTest() const
    {
        return myOutputDirectoryTest;
    }
    void IClassBldr::setOutputDirectoryTest( const std::string& value_in )
    {
        FileInfo f;
        f.setDirectory( value_in );
        f.setFileName( "fakeTest.cpp" );
        myOutputDirectoryTest = f.getDirectory();
    }
    
    void IClassBldr::addPrivateFunctionGroup( const FunctionGroup& functionGroup_in )
    {
        myPrivateFunctionGroups.push_back( functionGroup_in );
        datachanged();
    }
    
    void IClassBldr::addPublicFunctionGroup( const FunctionGroup& functionGroup_in )
    {
        myPublicFunctionGroups.push_back( functionGroup_in );
        datachanged();
    }
    
    
    void IClassBldr::addPrivateConstStaticDatamember(const DataMember& data_member_in)
    {
        myPrivateConstStaticDataMembers.push_back( data_member_in );
        datachanged();
    }
    void IClassBldr::addPrivateDatamember(const DataMember& data_member_in)
    {
        myPrivateDataMembers.push_back( data_member_in );
        datachanged();
    }
    
    void IClassBldr::setAuthor( const std::string& author_in )
    {
        myHFileHeader->setAuthor( author_in );
        myCppFileHeader->setAuthor( author_in );
        datachanged();
    }
    
    void IClassBldr::setDate( const std::string& date_in )
    {
        myHFileHeader->setDate( date_in );
        myCppFileHeader->setDate( date_in );
        datachanged();
    }
    
    void IClassBldr::setBriefDescription( const std::string& desciption_in )
    {
        myHFileHeader->setBriefDescription( desciption_in );
        myCppFileHeader->setBriefDescription( desciption_in );
        datachanged();
    }
    
    void IClassBldr::setFullDescription( const std::string& fullDescription_in )
    {
        myHFileHeader->setFullDescription( fullDescription_in );
        datachanged();
    }
    
    void IClassBldr::setProjectName( const std::string& projectName_in )
    {
        myHFileHeader->setProjectName( projectName_in );
        myCppFileHeader->setProjectName( projectName_in );
        datachanged();
    }
    
    void IClassBldr::setProjectVersionNumber( const std::string& versionNumber_in )
    {
        myHFileHeader->setProjectVersionNumber( versionNumber_in );
        myCppFileHeader->setProjectVersionNumber( versionNumber_in );
        datachanged();
    }
    
    void IClassBldr::setPublicIncludes( const std::vector<Include>& includes_in )
    {
        myHFileHeader->setIncludes( includes_in );
        datachanged();
    }
    
    void IClassBldr::addPublicInclude( const Include& include_in )
    {
        myHFileHeader->addInclude( include_in );
        datachanged();
    }
    
    void IClassBldr::setPrivateIncludes( const std::vector<Include>& includes_in )
    {
        myCppFileHeader->setIncludes( includes_in );
        datachanged();
    }
    
    void IClassBldr::addPrivateInclude( const Include& include_in )
    {
        myCppFileHeader->addInclude( include_in );
        datachanged();
    }
    
    void IClassBldr::setEmail( const std::string& email_in )
    {
        myHFileHeader->setEmail( email_in );
        myCppFileHeader->setEmail( email_in );
        datachanged();
    }
    
    void IClassBldr::setUrl( const std::string& url_in )
    {
        myHFileHeader->setUrl( url_in );
        myCppFileHeader->setUrl( url_in );
        datachanged();
    }
    
    void IClassBldr::setMusicXmlID( int id_in )
    {
        myHFileHeader->setMusicXmlID( id_in );
        myCppFileHeader->setMusicXmlID( id_in );
        datachanged();
    }
    
    std::string IClassBldr::getNamespaceQualifiers() const
    {
        std::stringstream ss;
        for ( auto nameSpace : myNamespaces )
        {
            ss << nameSpace;
            ss << "::";
        }
        return ss.str();
    }
    
    
    int IClassBldr::getNamespaceCount() const
    {
        return (int)myNamespaces.size();
    }
    
    std::string IClassBldr::openNamespaces() const
    {
        std::stringstream ss;
        for ( int i=0; i < getNamespaceCount(); ++i )
        {
            ss << tab( i ) << "namespace " << myNamespaces[i] << std::endl;
            ss << tab( i ) << "{" << std::endl;
        }
        return ss.str();
    }
    
    std::string IClassBldr::closeNamespaces() const
    {
        std::stringstream ss;
        for ( int i=getNamespaceCount()-1; i >= 0; --i )
        {
            ss << tab( i ) << "} // namespace " << myNamespaces[i] << std::endl << std::endl;
        }
        return ss.str();
    }
    
    std::string IClassBldr::baselineTabs() const
    {
        return tab( getNamespaceCount() );
    }
    
    std::string IClassBldr::baselineIndent( int indent ) const
    {
        return tab( getNamespaceCount() + indent );
    }
    
}