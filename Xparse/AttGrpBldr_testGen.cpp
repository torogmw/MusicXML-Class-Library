/* See MusicXML License at the bottom of this code page. */


#include "AttGrpBldr.h"
#include "TestCode.h"
#include "TestGroup.h"
#include "mainDoLoadSimpleTypes.h"
#include "ExecuteScalarString.h"
#include "LexiconBaseObjects.h"
#include "mainDoLoadSimpleTypes.h"
#include "MxNumber.h"
#include <cmath>

namespace XsdClasses
{
    using namespace mjb;
    using namespace lexicon;
    
    TestGroup AttGrpBldr::testGenConstructor() const
    {
        TestCode ctorSimple( "Ctor", this->getName() );
        std::stringstream codeline1;
        codeline1 << this->getName() << " object;";
        ctorSimple.addCodeLine( 0, codeline1 );
        ctorSimple.addCodeLine( 0, TestCode::ck( "true" ) );
        TestGroup grp;
        grp.setDocumentationComment( "Constructor" );
        grp.setSeparatorComment( "Constructor" );
        grp.addTest( ctorSimple );
        
        int i = 0;
        FunctionCollection gvfuncs = this->myInfo->getGetValueFunctions();
        for( Function func : gvfuncs )
        {
            std::string defaultString;
            ObjectList olist;
            mainDoLoadSimpleTypes( olist );
            for ( auto o : olist )
            {
                if ( o->getClassName() == func.getReturnType() )
                {
                    std::stringstream sstr1;
                    sstr1 << '"' << o->toString() << '"';
                    defaultString = sstr1.str();
                    break;
                }
            }
            FunctionCollection dfltfuncs = this->myInfo->getGetDefaultValueFunctions();
            for ( auto dfunc : dfltfuncs )
            {
                if ( dfunc.getNote() == func.getNote() )
                {
                    std::stringstream sstr2;
                    std::string call = dfunc.getCode().substr( 7, dfunc.getCode().size()-7-1 );
                    sstr2 << "( " << call << " ).toString()";
                    
                    defaultString = sstr2.str();
                    std::string helpme = defaultString.substr( 0, 4 );
                    if ( helpme == "( my" )
                    {
                        std::stringstream thisSql;
                        thisSql << "SELECT DefaultValue FROM attributes WHERE AttributeID = " << dfunc.getNote() << ";";
                        std::string defaultValFromTable = mysqlpp::ExecuteScalarString( constants::getSqlConnectionValues(), thisSql.str() );
                        std::stringstream sstr000;
                        sstr000 << "( " << dfunc.getReturnType() << "( " << defaultValFromTable << " ) ).toString()";
                        defaultString = sstr000.str();
                    }
                    break;
                }
            }
            if ( defaultString.size() == 0 )
            {
                defaultString = "\"\"";
            }
            std::stringstream sstr3;
            sstr3 << "std::string expected = " << defaultString << ";";
            std::stringstream sstr4;
            sstr4 << "std::string actual = object." << func.getName() << "().toString();";
            std::stringstream testName;
            testName << "ctorValues" << i;
            TestCode test( testName.str(), this->getName() );
            test.addCodeLine( 0, codeline1.str() );
            test.addCodeLine( 0, sstr3.str() );
            test.addCodeLine( 0, sstr4.str() );
            test.addCodeLine( 0, TestCode::ckEq() );
            grp.addTest( test );
            ++i;
        }
        
        
        return grp;
    }
    
    TestGroup AttGrpBldr::testGenClassInfoGetters() const
    {
        TestGroup tgrp;
        tgrp.setSeparatorComment( "Get Class Info" );
        
        TestCode test( "getClassName", this->getName() );
        std::stringstream codeline1;
        codeline1 << this->getName() << " object;";
        std::stringstream expected1;
        expected1 << "std::string expected = \"" << this->getName() << "\";";
        std::stringstream actual1;
        actual1 << "std::string actual = object.getClassName();";
        test.addCodeLine( 0, codeline1 );
        test.addCodeLine( 0, expected1 );
        test.addCodeLine( 0, actual1 );
        test.addCodeLine( 0, TestCode::ckEq() );
        tgrp.addTest( test );
        
        codeline1.str( "" );
        expected1.str( "" );
        actual1.str( "" );
        
        test = TestCode( "getXmlTypeName", this->getName() );
        codeline1 << this->getName() << " object;";
        expected1 << "std::string expected = \"" << this->myInfo->getName() << "\";";
        actual1 << "std::string actual = object.getXmlTypeName();";
        test.addCodeLine( 0, codeline1 );
        test.addCodeLine( 0, expected1 );
        test.addCodeLine( 0, actual1 );
        test.addCodeLine( 0, TestCode::ckEq() );
        tgrp.addTest( test );
        
        codeline1.str( "" );
        expected1.str( "" );
        actual1.str( "" );
        
        test = TestCode( "getDocumentation", this->getName() );
        codeline1 << this->getName() << " object;";
        expected1 << "std::string expected = \"" << this->myInfo->getDocumentation() << "\";";
        actual1 << "std::string actual = object.getDocumentation();";
        test.addCodeLine( 0, codeline1 );
        test.addCodeLine( 0, expected1 );
        test.addCodeLine( 0, actual1 );
        test.addCodeLine( 0, TestCode::ckEq() );
        tgrp.addTest( test );
        
        codeline1.str( "" );
        expected1.str( "" );
        actual1.str( "" );
        

        return tgrp;
    }
    
