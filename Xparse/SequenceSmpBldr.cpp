/* matthew james briggs */

#include "SequenceSmpBldr.h"
#include "SequenceParser.h"
#include "ElementCategorize.h"
#include "ElementSmpBldr.h"
#include "ElementSmpParser.h"
#include "ElementEmptyBldr.h"
#include "ElementEmptyParser.h"
#include "ElementMxBldr.h"
#include "ElementMxParser.h"
#include "SectionSeparatorComment.h"
#include "TFunc.h"

namespace XsdClasses
{
    using namespace mjb;
    
    /* ctor */
    SequenceSmpBldr::SequenceSmpBldr( const xparse::ElementPtr& e )
    :mjb::IClassBldr( e, "MxSeqSmp" )
    { init(); }
    
    /* dtor */
    SequenceSmpBldr::~SequenceSmpBldr() {}
    
    void SequenceSmpBldr::init()
    {
        /* INIT Make sure a valid ElementPtr was passed on the constructor */
        if ( ! IClassBldr::getXsdNode() )
        {
            throw std::invalid_argument( "The ElementPtr is null." );
        }
        if( ! SequenceParser::getIsSequence( IClassBldr::getXsdNode() ) )
        {
            throw std::invalid_argument( "This is not a sequence." );
        }
        if ( ! SequenceParser::getIsSequenceComposedOfElementsOnly( IClassBldr::getXsdNode() ) )
        {
            throw std::invalid_argument( "This sequence has items that are not an xs::Element." );
        }
        if ( ! SequenceParser::getIsSequenceComposedOfImplementedElementsOnly( IClassBldr::getXsdNode() ) )
        {
            throw std::invalid_argument( "This sequence has xs:elements that are not implemented yet." );
        }
        
        /* INIT Set the name */
        IClassBldr::setName( SequenceParser::getCppName( IClassBldr::getXsdNode() ), true );
        IClassBldr::setBriefDescription( "This class represents an xs:sequence object from musicxml.xsd." );
        IClassBldr::setFullDescription( "This class represents an xs:sequence object from musicxml.xsd." );
        
        /* INIT Set Xml Info */
        IClassBldr::setXmlDocumentation( "No XSD Documentation." );
        IClassBldr::setXmlName( SequenceParser::getXmlName( getXsdNode() ) );

        /* INIT For each element, construct an ElementBldr */
        xparse::Elements elements = SequenceParser::getElementNodesFromSequenceComposedOfElementsOnly( IClassBldr::getXsdNode() );
        for ( auto e : elements )
        {
            ElementType etype = ElementCategorize::getType( e );
            switch ( etype )
            {
                case ElementType::CxSmpRef:
                {
                    ElementSmpParser parser;
                    HElementSmpInfo info = parser.createElementSmpInfo( e );
                    myElementBldrs.push_back( std::make_shared<ElementSmpBldr>( info ) );
                }
                    break;
                case ElementType::CxEmptyRef:
                {
                    ElementEmptyParser parser;
                    HElementEmptyInfo info = parser.createElementEmptyInfo( e );
                    myElementBldrs.push_back( std::make_shared<ElementEmptyBldr>( info ) );
                }
                    break;
                case ElementType::MxSimpleTypeRef:
                {
                    ElementMxParser parser;
                    HElementMxInfo info = parser.createElementMxInfo( e );
                    myElementBldrs.push_back( std::make_shared<ElementMxBldr>( info ) );
                }
                    break;
                case ElementType::XsTypeRef:
                {
                    ElementMxParser parser;
                    HElementMxInfo info = parser.createElementMxInfo( e );
                    myElementBldrs.push_back( std::make_shared<ElementMxBldr>( info ) );
                }
                default:
                    break;
            }
        }
        
        /* INIT add basic includes */
        IClassBldr::addPublicInclude( Include( "iostream", true ) );
        IClassBldr::addPublicInclude( Include( "memory", true ) );
        IClassBldr::addPublicInclude( Include( "string", true ) );
        IClassBldr::addPublicInclude( Include( "vector", true ) );
        IClassBldr::addPublicInclude( Include( "LexiconBaseObjects.h", false ) );
        IClassBldr::addPrivateInclude( Include( this->getHFileInfo().getFileName(), false ) );
        IClassBldr::addPrivateInclude( Include( "_hidden_indent.h", false ) );
        
        /* INIT Set up TestGroup Helper */
        TFunc::setClassBldr( this );
        TFunc::setTestNumber( 0 );
        addTestGroup( TFunc::getClassInfoTests() );
        
        /* start the stream function */
        Function stream;
        stream.setName( "stream" );
        stream.isVirtual( true );
        stream.isConst( true );
        stream.setReturnType( "std::ostream&" );
        Parameter streamParam1;
        streamParam1.setName( "os_out" );
        streamParam1.setDataType( "std::ostream" );
        streamParam1.isConst( false );
        streamParam1.setParameterType( Parameter::ParameterType::Reference );
        Parameter streamParam2;
        streamParam2.setName( "indentcount_in" );
        streamParam2.setDataType( "int" );
        streamParam2.isConst( false );
        streamParam2.setParameterType( Parameter::ParameterType::Value );
        Parameter streamParam3;
        streamParam3.setName( "indentchars_in" );
        streamParam3.setDataType( "char" );
        streamParam3.isConst( true );
        streamParam3.setDefaultValue( "\\t" );
        streamParam3.setDefaultValueQuotationSymbol( "\"" );
        streamParam3.setParameterType( Parameter::ParameterType::Pointer );
        stream.addParameter( streamParam1 );
        stream.addParameter( streamParam2 );
        stream.addParameter( streamParam3 );
        FunctionGroup stringy;
        stringy.setName( "Stringing and Streaming" );
        
        std::stringstream streamCode( "" );
        int memberNumber = 0;
        streamCode << "bool isFirst = true;" << end();
        
        /* For each element, add appropriate data member, functions, and include */
        for ( HClassBldr h : myElementBldrs )
        {
            ElementType etype = ElementCategorize::getType( h->getXsdNode() );
            int minOccurs = ElementCategorize::getMinOccurs( h->getXsdNode() );
            int maxOccurs = ElementCategorize::getMaxOccurs( h->getXsdNode() );
            bool isUnBounded = ElementCategorize::isMaxOccursUnbounded( h->getXsdNode() );
            std::string elementName = ElementCategorize::getCppName( h->getXsdNode() );
            bool isRequired = ( minOccurs > 0 );
            bool isVector = ( maxOccurs > 1 );
            
            
            
            
            if ( ! isVector )
            {
                addDataMemberAndFunctionsOnsie( h, elementName, isRequired, minOccurs, maxOccurs, isUnBounded, etype, streamCode, memberNumber );
                ++memberNumber;
            }
            else
            {
                addDataMemberAndFunctionsVector( h, elementName, isRequired, minOccurs, maxOccurs, isUnBounded, etype, streamCode, memberNumber );
                ++memberNumber;
            }
        }
        streamCode << "return os_out;";
        stream.setCode( streamCode );
        stringy.addFunction( stream );
        this->addPublicFunctionGroup( stringy );
    }
    
