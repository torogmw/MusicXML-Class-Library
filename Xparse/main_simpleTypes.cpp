/* See MusicXML License at the bottom of this code page. */

#if 1==0

/* Matthew James Briggs
 
 This program will be used to parse and work
 with the information found in the musicxml.xsd
 schema document */

#include <iostream>
#include "FileToCharVector.h"
#include "Reader.h"
#include "XsdFunc.h"
#include "XsdEnumerationValue.h"
//#include "IType.h"
#include "XsdSimpleValueEnum.h"
#include "EnumInfo.h"
//#include "MxEnum_Hbuild.h"
#include "ParseSimpleEnums.h"
#include "ParseXsd.h"
#include "MxEnum_TestBuild.h"
#include <fstream>
//#include "MxEnum_CppBuild.h"
#include "Function.h"
#include "Enum.h"
#include "Include.h"
#include "SectionSeparatorComment.h"
#include "ClassFileHeader.h"
#include "DataMember.h"
#include "MxEnumClass.h"
#include "end.h"
#include "BuilderMxEnum.h"
#include "MxEnum_CppBuild.h"
#include "fileStream.h"
#include "removesymbols.h"
#include "MxNumberTemplateTest.h"
#include "MxNumberInfoInt.h"
#include "parseSimpleInts.h"
#include "BuilderMxNumberInt.h"
#include "wrap.h"
#include "WrappedComment.h"
#include "TestGroup.h"
#include "TestCode.h"
#include "MxNumberIntTestFile.h"
#include "IntPair.h"
#include "intParse.h"
#include "MxNumberInfoDecimal.h"
#include "parseSimpleDecimals.h"
#include "BuilderMxNumberDecimal.h"
#include "MxNumberDecimalTestFile.h"
#include "numberToName.h"

using namespace std;
using namespace xparse;
using namespace mjb;

string inputfilepath = "./testinput/musicxml.xsd";
string outputdirectory = "./testoutput/";

typedef vector<EnumInfo> EnumInfoCollection;

