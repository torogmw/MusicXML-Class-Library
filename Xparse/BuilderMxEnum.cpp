/* See MusicXML License at the bottom of this code page. */

/* matthew james briggs */

#include "BuilderMxEnum.h"
#include "Function.h"
#include "MxEnumClass.h"
#include "Parameter.h"
#include "Enum.h"
#include <sstream>
#include "end.h"
#include "tab.h"
#include <fstream>
#include <iomanip>

namespace mjb
{
    /* ctor */
    BuilderMxEnum::BuilderMxEnum( const MxEnumInfoValues& value_in ) : v( value_in ), myClass( "temp" )
    {
        myClass.setName( v.CLASSNAME );
        std::stringstream includeClassH;
        includeClassH << v.CLASSNAME << ".h";
        myClass.addPrivateInclude( Include( includeClassH.str(), false ) );
        myClass.addPrivateInclude( Include( "_hidden_MxEnum.h" , false ) );
        myClass.addPrivateInclude( Include( "string", true ) );
        myClass.addPrivateInclude( Include( "vector", true ) );
        myClass.addPrivateInclude( Include( "sstream", true ) );
        
        myClass.addPublicInclude( Include( "iostream", true ) );
        myClass.addPublicInclude( Include( "string", true ) );
        myClass.addPublicInclude( Include( "memory", true ) );
        myClass.addPublicInclude( Include( "LexiconBaseObjects.h", false ) );
        
        
        Enum thisenum;
        thisenum.setName( v.CPPENUMNAME );
        for ( int i = 0; i < v.COUNT(); ++i )
        {
            thisenum.addValue( v.ENUMCPPVALUES[i] );
        }
        thisenum.addNamespace( "lexicon" );
        thisenum.addNamespace( "enums" );
        myClass.setEnum( thisenum );
        
        myClass.setUrl( "http://matthewjamesbriggs.com" );
        myClass.setEmail( "matthew.james.briggs@gmail.com" );
        std::stringstream briefDescription;
        briefDescription << "The " << v.CLASSNAME << " class serves as a binding for the MusicXml '" << v.MUSICXMLTYPENAME << "' simple enum type.";
        myClass.setBriefDescription( briefDescription.str() );
        myClass.setDate( "2014-06-22" );
        myClass.setAuthor( "Matthew James Briggs" );
        myClass.setProjectName( "Lexicon" );
        myClass.setProjectVersionNumber( "1.0" );
        myClass.setFullDescription( fullDescription() );
        myClass.setMusicXmlID( v.XMLNODEID );
        myClass.setNamespaceNesting( { "lexicon" } );
        
        
        std::stringstream cppenumnames;
        for ( int i = 0; i < v.COUNT(); ++i )
        {
            if ( i == 0 )
            {
                cppenumnames << "{ ";
                cppenumnames << "\"";
                cppenumnames << v.ENUMCPPVALUES[i];
                cppenumnames << "\"";
                if ( v.COUNT() > 1 )
                {
                    cppenumnames << ", ";
                }
                else if ( v.COUNT() == 1 )
                {
                    cppenumnames << " }";
                }
            }
            else if ( i == v.COUNT() - 1 )
            {
                cppenumnames << "\"";
                cppenumnames << v.ENUMCPPVALUES[i];
                cppenumnames << "\" };";
            }
            else
            {
                cppenumnames << "\"";
                cppenumnames << v.ENUMCPPVALUES[i];
                cppenumnames << "\", ";
            }
        }
        std::stringstream xmlenumnames;
        for ( int i = 0; i < v.COUNT(); ++i )
        {
            if ( i == 0 )
            {
                xmlenumnames << "{ ";
                xmlenumnames << "\"";
                xmlenumnames << v.ENUMXMLVALUES[i];
                xmlenumnames << "\"";
                if ( v.COUNT() > 1 )
                {
                    xmlenumnames << ", ";
                }
                else if ( v.COUNT() == 1 )
                {
                    xmlenumnames << " }";
                }
            }
            else if ( i == v.COUNT() - 1 )
            {
                xmlenumnames << "\"";
                xmlenumnames << v.ENUMXMLVALUES[i];
                xmlenumnames << "\" };";
            }
            else
            {
                xmlenumnames << "\"";
                xmlenumnames << v.ENUMXMLVALUES[i];
                xmlenumnames << "\", ";
            }
        }
        myClass.addPrivateConstStaticDatamember( DataMember("std::vector<std::string>", "myEnumStrings", cppenumnames.str(), Quotes::none ) );
        myClass.addPrivateConstStaticDatamember( DataMember("std::vector<std::string>", "myXmlStrings", xmlenumnames.str(), Quotes::none ) );
        myClass.addPrivateConstStaticDatamember( DataMember("std::string", "myXmlTypeName", v.MUSICXMLTYPENAME, Quotes::quotes ) );
        myClass.addPrivateConstStaticDatamember( DataMember("std::string", "myClassName", v.CLASSNAME, Quotes::quotes ) );
        myClass.addPrivateConstStaticDatamember( DataMember("std::string", "myDocumentation", v.DOCUMENTATION, Quotes::quotes ) );
        std:: stringstream nodeid; nodeid << v.XMLNODEID;
        myClass.addPrivateConstStaticDatamember( DataMember("int", "myXsdID", nodeid.str(), Quotes::none ) );
        myClass.addPrivateDatamember( DataMember(thisenum.getName( true, 1 ), "myValue", "", Quotes::none ) );
        
        Function getValue;
        getValue.setName( "getValue" );
        getValue.setDocumentation( "Returns the internal enum value." );
        getValue.setReturnType( thisenum.getName( true, 1) );
        getValue.isConst( true );
        getValue.setCode( "return myImpl->myValue;" );
        
        Function getValueInt;
        getValueInt.setName( "getValueInt" );
        getValueInt.setDocumentation( "Returns the internal enum value as an int." );
        getValueInt.setReturnType( "int" );
        getValueInt.isConst( true );
        getValueInt.setCode( thisenum.intGetterCode(
                                                    "myValue", // variableName
                                                    "myImpl", // implName
                                                    true,       // namespaceQualified_in
                                                    1).getCode() ); // skippedNamespacesCount_in
        
        Function getCppEnumSymbolAsString;
        getCppEnumSymbolAsString.setName( "getCppEnumSymbolAsString" );
        getCppEnumSymbolAsString.setDocumentation( "Returns the enum's internal value as a string matching the C++ enum symbol." );
        getCppEnumSymbolAsString.setReturnType( "std::string" );
        getCppEnumSymbolAsString.isConst( true );
        getCppEnumSymbolAsString.setCode( "return myImpl->myEnumStrings[getValueInt()];" );
        
        Function getSize;
        getSize.setName( "getSize" );
        getSize.setDocumentation( "Returns the count of possible enumeration values." );
        getSize.setReturnType( "int" );
        getSize.isConst( true );
        getSize.setCode( "return (int)myImpl->myEnumStrings.size();" );
        
        Function getXmlTypeName;
        getXmlTypeName.setName( "getXmlTypeName" );
        getXmlTypeName.setDocumentation( "Returns the name of this enumeration type as found in the musicxml.xsd document." );
        getXmlTypeName.setReturnType( "std::string" );
        getXmlTypeName.isConst( true );
        getXmlTypeName.setCode( "return myImpl->myXmlTypeName;" );
        
        
        Function getClassName;
        getClassName.setName( "getClassName" );
        std::stringstream getClassName_documentation;
        getClassName_documentation << "Returns the name of this C++ class, i.e. '" << v.CLASSNAME << "'. This is a function implemented by all objects that inherit from LexiconObject.";
        getClassName.setDocumentation( getClassName_documentation.str() );
        getClassName.setReturnType( "std::string" );
        getClassName.isConst( true );
        getClassName.setCode( "return myImpl->myClassName;" );
        
        Function getDocumentation;
        getDocumentation.setName( "getDocumentation" );
        getDocumentation.setDocumentation( "Returns the documentation for this musicxml type as found in the musicxml.xsd document." );
        getDocumentation.setReturnType( "std::string" );
        getDocumentation.isConst( true );
        getDocumentation.setCode( "return myImpl->myDocumentation;" );
        
        Function toString;
        toString.setName( "toString" );
        toString.setDocumentation( "Returns the internal enum's value as a musicxml string value. All objects inheriting from LexiconObject implement a toString() function. All objects inheriting from MxObject implement this function to return the musicxml representation of their internal value." );
        toString.setReturnType( "std::string" );
        toString.isConst( true );
        toString.isVirtual( true );
        toString.setCode( "return myImpl->myXmlStrings[getValueInt()];" );
        
        Function setValue;
        setValue.setName( "setValue" );
        setValue.setDocumentation( "Sets the internal enum value." );
        setValue.setReturnType( "void" );
        setValue.isConst( false );
        setValue.isVirtual( false );
        setValue.setCode( "myImpl->myValue = value_in;" );
        Parameter setValue_param1;
        setValue_param1.setName( "value_in" );
        setValue_param1.setDataType( thisenum.getName( true, 1 ) );
        setValue_param1.isConst( false );
        setValue_param1.setParameterType( Parameter::ParameterType::Value );
        setValue.addParameter( setValue_param1 );
        
        Function setValueInt;
        setValueInt.setName( "setValueInt" );
        setValueInt.setDocumentation( "Sets the internal enum value from an int. Returns true for success, false for failue (i.e. an out-of-range value will leave the internal enum's value unchanged and return 'false'." );
        setValueInt.setReturnType( "bool" );
        setValueInt.isConst( false );
        setValueInt.isVirtual( false );
        setValueInt.setCode( thisenum.intSetterCode(
                                                    "myValue", // variableName
                                                    "myImpl", // implName
                                                    true,       // namespaceQualified_in
                                                    1).getCode() ); // skippedNamespacesCount_in
        
        Parameter setValueInt_param1;
        setValueInt_param1.setName( "value_in" );
        setValueInt_param1.setDataType( "int" );
        setValueInt_param1.isConst( false );
        setValueInt_param1.setParameterType( Parameter::ParameterType::Value );
        setValueInt.addParameter( setValueInt_param1 );
        
        Function fromString;
        fromString.setName( "fromString" );
        fromString.setDocumentation( "Sets the internal enum value by parsing a string.  The string value should match what is found in a MusicXML document.  All MxObject objects implement a 'from String' function which parses MusicXML data. Returns true if parsing was successful.  If the passed string is invalid, returns false and does not change the internal enum value." );
        fromString.setReturnType( "bool" );
        fromString.isConst( false );
        fromString.isVirtual( false );
        std::stringstream fromString_code;
        fromString_code << "for (int i=0; i < getSize(); ++i)" << end();
        fromString_code << "{" << end();
        fromString_code << tab(1) << "if ( value_in == myImpl->myXmlStrings[i] )" << end();
        fromString_code << tab(2) << "{" << end();
        fromString_code << tab(3) << "setValueInt( i );" << end();
        fromString_code << tab(3) << "return true;" << end();
        fromString_code << tab(2) << "}" << end();
        fromString_code << "}" << end();
        fromString_code << "return false;";
        fromString.setCode( fromString_code.str() );
        Parameter fromString_param1;
        fromString_param1.setName( "value_in" );
        fromString_param1.setDataType( "std::string" );
        fromString_param1.isConst( true );
        fromString_param1.setParameterType( Parameter::ParameterType::Reference );
        fromString.addParameter( fromString_param1 );
        
        Function setCppEnumSymbolAsString;
        setCppEnumSymbolAsString.setName( "setCppEnumSymbolAsString" );
        setCppEnumSymbolAsString.setDocumentation( "Sets the internal enum value by parsing a string. The string value should match the C++ enum symblol. If the passed string is invalid, returns false and does not change the internal enum value." );
        setCppEnumSymbolAsString.setReturnType( "bool" );
        setCppEnumSymbolAsString.isConst( false );
        setCppEnumSymbolAsString.isVirtual( false );
        std::stringstream setCppEnumSymbolAsString_code;
        setCppEnumSymbolAsString_code << "for (int i=0; i < getSize(); ++i)" << end();
        setCppEnumSymbolAsString_code << "{" << end();
        setCppEnumSymbolAsString_code << tab(1) << "if ( value_in == myImpl->myEnumStrings[i] )" << end();
        setCppEnumSymbolAsString_code << tab(2) << "{" << end();
        setCppEnumSymbolAsString_code << tab(3) << "setValueInt( i );" << end();
        setCppEnumSymbolAsString_code << tab(3) << "return true;" << end();
        setCppEnumSymbolAsString_code << tab(2) << "}" << end();
        setCppEnumSymbolAsString_code << "}" << end();
        setCppEnumSymbolAsString_code << "return false;";
        setCppEnumSymbolAsString.setCode( setCppEnumSymbolAsString_code.str() );
        Parameter setCppEnumSymbolAsString_param1;
        setCppEnumSymbolAsString_param1.setName( "value_in" );
        setCppEnumSymbolAsString_param1.setDataType( "std::string" );
        setCppEnumSymbolAsString_param1.isConst( true );
        setCppEnumSymbolAsString_param1.setParameterType( Parameter::ParameterType::Reference );
        setCppEnumSymbolAsString.addParameter( setCppEnumSymbolAsString_param1 );
        
        Parameter comparisonParameter;
        comparisonParameter.setName( "other_in" );
        comparisonParameter.setDataType( v.CLASSNAME );
        comparisonParameter.isConst( true );
        comparisonParameter.setParameterType( Parameter::ParameterType::Reference );
        
        Function operatorEqualsEquals;
        operatorEqualsEquals.setName( "operator==" );
        std::stringstream comparisonOperatorDocumentation;
        comparisonOperatorDocumentation << "Two " << v.CLASSNAME << " objects are equal if they have the same internal enum value. ";
        comparisonOperatorDocumentation << "If they are not equal, then the " << v.CLASSNAME << " with the greater getValueInt() value ";
        comparisonOperatorDocumentation << "is considered GreaterThan the " << v.CLASSNAME << " with the smaller getValueInt() value.";
        operatorEqualsEquals.setDocumentation( comparisonOperatorDocumentation.str() );
        operatorEqualsEquals.setReturnType( "bool" );
        operatorEqualsEquals.isConst( true );
        operatorEqualsEquals.isVirtual( false );
        std::stringstream operatorEqualsEquals_code;
        operatorEqualsEquals_code << "return hidden::mxEnumCompare<" << v.CLASSNAME << ">( *this, other_in ) == 0;";
        operatorEqualsEquals.setCode( operatorEqualsEquals_code.str() );
        operatorEqualsEquals.addParameter( comparisonParameter );
        
        Function operatorNotEquals;
        operatorNotEquals.setName( "operator!=" );
        operatorNotEquals.setDocumentation( "" );
        operatorNotEquals.setReturnType( "bool" );
        operatorNotEquals.isConst( true );
        operatorNotEquals.isVirtual( false );
        std::stringstream operatorNotEquals_code;
        operatorNotEquals_code << "return hidden::mxEnumCompare<" << v.CLASSNAME << ">( *this, other_in ) != 0;";
        operatorNotEquals.setCode( operatorNotEquals_code.str() );
        operatorNotEquals.addParameter( comparisonParameter );
        
        Function operatorGreaterThan;
        operatorGreaterThan.setName( "operator>" );
        operatorGreaterThan.setDocumentation( "" );
        operatorGreaterThan.setReturnType( "bool" );
        operatorGreaterThan.isConst( true );
        operatorGreaterThan.isVirtual( false );
        std::stringstream operatorGreaterThan_code;
        operatorGreaterThan_code << "return hidden::mxEnumCompare<" << v.CLASSNAME << ">( *this, other_in ) > 0;";
        operatorGreaterThan.setCode( operatorGreaterThan_code.str() );
        operatorGreaterThan.addParameter( comparisonParameter );
        
        Function operatorLessThan;
        operatorLessThan.setName( "operator<" );
        operatorLessThan.setDocumentation( "" );
        operatorLessThan.setReturnType( "bool" );
        operatorLessThan.isConst( true );
        operatorLessThan.isVirtual( false );
        std::stringstream operatorLessThan_code;
        operatorLessThan_code << "return hidden::mxEnumCompare<" << v.CLASSNAME << ">( *this, other_in ) < 0;";
        operatorLessThan.setCode( operatorLessThan_code.str() );
        operatorLessThan.addParameter( comparisonParameter );
        
        Function operatorGreaterThanOrEqualTo;
        operatorGreaterThanOrEqualTo.setName( "operator>=" );
        operatorGreaterThanOrEqualTo.setDocumentation( "" );
        operatorGreaterThanOrEqualTo.setReturnType( "bool" );
        operatorGreaterThanOrEqualTo.isConst( true );
        operatorGreaterThanOrEqualTo.isVirtual( false );
        std::stringstream operatorGreaterThanOrEqualTo_code;
        operatorGreaterThanOrEqualTo_code << "return hidden::mxEnumCompare<" << v.CLASSNAME << ">( *this, other_in ) >= 0;";
        operatorGreaterThanOrEqualTo.setCode( operatorGreaterThanOrEqualTo_code.str() );
        operatorGreaterThanOrEqualTo.addParameter( comparisonParameter );
        
        Function operatorLessThanOrEqualTo;
        operatorLessThanOrEqualTo.setName( "operator<=" );
        operatorLessThanOrEqualTo.setDocumentation( "" );
        operatorLessThanOrEqualTo.setReturnType( "bool" );
        operatorLessThanOrEqualTo.isConst( true );
        operatorLessThanOrEqualTo.isVirtual( false );
        std::stringstream operatorLessThanOrEqualTo_code;
        operatorLessThanOrEqualTo_code << "return hidden::mxEnumCompare<" << v.CLASSNAME << ">( *this, other_in ) <= 0;";
        operatorLessThanOrEqualTo.setCode( operatorLessThanOrEqualTo_code.str() );
        operatorLessThanOrEqualTo.addParameter( comparisonParameter );
        
        Function incrementPre;
        incrementPre.setName( "operator++" );
        incrementPre.setDocumentation( "Cycle through available enum values. When attempting to increment past the last enum value, wraps to the zeroeth value. When attempting to decrement below the zeroeth value, wraps to the maximum enum value." );
        std::stringstream incrementPre_returnType;
        incrementPre_returnType << v.CLASSNAME << "&";
        incrementPre.setReturnType( incrementPre_returnType.str() );
        incrementPre.isConst( false );
        incrementPre.isVirtual( false );
        std::stringstream incrementPre_code;
        incrementPre_code << "return hidden::mxEnumIncrement<" << v.CLASSNAME << ">( *this );";
        incrementPre.setCode( incrementPre_code.str() );
        
        Parameter dummyInt;
        dummyInt.setName( "" );
        dummyInt.setDataType( "int" );
        dummyInt.isConst( false );
        dummyInt.setParameterType( mjb::Parameter::ParameterType::Value );
        
        Function incrementPost;
        incrementPost.setName( "operator++" );
        incrementPost.setDocumentation( "" );
        std::stringstream incrementPost_returnType;
        incrementPost_returnType << v.CLASSNAME;
        incrementPost.setReturnType( incrementPost_returnType.str() );
        incrementPost.isConst( false );
        incrementPost.isVirtual( false );
        std::stringstream incrementPost_code;
        incrementPost_code << v.CLASSNAME << " temp( *this );" << std::endl;
        incrementPost_code << "hidden::mxEnumIncrement<" << v.CLASSNAME << ">( *this );" << std::endl;
        incrementPost_code << "return temp;";
        incrementPost.setCode( incrementPost_code.str() );
        incrementPost.addParameter( dummyInt );

        Function decrementPre;
        decrementPre.setName( "operator--" );
        decrementPre.setDocumentation( "" );
        std::stringstream decrementPre_returnType;
        decrementPre_returnType << v.CLASSNAME << "&";
        decrementPre.setReturnType( decrementPre_returnType.str() );
        decrementPre.isConst( false );
        decrementPre.isVirtual( false );
        std::stringstream decrementPre_code;
        decrementPre_code << "return hidden::mxEnumDecrement<" << v.CLASSNAME << ">( *this );";
        decrementPre.setCode( decrementPre_code.str() );
        
        Function decrementPost;
        decrementPost.setName( "operator--" );
        decrementPost.setDocumentation( "" );
        std::stringstream decrementPost_returnType;
        decrementPost_returnType << v.CLASSNAME;
        decrementPost.setReturnType( decrementPost_returnType.str() );
        decrementPost.isConst( false );
        decrementPost.isVirtual( false );
        std::stringstream decrementPost_code;
        decrementPost_code << v.CLASSNAME << " temp( *this );" << std::endl;
        decrementPost_code << "hidden::mxEnumDecrement<" << v.CLASSNAME << ">( *this );" << std::endl;
        decrementPost_code << "return temp;";
        decrementPost.setCode( decrementPost_code.str() );
        decrementPost.addParameter( dummyInt );
        
        Function stream;
        stream.setName( "stream" );
        stream.setDocumentation( "Streams the internal value as a MusicXML string to the passed ostream object. Returns the ostream object. This function enables the streaming operator<< by way of inheritence from LexiconObject." );
        stream.setReturnType( "std::ostream&" );
        stream.isConst( true );
        stream.isVirtual( false );
        stream.setCode( "os_out << myImpl->myXmlStrings[ getValueInt() ];\nreturn os_out;" );
        Parameter stream_param1;
        stream_param1.setName( "os_out" );
        stream_param1.setDataType( "std::ostream" );
        stream_param1.isConst( false );
        stream_param1.setParameterType( Parameter::ParameterType::Reference );
        stream.addParameter( stream_param1 );
        
        FunctionGroup getters;
        getters.setName( "Getters" );
        getters.setPublic();
        getters.addFunction( getValue );
        getters.addFunction( getValueInt );
        getters.addFunction( getCppEnumSymbolAsString );
        getters.addFunction( getSize );
        getters.addFunction( getXmlTypeName );
        getters.addFunction( getClassName );
        getters.addFunction( getDocumentation );
        getters.addFunction( toString );
        myClass.addPublicFunctionGroup( getters );
        
        FunctionGroup setters;
        setters.setName( "Setters" );
        setters.addFunction( setValue );
        setters.addFunction( setValueInt );
        setters.addFunction( fromString );
        setters.addFunction( setCppEnumSymbolAsString );
        myClass.addPublicFunctionGroup( setters );
        
        FunctionGroup comparisonOperators;
        comparisonOperators.setName( "Comparison Operators" );
        comparisonOperators.addFunction( operatorEqualsEquals );
        comparisonOperators.addFunction( operatorNotEquals );
        comparisonOperators.addFunction( operatorGreaterThan );
        comparisonOperators.addFunction( operatorLessThan );
        comparisonOperators.addFunction( operatorGreaterThanOrEqualTo );
        comparisonOperators.addFunction( operatorLessThanOrEqualTo );
        myClass.addPublicFunctionGroup( comparisonOperators );
        
        FunctionGroup incrementDecrementOperators;
        incrementDecrementOperators.setName( "Increment/Decrement Operators" );
        incrementDecrementOperators.addFunction( incrementPre );
        incrementDecrementOperators.addFunction( incrementPost );
        incrementDecrementOperators.addFunction( decrementPre );
        incrementDecrementOperators.addFunction( decrementPost );
        myClass.addPublicFunctionGroup( incrementDecrementOperators );
        
        FunctionGroup streamingSupport;
        streamingSupport.setName( "Streaming support" );
        streamingSupport.addFunction( stream );
        myClass.addPublicFunctionGroup( streamingSupport );
        
    }
    