    void SequenceSmpBldr::addDataMemberAndFunctionsOnsie( const HClassBldr& bldr, const std::string& elementName, bool isRequired,
                                                         int minOccurs, int maxOccurs, bool isUnbounded, ElementType etype, std::stringstream& streamCode, int& memberNumberCounter )
    {
        /* Create an empty FunctionGroup */
        FunctionGroup fgrp;
        std::stringstream fgrpName;
        fgrpName << elementName << " Functions";
        fgrp.setName( fgrpName.str() );
        TestGroup tgrp;
        tgrp.setSeparatorComment( fgrpName.str() );
        
        DataMember dmValue;
        std::stringstream dmValueDataType;
        dmValueDataType << "H" << bldr->getName();
        std::stringstream filetoinclude;
        filetoinclude << bldr->getName() << ".h";
        Include include( filetoinclude.str(), false );
        IClassBldr::addPublicInclude( include );
        dmValue.setDataType( dmValueDataType.str() );
        std::stringstream dmValueName;
        dmValueName << "my" << elementName;
        dmValue.setName( dmValueName.str() );
        std::stringstream dmValueDefault;
        dmValueDefault << "std::make_shared<" << bldr->getName() << ">()";
        dmValue.setMemberInitializationValue( dmValueDefault.str() );
        
        DataMember dmIsPresent;// = createDataMemberMaxOnesieIsPresent( elementName, isRequired );
        dmIsPresent.setDataType( "bool" );
        std::stringstream dmIsPresentName;
        dmIsPresentName << "myIs" << elementName << "Present";
        dmIsPresent.setName( dmIsPresentName.str() );
        std::stringstream dmIsPresentInitVal;
        dmIsPresentInitVal << std::boolalpha << isRequired;
        dmIsPresent.setMemberInitializationValue( dmIsPresentInitVal.str() );
        
        
        
        addPrivateDatamember( dmValue );
        addPrivateDatamember( dmIsPresent );
        Function GetIsPresentFunc;
        std::stringstream GetIsPresentFuncName;
        GetIsPresentFuncName << "getIs" << elementName << "Present";
        GetIsPresentFunc.setName( GetIsPresentFuncName.str() );
        GetIsPresentFunc.setReturnType( "bool" );
        GetIsPresentFunc.isConst( true );
        std::stringstream GetIsPresentDocumentation;
        GetIsPresentDocumentation << "Tells you whether or not <" << elementName << "> is present.";
        GetIsPresentDocumentation << " If <" << elementName << "> is required, this will always return 'true'.";
        GetIsPresentDocumentation << " If <" << elementName << "> is required, no corresponding 'setIs" << elementName << "Present' will exist.";
        GetIsPresentFunc.setDocumentation( GetIsPresentDocumentation.str() );
        GetIsPresentFunc.isConst( true );
        std::stringstream GetIsPresentCode;
        GetIsPresentCode << "return myIs" << elementName << "Present;";
        GetIsPresentFunc.setCode( GetIsPresentCode );
        fgrp.addFunction( GetIsPresentFunc );
        Function SetIsPresentFunc;
        
        TestCode test = TFunc::testStub( 1, "bool", GetIsPresentFunc.getName() );
        std::stringstream ex;
        ex << std::boolalpha << isRequired;
        TFunc::checkEq( test, ex.str(), "object." + GetIsPresentFunc.getName() + "()" );
        tgrp.addTest( test );
        
        if ( !isRequired )
        {
            std::stringstream SetIsPresentFuncName;
            SetIsPresentFuncName << "setIs" << elementName << "Present";
            Parameter p;
            p.setDataType( "bool" );
            p.isConst( true );
            p.setName( "value_in" );
            SetIsPresentFunc.addParameter( p );
            SetIsPresentFunc.setName( SetIsPresentFuncName.str() );
            SetIsPresentFunc.setReturnType( "void" );
            SetIsPresentFunc.isConst( false );
            std::stringstream SetIsPresentDocumentation;
            SetIsPresentDocumentation << "Sets whether or not <" << elementName << "> is present.  If the element is not present, you should ignore this return value.  Note that the shared_ptr for the <" << elementName << "> will not be altered in any way when you delcare that the <" << elementName << "> element is not present.";
            std::stringstream SetIsPresentFuncCode;
            SetIsPresentFuncCode << "myIs" << elementName << "Present = value_in;";
            SetIsPresentFunc.setCode( SetIsPresentFuncCode );
            fgrp.addFunction( SetIsPresentFunc );
            
            test = TFunc::testStub( 1, "bool", SetIsPresentFunc.getName() );
            ex.str( "" );
            ex << std::boolalpha << isRequired;
            TFunc::checkEq( test, ex.str(), "object." + GetIsPresentFunc.getName() + "()" );
            test.addCodeLine( 0, "object." + SetIsPresentFuncName.str() + "( true );" );
            TFunc::checkEq( test, "true", "object." + GetIsPresentFunc.getName() + "()" );
            tgrp.addTest( test );
        }
        
        

        Function GetValueFunc;
        std::stringstream getValueFuncName;
        getValueFuncName << "get" << elementName;
        GetValueFunc.setName( getValueFuncName.str() );
        GetValueFunc.setReturnType( dmValue.getDataType() );
        GetValueFunc.isConst( true );
        std::stringstream getValueDocumentation;
        getValueDocumentation << "Returns a shared pointer handle to the <" << elementName << "> element. ";
        getValueDocumentation << "Note that if " << GetIsPresentFunc.getName() << " is false, this value will still exist (even though it is not in the xml document) and you should ignore it.";
        GetValueFunc.setDocumentation( getValueDocumentation.str() );
        std::stringstream getValueFuncCode;
        getValueFuncCode << "return " << dmValue.getName() << ";" << end();
        GetValueFunc.setCode( getValueFuncCode );
        fgrp.addFunction( GetValueFunc );
        
        test = TFunc::testStub( 1, "std::string", GetValueFunc.getName() );
        test.addCodeLine( 0, dmValue.getDataType() + " element;" );
        ex.str( "\"\"" );
        TFunc::checkEq( test, ex.str(), "object." + GetValueFunc.getName() + "()->toString()" );
        tgrp.addTest( test );
        
        Function SetValueFunc;
        std::stringstream setValueFuncName;
        setValueFuncName << "set" << elementName;
        SetValueFunc.setName( setValueFuncName.str() );
        SetValueFunc.isConst( false );
        Parameter SetValueFuncParameter;
        SetValueFuncParameter.setName( "value_in" );
        std::stringstream setValueFuncParameterDataType;
        setValueFuncParameterDataType << dmValue.getDataType();
        SetValueFuncParameter.setDataType( setValueFuncParameterDataType.str() );
        SetValueFuncParameter.isConst( true );
        SetValueFuncParameter.setParameterType( mjb::Parameter::ParameterType::Reference );
        SetValueFunc.addParameter( SetValueFuncParameter );
        std::stringstream setValueDocumentation;
        setValueDocumentation << "Sets the internal shared pointer handle for the <" << elementName << "> element. ";
        if ( !isRequired )
        {
            setValueDocumentation << "Note that if " << SetIsPresentFunc.getName() << " is false, the internal shared ";
            setValueDocumentation << "pointer will not be altered and will hold a value that does not exist in xml.";
        }
        SetValueFunc.setDocumentation( setValueDocumentation.str() );
        std::stringstream setValueFuncCode;
        setValueFuncCode << dmValue.getName() << " = value_in;";
        SetValueFunc.setCode( setValueFuncCode );
        SetValueFunc.setReturnType( "void" );
        fgrp.addFunction( SetValueFunc );
        
        test = TFunc::testStub( 1, "std::string", SetValueFunc.getName() );
        test.addCodeLine( 0, dmValue.getDataType() + " element;" );
        ex.str( "\"\"" );
        TFunc::checkEq( test, ex.str(), "object." + GetValueFunc.getName() + "()->toString()" );
        tgrp.addTest( test );

        
        
        Function getMinOccurs;
        std::stringstream getMinOccursName;
        getMinOccursName << "get" << elementName << "MinOccurs";
        getMinOccurs.setName( getMinOccursName.str() );
        getMinOccurs.setReturnType( "int" );
        getMinOccurs.isConst( true );
        std::stringstream getMinOccursDocumentation;
        getMinOccursDocumentation << "Returns the minimum number of occurences of the <" << elementName << "> element. ";
        getMinOccursDocumentation << " i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means the element is optional.";
        getMinOccurs.setDocumentation( getMinOccursDocumentation.str() );
        std::stringstream getMinOccursCode;
        getMinOccursCode << "return my" << elementName << "->getMinOccurs();";
        getMinOccurs.setCode( getMinOccursCode );
        fgrp.addFunction( getMinOccurs );
        
        test = TFunc::testStub( 1, "int", getMinOccurs.getName() );
        ex.str( "" );
        ex << minOccurs;
        TFunc::checkEq( test, ex.str(), "object." + getMinOccurs.getName() + "()" );
        tgrp.addTest( test );
        
        Function getMaxOccurs;
        std::stringstream getMaxOccursName;
        getMaxOccursName << "get" << elementName << "MaxOccurs";
        getMaxOccurs.setName( getMaxOccursName.str() );
        getMaxOccurs.setReturnType( "int" );
        getMaxOccurs.isConst( true );
        std::stringstream getMaxOccursDocumentation;
        getMaxOccursDocumentation << "Returns the maximum number of occurences of the <" << elementName << "> element. ";
        getMaxOccursDocumentation << "Typically the MaxOccurs is specified as either '1' or 'unbounded'.  When the specification says 'unbounded' ";
        getMaxOccursDocumentation << "'getIs" << elementName << "Unbounded' will return 'true' and the return value of '" << getMaxOccurs.getName() << "' should be ignored.";
        getMaxOccurs.setDocumentation( getMaxOccursDocumentation.str() );
        std::stringstream getMaxOccursCode;
        getMaxOccursCode << "return my" << elementName << "->getMaxOccurs();";
        getMaxOccurs.setCode( getMaxOccursCode );
        fgrp.addFunction( getMaxOccurs );
        
        test = TFunc::testStub( 1, "int", getMaxOccurs.getName() );
        ex.str( "" );
        ex << maxOccurs;
        TFunc::checkEq( test, ex.str(), "object." + getMaxOccurs.getName() + "()" );
        tgrp.addTest( test );
        
        Function getUnbounded;
        std::stringstream getUnboundedName;
        getUnboundedName << "getIs" << elementName << "Unbounded";
        getUnbounded.setName( getUnboundedName.str() );
        getUnbounded.setReturnType( "bool" );
        getUnbounded.isConst( true );
        std::stringstream getUnboundedDocumentation;
        getUnboundedDocumentation << "Returns 'true' if the specification says that the maximum number of occurences of the <" << elementName << "> element is 'unbounded'.";
        getUnboundedDocumentation << "When this function returns 'true', the value returned by '" << getMaxOccurs.getName() << "' should be ignored.";
        getUnbounded.setDocumentation( getUnboundedDocumentation.str() );
        std::stringstream getUnboundedCode;
        getUnboundedCode << "return my" << elementName << "->getIsMaxOccursUnbounded();";
        getUnbounded.setCode( getUnboundedCode );
        fgrp.addFunction( getUnbounded );
        
        test = TFunc::testStub( 1, "bool", getUnbounded.getName() );
        ex.str( "" );
        ex << std::boolalpha << isUnbounded;
        TFunc::checkEq( test, ex.str(), "object." + getUnbounded.getName() + "()" );
        tgrp.addTest( test );
    
        addPublicFunctionGroup( fgrp );
        addTestGroup( tgrp );
        
        /* Add code to the stream function */
        streamCode << "if( " << GetIsPresentFunc.getName() << "() )" << end();
        streamCode << "{" << end();
        streamCode << tab( 1 ) << "if ( isFirst == false )" << end();
        streamCode << tab( 1 ) << "{" << end();
        streamCode << tab( 2 ) << "os_out << std::endl;" << end();
        streamCode << tab( 1 ) << "}" << end();
        streamCode << tab( 1 ) << "hidden::indent( os_out, indentcount_in, indentchars_in );" << end();
        streamCode << tab( 1 ) << GetValueFunc.getName() << "()->stream( os_out );" << end();
        streamCode << tab( 1 ) << "isFirst = false;" << end();
        streamCode << "}" << end();
        
        /*
         
         getBassStep()->stream( os_out );
         if ( getIsBassAlterPresent() )
         {
         os_out << std::endl;
         hidden::indent( os_out, indentcount_in, indentchars_in );
         getBassAlter()->stream( os_out );
         }
         return os_out;
         */
    }
    