int main(int argc, const char * argv[])
{

    //read the xsd and output a csv index table to cout
    if ( false )
    {
        ParseXsdToCout( inputfilepath );
    }
    
    // create a vector of xs:simpleType enumeration types
    if ( false )
    {
        EnumInfoCollection enums;
        parseSimpleEnums( enums, inputfilepath );
    }

    /* test the EnumHBuild funcctionality to cout
    if ( false )
    {
        string whereTo = "../../../../../LexiconTest/TestTest.cpp";
        MxEnumInfoValues v;
        v.CLASSNAME = "MxEnumAboveBelow";
        v.MUSICXMLTYPENAME = "above-below";
        //v.DOCUMENTATION = "Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum.  It is a long established fact that a reader will be distracted by the readable content of a page when looking at its layout. The point of using Lorem Ipsum is that it has a more-or-less normal distribution of letters, as opposed to using 'Content here, content here', making it look like readable English. Many desktop publishing packages and web page editors now use Lorem Ipsum as their default model text, and a search for 'lorem ipsum' will uncover many web sites still in their infancy. Various versions have evolved over the years, sometimes by accident, sometimes on purpose (injected humour and the like).  Contrary to popular belief, Lorem Ipsum is not simply random text. It has roots in a piece of classical Latin literature from 45 BC, making it over 2000 years old. Richard McClintock, a Latin professor at Hampden-Sydney College in Virginia, looked up one of the more obscure Latin words, consectetur, from a Lorem Ipsum passage, and going through the cites of the word in classical literature, discovered the undoubtable source. Lorem Ipsum comes from sections 1.10.32 and 1.10.33 of \"de Finibus Bonorum et Malorum\" (The Extremes of Good and Evil) by Cicero, written in 45 BC. This book is a treatise on the theory of ethics, very popular during the Renaissance. The first line of Lorem Ipsum, \"Lorem ipsum dolor sit amet..\", comes from a line in section 1.10.32.";
        v.DOCUMENTATION = "The above-below type is used to indicate whether one element appears above or below another element.";
        v.CPPENUMNAME = "AboveBelow";
        v.ENUMCPPVALUES = { "above","below" };
        v.ENUMXMLVALUES = { "a-b-o-v-e", "b-e-l-o-w" };
        v.XMLNODEID = 4;
        //HBuildFile( v, outputdirectory );
        //cout << HBuildString( v );
        //cout << endl;
        stringstream ss;
        
//        TestGenerator tgen( v );
//        tgen.includes( ss );
//        tgen.generateTests( ss );
//        ofstream outputFile( whereTo );
        //outputFile.open( whereTo );
//        if (!outputFile) {
//            cerr << "can't open output file" << endl;
//        }
//        outputFile << ss.rdbuf();
//        outputFile.close();
        MxEnumCppBuilder cpp( v );
        cpp.MxEnumCppBuildPart1( ss );
        cout << ss.str() << endl;
    }
    */
    // test Function and Parameter
    if ( false )
    {
        Function f;
        f.setName( "myFirstFunction" );
        f.setReturnType( "std::string" );
        f.isConst( false );
        f.addParameter( Parameter( "myMessage", "std::string" ) );
        Parameter p( "numberOfTimes", "int" );
        p.isConst( false );
        p.setParameterType( Parameter::ParameterType::Value );
        f.addParameter( p );
        std::stringstream code;
        code << "for( int i = 0; i < $@numberOfTimes; ++i )" << endl;
        code << "{" << endl;
        code << "   std::cout << $@myMessage << std::endl;" << endl;
        code << "}";
        f.setCode( code.str() );
        f.setDocumentation( "This is some very long documentation that should be wrapped around.  Also hello the red sox really suck this year.  They keep losing." );
        cout << f.getDeclaration(1) << endl;
        cout << f.getDefinition(2) << endl;

    }
    
    // test Enum
    if ( false )
    {
        Enum e( "Color" );
        e.addValue( "Blue" );
        e.addValue( "Red" );
        e.addValue( "Green" );
        e.addValue( "Black" );
        e.addNamespace( "lexicon" );
        e.addNamespace( "enums" );
        cout << e.toString() << endl;
        cout << endl;
        Function get = e.intGetterCode( "myValue", "", "myImpl" );
        cout << get.getDeclaration( 3 ) << endl << endl;
        cout << get.getDefinition( 3, false, "Color::" ) << endl << endl;
        
        
        Function set = e.intSetterCode( "myValue", "", "myImpl" );
        cout << set.getDeclaration( 3 ) << endl << endl;
        cout << set.getDefinition( 3, false, "Color::" ) << endl << endl;
    }
    
    // test include
    if ( false )
    {
        Include i1( "sstream", true );
        Include i2( "MyInclude.h", false );
        cout << i1.toString() << endl;
        cout << i2.toString() << endl;
    }
    
    // test SectionSeparatorComment.h
    if ( false )
    {   for( int i = 38; i < 70; ++i )
        {
            SectionSeparatorComment sec1("Getter Functions", i);
            SectionSeparatorComment sec2("Setter and Other Silly Functions", i);
            cout << sec1.toString() << endl;
            cout << sec2.toString() << endl;
        }
    }
    
    // test Class
    if ( false )
    {
        MxEnumClass myclass( "MyPretendClass" );
        myclass.addPrivateInclude( Include( "LexiconBaseObjects.h", false ) );
        myclass.setUrl( "http://matthewjamesbriggs.com" );
        myclass.setEmail( "matthew.james.briggs@gmail.com" );
        myclass.setBriefDescription( "This is a class that does nothing whatsoever." );
        myclass.setDate( "2014-06-22" );
        myclass.setAuthor( "Matthew James Briggs" );
        myclass.setProjectName( "Lexicon" );
        myclass.setProjectVersionNumber( "1.0" );
        myclass.setFullDescription("Once upon a time, there was a very long class description.  This class description went on and on.\n    It even\n      had\n       some special\n            formatting." );
        myclass.setMusicXmlID( 4 );
        myclass.setNamespaceNesting( { "lexicon", "hidden" } );
        Enum myenum;
        myenum.setName( "YesNo" );
        myenum.addValue( "Yes" );
        myenum.addValue( "No" );
        myenum.addNamespace( "lexicon" );
        myenum.addNamespace( "enums" );
        myclass.setEnum( myenum );
        
        
        Function sillyFunction1;
        sillyFunction1.setName( "getSillyOne" );
        sillyFunction1.setDocumentation( "This stupid function returns whatever you pass to it." );
        sillyFunction1.setReturnType( "std::string" );
        Parameter sillyFunction1Parameter1;
        sillyFunction1Parameter1.setName( "sillyInput_in" );
        sillyFunction1Parameter1.setDataType( "std::string" );
        sillyFunction1Parameter1.setParameterType( Parameter::ParameterType::Reference );
        sillyFunction1Parameter1.isConst( true );
        sillyFunction1.addParameter( sillyFunction1Parameter1 );
        sillyFunction1.setCode( "return sillyInput_in" );
        Function sillyFunction2;
        sillyFunction2.setName( "getSillyTwo" );
        //sillyFunction2.setDocumentation( "This stupid function returns whatever you pass to it." );
        sillyFunction2.setReturnType( "std::string" );
        Parameter sillyFunction2Parameter1;
        sillyFunction2Parameter1.setName( "sillyInput_in" );
        sillyFunction2Parameter1.setDataType( "std::string" );
        sillyFunction2Parameter1.setParameterType( Parameter::ParameterType::Reference );
        sillyFunction2Parameter1.isConst( true );
        sillyFunction2.addParameter( sillyFunction2Parameter1 );
        sillyFunction2.setCode( "return sillyInput_in" );
        FunctionGroup fgrp1;
        fgrp1.setName( "Silly Functions" );
        fgrp1.setPublic();
        fgrp1.addFunction( sillyFunction1 );
        fgrp1.addFunction( sillyFunction2 );
        myclass.addPublicFunctionGroup( fgrp1 );
        
        myclass.addPrivateConstStaticDatamember( DataMember("std::string", "myName", "My Name is Hello.", Quotes::quotes ) );
        myclass.addPrivateConstStaticDatamember( DataMember("int", "myID", "4", Quotes::none ) );
        
        myclass.addPrivateDatamember( DataMember("int", "myAge", "age_in", Quotes::none ) );
        myclass.addPrivateDatamember( DataMember("std::string", "myPerson", "person_in", Quotes::none ) );
        cout << myclass.getCppFile();
    }
    if ( false )
    {
        TestGroup tg;
        tg.setDocumentationComment( "Happy Joy" );
        tg.setSeparatorComment( "Happy Joy Tests" );
        TestCode t("HappyTest", "JoyClass" );
        t.addCodeLine(0, TestCode::ckEq() );
        tg.addTest( t );
        tg.stream( cout );
        
    }
    
    if ( false )
    {
        IntPair p(1,4);
        IntPair q(1,5);
        IntPairs vec;
        vec.push_back(p);
        vec.push_back(q);
        cout << boolalpha << ( intPairExists( IntPair( 2, 4 ), vec ) ) << end();
    }
    // test creating an MxEnum
    if ( false )
    {
        EnumInfoCollection enums;
        parseSimpleEnums( enums, inputfilepath );
        for ( auto thisEnumInfo : enums )
        {
            
            MxEnumInfoValues v;
            v.CPPENUMNAME = removesymbols( thisEnumInfo.getName(), true );
            std::stringstream cppClassName;
            cppClassName << "MxEnum" << removesymbols( thisEnumInfo.getName(), true );
            v.CLASSNAME = cppClassName.str();
            
            for ( auto it = thisEnumInfo.enumsBegin();
                 it != thisEnumInfo.enumsEnd();
                 ++it)
            {
                if ( (int)it->size()>0 )
                {
                    v.ENUMCPPVALUES.push_back ( removesymbols( *it, false ) );
                }
                else
                {
                    v.ENUMCPPVALUES.push_back ( "empty" );
                }
                v.ENUMXMLVALUES.push_back( *it );
            }
            v.MUSICXMLTYPENAME = thisEnumInfo.getName();
            v.DOCUMENTATION = thisEnumInfo.getDocumentation();
            v.XMLNODEID = thisEnumInfo.getXsdNodeID();
            
            BuilderMxEnum builder( v );
            
            string lexiconDirectory = "../../../../../Lexicon/";
            stringstream cppFileContents;
            cppFileContents << builder.getCppFileContents();
            
            stringstream hFileContents;
            hFileContents << builder.getHFileContents();
            
            stringstream cppFilePath;
            cppFilePath << lexiconDirectory << v.CLASSNAME << ".cpp";
            
            stringstream hFilePath;
            hFilePath << lexiconDirectory << v.CLASSNAME << ".h";
            
            fileStream( hFilePath.str(), hFileContents );
            fileStream( cppFilePath.str(), cppFileContents );
            
            
            
            string whereTo = "../../../../../LexiconTest/";
            std::stringstream testFilePath_ss;
            testFilePath_ss << whereTo << v.CLASSNAME << "Test.cpp";
            std::string testFilePath = testFilePath_ss.str();
            stringstream ss;
            TestGenerator tgen( v );
            tgen.includes( ss );
            tgen.generateTests( ss );
            fileStream( testFilePath, ss );
            
            cout << "," << v.XMLNODEID << "--" << v.CLASSNAME << " created." << endl << endl;
        }
//        MxEnumInfoValues v;
//        v.CLASSNAME = "MxCatNames";
//        v.MUSICXMLTYPENAME = "cat-names";
//        //v.DOCUMENTATION = "Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum.  It is a long established fact that a reader will be distracted by the readable content of a page when looking at its layout. The point of using Lorem Ipsum is that it has a more-or-less normal distribution of letters, as opposed to using 'Content here, content here', making it look like readable English. Many desktop publishing packages and web page editors now use Lorem Ipsum as their default model text, and a search for 'lorem ipsum' will uncover many web sites still in their infancy. Various versions have evolved over the years, sometimes by accident, sometimes on purpose (injected humour and the like).  Contrary to popular belief, Lorem Ipsum is not simply random text. It has roots in a piece of classical Latin literature from 45 BC, making it over 2000 years old. Richard McClintock, a Latin professor at Hampden-Sydney College in Virginia, looked up one of the more obscure Latin words, consectetur, from a Lorem Ipsum passage, and going through the cites of the word in classical literature, discovered the undoubtable source. Lorem Ipsum comes from sections 1.10.32 and 1.10.33 of \"de Finibus Bonorum et Malorum\" (The Extremes of Good and Evil) by Cicero, written in 45 BC. This book is a treatise on the theory of ethics, very popular during the Renaissance. The first line of Lorem Ipsum, \"Lorem ipsum dolor sit amet..\", comes from a line in section 1.10.32.";
//        v.DOCUMENTATION = "This is a silly class for cat names.";
//        v.CPPENUMNAME = "CatNames";
//        v.ENUMCPPVALUES = { "bones","bishop","sprinkles","fluffy","stuffy","sneezy","breezy","gandalf","saruman","misterfur","allergen","bop","squeek","maestro" };
//        v.ENUMXMLVALUES = { "cat-bones","cat-bishop","cat-sprinkles","cat-fluffy"
//        ,"cat-stuffy","cat-sneezy","cat-breezy","cat-gandalf","cat-saruman","cat-misterfur","cat-allergen","cat-bop","cat-squeek","cat-maestro"};
//        v.XMLNODEID = 0;
        
        
    }
    // Create MxNumberInt classes
    if ( false )
    {
        std::vector<MxNumberInfoInt> mxints;
        parseSimpleInts( mxints, inputfilepath );
        string lexiconDirectory = "../../../../../Lexicon/";
        string testDirectory = "../../../../../LexiconTest/";
        for (int i=0; i<mxints.size(); ++i)
        {
            BuilderMxNumberInt builder( mxints[i] );
            
            stringstream cppFileContents;
            cppFileContents << builder.getCppFileContents();
            
            stringstream hFileContents;
            hFileContents << builder.getHFileContents();
            
            stringstream cppFilePath;
            cppFilePath << lexiconDirectory << mxints[i].ClassName << ".cpp";
            
            stringstream hFilePath;
            hFilePath << lexiconDirectory << mxints[i].ClassName << ".h";
            
            fileStream( hFilePath.str(), hFileContents );
            fileStream( cppFilePath.str(), cppFileContents );
            
            stringstream testFileName_ss;
            testFileName_ss << testDirectory << mxints[i].getName() << "Test.cpp";
            string testFileName = testFileName_ss.str();
            MxNumberIntTestFile tests( mxints[i] );
            fileStream( testFileName, tests.toString() );
            cout << mxints[i].MusicXmlID << end();
        }
        
        //tests.stream( cout );
        
        
//        string whereTo = "../../../../../LexiconTest/";
//        std::stringstream testFilePath_ss;
//        testFilePath_ss << whereTo << v.CLASSNAME << "Test.cpp";
//        std::string testFilePath = testFilePath_ss.str();
//        stringstream ss;
//        TestGenerator tgen( v );
//        tgen.includes( ss );
//        tgen.generateTests( ss );
//        fileStream( testFilePath, ss );
        
        //cout << "," << mxints[i].MusicXmlID << "--" << mxints[0].ClassName << " created." << endl << endl;
    }
    // Create MxNumberDecimal classes
    if ( false ) // NOOOOOOOOO do not run this
        // the MxNumberDecimal classes were manually changed after initial output
        // also the tests were changed
        // re-outputting these will screw them up.
    {
        std::vector<MxNumberInfoDecimal> mxdecs;
        parseSimpleDecimals( mxdecs, inputfilepath );
        string lexiconDirectory = "../../../../../Lexicon/";
        string testDirectory = "../../../../../LexiconTestSmall/LexiconTestSmall/";


        for (int i=0; i<mxdecs.size(); ++i)
        {

            BuilderMxNumberDecimal builder( mxdecs[i] );
//int x = 1;
//#if 1==0
            stringstream cppFileContents;
            cppFileContents << builder.getCppFileContents();
            
            stringstream hFileContents;
            hFileContents << builder.getHFileContents();
            
            stringstream cppFilePath;
            cppFilePath << lexiconDirectory << mxdecs[i].ClassName << ".cpp";
            
            stringstream hFilePath;
            hFilePath << lexiconDirectory << mxdecs[i].ClassName << ".h";
            
            fileStream( hFilePath.str(), hFileContents );
            fileStream( cppFilePath.str(), cppFileContents );
            
            stringstream testFileName_ss;
            testFileName_ss << testDirectory << mxdecs[i].getName() << "Test.cpp";
            string testFileName = testFileName_ss.str();
            MxNumberDecimalTestFile tests( mxdecs[i] );
            fileStream( testFileName, tests.toString() );
            cout << mxdecs[i].MusicXmlID << end();
            cout << numberToName( -0.023423423435345345L ) << end();
//#endif
        }
    }
    
    // Create the MxEnumDistanceType type
    if ( false )
    {
        
            
        MxEnumInfoValues v;
        v.CLASSNAME = "MxEnumDistanceType";
        v.CPPENUMNAME = "DistanceType";
        v.DOCUMENTATION = "The distance-type defines what type of distance is being defined in a distance element. Values include beam and hyphen. This is left as a string so that other application-specific types can be defined, but it is made a separate type so that it can be redefined more strictly.";
        v.ENUMCPPVALUES.push_back( "beam" );
        v.ENUMCPPVALUES.push_back( "hyphen" );
        v.ENUMCPPVALUES.push_back( "other" );
        
        v.ENUMXMLVALUES.push_back( "beam" );
        v.ENUMXMLVALUES.push_back( "hyphen" );
        v.ENUMXMLVALUES.push_back( "other" );

        v.MUSICXMLTYPENAME = "distance-type";
        v.XMLNODEID = 94;
        
        BuilderMxEnum builder( v );
        
        string lexiconDirectory = "../../../../../Lexicon/Temp/";
        stringstream cppFileContents;
        cppFileContents << builder.getCppFileContents();
        
        stringstream hFileContents;
        hFileContents << builder.getHFileContents();
        
        stringstream cppFilePath;
        cppFilePath << lexiconDirectory << v.CLASSNAME << ".cpp";
        
        stringstream hFilePath;
        hFilePath << lexiconDirectory << v.CLASSNAME << ".h";
        
        fileStream( hFilePath.str(), hFileContents );
        fileStream( cppFilePath.str(), cppFileContents );
        
        
        
        string whereTo = "../../../../../Lexicon/Temp/";
        std::stringstream testFilePath_ss;
        testFilePath_ss << whereTo << v.CLASSNAME << "Test.cpp";
        std::string testFilePath = testFilePath_ss.str();
        stringstream ss;
        TestGenerator tgen( v );
        tgen.includes( ss );
        tgen.generateTests( ss );
        fileStream( testFilePath, ss );
        
        cout << "," << v.XMLNODEID << "--" << v.CLASSNAME << " created." << endl << endl;
    }
    
    // Create the MxEnumMode type
    if ( false )
    {
        
        
        MxEnumInfoValues v;
        v.CLASSNAME = "MxEnumMode";
        v.CPPENUMNAME = "Mode";
        v.DOCUMENTATION = "The mode type is used to specify major/minor and other mode distinctions. Valid mode values include major, minor, dorian, phrygian, lydian, mixolydian, aeolian, ionian, locrian, and none.";
        v.ENUMCPPVALUES.push_back( "major" );
        v.ENUMCPPVALUES.push_back( "minor" );
        v.ENUMCPPVALUES.push_back( "dorian" );
        v.ENUMCPPVALUES.push_back( "phrygian" );
        v.ENUMCPPVALUES.push_back( "lydian" );
        v.ENUMCPPVALUES.push_back( "mixolydian" );
        v.ENUMCPPVALUES.push_back( "aeolian" );
        v.ENUMCPPVALUES.push_back( "ionian" );
        v.ENUMCPPVALUES.push_back( "locrian" );
        v.ENUMCPPVALUES.push_back( "none" );
        v.ENUMCPPVALUES.push_back( "other" );
        
        v.ENUMXMLVALUES.push_back( "major" );
        v.ENUMXMLVALUES.push_back( "minor" );
        v.ENUMXMLVALUES.push_back( "dorian" );
        v.ENUMXMLVALUES.push_back( "phrygian" );
        v.ENUMXMLVALUES.push_back( "lydian" );
        v.ENUMXMLVALUES.push_back( "mixolydian" );
        v.ENUMXMLVALUES.push_back( "aeolian" );
        v.ENUMXMLVALUES.push_back( "ionian" );
        v.ENUMXMLVALUES.push_back( "locrian" );
        v.ENUMXMLVALUES.push_back( "none" );
        v.ENUMXMLVALUES.push_back( "other" );
        v.MUSICXMLTYPENAME = "mode";
        v.XMLNODEID = 57;
        
        BuilderMxEnum builder( v );
        
        string lexiconDirectory = "../../../../../Lexicon/Temp/";
        stringstream cppFileContents;
        cppFileContents << builder.getCppFileContents();
        
        stringstream hFileContents;
        hFileContents << builder.getHFileContents();
        
        stringstream cppFilePath;
        cppFilePath << lexiconDirectory << v.CLASSNAME << ".cpp";
        
        stringstream hFilePath;
        hFilePath << lexiconDirectory << v.CLASSNAME << ".h";
        
        fileStream( hFilePath.str(), hFileContents );
        fileStream( cppFilePath.str(), cppFileContents );
        
        
        
        string whereTo = "../../../../../Lexicon/Temp/";
        std::stringstream testFilePath_ss;
        testFilePath_ss << whereTo << v.CLASSNAME << "Test.cpp";
        std::string testFilePath = testFilePath_ss.str();
        stringstream ss;
        TestGenerator tgen( v );
        tgen.includes( ss );
        tgen.generateTests( ss );
        fileStream( testFilePath, ss );
        
        cout << "," << v.XMLNODEID << "--" << v.CLASSNAME << " created." << endl << endl;
    }
    // Create the MxEnumLineWidthType type
    if ( false )
    {
        
        
        MxEnumInfoValues v;
        v.CLASSNAME = "MxEnumLineWidthType";
        v.CPPENUMNAME = "LineWidthType";
        v.DOCUMENTATION = "The line-width-type defines what type of line is being defined in a line-width element. Values include beam, bracket, dashes, enclosure, ending, extend, heavy barline, leger, light barline, octave shift, pedal, slur middle, slur tip, staff, stem, tie middle, tie tip, tuplet bracket, and wedge. This is left as a string so that other application-specific types can be defined, but it is made a separate type so that it can be redefined more strictly.";
        
        v.ENUMCPPVALUES.push_back( "beam" );
        v.ENUMCPPVALUES.push_back( "bracket" );
        v.ENUMCPPVALUES.push_back( "dashes" );
        v.ENUMCPPVALUES.push_back( "enclosure" );
        v.ENUMCPPVALUES.push_back( "ending" );
        v.ENUMCPPVALUES.push_back( "extend" );
        v.ENUMCPPVALUES.push_back( "heavyBarline" );
        v.ENUMCPPVALUES.push_back( "leger" );
        v.ENUMCPPVALUES.push_back( "lightBarline" );
        v.ENUMCPPVALUES.push_back( "octaveShift" );
        v.ENUMCPPVALUES.push_back( "pedal" );
        v.ENUMCPPVALUES.push_back( "slurMiddle" );
        v.ENUMCPPVALUES.push_back( "slurTip" );
        v.ENUMCPPVALUES.push_back( "staff" );
        v.ENUMCPPVALUES.push_back( "stem" );
        v.ENUMCPPVALUES.push_back( "tieMiddle" );
        v.ENUMCPPVALUES.push_back( "tieTip" );
        v.ENUMCPPVALUES.push_back( "tupletBracket" );
        v.ENUMCPPVALUES.push_back( "wedge" );
        v.ENUMCPPVALUES.push_back( "other" );
        
        v.ENUMXMLVALUES.push_back( "beam" );
        v.ENUMXMLVALUES.push_back( "bracket" );
        v.ENUMXMLVALUES.push_back( "dashes" );
        v.ENUMXMLVALUES.push_back( "enclosure" );
        v.ENUMXMLVALUES.push_back( "ending" );
        v.ENUMXMLVALUES.push_back( "extend" );
        v.ENUMXMLVALUES.push_back( "heavy barline" );
        v.ENUMXMLVALUES.push_back( "leger" );
        v.ENUMXMLVALUES.push_back( "light barline" );
        v.ENUMXMLVALUES.push_back( "octave shift" );
        v.ENUMXMLVALUES.push_back( "pedal" );
        v.ENUMXMLVALUES.push_back( "slur middle" );
        v.ENUMXMLVALUES.push_back( "slur tip" );
        v.ENUMXMLVALUES.push_back( "staff" );
        v.ENUMXMLVALUES.push_back( "stem" );
        v.ENUMXMLVALUES.push_back( "tie middle" );
        v.ENUMXMLVALUES.push_back( "tie tip" );
        v.ENUMXMLVALUES.push_back( "tuplet bracket" );
        v.ENUMXMLVALUES.push_back( "wedge" );
        v.ENUMXMLVALUES.push_back( "other" );

        
        v.MUSICXMLTYPENAME = "line-width-type";
        v.XMLNODEID = 95;
        
        BuilderMxEnum builder( v );
        
        string lexiconDirectory = "../../../../../Lexicon/Temp/";
        stringstream cppFileContents;
        cppFileContents << builder.getCppFileContents();
        
        stringstream hFileContents;
        hFileContents << builder.getHFileContents();
        
        stringstream cppFilePath;
        cppFilePath << lexiconDirectory << v.CLASSNAME << ".cpp";
        
        stringstream hFilePath;
        hFilePath << lexiconDirectory << v.CLASSNAME << ".h";
        
        fileStream( hFilePath.str(), hFileContents );
        fileStream( cppFilePath.str(), cppFileContents );
        
        
        
        string whereTo = "../../../../../Lexicon/Temp/";
        std::stringstream testFilePath_ss;
        testFilePath_ss << whereTo << v.CLASSNAME << "Test.cpp";
        std::string testFilePath = testFilePath_ss.str();
        stringstream ss;
        TestGenerator tgen( v );
        tgen.includes( ss );
        tgen.generateTests( ss );
        fileStream( testFilePath, ss );
        
        cout << "," << v.XMLNODEID << "--" << v.CLASSNAME << " created." << endl << endl;
    }
    
    // Create MxNumberPositiveDivisions classes
    if ( false ) // NOOOOOOOOO do not run this ever again
    {
        MxNumberInfoDecimal mxdecs;
        mxdecs.ClassName = "MxNumberPositiveDivisions";
        mxdecs.Documentation = "The positive-divisions type restricts divisions values to positive numbers.";
        mxdecs.isLBound = true;
        mxdecs.LBound = 0L;
        mxdecs.isLIncl = false;
        mxdecs.isUBound = false;
        mxdecs.isUIncl = true;
        mxdecs.UBound = 1000L;
        mxdecs.MusicXmlID = 30;
        mxdecs.MusicXmlName = "positive-divisions";
        string lexiconDirectory = "../../../../../Lexicon/";
        string testDirectory = "../../../../../LexiconTestSmall/LexiconTestSmall/";
         
        BuilderMxNumberDecimal builder( mxdecs );
        //int x = 1;
        //#if 1==0
        stringstream cppFileContents;
        cppFileContents << builder.getCppFileContents();
        
        stringstream hFileContents;
        hFileContents << builder.getHFileContents();
        
        stringstream cppFilePath;
        cppFilePath << lexiconDirectory << mxdecs.ClassName << ".cpp";
        
        stringstream hFilePath;
        hFilePath << lexiconDirectory << mxdecs.ClassName << ".h";
        
        fileStream( hFilePath.str(), hFileContents );
        fileStream( cppFilePath.str(), cppFileContents );
        
        stringstream testFileName_ss;
        testFileName_ss << testDirectory << mxdecs.getName() << "Test.cpp";
        string testFileName = testFileName_ss.str();
        MxNumberDecimalTestFile tests( mxdecs );
        fileStream( testFileName, tests.toString() );
        cout << mxdecs.MusicXmlID << end();
    }
    // Create MxNumberDecimal classes
    if ( false ) // NOOOOOOOOO do not run this ever again
    {
        MxNumberInfoDecimal mxdecs;
        mxdecs.ClassName = "MxNumberDecimal";
        mxdecs.Documentation = "There is no corresponding MusicXML type for MxNumberDecimal. This is more akin to generic xs:decimal as it is a float with no restrictions on value.";
        mxdecs.isLBound = false;
        mxdecs.LBound = 1000L;
        mxdecs.isLIncl = true;
        mxdecs.isUBound = false;
        mxdecs.isUIncl = true;
        mxdecs.UBound = 1000L;
        mxdecs.MusicXmlID = -1;
        mxdecs.MusicXmlName = "xs-decimal";
        string lexiconDirectory = "../../../../../Lexicon/";
        string testDirectory = "../../../../../LexiconTestSmall/LexiconTestSmall/";
        
        BuilderMxNumberDecimal builder( mxdecs );
        //int x = 1;
        //#if 1==0
        stringstream cppFileContents;
        cppFileContents << builder.getCppFileContents();
        
        stringstream hFileContents;
        hFileContents << builder.getHFileContents();
        
        stringstream cppFilePath;
        cppFilePath << lexiconDirectory << mxdecs.ClassName << ".cpp";
        
        stringstream hFilePath;
        hFilePath << lexiconDirectory << mxdecs.ClassName << ".h";
        
        fileStream( hFilePath.str(), hFileContents );
        fileStream( cppFilePath.str(), cppFileContents );
        
        stringstream testFileName_ss;
        testFileName_ss << testDirectory << mxdecs.getName() << "Test.cpp";
        string testFileName = testFileName_ss.str();
        MxNumberDecimalTestFile tests( mxdecs );
        fileStream( testFileName, tests.toString() );
        cout << mxdecs.MusicXmlID << end();
    }
    // Create MxNumberPositiveIntegerOrEmpty classe
    if ( false ) // NOOOOOOOOO do not run this ever again
    {
        MxNumberInfoInt mxdecs;
        mxdecs.ClassName = "MxNumberPositiveIntegerOrEmpty";
        mxdecs.Documentation = "The positive-integer-or-empty values can be either a positive integer or an empty string.";
        mxdecs.isLBound = true;
        mxdecs.LBound = 0;
        mxdecs.isLIncl = false;
        mxdecs.isUBound = false;
        mxdecs.isUIncl = true;
        mxdecs.UBound = 32767;
        mxdecs.MusicXmlID = 31;
        mxdecs.MusicXmlName = "positive-integer-or-empty";
        string lexiconDirectory = "../../../../../Lexicon/Temp/";
        string testDirectory = "../../../../../Lexicon/Temp/";
        
        BuilderMxNumberInt builder( mxdecs );
        //int x = 1;
        //#if 1==0
        stringstream cppFileContents;
        cppFileContents << builder.getCppFileContents();
        
        stringstream hFileContents;
        hFileContents << builder.getHFileContents();
        
        stringstream cppFilePath;
        cppFilePath << lexiconDirectory << mxdecs.ClassName << ".cpp";
        
        stringstream hFilePath;
        hFilePath << lexiconDirectory << mxdecs.ClassName << ".h";
        
        fileStream( hFilePath.str(), hFileContents );
        fileStream( cppFilePath.str(), cppFileContents );
        
        stringstream testFileName_ss;
        testFileName_ss << testDirectory << mxdecs.getName() << "Test.cpp";
        string testFileName = testFileName_ss.str();
        MxNumberIntTestFile tests( mxdecs );
        fileStream( testFileName, tests.toString() );
        cout << mxdecs.MusicXmlID << end();
    }
    return 0;
}

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

