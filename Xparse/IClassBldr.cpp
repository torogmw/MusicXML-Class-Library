/* matthew james briggs */

#include "IClassBldr.h"
#include <string>
#include <sstream>
#include "tab.h"
#include "mainConstants.h"
#include "getDateTime.h"

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
    {
        init();
        datachanged();
    }
    IClassBldr::IClassBldr( const xparse::ElementPtr& XsdNode, const std::string& classNamePrefix )
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
    ,myClassNamePrefix( classNamePrefix )
    {
        init();
        datachanged();
    }
    /* dtor */
    IClassBldr::~IClassBldr() {}
    
    void IClassBldr::init()
    {
        
        setOutputDirectoryCpp( constants::getPathLexiconTempSourceCode() );
        setOutputDirectoryH( constants::getPathLexiconTempSourceCode() );
        setOutputDirectoryTest( constants::getPathLexiconTempTestCode() );
        std::vector<std::string> namespaces_temp = { "lexicon" };
        setNamespaceNesting( namespaces_temp );

        myHFileHeader->setAuthor( "Matthew James Briggs" );
        myHFileHeader->setBriefDescription( "Brief Description Here" );
        myHFileHeader->setClassName( this->getName() );
        myHFileHeader->setClassNameNamespaceQualifier( "lexicon" );
        myHFileHeader->setDate( getDateTime() );
        myHFileHeader->setEmail( "matthew.james.briggs@gmail.com" );
        myHFileHeader->setFileType( mjb::ClassFileHeader::fileType::h );
        myHFileHeader->setFullDescription( "Full description goes here." );
        myHFileHeader->setMusicXmlID( getXsdNode()->getIndex() );
        myHFileHeader->setProjectName( "Lexicon" );
        myHFileHeader->setProjectVersionNumber( "1.0" );
        myHFileHeader->setUrl( "http://matthewjamesbriggs.com" );
        
        myCppFileHeader->setAuthor( myHFileHeader->getAuthor() );
        myCppFileHeader->setBriefDescription( myHFileHeader->getBriefDescription() );
        myCppFileHeader->setClassName( myHFileHeader->getClassName() );
        myCppFileHeader->setClassNameNamespaceQualifier( myHFileHeader->getClassNameNamespaceQualifier() );
        myCppFileHeader->setDate( myHFileHeader->getDate() );
        myCppFileHeader->setEmail( myHFileHeader->getEmail() );
        myCppFileHeader->setFileType( mjb::ClassFileHeader::fileType::cpp );
        myCppFileHeader->setFullDescription( myHFileHeader->getFullDescription() );
        myCppFileHeader->setMusicXmlID( myHFileHeader->getMusicXmlID() );
        myCppFileHeader->setProjectName( myHFileHeader->getProjectName() );
        myCppFileHeader->setProjectVersionNumber( myHFileHeader->getProjectVersionNumber() );
        myCppFileHeader->setUrl( myHFileHeader->getUrl() );

        // const static int myXsdID;
        DataMember xsdID;
        xsdID.setName( "myXsdID" );
        xsdID.setDataType( "int" );
        std::stringstream xsdIDValue;
        xsdIDValue << myXsdNode->getIndex();
        xsdID.setValue( xsdIDValue.str() );
        addPrivateConstStaticDatamember( xsdID );

		// const static std::string myXmlTypeName;
        DataMember xmlTypeName;
        xmlTypeName.setName( "myXmlTypeName" );
        xmlTypeName.setDataType( "std::string" );
        xmlTypeName.setValue( getXmlName() );
        xmlTypeName.setQuotes( Quotes::quotes );
        addPrivateConstStaticDatamember( xmlTypeName );
        
        
        
		// const static std::string myCppClassName;
        DataMember cppClassName;
        cppClassName.setName( "myCppClassName" );
        cppClassName.setDataType( "std::string" );
        cppClassName.setValue( getName() );
        cppClassName.setQuotes( Quotes::quotes);
        addPrivateConstStaticDatamember( cppClassName );
        
		// const static std::string myDocumentation;
        DataMember documentation;
        documentation.setName( "myDocumentation" );
        documentation.setDataType( "std::string" );
        documentation.setValue( getXmlDocumentation() );
        documentation.setQuotes( Quotes::quotes );
        addPrivateConstStaticDatamember( documentation );
        
        FunctionGroup getClassInfo;
        {
            Function f;
            f.setName( "getXmlTypeName" );
            f.setDocumentation( "Returns the name of this xs:element as found in the musicxml.xsd document." );
            f.setReturnType( "std::string" );
            f.isConst( true );
            f.setCode( "return myXmlTypeName;" );
            f.isConst( true );
            getClassInfo.addFunction( f );
        }
        {
            Function f;
            f.setName( "getClassName" );
            f.setDocumentation( "Returns the name of this C++ class." );
            f.setReturnType( "std::string" );
            f.isConst( true );
            f.setCode( "return myCppClassName;" );
            f.isConst( true );
            getClassInfo.addFunction( f );
        }
        {
            Function f;
            f.setName( "getDocumentation" );
            f.setDocumentation( "Returns the documentation for this musicxml type as found in the musicxml.xsd document." );
            f.setReturnType( "std::string" );
            f.isConst( true );
            f.setCode( "return myDocumentation;" );
            f.isConst( true );
            getClassInfo.addFunction( f );
        }
        addPublicFunctionGroup( getClassInfo );
    }
    
    void IClassBldr::datachanged()
    {
        myHFileHeader->setClassNameNamespaceQualifier( getNamespaceQualifiers() );
        myCppFileHeader->setClassNameNamespaceQualifier( getNamespaceQualifiers() );
        myHFileHeader->setClassName( myName );
        myCppFileHeader->setClassName( myName );
        myHFileHeader->setFileType( ClassFileHeader::fileType::h );
        myCppFileHeader->setFileType( ClassFileHeader::fileType::cpp );
        for ( auto dm = getPrivateConstStaticDatamembersBegin(); dm != getPrivateConstStaticDatamembersEnd(); ++dm )
        {
            if ( dm->getName() == "myXmlTypeName" )
            {
                dm->setValue( myXmlName );
            }
            else if ( dm->getName() == "myDocumentation" )
            {
                dm->setValue( myXmlDocumentation );
            }
            else if ( dm->getName() == "myCppClassName" )
            {
                dm->setValue( getName() );
            }
        }
        
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
        datachanged();
    }
    
    void IClassBldr::setName ( const std::string& name_in )
    {
        myName = name_in;
        datachanged();
    }
    void IClassBldr::setName ( const std::string& name_in, bool add_class_name_prefix )
    {
        if ( ! add_class_name_prefix )
        {
            setName( name_in );
        }
        else
        {
            std::stringstream ss;
            ss << getClassNamePrefix();
            ss << name_in;
            setName( ss.str() );
        }
        
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
        datachanged();
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
        datachanged();
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
        datachanged();
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
    xparse::ElementPtr IClassBldr::getXsdNode() const
    {
        return myXsdNode;
    }
    
    mjb::HClassFileHeader IClassBldr::getHFileHeader() const
    {
        return myHFileHeader;
    }
    mjb::HClassFileHeader IClassBldr::getCppFileHeader() const
    {
        return myCppFileHeader;
    }
    
//    void IClassBldr::addPrivateConstStaticDatamember( const mjb::DataMember& data_member_in )
//    {
//        myPrivateConstStaticDataMembers.push_back( data_member_in );
//    }
    std::vector<DataMember>::iterator IClassBldr::getPrivateConstStaticDatamembersBegin()
    {
        return myPrivateConstStaticDataMembers.begin();
    }

    std::vector<DataMember>::iterator IClassBldr::getPrivateConstStaticDatamembersEnd()
    {
        return myPrivateConstStaticDataMembers.end();
    }

    std::vector<DataMember>::const_iterator IClassBldr::getPrivateConstStaticDatamembersBegin() const
    {
        return myPrivateConstStaticDataMembers.cbegin();
    }

    std::vector<DataMember>::const_iterator IClassBldr::getPrivateConstStaticDatamembersEnd() const
    {
        return myPrivateConstStaticDataMembers.cend();
    }

    
//    void IClassBldr::addPrivateDatamember( const mjb::DataMember& data_member_in )
//    {
//        myPrivateDataMembers.push_back( data_member_in );
//    }

    std::vector<DataMember>::iterator IClassBldr::getPrivateDatamembersBegin()
    {
        return myPrivateDataMembers.begin();
    }

    std::vector<DataMember>::iterator IClassBldr::getPrivateDatamembersEnd()
    {
        return myPrivateDataMembers.end();
    }

    std::vector<DataMember>::const_iterator IClassBldr::getPrivateDatamembersBegin() const
    {
        return myPrivateDataMembers.cbegin();
    }

    std::vector<DataMember>::const_iterator IClassBldr::getPrivateDatamembersEnd() const
    {
        return myPrivateDataMembers.cend();
    }

    
    void IClassBldr::addPublicDatamember( const mjb::DataMember& data_member_in )
    {
        return myPublicDataMembers.push_back( data_member_in );
    }

    std::vector<DataMember>::iterator IClassBldr::getPublicDatamembersBegin()
    {
        return myPublicDataMembers.begin();
    }

    std::vector<DataMember>::iterator IClassBldr::getPublicDatamembersEnd()
    {
        return myPublicDataMembers.end();
    }

    std::vector<DataMember>::const_iterator IClassBldr::getPublicDatamembersBegin() const
    {
        return myPublicDataMembers.cbegin();
    }

    std::vector<DataMember>::const_iterator IClassBldr::getPublicDatamembersEnd() const
    {
        return myPublicDataMembers.cend();
    }
    std::string IClassBldr::getXmlDocumentation() const
    {
        return myXmlDocumentation;
    }
    void IClassBldr::setXmlDocumentation( const std::string& value_in )
    {
        myXmlDocumentation = value_in;
        datachanged();
    }
    std::string IClassBldr::getXmlName() const
    {
        return myXmlName;
    }
    void IClassBldr::setXmlName( const std::string& value_in )
    {
        myXmlName = value_in;
        datachanged();
    }
    
    FunctionGroup IClassBldr::alterFunctionGroupForImpl( FunctionGroup fgrp ) const
    {
        FunctionGroup output;
        output.setName( fgrp.getName() );
        if ( fgrp.isPrivate() )
        {
            output.setPrivate();
        }
        else
        {
            output.setPublic();
        }
        for ( auto f = fgrp.begin(); f != fgrp.end(); ++f )
        {
            Function alteredFunc;
            alteredFunc.setName( f->getName() );
            alteredFunc.setDocumentation( f->getDocumentation() );
            alteredFunc.setNote( f->getNote() );
            alteredFunc.setReturnType( f->getReturnType() );
            alteredFunc.isConst( f->isConst() );
            for ( auto param = f->parametersBeginConst(); param != f->parametersEndConst(); ++param )
            {
                alteredFunc.addParameter( *param );
            }
            
            
            std::stringstream ss;
            if ( ( f->getReturnType() != "void" ) && ( f->getReturnType() != "" ) )
            {
                ss << "return ";
            }
            ss << "myImpl->" << f->getName() << "(";
            if ( f->parametersBegin() != f->parametersEnd() )
            {
                ss << " ";
                bool firstParameter = true;
                for ( auto it = f->parametersBegin(); it != f->parametersEnd(); ++it )
                {
                    if ( !firstParameter )
                    {
                        ss << ", ";
                    }
                    ss << it->getName();
                    firstParameter = false;
                }
                ss << " ";
            }
            ss << ");";
            alteredFunc.setCode( ss.str() );
            output.addFunction( alteredFunc );
        }
        return output;
    }
}