    void SequenceSmpBldr::addDataMemberAndFunctionsVector( const HClassBldr& bldr, const std::string& elementName, bool isRequired,
                                                         int minOccurs, int maxOccurs, bool isUnbounded, ElementType etype, std::stringstream& streamCode, int& memberNumberCounter )
    {
        /* Create an empty FunctionGroup */
        FunctionGroup fgrp;
        std::stringstream fgrpName;
        fgrpName << elementName << " Functions";
        fgrp.setName( fgrpName.str() );
        
        
        DataMember dmValue;
        std::stringstream dmValueDataType;
        dmValueDataType << bldr->getName() << "s";
        dmValue.setDataType( dmValueDataType.str() );
        std::stringstream dmValueName;
        dmValueName << "my" << elementName << "Collection";
        dmValue.setName( dmValueName.str() );
        addPrivateDatamember( dmValue );
        std::stringstream filetoinclude;
        filetoinclude << bldr->getName() << ".h";
        Include include( filetoinclude.str(), false );
        IClassBldr::addPublicInclude( include );
        
        Function GetCountFunc;
        std::stringstream GetCountFuncName;
        GetCountFuncName << "get" << elementName << "Count";
        GetCountFunc.setName( GetCountFuncName.str() );
        GetCountFunc.setReturnType( "std::size_t" );
        GetCountFunc.isConst( true );
        std::stringstream GetCountFuncDocumentation;
        GetCountFuncDocumentation << "Returns the count of <" << elementName << "> elements.";
        GetCountFunc.setDocumentation( GetCountFuncDocumentation.str() );
        std::stringstream GetCountFuncCode;
        GetCountFuncCode << "return " << dmValue.getName() << ".size();";
        GetCountFunc.setCode( GetCountFuncCode );
        fgrp.addFunction( GetCountFunc );
        
        TestGroup tgrp;
        tgrp.setSeparatorComment( fgrpName.str() );
        TestCode test = TFunc::testStub( 1, "std::size_t", GetCountFunc.getName() );
        std::stringstream ex;
        ex.str( "" );
        ex << minOccurs;
        TFunc::checkEq( test, ex.str(), "object." + GetCountFunc.getName() + "()" );
        tgrp.addTest( test );
        
        
        std::stringstream BeginCode;
        BeginCode << "return " << dmValue.getName() << ".begin();";
        std::stringstream EndCode;
        EndCode << "return " << dmValue.getName() << ".end();";
        std::stringstream BeginConstCode;
        BeginConstCode << "return " << dmValue.getName() << ".cbegin();";
        std::stringstream EndConstCode;
        EndConstCode << "return " << dmValue.getName() << ".cend();";
        
        Function GetElementsBegin;
        std::stringstream GetElementsBeginName;
        GetElementsBeginName << "get" << elementName << "Begin";
        GetElementsBegin.setName( GetElementsBeginName.str() );
        std::stringstream GetElementsIterTypeSStr;
        GetElementsIterTypeSStr << bldr->getName() << "sIter";
        std::stringstream GetElementsIterTypeConstSStr;
        GetElementsIterTypeConstSStr << bldr->getName() << "sIterConst";
        std::string GetElementsIterType = GetElementsIterTypeSStr.str();
        std::string GetElementsIterConstType = GetElementsIterTypeConstSStr.str();
        GetElementsBegin.setReturnType( GetElementsIterType );
        GetElementsBegin.isConst( false );
        GetElementsBegin.setDocumentation( "Returns an STL iterator into the contained collection of element handles." );
        GetElementsBegin.setCode( BeginCode );
        fgrp.addFunction( GetElementsBegin );
        
        
        Function GetElementsEnd;
        std::stringstream GetElementsEndName;
        GetElementsEndName << "get" << elementName << "End";
        GetElementsEnd.setName( GetElementsEndName.str() );
        GetElementsEnd.setReturnType( GetElementsIterType );
        GetElementsEnd.isConst( false );
        GetElementsEnd.setDocumentation( "Returns an STL iterator into the contained collection of element handles." );
        GetElementsEnd.setCode( EndCode );
        
        fgrp.addFunction( GetElementsEnd );
        test = TFunc::testStub( 1, GetElementsIterType, GetElementsBegin.getName() );
        ex.str( "" );
        ex << minOccurs;
        // TFunc::checkEq( test, "object." + GetElementsBegin.getName(), "object." + GetElementsBegin.getName() + "()" );
        tgrp.addTest( test );
        
        std::stringstream BeginConst;
        BeginConst << GetElementsBegin.getName() << "Const";
        GetElementsBegin.setName( BeginConst.str() );
        GetElementsBegin.isConst( true );
        GetElementsBegin.setReturnType( GetElementsIterConstType );
        GetElementsBegin.setCode( BeginConstCode );
        fgrp.addFunction( GetElementsBegin );
        
        std::stringstream EndConst;
        GetElementsEnd.isConst( true );
        EndConst << GetElementsEnd.getName() << "Const";
        GetElementsEnd.setName( EndConst.str() );
        GetElementsEnd.setReturnType( GetElementsIterConstType );
        GetElementsEnd.setCode( EndConstCode );
        fgrp.addFunction( GetElementsEnd );
        
        test = TFunc::testStub( 1, GetElementsIterConstType, GetElementsBegin.getName() );
        ex.str( "" );
        ex << minOccurs;
        // TFunc::checkEq( test, "object." + GetElementsBegin.getName() + "()", "object." + GetElementsBegin.getName() + "()" );
        tgrp.addTest( test );
        
        Function AddElement;
        std::stringstream AddElementCode;
        AddElementCode << "if( " << dmValue.getName() << ".size() >= ( get" << elementName << "MaxOccurs() - 1 ) )" << end();
        AddElementCode << "{" << end();
        AddElementCode << tab( 1 ) << "return false;" << end();
        AddElementCode << "}" << end();
        AddElementCode << "else if( value_in->get() == nullptr )" << end();
        AddElementCode << "{" << end();
        AddElementCode << tab( 1 ) << "return false;" << end();
        AddElementCode << "}" << end();
        AddElementCode << dmValue.getName() << ".push_back( value_in );" << end();
        AddElementCode << "return true;";
        std::stringstream AddElementName;
        AddElementName << "add" << elementName;
        Parameter AddElementParameter;
        AddElementParameter.setName( "value_in" );
        AddElementParameter.setDataType( GetElementsIterType );
        AddElementParameter.isConst( true );
        AddElement.setName( AddElementName.str() );
        AddElement.addParameter( AddElementParameter );
        AddElement.isConst( false );
        AddElement.setReturnType( "bool" );
        AddElement.setDocumentation( "Adds the element handle to the internal collection. Returns 'true' if successful, returns 'false' to indicate failure.  If you try to add more elements than is allowed by MaxOccurs, the this function will fail.  If you try to add a nullptr this function will fail." );
        AddElement.setCode( AddElementCode );
        fgrp.addFunction( AddElement );
        
        test = TFunc::testStub( 1, "std::size_t", AddElement.getName() );
        ex.str( "" );
        ex << minOccurs;
        // TFunc::checkEq( test, ex.str(), "object." + AddElement.getName() + "()" );
        tgrp.addTest( test );
        
        Function RemoveElement;
        std::stringstream RemoveElementCode;
        RemoveElementCode << "if( " << dmValue.getName() << ".size() <= get" << elementName << "MinOccurs() )" << end();
        RemoveElementCode << "{" << end();
        RemoveElementCode << tab( 1 ) << "return false;" << end();
        RemoveElementCode << "}" << end();
        RemoveElementCode << "else if( value_in == " << GetElementsEnd.getName() << "() )" << end();
        RemoveElementCode << "{" << end();
        RemoveElementCode << tab( 1 ) << "return false;" << end();
        RemoveElementCode << "}" << end();
        RemoveElementCode << dmValue.getName() << ".erase( value_in );" << end();
        RemoveElementCode << "return true;";
        std::stringstream RemoveElementName;
        RemoveElementName << "remove" << elementName;
        Parameter RemoveElementParameter;
        RemoveElementParameter.setName( "value_in" );
        RemoveElementParameter.setDataType( GetElementsIterType );
        RemoveElementParameter.isConst( true );
        RemoveElement.setName( RemoveElementName.str() );
        RemoveElement.addParameter( RemoveElementParameter );
        RemoveElement.isConst( false );
        RemoveElement.setReturnType( "bool" );
        RemoveElement.setDocumentation( "Removes the element handle to the internal collection. Returns 'true' if successful, returns 'false' to indicate failure.  If you try to remove elements that would result in a count less than MinOccurs, the this function will fail." );
        RemoveElement.setCode( RemoveElementCode );
        fgrp.addFunction( RemoveElement );
        
        test = TFunc::testStub( 1, "std::size_t", RemoveElement.getName() );
        ex.str( "" );
        ex << minOccurs;
        TFunc::checkEq( test, ex.str(), "object." + RemoveElement.getName() + "()" );
        tgrp.addTest( test );
        
        Function getMinOccurs;
        std::stringstream getMinOccursName;
        getMinOccursName << "get" << elementName << "MinOccurs";
        getMinOccurs.setName( getMinOccursName.str() );
        getMinOccurs.setReturnType( "int" );
        getMinOccurs.isConst( true );
        std::stringstream getMinOccursDocumentation;
        getMinOccursDocumentation << "Returns the minimum number of occurences of the <" << elementName << "> element. ";
        getMinOccursDocumentation << " i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means the element is optional.";
        getMinOccurs.setDocumentation( getMinOccursDocumentation.str() );
        std::stringstream getMinOccursCode;
        getMinOccursCode << "return " << minOccurs << ";";
        getMinOccurs.setCode( getMinOccursCode );
        fgrp.addFunction( getMinOccurs );
        
        test = TFunc::testStub( 1, "int", getMinOccurs.getName() );
        ex.str( "" );
        ex << minOccurs;
        // TFunc::checkEq( test, ex.str(), "object." + getMinOccurs.getName() + "()" );
        tgrp.addTest( test );
        
        Function getMaxOccurs;
        std::stringstream getMaxOccursName;
        getMaxOccursName << "get" << elementName << "MaxOccurs";
        getMaxOccurs.setName( getMaxOccursName.str() );
        getMaxOccurs.setReturnType( "int" );
        getMaxOccurs.isConst( true );
        std::stringstream getMaxOccursDocumentation;
        getMaxOccursDocumentation << "Returns the maximum number of occurences of the <" << elementName << "> element. ";
        getMaxOccursDocumentation << "Typically the MaxOccurs is specified as either '1' or 'unbounded'.  When the specification says 'unbounded' ";
        getMaxOccursDocumentation << "'getIs" << elementName << "Unbounded' will return 'true' and the return value of '" << getMaxOccurs.getName() << "' should be ignored.";
        getMaxOccurs.setDocumentation( getMaxOccursDocumentation.str() );
        std::stringstream getMaxOccursCode;
        getMaxOccursCode << "return " << maxOccurs << ";";
        getMaxOccurs.setCode( getMaxOccursCode );
        fgrp.addFunction( getMaxOccurs );
        
        test = TFunc::testStub( 1, "int", getMaxOccurs.getName() );
        ex.str( "" );
        ex << maxOccurs;
        TFunc::checkEq( test, ex.str(), "object." + getMaxOccurs.getName() + "()" );
        tgrp.addTest( test );
        
        Function getUnbounded;
        std::stringstream getUnboundedName;
        getUnboundedName << "getIs" << elementName << "Unbounded";
        getUnbounded.setName( getUnboundedName.str() );
        getUnbounded.setReturnType( "int" );
        getUnbounded.isConst( true );
        std::stringstream getUnboundedDocumentation;
        getUnboundedDocumentation << "Returns 'true' if the specification says that the maximum number of occurences of the <" << elementName << "> element is 'unbounded'.";
        getUnboundedDocumentation << "When this function returns 'true', the value returned by '" << getMaxOccurs.getName() << "' should be ignored.";
        getUnbounded.setDocumentation( getUnboundedDocumentation.str() );
        std::stringstream getUnboundedCode;
        getUnboundedCode << "return " << std::boolalpha << isUnbounded << ";";
        getUnbounded.setCode( getUnboundedCode );
        fgrp.addFunction( getUnbounded );
        
        test = TFunc::testStub( 1, "bool", getUnbounded.getName() );
        ex.str( "" );
        ex << std::boolalpha << isUnbounded;
        TFunc::checkEq( test, ex.str(), "object." + getUnbounded.getName() + "()" );
        tgrp.addTest( test );
        
        addPublicFunctionGroup( fgrp );
        addTestGroup( tgrp );
        
        /* Add code to the stream function */
        streamCode << "if( " << GetCountFunc.getName() << "() > 0 )" << end();
        streamCode << "{" << end();
        streamCode << tab( 1 ) << "for ( auto it = " << GetElementsBegin.getName() << "(); ";
        streamCode << "it != " << GetElementsEnd.getName() << "(); ++it )" << end();
        streamCode << tab( 1 ) << "{" << end();
        streamCode << tab( 2 ) << "if ( isFirst == false )" << end();
        streamCode << tab( 2 ) << "{" << end();
        streamCode << tab( 3 ) << "os_out << std::endl;" << end();
        streamCode << tab( 2 ) << "}" << end();
        streamCode << tab( 2 ) << "hidden::indent( os_out, indentcount_in, indentchars_in );" << end();
        streamCode << tab( 2 ) << "(*it)->stream( os_out );" << end();
        streamCode << tab( 2 ) << "isFirst = false;" << end();
        streamCode << tab( 1 ) << "}" << end();
        streamCode << "}" << end();
    }

    
    std::string SequenceSmpBldr::getHFile() const
    {
        /* H File Top */
        std::stringstream ss;
        ss << IClassBldr::getHFileHeader()->toString() << end();
        ss << IClassBldr::openNamespaces();
        SectionSeparatorComment classComment( IClassBldr::getName(), 90 );
        ss << classComment.toString() << std::endl << std::endl;
        
        /* H File Begin Class Declaration */
        ss << baselineTabs() << "class " << IClassBldr::getName() << " : public MxIndentable" << end();
        ss << baselineTabs() << "{" << std::endl;
        ss << baselineTabs() << "public:" << std::endl << std::endl;
        
        /* H File constructor */
        SectionSeparatorComment constructorsComment( "Constructor, Destructor, Copy, Assignment", 90 );
        ss << constructorsComment.toString() << std::endl;
        ss << std::endl;
        ss << baselineIndent( 1 ) << IClassBldr::getName() << "();" << end();
        
        /** H File destructor **/
        ss << baselineIndent( 1 ) << "virtual ~" << IClassBldr::getName() << "();" << std::endl;
        
        /** H File copy constructor **/
        ss << baselineIndent( 1 ) << IClassBldr::getName();
        ss << "( const " << IClassBldr::getName() << "& other );" << std::endl;
        
        /** H File assignment **/
        ss << baselineIndent( 1 ) << IClassBldr::getName() << "& operator=( const ";
        ss << IClassBldr::getName() << "& other );";
        ss << std::endl << std::endl;
        
        /* H File Functions */
        for ( FunctionGroup fgrp : getPublicFunctionGroups() )
        {
            if ( fgrp.isPublic() )
            {
                ss << fgrp.write("", getNamespaceCount()+1, ClassFileHeader::fileType::h, 90 );
                ss << std::endl;
            }
        }
        ss << baselineIndent( 1 ) << "/* unhide the stream function */" << end();
        ss << baselineIndent( 1 ) << "using MxIndentable::stream;" << end();
        
        /** H File Declare Impl **/
        SectionSeparatorComment implComment( "Impl", 90 );
        ss <<implComment.toString() << std::endl << std::endl;
        ss << baselineTabs() << "private:" << std::endl;
        ss << baselineIndent( 1 ) << "class Impl;" << std::endl;
        ss << baselineIndent( 1 ) << "std::unique_ptr<Impl> myImpl;" << std::endl;
        
        /* H File Close */
        ss << std::endl;
        ss << baselineTabs() << "}; // class " << IClassBldr::getName() << std::endl << std::endl;
        ss << closeNamespaces();
        
        /* H File Return */
        return ss.str();
    }
    std::string SequenceSmpBldr::getCppFile() const
    {
        /* return value object */
        std::stringstream ss;
        
        /* CPP IMPL HEAD */
        ss << IClassBldr::getCppFileHeader()->toString( false ) << std::endl;
        SectionSeparatorComment classStart( "Impl", 90 );
        ss << classStart.toString() << std::endl;
        ss << end();
        ss << openNamespaces();
        
        /* CPP IMPL Declare Struct */
        ss << baselineIndent( 0 ) << "struct " << IClassBldr::getName() << "::Impl" << std::endl;
        ss << baselineIndent( 0 ) << "{" << end();

        ss << baselineIndent( 1 ) << "Impl()" << end();
        int i = 0;
        for ( auto dm = IClassBldr::getPrivateDatamembersBegin(); dm != IClassBldr::getPrivateDatamembersEnd(); ++dm )
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
            ss << dm->getName() << "(";
            if ( dm->getMemberInitializationValue().size() > 0 )
            {
                ss << " " << dm->getMemberInitializationValue() << " ";
            }
            ss << ")" << end();
            
        }
        ss << baselineIndent( 1 ) << "{}" << end();
        ss << std::endl;
        
