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
        /* Make sure a valid ElementPtr was passed on the constructor */
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
        
        /* Set the name */
        IClassBldr::setName( SequenceParser::getCppName( IClassBldr::getXsdNode() ), true );
        IClassBldr::setBriefDescription( "This class represents an xs:sequence object from musicxml.xsd." );
        IClassBldr::setFullDescription( "This class represents an xs:sequence object from musicxml.xsd." );
        
        /* For each element, construct an ElementBldr */
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
        
        /* For each element, add appropriate data member and functions */
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
                addDataMemberAndFunctionsOnsie( h, elementName, isRequired, minOccurs, maxOccurs, isUnBounded, etype );
            }
            else
            {
                addDataMemberAndFunctionsVector( h, elementName, isRequired, minOccurs, maxOccurs, isUnBounded, etype );
            }
            
        }
        
        /* Add the stream function */
        Function stream;
        stream.setName( "stream" );
        stream.isVirtual( true );
        stream.isConst( true );
        stream.setReturnType( "void" );
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
        stringy.addFunction( stream );
        std::stringstream streamCode( "throw \"todo: write the code.\";");
        this->addPublicFunctionGroup( stringy );
    }
    
    void SequenceSmpBldr::addDataMemberAndFunctionsOnsie( const HClassBldr& bldr, const std::string& elementName, bool isRequired,
                                        int minOccurs, int maxOccurs, bool isUnbounded, ElementType etype )
    {
        /* Create an empty FunctionGroup */
        FunctionGroup fgrp;
        std::stringstream fgrpName;
        fgrpName << elementName << " Functions";
        fgrp.setName( fgrpName.str() );
        
        
        DataMember dmValue;
        std::stringstream dmValueDataType;
        dmValueDataType << "H" << bldr->getName();
        dmValue.setDataType( dmValueDataType.str() );
        std::stringstream dmValueName;
        dmValueName << "my" << elementName;
        dmValue.setName( dmValueName.str() );
        
        DataMember dmIsPresent;// = createDataMemberMaxOnesieIsPresent( elementName, isRequired );
        dmIsPresent.setDataType( "bool" );
        std::stringstream dmIsPresentName;
        dmIsPresentName << "my" << elementName << "IsPresent";
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
        fgrp.addFunction( GetIsPresentFunc );
        Function SetIsPresentFunc;
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
            fgrp.addFunction( SetIsPresentFunc );
        }
        
        
        if ( true )//etype != ElementType::CxEmptyRef )
        {
            
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
            getValueFuncCode << "if( " << dmValue.getName() << " )" << end();
            getValueFuncCode << "{" << end();
            getValueFuncCode << tab( 1 ) << "return " << dmValue.getName() << ";" << end();
            getValueFuncCode << "}" << end();
            getValueFuncCode << "else" << end();
            getValueFuncCode << "{" << end();
            getValueFuncCode << tab( 1 ) << "return std::make_shared<" << dmValue.getDataType()<< ">();" << end();
            getValueFuncCode << "}";
            GetValueFunc.setCode( getValueFuncCode );
            fgrp.addFunction( GetValueFunc );
            
            Function SetValueFunc;
            std::stringstream setValueFuncName;
            setValueFuncName << "set" << elementName;
            SetValueFunc.setName( setValueFuncName.str() );
            SetValueFunc.isConst( false );
            Parameter SetValueFuncParameter;
            SetValueFuncParameter.setName( "value_in" );
            std::stringstream setValueFuncParameterDataType;
            setValueFuncParameterDataType << dmValue.getDataType() << "&";
            SetValueFuncParameter.setDataType( setValueFuncParameterDataType.str() );
            SetValueFuncParameter.isConst( true );
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
            fgrp.addFunction( SetValueFunc );
        }
        
        
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
        getMinOccursCode << "return my" << elementName << ".getMinOccurs();";
        getMinOccurs.setCode( getMinOccursCode );
        fgrp.addFunction( getMinOccurs );
        
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
        getMaxOccursCode << "return my" << elementName << ".getMaxOccurs();";
        getMaxOccurs.setCode( getMaxOccursCode );
        fgrp.addFunction( getMaxOccurs );
        
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
        getUnboundedCode << "return my" << elementName << ".getIsUnbounded();";
        getUnbounded.setCode( getUnboundedCode );
        fgrp.addFunction( getUnbounded );
        addPublicFunctionGroup( fgrp );
    }
    
    void SequenceSmpBldr::addDataMemberAndFunctionsVector( const HClassBldr& bldr, const std::string& elementName, bool isRequired,
                                                         int minOccurs, int maxOccurs, bool isUnbounded, ElementType etype )
    {
        /* Create an empty FunctionGroup */
        FunctionGroup fgrp;
        std::stringstream fgrpName;
        fgrpName << elementName << " Functions";
        fgrp.setName( fgrpName.str() );
        
        
        DataMember dmValue;
        std::stringstream dmValueDataType;
        dmValueDataType << "std::vector<" << "H" << bldr->getName() << ">";
        dmValue.setDataType( dmValueDataType.str() );
        std::stringstream dmValueName;
        dmValueName << "my" << elementName << "Collection";
        dmValue.setName( dmValueName.str() );
        addPrivateDatamember( dmValue );

        Function GetCountFunc;
        std::stringstream GetCountFuncName;
        GetCountFuncName << "get" << elementName << "Count";
        GetCountFunc.setName( GetCountFuncName.str() );
        GetCountFunc.setReturnType( "size_type" );
        GetCountFunc.isConst( true );
        std::stringstream GetIsPresentDocumentation;
        GetIsPresentDocumentation << "Returns the count of <" << elementName << "> elements.";
        GetCountFunc.setDocumentation( GetIsPresentDocumentation.str() );
        fgrp.addFunction( GetCountFunc );
        
        std::stringstream BeginCode( "throw \"todo: write the code.\";");
        std::stringstream EndCode( "throw \"todo: write the code.\";");
        std::stringstream BeginConstCode( "throw \"todo: write the code.\";");
        std::stringstream EndConstCode( "throw \"todo: write the code.\";");
        
        Function GetElementsBegin;
        std::stringstream GetElementsBeginName;
        GetElementsBeginName << "get" << elementName << "Begin";
        GetElementsBegin.setName( GetElementsBeginName.str() );
        std::stringstream GetElementsIterTypeSStr;
        GetElementsIterTypeSStr << dmValue.getDataType() << "::iterator";
        std::stringstream GetElementsIterTypeConstSStr;
        GetElementsIterTypeConstSStr << dmValue.getDataType() << "::const_iterator";
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
        
        GetElementsBegin.isConst( true );
        GetElementsBegin.setReturnType( GetElementsIterConstType );
        GetElementsBegin.setCode( BeginConstCode );
        fgrp.addFunction( GetElementsBegin );
        
        GetElementsEnd.isConst( true );
        GetElementsEnd.setReturnType( GetElementsIterConstType );
        GetElementsEnd.setCode( EndConstCode );
        fgrp.addFunction( GetElementsEnd );
        
        Function AddElement;
        std::stringstream AddElementCode( "throw \"todo: write the code.\";");
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
        fgrp.addFunction( AddElement );
        
        Function RemoveElement;
        std::stringstream RemoveElementCode( "throw \"todo: write the code.\";");
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
        RemoveElement.setDocumentation( "Removes the element handle to the internal collection. Returns 'true' if successful, returns 'false' to indicate failure.  If you try to remove more elements that would result in a count less than MinOccurs, the this function will fail." );
        fgrp.addFunction( RemoveElement );
        
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
        getMinOccursCode << "return my" << elementName << ".getMinOccurs();";
        getMinOccurs.setCode( getMinOccursCode );
        fgrp.addFunction( getMinOccurs );
        
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
        getMaxOccursCode << "return my" << elementName << ".getMaxOccurs();";
        getMaxOccurs.setCode( getMaxOccursCode );
        fgrp.addFunction( getMaxOccurs );
        
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
        getUnboundedCode << "return my" << elementName << ".getIsUnbounded();";
        getUnbounded.setCode( getUnboundedCode );
        fgrp.addFunction( getUnbounded );
        addPublicFunctionGroup( fgrp );
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
        ss << baselineTabs() << "class " << IClassBldr::getName() << " : public MxSeq" << end();
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
        throw std::invalid_argument( "not implemented." );
    }
    std::string SequenceSmpBldr::getTestFile() const
    {
        throw std::invalid_argument( "not implemented." );
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