    /* dtor */
    BuilderMxEnum::~BuilderMxEnum() {}
    
    std::string BuilderMxEnum::getCppFileContents() const
    {
        return myClass.getCppFile();
    }
    
    std::string BuilderMxEnum::getHFileContents() const
    {
        return myClass.getHFile();
    }
    
    MxEnumClass BuilderMxEnum::getClass() const
    {
        return myClass;
    }
    
    void BuilderMxEnum::writeCppFile( const std::string& directory ) const
    {
        std::stringstream path;
        path << directory << v.CLASSNAME << ".cpp";
        ofstream outputFile( path.str() );
        outputFile.open( path.str() );
        if (!outputFile) {
            cerr << "can't open output file" << endl;
        }
        outputFile << getCppFileContents();
        outputFile.close();
    }
    void BuilderMxEnum::writeHFile( const std::string& directory ) const
    {
        std::stringstream path;
        path << directory << v.CLASSNAME << ".h";
        ofstream outputFile( path.str() );
        outputFile.open( path.str() );
        if (!outputFile) {
            cerr << "can't open output file" << endl;
        }
        outputFile << getHFileContents();
        outputFile.close();
    }
    
    std::string BuilderMxEnum::fullDescription() const
    {
        std::stringstream ss;
        
        ss << "The purpose of " << v.CLASSNAME << " is to provide a strongly-typed C++ representation of the '" << v.MUSICXMLTYPENAME << "' MusicXML simple enum type ";
        ss << "with the ability to read and write these enum values from strings (i.e. an XML document). " << std::endl << std::endl;
        int musicXmlTypeNameLen = (int)v.MUSICXMLTYPENAME.size();
        ss << "Music XML Documentation: " << v.DOCUMENTATION << end();
        
        ss << v.MUSICXMLTYPENAME << " enum values:" << std::right << std::setw(56-musicXmlTypeNameLen) << "<br>" << end();
        
        for ( int i=0; i < v.COUNT(); ++i )
        {
            ss << tab( 1 ) << setfill(' ') << setw(3) << i << ": " << v.ENUMXMLVALUES[ i ];
            int len = (int)v.ENUMXMLVALUES[ i ].size();
            ss << std::right << std::setw(60-len) << "<br>" << end();
        }
        ss << std::right << std::setw(69) << "<br>" << end();
        if ( v.COUNT() > 1 )
        {
            ss << "sample usage:" << std::right << std::setw(56) << "<br>" << end();
            
            int varLen = (int)v.CLASSNAME.size();// +
                        //(int)v.ENUMXMLVALUES[0].size();
            ss << tab(1) << v.CLASSNAME << " myvalue;";
            ss << std::right << std::setw( 56-varLen>0 ? (56-varLen) : 0 ) << "<br>" << end();

            varLen = (int)v.ENUMXMLVALUES[1].size();
            int startFrom = 46;
            ss << tab(1) << "myvalueString = \"" << v.ENUMXMLVALUES[1] << "\";";
            ss << std::right << std::setw( startFrom-varLen>0 ? (startFrom-varLen) : 0 ) << "<br>" << end();
            
            varLen = 0;
            startFrom = 29;
            ss << tab(1) << "myvalue.fromString( myvalueString );";
            ss << std::right << std::setw( startFrom-varLen>0 ? (startFrom-varLen) : 0 ) << "<br>" << end();
            
            varLen = 0;
            startFrom = 29;
            ss << tab(1) << "// the following statment is true //";
            ss << std::right << std::setw( startFrom-varLen>0 ? (startFrom-varLen) : 0 ) << "<br>" << end();
            
            varLen = (int)myClass.getEnum().getName( true, 1 ).size() + (int)v.ENUMCPPVALUES[1].size();
            startFrom = 40;
            ss << tab(1) << "myvalue.getValue() == " << myClass.getEnum().getName( true, 1 ) << "::" << v.ENUMCPPVALUES[1] << ";";
            ss << std::right << std::setw( startFrom-varLen>0 ? (startFrom-varLen) : 0 ) << "<br>" << end();
            
        }

        return ss.str();
        
//        MxCatNames myvalue( lexicon::enums::CatNames::bones );
//        std::string myvalueString = myvalue.toString();
//        myvalueString = "bishop";
//        myvalue.fromString( myvalueString );
//        bool equals = myvalue.getValue() == lexicon::enums::CatNames::bones; // true
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