        /* CPP IMPL DataMembers */
        ss << baselineIndent( 0 ) << "private:" << end();
        for ( auto dm = getPrivateDatamembersBegin(); dm != getPrivateDatamembersEnd(); ++dm )
        {
            
            ss << baselineIndent( 1 ) << dm->getDataType();
            ss << " " << dm->getName() << ";" << std::endl;
        }
        
        /* CPP IMPL static const datamember declarations */
        for ( auto dm = getPrivateConstStaticDatamembersBegin(); dm != getPrivateConstStaticDatamembersEnd(); ++dm )
        {
            ss << baselineIndent( 1 ) << "const static " << dm->getDataType();
            ss << " " << dm->getName() << ";" << std::endl;
        }
        ss << std::endl << std::endl;
        ss << baselineIndent( 1 ) << "public:";
        ss << std::endl << std::endl;
        
        /* CPP IMPL Public Functions */
        for ( FunctionGroup fgrp : getPublicFunctionGroups() )
        {
            if ( fgrp.isPublic() )
            {
                if ( fgrp.size() > 0 )
                {
                    ss << fgrp.write("", getNamespaceCount()+1, ClassFileHeader::fileType::cpp, 90 );
                    ss << std::endl;
                }
            }
        }
        
        /* CPP IMPL Private Functions */
        