    TestGroup AttGrpBldr::testGenSetValueFuncs() const
    {
        TestGroup tgrp;
        tgrp.setSeparatorComment( "SetValue Functions" );
        int testNumber = 0;
        
        std::string checkNotEqual = TestCode::ck( "( value1 != value2 )" );
        
        FunctionCollection setters = this->myInfo->getSetValueFunctions();
        for ( Function f : setters )
        {
            std::string ret = f.getParameter( 0 ).getDataType();
            
            ObjectList simpleTypes;
            mainDoLoadSimpleTypes( simpleTypes );
            HMxParseableObject myDataType;
            for ( HMxParseableObject o : simpleTypes )
            {
                if( o->getClassName() == ret )
                {
                    myDataType = o;
                    break;
                }
            }
            if ( myDataType->getClassName().substr( 0, 6 ) == "MxEnum" ||
                 myDataType->getClassName() == "XlinkType" ||
                 myDataType->getClassName() == "XlinkShow" ||
                 myDataType->getClassName() == "XlinkActuate" ||
                 myDataType->getClassName() == "XmlSpace" )
            {
                
                HMxEnum penum = std::dynamic_pointer_cast<MxEnum>( myDataType );
                std::string enumName;
                if ( myDataType->getClassName().substr( 0, 6) == "MxEnum" )
                {
                    enumName = penum->getClassName().substr( 6 );
                }
                else
                {
                    enumName = penum->getClassName();
                }
                std::stringstream value1;
                value1 << penum->getClassName() << " value1( ";
                value1 << "lexicon::enums::" << enumName;
                penum->setValueInt( penum->getSize()-1 );
                value1 << "::" << penum->getCppEnumSymbolAsString() << " );";
                
                std::stringstream value2;
                value2 << penum->getClassName() << " value2( ";
                value2 << "lexicon::enums::" << enumName;
                penum->setValueInt( penum->getSize()-2 );
                value2 << "::" << penum->getCppEnumSymbolAsString() << " );";
                
                std::stringstream testObject;
                testObject << this->getName() << " object;";
                
                std::stringstream setValue1;
                setValue1 << "object." << f.getName() << "( value1 );";
                
                std::stringstream expected1;
                expected1 << penum->getClassName() << " expected = value1;";
                std::stringstream actual1;
                actual1 << penum->getClassName() << " actual = object.";
                std::string getterName;
                for ( Function getter : myInfo->getGetValueFunctions() )
                {
                    if ( f.getName().substr( 3 ) == getter.getName().substr( 3 ) )
                    {
                        getterName = getter.getName();
                    }
                }
                actual1 << getterName << "();";
                std::stringstream setValue2;
                setValue2 << "object." << f.getName() << "( value2 );";
                std::stringstream expected2;
                expected2 << "expected = value2;";
                std::stringstream actual2;
                actual2 << "actual = object." << getterName << "();";
                std::stringstream testName;
                testName << f.getName() << testNumber;
                TestCode test( testName.str(), this->getName() );
                test.addCodeLine( 0, value1.str() );
                test.addCodeLine( 0, value2.str() );
                test.addCodeLine( 0, checkNotEqual );
                test.addCodeLine( 0, testObject.str() );
                test.addCodeLine( 0, setValue1.str() );
                test.addCodeLine( 0, expected1.str() );
                test.addCodeLine( 0, actual1.str() );
                test.addCodeLine( 0, TestCode::ckEq() );
                test.addCodeLine( 0, setValue2.str() );
                test.addCodeLine( 0, expected2.str() );
                test.addCodeLine( 0, actual2.str() );
                test.addCodeLine( 0, TestCode::ckEq() );
                
                tgrp.addTest( test );
                ++testNumber;
            }
            else if ( HMxNumberInt ptr = std::dynamic_pointer_cast<MxNumber<int>>( myDataType ) )
            {
                std::stringstream value1;
                value1 << ptr->getClassName() << " value1( 1 );";
                
                std::stringstream value2;
                value2 << ptr->getClassName() << " value2( 2 );";
                
                
                std::stringstream testObject;
                testObject << this->getName() << " object;";
                
                std::stringstream setValue1;
                setValue1 << "object." << f.getName() << "( value1 );";
                
                std::stringstream expected1;
                expected1 << ptr->getClassName() << " expected = value1;";
                std::stringstream actual1;
                actual1 << ptr->getClassName() << " actual = object.";
                std::string getterName;
                for ( Function getter : myInfo->getGetValueFunctions() )
                {
                    if ( f.getName().substr( 3 ) == getter.getName().substr( 3 ) )
                    {
                        getterName = getter.getName();
                    }
                }
                actual1 << getterName << "();";
                std::stringstream setValue2;
                setValue2 << "object." << f.getName() << "( value2 );";
                std::stringstream expected2;
                expected2 << "expected = value2;";
                std::stringstream actual2;
                actual2 << "actual = object." << getterName << "();";
                std::stringstream testName;
                testName << f.getName() << testNumber;
                TestCode test( testName.str(), this->getName() );
                test.addCodeLine( 0, value1.str() );
                test.addCodeLine( 0, value2.str() );
                test.addCodeLine( 0, checkNotEqual );
                test.addCodeLine( 0, testObject.str() );
                test.addCodeLine( 0, setValue1.str() );
                test.addCodeLine( 0, expected1.str() );
                test.addCodeLine( 0, actual1.str() );
                test.addCodeLine( 0, TestCode::ckEq() );
                test.addCodeLine( 0, setValue2.str() );
                test.addCodeLine( 0, expected2.str() );
                test.addCodeLine( 0, actual2.str() );
                test.addCodeLine( 0, TestCode::ckEq() );
                
                tgrp.addTest( test );
                ++testNumber;
            }
            else if ( HMxNumberLongDouble ptr = std::dynamic_pointer_cast<MxNumber<long double>>( myDataType ) )
            {
                std::stringstream value1;
                if ( ptr->isLowerRangeBound() )
                {
                    long double lowerBound = ptr->getLowerBound();
                    value1 << ptr->getClassName() << " value1( " << ( lowerBound + 0.1 ) << " );";
                }
                else
                {
                    value1 << ptr->getClassName() << " value1( 0.1 );";
                }
                
                std::stringstream value2;
                if ( ptr->isLowerRangeBound() )
                {
                    long double lowerBound = ptr->getLowerBound();
                    value2 << ptr->getClassName() << " value2( " << ( lowerBound + 0.2 ) << " );";
                }
                else
                {
                    value2 << ptr->getClassName() << " value2( 0.2 );";
                }
                
                
                std::stringstream testObject;
                testObject << this->getName() << " object;";
                
                std::stringstream setValue1;
                setValue1 << "object." << f.getName() << "( value1 );";
                
                std::stringstream expected1;
                expected1 << ptr->getClassName() << " expected = value1;";
                std::stringstream actual1;
                actual1 << ptr->getClassName() << " actual = object.";
                std::string getterName;
                for ( Function getter : myInfo->getGetValueFunctions() )
                {
                    if ( f.getName().substr( 3 ) == getter.getName().substr( 3 ) )
                    {
                        getterName = getter.getName();
                    }
                }
                actual1 << getterName << "();";
                std::stringstream setValue2;
                setValue2 << "object." << f.getName() << "( value2 );";
                std::stringstream expected2;
                expected2 << "expected = value2;";
                std::stringstream actual2;
                actual2 << "actual = object." << getterName << "();";
                std::stringstream testName;
                testName << f.getName() << testNumber;
                TestCode test( testName.str(), this->getName() );
                test.addCodeLine( 0, value1.str() );
                test.addCodeLine( 0, value2.str() );
                test.addCodeLine( 0, checkNotEqual );
                test.addCodeLine( 0, testObject.str() );
                test.addCodeLine( 0, setValue1.str() );
                test.addCodeLine( 0, expected1.str() );
                test.addCodeLine( 0, actual1.str() );
                test.addCodeLine( 0, TestCode::ckEq() );
                test.addCodeLine( 0, setValue2.str() );
                test.addCodeLine( 0, expected2.str() );
                test.addCodeLine( 0, actual2.str() );
                test.addCodeLine( 0, TestCode::ckEq() );
                
                tgrp.addTest( test );
                ++testNumber;
            }
            else if (myDataType->getClassName() == "MxColor" )
            {
                std::stringstream value1;
                value1 << myDataType->getClassName() << " value1( \"#12131415\" );";
                
                std::stringstream value2;
                value2 << myDataType->getClassName() << " value2( 155, 34, 145, 192 );";
                
                
                std::stringstream testObject;
                testObject << this->getName() << " object;";
                
                std::stringstream setValue1;
                setValue1 << "object." << f.getName() << "( value1 );";
                
                std::stringstream expected1;
                expected1 << myDataType->getClassName() << " expected = value1;";
                std::stringstream actual1;
                actual1 << myDataType->getClassName() << " actual = object.";
                std::string getterName;
                for ( Function getter : myInfo->getGetValueFunctions() )
                {
                    if ( f.getName().substr( 3 ) == getter.getName().substr( 3 ) )
                    {
                        getterName = getter.getName();
                    }
                }
                actual1 << getterName << "();";
                std::stringstream setValue2;
                setValue2 << "object." << f.getName() << "( value2 );";
                std::stringstream expected2;
                expected2 << "expected = value2;";
                std::stringstream actual2;
                actual2 << "actual = object." << getterName << "();";
                std::stringstream testName;
                testName << f.getName() << testNumber;
                TestCode test( testName.str(), this->getName() );
                test.addCodeLine( 0, value1.str() );
                test.addCodeLine( 0, value2.str() );
                test.addCodeLine( 0, checkNotEqual );
                test.addCodeLine( 0, testObject.str() );
                test.addCodeLine( 0, setValue1.str() );
                test.addCodeLine( 0, expected1.str() );
                test.addCodeLine( 0, actual1.str() );
                test.addCodeLine( 0, TestCode::ckEq() );
                test.addCodeLine( 0, setValue2.str() );
                test.addCodeLine( 0, expected2.str() );
                test.addCodeLine( 0, actual2.str() );
                test.addCodeLine( 0, TestCode::ckEq() );
                
                tgrp.addTest( test );
                ++testNumber;
            }
            else if (myDataType->getClassName() == "XsToken" )
            {
                std::stringstream value1;
                value1 << myDataType->getClassName() << " value1( \"ABC\" );";
                
                std::stringstream value2;
                value2 << myDataType->getClassName() << " value2( \"XYZ\" );";
                
                
                std::stringstream testObject;
                testObject << this->getName() << " object;";
                
                std::stringstream setValue1;
                setValue1 << "object." << f.getName() << "( value1 );";
                
                std::stringstream expected1;
                expected1 << myDataType->getClassName() << " expected = value1;";
                std::stringstream actual1;
                actual1 << myDataType->getClassName() << " actual = object.";
                std::string getterName;
                for ( Function getter : myInfo->getGetValueFunctions() )
                {
                    if ( f.getName().substr( 3 ) == getter.getName().substr( 3 ) )
                    {
                        getterName = getter.getName();
                    }
                }
                actual1 << getterName << "();";
                std::stringstream setValue2;
                setValue2 << "object." << f.getName() << "( value2 );";
                std::stringstream expected2;
                expected2 << "expected = value2;";
                std::stringstream actual2;
                actual2 << "actual = object." << getterName << "();";
                std::stringstream testName;
                testName << f.getName() << testNumber;
                TestCode test( testName.str(), this->getName() );
                test.addCodeLine( 0, value1.str() );
                test.addCodeLine( 0, value2.str() );
                test.addCodeLine( 0, checkNotEqual );
                test.addCodeLine( 0, testObject.str() );
                test.addCodeLine( 0, setValue1.str() );
                test.addCodeLine( 0, expected1.str() );
                test.addCodeLine( 0, actual1.str() );
                test.addCodeLine( 0, TestCode::ckEq() );
                test.addCodeLine( 0, setValue2.str() );
                test.addCodeLine( 0, expected2.str() );
                test.addCodeLine( 0, actual2.str() );
                test.addCodeLine( 0, TestCode::ckEq() );
                
                tgrp.addTest( test );
                ++testNumber;
            }
            else if (myDataType->getClassName() == "MxCommaSeparatedText" )
            {
                std::stringstream value1;
                value1 << myDataType->getClassName() << " value1( \"ABC,UTF\" );";
                
                std::stringstream value2;
                value2 << myDataType->getClassName() << " value2( \"XYZ,CRV\" );";
                
                
                std::stringstream testObject;
                testObject << this->getName() << " object;";
                
                std::stringstream setValue1;
                setValue1 << "object." << f.getName() << "( value1 );";
                
                std::stringstream expected1;
                expected1 << myDataType->getClassName() << " expected = value1;";
                std::stringstream actual1;
                actual1 << myDataType->getClassName() << " actual = object.";
                std::string getterName;
                for ( Function getter : myInfo->getGetValueFunctions() )
                {
                    if ( f.getName().substr( 3 ) == getter.getName().substr( 3 ) )
                    {
                        getterName = getter.getName();
                    }
                }
                actual1 << getterName << "();";
                std::stringstream setValue2;
                setValue2 << "object." << f.getName() << "( value2 );";
                std::stringstream expected2;
                expected2 << "expected = value2;";
                std::stringstream actual2;
                actual2 << "actual = object." << getterName << "();";
                std::stringstream testName;
                testName << f.getName() << testNumber;
                TestCode test( testName.str(), this->getName() );
                test.addCodeLine( 0, value1.str() );
                test.addCodeLine( 0, value2.str() );
                test.addCodeLine( 0, checkNotEqual );
                test.addCodeLine( 0, testObject.str() );
                test.addCodeLine( 0, setValue1.str() );
                test.addCodeLine( 0, expected1.str() );
                test.addCodeLine( 0, actual1.str() );
                test.addCodeLine( 0, TestCode::ckEq() );
                test.addCodeLine( 0, setValue2.str() );
                test.addCodeLine( 0, expected2.str() );
                test.addCodeLine( 0, actual2.str() );
                test.addCodeLine( 0, TestCode::ckEq() );
                
                tgrp.addTest( test );
                ++testNumber;
            }
            else if (myDataType->getClassName() == "MxFontSize" )
            {
                std::stringstream value1;
                value1 << myDataType->getClassName() << " value1( 0.1L );";
                
                std::stringstream value2;
                value2 << myDataType->getClassName() << " value2( \"small\" );";
                
                
                std::stringstream testObject;
                testObject << this->getName() << " object;";
                
                std::stringstream setValue1;
                setValue1 << "object." << f.getName() << "( value1 );";
                
                std::stringstream expected1;
                expected1 << myDataType->getClassName() << " expected = value1;";
                std::stringstream actual1;
                actual1 << myDataType->getClassName() << " actual = object.";
                std::string getterName;
                for ( Function getter : myInfo->getGetValueFunctions() )
                {
                    if ( f.getName().substr( 3 ) == getter.getName().substr( 3 ) )
                    {
                        getterName = getter.getName();
                    }
                }
                actual1 << getterName << "();";
                std::stringstream setValue2;
                setValue2 << "object." << f.getName() << "( value2 );";
                std::stringstream expected2;
                expected2 << "expected = value2;";
                std::stringstream actual2;
                actual2 << "actual = object." << getterName << "();";
                std::stringstream testName;
                testName << f.getName() << testNumber;
                TestCode test( testName.str(), this->getName() );
                test.addCodeLine( 0, value1.str() );
                test.addCodeLine( 0, value2.str() );
                test.addCodeLine( 0, checkNotEqual );
                test.addCodeLine( 0, testObject.str() );
                test.addCodeLine( 0, setValue1.str() );
                test.addCodeLine( 0, expected1.str() );
                test.addCodeLine( 0, actual1.str() );
                test.addCodeLine( 0, TestCode::ckEq() );
                test.addCodeLine( 0, setValue2.str() );
                test.addCodeLine( 0, expected2.str() );
                test.addCodeLine( 0, actual2.str() );
                test.addCodeLine( 0, TestCode::ckEq() );
                
                tgrp.addTest( test );
                ++testNumber;
            }
            else if (myDataType->getClassName() == "XmlLang" )
            {
                std::stringstream value1;
                value1 << myDataType->getClassName() << " value1( \"en\" );";
                
                std::stringstream value2;
                value2 << myDataType->getClassName() << " value2( \"fr\" );";
                
                
                std::stringstream testObject;
                testObject << this->getName() << " object;";
                
                std::stringstream setValue1;
                setValue1 << "object." << f.getName() << "( value1 );";
                
                std::stringstream expected1;
                expected1 << myDataType->getClassName() << " expected = value1;";
                std::stringstream actual1;
                actual1 << myDataType->getClassName() << " actual = object.";
                std::string getterName;
                for ( Function getter : myInfo->getGetValueFunctions() )
                {
                    if ( f.getName().substr( 3 ) == getter.getName().substr( 3 ) )
                    {
                        getterName = getter.getName();
                    }
                }
                actual1 << getterName << "();";
                std::stringstream setValue2;
                setValue2 << "object." << f.getName() << "( value2 );";
                std::stringstream expected2;
                expected2 << "expected = value2;";
                std::stringstream actual2;
                actual2 << "actual = object." << getterName << "();";
                std::stringstream testName;
                testName << f.getName() << testNumber;
                TestCode test( testName.str(), this->getName() );
                test.addCodeLine( 0, value1.str() );
                test.addCodeLine( 0, value2.str() );
                test.addCodeLine( 0, checkNotEqual );
                test.addCodeLine( 0, testObject.str() );
                test.addCodeLine( 0, setValue1.str() );
                test.addCodeLine( 0, expected1.str() );
                test.addCodeLine( 0, actual1.str() );
                test.addCodeLine( 0, TestCode::ckEq() );
                test.addCodeLine( 0, setValue2.str() );
                test.addCodeLine( 0, expected2.str() );
                test.addCodeLine( 0, actual2.str() );
                test.addCodeLine( 0, TestCode::ckEq() );
                
                tgrp.addTest( test );
                ++testNumber;
            }
            else if (myDataType->getClassName() == "XsAnyUri" )
            {
                std::stringstream value1;
                value1 << myDataType->getClassName() << " value1( \"http://matthewjamesbriggs.com\" );";
                
                std::stringstream value2;
                value2 << myDataType->getClassName() << " value2( \"http://somethingelse.com\" );";
                
                
                std::stringstream testObject;
                testObject << this->getName() << " object;";
                
                std::stringstream setValue1;
                setValue1 << "object." << f.getName() << "( value1 );";
                
                std::stringstream expected1;
                expected1 << myDataType->getClassName() << " expected = value1;";
                std::stringstream actual1;
                actual1 << myDataType->getClassName() << " actual = object.";
                std::string getterName;
                for ( Function getter : myInfo->getGetValueFunctions() )
                {
                    if ( f.getName().substr( 3 ) == getter.getName().substr( 3 ) )
                    {
                        getterName = getter.getName();
                    }
                }
                actual1 << getterName << "();";
                std::stringstream setValue2;
                setValue2 << "object." << f.getName() << "( value2 );";
                std::stringstream expected2;
                expected2 << "expected = value2;";
                std::stringstream actual2;
                actual2 << "actual = object." << getterName << "();";
                std::stringstream testName;
                testName << f.getName() << testNumber;
                TestCode test( testName.str(), this->getName() );
                test.addCodeLine( 0, value1.str() );
                test.addCodeLine( 0, value2.str() );
                test.addCodeLine( 0, checkNotEqual );
                test.addCodeLine( 0, testObject.str() );
                test.addCodeLine( 0, setValue1.str() );
                test.addCodeLine( 0, expected1.str() );
                test.addCodeLine( 0, actual1.str() );
                test.addCodeLine( 0, TestCode::ckEq() );
                test.addCodeLine( 0, setValue2.str() );
                test.addCodeLine( 0, expected2.str() );
                test.addCodeLine( 0, actual2.str() );
                test.addCodeLine( 0, TestCode::ckEq() );
                
                tgrp.addTest( test );
                ++testNumber;
            }
            else if (myDataType->getClassName() == "XsNmToken" )
            {
                std::stringstream value1;
                value1 << myDataType->getClassName() << " value1( \"TOKEN1\" );";
                
                std::stringstream value2;
                value2 << myDataType->getClassName() << " value2( \"TOKEN2\" );";
                
                
                std::stringstream testObject;
                testObject << this->getName() << " object;";
                
                std::stringstream setValue1;
                setValue1 << "object." << f.getName() << "( value1 );";
                
                std::stringstream expected1;
                expected1 << myDataType->getClassName() << " expected = value1;";
                std::stringstream actual1;
                actual1 << myDataType->getClassName() << " actual = object.";
                std::string getterName;
                for ( Function getter : myInfo->getGetValueFunctions() )
                {
                    if ( f.getName().substr( 3 ) == getter.getName().substr( 3 ) )
                    {
                        getterName = getter.getName();
                    }
                }
                actual1 << getterName << "();";
                std::stringstream setValue2;
                setValue2 << "object." << f.getName() << "( value2 );";
                std::stringstream expected2;
                expected2 << "expected = value2;";
                std::stringstream actual2;
                actual2 << "actual = object." << getterName << "();";
                std::stringstream testName;
                testName << f.getName() << testNumber;
                TestCode test( testName.str(), this->getName() );
                test.addCodeLine( 0, value1.str() );
                test.addCodeLine( 0, value2.str() );
                test.addCodeLine( 0, checkNotEqual );
                test.addCodeLine( 0, testObject.str() );
                test.addCodeLine( 0, setValue1.str() );
                test.addCodeLine( 0, expected1.str() );
                test.addCodeLine( 0, actual1.str() );
                test.addCodeLine( 0, TestCode::ckEq() );
                test.addCodeLine( 0, setValue2.str() );
                test.addCodeLine( 0, expected2.str() );
                test.addCodeLine( 0, actual2.str() );
                test.addCodeLine( 0, TestCode::ckEq() );
                
                tgrp.addTest( test );
                ++testNumber;
            }
            else if (myDataType->getClassName() == "XlinkHref" )
            {
                std::stringstream value1;
                value1 << myDataType->getClassName() << " value1( \"http://matthewjamesbriggs.com\" );";
                
                std::stringstream value2;
                value2 << myDataType->getClassName() << " value2( \"http://somethingelse.com\" );";
                
                
                std::stringstream testObject;
                testObject << this->getName() << " object;";
                
                std::stringstream setValue1;
                setValue1 << "object." << f.getName() << "( value1 );";
                
                std::stringstream expected1;
                expected1 << myDataType->getClassName() << " expected = value1;";
                std::stringstream actual1;
                actual1 << myDataType->getClassName() << " actual = object.";
                std::string getterName;
                for ( Function getter : myInfo->getGetValueFunctions() )
                {
                    if ( f.getName().substr( 3 ) == getter.getName().substr( 3 ) )
                    {
                        getterName = getter.getName();
                    }
                }
                actual1 << getterName << "();";
                std::stringstream setValue2;
                setValue2 << "object." << f.getName() << "( value2 );";
                std::stringstream expected2;
                expected2 << "expected = value2;";
                std::stringstream actual2;
                actual2 << "actual = object." << getterName << "();";
                std::stringstream testName;
                testName << f.getName() << testNumber;
                TestCode test( testName.str(), this->getName() );
                test.addCodeLine( 0, value1.str() );
                test.addCodeLine( 0, value2.str() );
                test.addCodeLine( 0, checkNotEqual );
                test.addCodeLine( 0, testObject.str() );
                test.addCodeLine( 0, setValue1.str() );
                test.addCodeLine( 0, expected1.str() );
                test.addCodeLine( 0, actual1.str() );
                test.addCodeLine( 0, TestCode::ckEq() );
                test.addCodeLine( 0, setValue2.str() );
                test.addCodeLine( 0, expected2.str() );
                test.addCodeLine( 0, actual2.str() );
                test.addCodeLine( 0, TestCode::ckEq() );
                
                tgrp.addTest( test );
                ++testNumber;
            }
            else if (myDataType->getClassName() == "XlinkRole" )
            {
                std::stringstream value1;
                value1 << myDataType->getClassName() << " value1( \"http://matthewjamesbriggs.com\" );";
                
                std::stringstream value2;
                value2 << myDataType->getClassName() << " value2( \"http://somethingelse.com\" );";
                
                
                std::stringstream testObject;
                testObject << this->getName() << " object;";
                
                std::stringstream setValue1;
                setValue1 << "object." << f.getName() << "( value1 );";
                
                std::stringstream expected1;
                expected1 << myDataType->getClassName() << " expected = value1;";
                std::stringstream actual1;
                actual1 << myDataType->getClassName() << " actual = object.";
                std::string getterName;
                for ( Function getter : myInfo->getGetValueFunctions() )
                {
                    if ( f.getName().substr( 3 ) == getter.getName().substr( 3 ) )
                    {
                        getterName = getter.getName();
                    }
                }
                actual1 << getterName << "();";
                std::stringstream setValue2;
                setValue2 << "object." << f.getName() << "( value2 );";
                std::stringstream expected2;
                expected2 << "expected = value2;";
                std::stringstream actual2;
                actual2 << "actual = object." << getterName << "();";
                std::stringstream testName;
                testName << f.getName() << testNumber;
                TestCode test( testName.str(), this->getName() );
                test.addCodeLine( 0, value1.str() );
                test.addCodeLine( 0, value2.str() );
                test.addCodeLine( 0, checkNotEqual );
                test.addCodeLine( 0, testObject.str() );
                test.addCodeLine( 0, setValue1.str() );
                test.addCodeLine( 0, expected1.str() );
                test.addCodeLine( 0, actual1.str() );
                test.addCodeLine( 0, TestCode::ckEq() );
                test.addCodeLine( 0, setValue2.str() );
                test.addCodeLine( 0, expected2.str() );
                test.addCodeLine( 0, actual2.str() );
                test.addCodeLine( 0, TestCode::ckEq() );
                
                tgrp.addTest( test );
                ++testNumber;
            }
            else if (myDataType->getClassName() == "XlinkTitle" )
            {
                std::stringstream value1;
                value1 << myDataType->getClassName() << " value1( \"Title A\" );";
                
                std::stringstream value2;
                value2 << myDataType->getClassName() << " value2( \"Title B\" );";
                
                
                std::stringstream testObject;
                testObject << this->getName() << " object;";
                
                std::stringstream setValue1;
                setValue1 << "object." << f.getName() << "( value1 );";
                
                std::stringstream expected1;
                expected1 << myDataType->getClassName() << " expected = value1;";
                std::stringstream actual1;
                actual1 << myDataType->getClassName() << " actual = object.";
                std::string getterName;
                for ( Function getter : myInfo->getGetValueFunctions() )
                {
                    if ( f.getName().substr( 3 ) == getter.getName().substr( 3 ) )
                    {
                        getterName = getter.getName();
                    }
                }
                actual1 << getterName << "();";
                std::stringstream setValue2;
                setValue2 << "object." << f.getName() << "( value2 );";
                std::stringstream expected2;
                expected2 << "expected = value2;";
                std::stringstream actual2;
                actual2 << "actual = object." << getterName << "();";
                std::stringstream testName;
                testName << f.getName() << testNumber;
                TestCode test( testName.str(), this->getName() );
                test.addCodeLine( 0, value1.str() );
                test.addCodeLine( 0, value2.str() );
                test.addCodeLine( 0, checkNotEqual );
                test.addCodeLine( 0, testObject.str() );
                test.addCodeLine( 0, setValue1.str() );
                test.addCodeLine( 0, expected1.str() );
                test.addCodeLine( 0, actual1.str() );
                test.addCodeLine( 0, TestCode::ckEq() );
                test.addCodeLine( 0, setValue2.str() );
                test.addCodeLine( 0, expected2.str() );
                test.addCodeLine( 0, actual2.str() );
                test.addCodeLine( 0, TestCode::ckEq() );
                
                tgrp.addTest( test );
                ++testNumber;
            }
            else if (myDataType->getClassName() == "XsIdRef" )
            {
                std::stringstream value1;
                value1 << myDataType->getClassName() << " value1( \"ID01\" );";
                
                std::stringstream value2;
                value2 << myDataType->getClassName() << " value2( \"ID02\" );";
                
                
                std::stringstream testObject;
                testObject << this->getName() << " object;";
                
                std::stringstream setValue1;
                setValue1 << "object." << f.getName() << "( value1 );";
                
                std::stringstream expected1;
                expected1 << myDataType->getClassName() << " expected = value1;";
                std::stringstream actual1;
                actual1 << myDataType->getClassName() << " actual = object.";
                std::string getterName;
                for ( Function getter : myInfo->getGetValueFunctions() )
                {
                    if ( f.getName().substr( 3 ) == getter.getName().substr( 3 ) )
                    {
                        getterName = getter.getName();
                    }
                }
                actual1 << getterName << "();";
                std::stringstream setValue2;
                setValue2 << "object." << f.getName() << "( value2 );";
                std::stringstream expected2;
                expected2 << "expected = value2;";
                std::stringstream actual2;
                actual2 << "actual = object." << getterName << "();";
                std::stringstream testName;
                testName << f.getName() << testNumber;
                TestCode test( testName.str(), this->getName() );
                test.addCodeLine( 0, value1.str() );
                test.addCodeLine( 0, value2.str() );
                test.addCodeLine( 0, checkNotEqual );
                test.addCodeLine( 0, testObject.str() );
                test.addCodeLine( 0, setValue1.str() );
                test.addCodeLine( 0, expected1.str() );
                test.addCodeLine( 0, actual1.str() );
                test.addCodeLine( 0, TestCode::ckEq() );
                test.addCodeLine( 0, setValue2.str() );
                test.addCodeLine( 0, expected2.str() );
                test.addCodeLine( 0, actual2.str() );
                test.addCodeLine( 0, TestCode::ckEq() );
                
                tgrp.addTest( test );
                ++testNumber;
            }
            else
            {
                throw "uh oh";
            }
            
        }
        return tgrp;
    }
    