        /* CPP IMPL Close */
        ss << baselineIndent( 0 ) << "}; // struct " << getName() << "::Impl"<< std::endl;
        ss << std::endl;
        
        /* CPP IMPL static const datamember instantiation */
        for ( auto dm = getPrivateConstStaticDatamembersBegin(); dm != getPrivateConstStaticDatamembersEnd(); ++dm )
        {
            ss << baselineIndent( 0 ) << "const " << dm->getDataType();
            ss << " " << getName() << "::Impl::" << dm->getName() << " = ";
            ss << dm->getValue() << ";" << std::endl;
        }
        ss << std::endl;
        
        /* CPP CLASS Begin */
        SectionSeparatorComment classStart2( getName(), 90 );
        ss << classStart2.toString() << std::endl;
        ss << std::endl;
        
        /* CPP CLASS Open Namespaces */
        // ss << openNamespaces();
        ss << end();
        
        /* CPP CLASS Define Constructor */
        SectionSeparatorComment constructorsComment( "Constructor, Destructor, Copy, Assignment", 90 );
        ss << constructorsComment.toString() << std::endl;
        ss << std::endl;
        ss << baselineIndent( 0 ) << getName() << "::" << getName() << "()" << std::endl;
        ss << baselineIndent( 0 ) << ":myImpl( new Impl() ) {}" << end() << end();
        
        /* CPP CLASS Destructor */
        ss << baselineIndent( 0 ) << getName() << "::" << "~" << getName() << "() {}" << end() << end();
        
        /* CPP CLASS Copy Constructor */
        ss << baselineIndent( 0 ) << getName() << "::" << getName();
        ss << "( const " << getName() << "& other )" << std::endl;
        ss << baselineIndent( 0 ) << ":myImpl( new Impl( *(other.myImpl) ) ) {}" << end() << end();
        
        /* CPP CLASS Assignment */
        ss << baselineIndent( 0 ) << getName() << "& " << getName() << "::operator=( const ";
        ss << getName() << "& other )" << end();
        ss << baselineIndent( 0 ) << "{" << end();
        ss << baselineIndent( 1 ) << "this->myImpl = std::unique_ptr<Impl>( new Impl( *(other.myImpl) ) );" << end();
        ss << baselineIndent( 1 ) << "return *this;" << end();
        ss << baselineIndent( 0 ) << "}" << end() << end();
        
        /* CPP CLASS */
        std::stringstream qualifier_temp;
        qualifier_temp << getName() << "::";
        std::string qualifier = qualifier_temp.str();
        for ( FunctionGroup fgrp : getPublicFunctionGroups() )
        {
            if ( fgrp.isPublic() )
            {
                if ( fgrp.size() > 0 )
                {
                    FunctionGroup alteredFunctionGroup = IClassBldr::alterFunctionGroupForImpl( fgrp );
                    ss << alteredFunctionGroup.write( qualifier, getNamespaceCount(), ClassFileHeader::fileType::cpp, 90 );
                    ss << std::endl;
                }
            }
        }
        
        /* CPP CLASS Close */
        ss << end();
        ss << closeNamespaces();
        
        /* return statement */
        return ss.str();
    }
    std::string SequenceSmpBldr::getTestFile() const
    {
        std::stringstream ss;
        ss << TFunc::testFileStart();
        for ( TestGroup grp : getTestGroups() )
        {
            ss << grp.toString();
        }
        return ss.str();
    }
    
    /* VALUE OBJECT */
    std::string SequenceSmpBldr::getValueObjectObjectInstantiationString() const
    {
        throw std::invalid_argument( "not implemented." );
    }
    std::string SequenceSmpBldr::getValueObjectToString() const
    {
        throw std::invalid_argument( "not implemented." );
    }
    void SequenceSmpBldr::changeValueObjectValue() const
    {
        throw std::invalid_argument( "not implemented." );
    }
    
}