    TestGroup AttGrpBldr::testGenGetIsRequiredFuncs() const
    {
        TestGroup tgrp;
        tgrp.setSeparatorComment( "Get IsAttributeRequired" );
        int testNumber = 0;
        
        for (Function f : this->myInfo->getGetIsRequiredFunctions() )
        {
            std::stringstream testName;
            testName << f.getName() << testNumber;
            TestCode test( testName.str(), this->getName() );
            std::stringstream codeline1;
            codeline1 << this->getName() << " object;";
            std::stringstream expected1;
            
            bool isRequired = true;
            std::string derivedAttributeName = f.getName().substr( 5, f.getName().size() - 13 );
            for ( AttributeInfoV2 a : this->myInfo->getAttributesAndChildAttributes() )
            {
                if ( a.getAttributeCppName() == derivedAttributeName )
                {
                    isRequired = a.getIsRequired();
                    break;
                }
            }
            
            expected1 << "bool expected = " << std::boolalpha << isRequired << ";";
            std::stringstream actual1;
            actual1 << "bool actual = object." << f.getName() << "();";
            test.addCodeLine( 0, codeline1 );
            test.addCodeLine( 0, expected1 );
            test.addCodeLine( 0, actual1 );
            test.addCodeLine( 0, TestCode::ckEq() );
            tgrp.addTest( test );
            
            codeline1.str( "" );
            expected1.str( "" );
            actual1.str( "" );
            testName.str( "" );
            testNumber++;
        }
        return tgrp;
    }
    
    TestGroup AttGrpBldr::testGenIsPresent() const
    {
        
        TestGroup tgrp;
        tgrp.setSeparatorComment( "IsAttributePresent" );
        int testNumber = 0;
        
        for (Function f : this->myInfo->getGetIsPresentFunctions() )
        {
            std::stringstream testName;
            testName << f.getName() << testNumber;
            TestCode test( testName.str(), this->getName() );
            std::stringstream codeline1;
            codeline1 << this->getName() << " object;";
            std::stringstream expected1;
            
            std::string derivedAttributeName = f.getName().substr( 5, f.getName().size() - 12 );
            AttributeInfoV2 attribute;
            for ( AttributeInfoV2 a : this->myInfo->getAttributesAndChildAttributes() )
            {
                if ( a.getAttributeCppName() == derivedAttributeName )
                {
                    attribute = a;
                    break;
                }
            }
            bool isRequired = attribute.getIsRequired();
            
            expected1 << "bool expected = " << std::boolalpha << isRequired << ";";
            std::stringstream actual1;
            actual1 << "bool actual = object." << f.getName() << "();";
            std::string setFunctionName;
            for (Function setfunc : this->myInfo->getSetIsPresentFunctions() )
            {
                if ( setfunc.getName().substr( 1 ) == f.getName().substr( 1 ) )
                {
                    setFunctionName = setfunc.getName();
                }
            }
            std::stringstream setIsPresent;
            std::stringstream setIsNotPresent;
            if ( isRequired )
            {
                setIsPresent << "/* setter does not exist because this attribute is required */";
                setIsNotPresent << "/* setter does not exist because this attribute is required */";
            }
            else
            {
                setIsPresent << "object." << setFunctionName << "( true );";
                setIsNotPresent << "object." << setFunctionName << "( false );";
            }
            
            std::stringstream expected2;
            expected2 << "expected = true;";
            std::stringstream actual2;
            actual2 << "actual = object." << f.getName() << "();";
            
            std::stringstream expected3;
            expected3 << "expected = " << std::boolalpha << isRequired << ";";
            std::stringstream actual3;
            actual3 << "actual = object." << f.getName() << "();";
            
            test.addCodeLine( 0, codeline1 );
            test.addCodeLine( 0, expected1 );
            test.addCodeLine( 0, actual1 );
            test.addCodeLine( 0, TestCode::ckEq() );
            test.addCodeLine( 0, setIsPresent );
            test.addCodeLine( 0, expected2 );
            test.addCodeLine( 0, actual2 );
            test.addCodeLine( 0, TestCode::ckEq() );
            test.addCodeLine( 0, setIsNotPresent );
            test.addCodeLine( 0, expected3 );
            test.addCodeLine( 0, actual3 );
            test.addCodeLine( 0, TestCode::ckEq() );
            tgrp.addTest( test );
            
            codeline1.str( "" );
            expected1.str( "" );
            actual1.str( "" );
            testName.str( "" );
            testNumber++;
        }
        return tgrp;
    }
#if 1==0
    TestGroup AttGrpBldr::testGenToString() const
    {
        TestGroup tgrp;
        int testNumber = 0;
        std::stringstream allOnTestName;
        allOnTestName << "toString" << testNumber;
        TestCode allOnTest( allOnTestName.str(), this->getName() );
        std::stringstream instantiateAttributeGroup;
        instantiateAttributeGroup << this->getName() << " object;";
        allOnTest.addCodeLine( 0, instantiateAttributeGroup );
        std::stringstream expected;
        bool isFirst = true;
        for ( AttributeWithObject a : myInfo->getAttributeObjectList() )
        {
            if ( ! a.Attribute.getIsRequired() )
            {
                std::stringstream ss;
                ss << "object." << a.Attribute.getFuncSetIsPresent().getName() << "( ";
                ss << "true );";
                allOnTest.addCodeLine( 0, ss.str() );
            }
            AttributeType t = a.Attribute.getAttributeType();

            if ( ! isFirst )
            {
                expected << " ";
            }
            switch ( t )
            {
                
                case AttributeType::String:
                {
                    std::stringstream setValue;
                    setValue << "object." << a.Attribute.getFuncSetValue().getName() << "( ";
                    setValue << a.Attribute.getAttributeCppType() << "( ";
                    std::stringstream stringVal;
                    stringVal << "ABC" << a.Attribute.getAttributeCppName();
                    a.StringCast->fromString( stringVal.str() );
                    setValue << "\"" << a.StringCast->toString();
                    setValue << "\" ) );";
                    if ( ! a.Attribute.getIsFixed() )
                        allOnTest.addCodeLine( 0, setValue.str() );
                    expected << a.Attribute.toString( a.StringCast );
                }
                    break;
                case AttributeType::MxEnum:
                {
                    HMxEnum e = a.EnumCast;
                    int myval = e->getSize();
                    myval -= 2;
                    if ( myval < 0 )
                    {
                        myval = 0;
                    }
                    if ( ! a.Attribute.getIsFixed() )
                    {
                        e->setValueInt( myval );
                    }
                    else
                    {
                        e->setValueInt( 0 );
                    }
                    std::stringstream setValue;
                    setValue << "object." << a.Attribute.getFuncSetValue().getName() << "( ";
                    
                    setValue << a.Attribute.createAllPossibleEnumValues()[myval];
                    setValue << " );";
                    if ( ! a.Attribute.getIsFixed() )
                        allOnTest.addCodeLine( 0, setValue.str() );
                    expected << a.Attribute.toString( e );
                }
                    break;
                case AttributeType::MxNumberLongDouble:
                {
                    HMxNumberLongDouble o = a.LongDoubleCast;
                    long double myval = o->getLowerBound();
                    myval += 0.11;
                    o->setValue( myval );
                    std::stringstream setValue;
                    setValue << "object." << a.Attribute.getFuncSetValue().getName() << "( ";
                    setValue << myval;
                    setValue << " );";
                    if ( ! a.Attribute.getIsFixed() )
                        allOnTest.addCodeLine( 0, setValue.str() );
                    expected << a.Attribute.toString( o );
                }
                    break;
                case AttributeType::MxNumberInt:
                {
                    HMxNumberInt o = a.IntCast;
                    int myval = o->getLowerBound();
                    myval += 1;
                    o->setValue( myval );
                    std::stringstream setValue;
                    setValue << "object." << a.Attribute.getFuncSetValue().getName() << "( ";
                    setValue << myval;
                    setValue << " );";
                    if ( ! a.Attribute.getIsFixed() )
                        allOnTest.addCodeLine( 0, setValue.str() );
                    expected << a.Attribute.toString( o );
                }
                    break;
                case AttributeType::MxColor:
                {
                    std::shared_ptr<MxColor> o = a.MxColorCast;
                    MxColor myval( 21, 45, 98, 123 );
                    *o = myval;
                    std::stringstream setValue;
                    setValue << "object." << a.Attribute.getFuncSetValue().getName() << "( MxColor(\"";
                    setValue << o->toString();
                    setValue << "\" ) );";
                    if ( ! a.Attribute.getIsFixed() )
                        allOnTest.addCodeLine( 0, setValue.str() );
                    expected << a.Attribute.toString( o );
                }
                    break;
                case AttributeType::MxFontSize:
                {
                    std::shared_ptr<MxFontSize> o = a.MxFontSizeCast;
                    MxFontSize myval;
                    myval.setValue( lexicon::enums::CssFontSize::xxLarge );
                    o->setValue( myval.getValueCssFontSize() );
                    std::stringstream setValue;
                    setValue << "object." << a.Attribute.getFuncSetValue().getName() << "( MxFontSize( \"";
                    setValue << o->toString();
                    setValue << "\" ) );";
                    if ( ! a.Attribute.getIsFixed() )
                        allOnTest.addCodeLine( 0, setValue.str() );
                    expected << a.Attribute.toString( o );
                }
                    break;
                default:
                    break;
            } // switch AttributeType
            isFirst = false;

        } // for ( AttributeWithObject a : myInfo->getAttributeObjectList() )
        std::stringstream expected1;
        expected1 << "std::string expected = \"" << expected.str() << "\";";
        allOnTest.addCodeLine( 0, expected1 );
        std::string actual1 = "std::string actual = object.toString();";
        allOnTest.addCodeLine( 0, actual1 );
        allOnTest.addCodeLine( 0, TestCode::ckEq() );
        std::stringstream actual2a;
        actual2a << "std::stringstream sstr;";
        std::stringstream actual2b;
        actual2b << "object.stream( sstr );";
        std::stringstream actual2c;
        actual2c << "actual = sstr.str();";
        allOnTest.addCodeLine( 0, actual2a.str() );
        allOnTest.addCodeLine( 0, actual2b.str() );
        allOnTest.addCodeLine( 0, actual2c.str() );
        allOnTest.addCodeLine( 0, TestCode::ckEq() );
        std::stringstream actual3a;
        actual3a << "std::stringstream sstr2;";
        std::stringstream actual3b;
        actual3b << "sstr2 << object;";
        std::stringstream actual3c;
        actual3c << "actual = sstr2.str();";
        allOnTest.addCodeLine( 0, actual3a.str() );
        allOnTest.addCodeLine( 0, actual3b.str() );
        allOnTest.addCodeLine( 0, actual3c.str() );
        allOnTest.addCodeLine( 0, TestCode::ckEq() );
        tgrp.addTest( allOnTest );
        return tgrp;
    }
#endif
    void writeBools( std::vector<bool>& bools )
    {
        for ( auto it = bools.begin(); it != bools.end(); ++it )
        {
            std::cout << "|" << std::boolalpha << *it;
            if( *it )
            {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
    bool allBoolsTrue( std::vector<bool>& bools )
    {
        bool ret = true;
        for ( auto it = bools.begin(); it != bools.end(); ++it )
        {
            if ( *it == false )
            {
                ret = false;
                break;
            }
        }
        return ret;
    }
    bool allBoolsFalse( std::vector<bool>& bools )
    {
        bool ret = true;
        for ( auto it = bools.begin(); it != bools.end(); ++it )
        {
            if ( *it == true )
            {
                ret = false;
                break;
            }
        }
        return ret;
    }
    void changeAttributeValues( Attributes& attributes )
    {
        for ( AttributeInfoV2 a : attributes )
        {
            a.changeObjectValue();
        }
    }
    Strings isPresentPatternCodeLines( std::vector<bool>& bools, Attributes& attributes, const std::string& objectVariableName )
    {
        Strings output;
        if ( bools.size() != attributes.size() )
        {
            throw "oops";
        }
        int index = 0;
        for ( AttributeInfoV2 a : attributes )
        {
            if ( ! a.getIsRequired() )
            {
                std::stringstream line;
                line << objectVariableName;
                line << "." << a.getFuncSetIsPresent().getName();
                line << "( " << std::boolalpha << bools[ index ];
                line << " );";
                output.push_back( line.str() );
            }
            ++index;
        }
        return output;
    }
    Strings setValueLines( Attributes& attributes, const std::string& objectVariableName )
    {
        Strings output;
        for ( AttributeInfoV2 a : attributes )
        {
            if ( ! a.getIsFixed() )
            {
                output.push_back( a.getSetObjectValueCode( objectVariableName ) );
            }
        }
        return output;
    }
    std::string testName( const std::string& testName, int& testNum )
    {
        std::stringstream ss;
        ss << testName << testNum;
        ++testNum;
        return ss.str();
    }
    TestCode startToStringTest( int& testNum, const std::string& className )
    {
        TestCode test( testName( "toString", testNum ), className );
        std::stringstream instantiate;
        instantiate << className << " object;";
        test.addCodeLine( 0, instantiate );
        test.addCodeLine( 0, "std::string expected;" );
        test.addCodeLine( 0, "std::string actual;" );
        return test;
    }
    void toStringTestAddCheckingLines( TestCode& test )
    {
        test.addCodeLine( 0, "actual = object.toString();" );
        test.addCodeLine( 0, TestCode::ckEq() );
        test.addCodeLine( 0, "std::stringstream sstr1;" );
        test.addCodeLine( 0, "object.stream( sstr1 );" );
        test.addCodeLine( 0, TestCode::ckEq() );
        test.addCodeLine( 0, "std::stringstream sstr2;" );
        test.addCodeLine( 0, "sstr2 << object;" );
        test.addCodeLine( 0, TestCode::ckEq() );
    }
    TestGroup AttGrpBldr::testGenToString() const
    {
        TestGroup tgrp;
        tgrp.setSeparatorComment( "toString" );
        int testNumber = 0;
        Attributes attributes = myInfo->getAttributesAndChildAttributes();
        int num = (int)attributes.size();
        std::vector<bool> bools;
        for ( int i = 0; i < num; ++i )
        {
            bools.push_back( false );
        }
        int iterations = pow( 2, num );
        bool allFalseOccurred = false;
        bool allTrueOccurred = false;
        for ( int h = 0; h < iterations; ++h )
        {
            for ( int j = 1; j <= num; ++j )
            {
                int mod = j;
                int res = h % mod;
                if ( res == 0 )
                {
                    bools[ j-1 ] = ! bools [ j-1 ];
                }
            }
            if ( allBoolsTrue( bools ) && (!allTrueOccurred) )
            {
                TestCode test = startToStringTest( testNumber, getName() );
                changeAttributeValues( attributes );
                for ( AttributeInfoV2 a : attributes )
                {
                    test.addCodeLine( 0, a.getSetObjectValueCode( "object" ) );
                }
                for ( std::string s : isPresentPatternCodeLines( bools, attributes, "object" ) )
                {
                    test.addCodeLine( 0, s );
                }
                std::stringstream expected;
                expected << "expected = \"" << AttGrpInfo::toString( bools, attributes, true ) << "\";";
                test.addCodeLine( 0, expected );
                toStringTestAddCheckingLines( test );
                tgrp.addTest( test );
                allTrueOccurred = true;
            }
            else if ( allBoolsFalse( bools ) && (!allFalseOccurred) )
            {
                TestCode test = startToStringTest( testNumber, getName() );
                changeAttributeValues( attributes );
                for ( std::string s : isPresentPatternCodeLines( bools, attributes, "object" ) )
                {
                    test.addCodeLine( 0, s );
                }
                for ( AttributeInfoV2 a : attributes )
                {
                    test.addCodeLine( 0, a.getSetObjectValueCode( "object" ) );
                }
                std::stringstream expected;
                expected << "expected = \"" << AttGrpInfo::toString( bools, attributes, true ) << "\";";
                test.addCodeLine( 0, expected );
                toStringTestAddCheckingLines( test );
                tgrp.addTest( test );
                allFalseOccurred = true;
            }
            else if ( h < 100 && !allBoolsFalse( bools ) && !allBoolsTrue( bools ) )
            {
                TestCode test = startToStringTest( testNumber, getName() );
                changeAttributeValues( attributes );
                for ( std::string s : isPresentPatternCodeLines( bools, attributes, "object" ) )
                {
                    test.addCodeLine( 0, s );
                }
                for ( AttributeInfoV2 a : attributes )
                {
                    test.addCodeLine( 0, a.getSetObjectValueCode( "object" ) );
                }
                std::stringstream expected;
                expected << "expected = \"" << AttGrpInfo::toString( bools, attributes, true ) << "\";";
                test.addCodeLine( 0, expected );
                toStringTestAddCheckingLines( test );
                tgrp.addTest( test );
            }
        }
        return tgrp;
    }
    
    mjb::TestGroup AttGrpBldr::testGenGetDefaultValue() const
    {
        TestGroup tgrp;
        tgrp.setSeparatorComment( "get Default Value" );
        for ( auto a : myInfo->getAttributesAndChildAttributes() )
        {
            std::string func = a.getFuncGetDefaultValue().getName();
            TestCode test( func, getName() );
            std::stringstream instantiate;
            instantiate << getName() << " object;";
            test.addCodeLine( 0, instantiate );
            std::stringstream expected;
            if ( a.getHasDefault() )
            {
                expected << a.getAttributeCppType() << " expected( " << a.getDefaultValue() << " );";
            }
            else
            {
                expected << a.getAttributeCppType() << " expected;";
            }
            std::stringstream actual;
            actual << a.getAttributeCppType() << " actual = object." << func << "();";
            test.addCodeLine( 0, expected );
            test.addCodeLine( 0, actual );
            test.addCodeLine( 0, TestCode::ckEq() );
            tgrp.addTest( test );
        }
        return tgrp;
    }
    mjb::TestGroup AttGrpBldr::testGenIsDefaultDefined() const
    {
        TestGroup tgrp;
        tgrp.setSeparatorComment( "Is Default Defined" );
        for ( auto a : myInfo->getAttributesAndChildAttributes() )
        {
            std::string func = a.getFuncGetHasDefault().getName();
            TestCode test( func, getName() );
            std::stringstream instantiate;
            instantiate << getName() << " object;";
            test.addCodeLine( 0, instantiate );
            std::stringstream expected;
            expected << "bool expected = " << std::boolalpha << a.getHasDefault() << ";";
            std::stringstream actual;
            actual << "bool actual = object." << func << "();";
            test.addCodeLine( 0, expected );
            test.addCodeLine( 0, actual );
            test.addCodeLine( 0, TestCode::ckEq() );
            tgrp.addTest( test );
        }
        return tgrp;
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

