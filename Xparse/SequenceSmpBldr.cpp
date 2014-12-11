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
            
            
            switch ( etype )
            {
                
                case ElementType::CxSmpRef:
                {
                    
                    if ( ! isVector )
                    {
                        addDataMemberAndFunctionsOnsie( h, elementName, isRequired, minOccurs, maxOccurs, isUnBounded );
                    }
                }
                    break;
                case ElementType::CxEmptyRef:
                {

                }
                    break;
                case ElementType::MxSimpleTypeRef:
                {

                }
                    break;
                case ElementType::XsTypeRef:
                {

                }
                default:
                    break;
            }
        }
    }
    
    void SequenceSmpBldr::addDataMemberAndFunctionsOnsie( const HClassBldr& bldr, const std::string& elementName, bool isRequired,
                                        int minOccurs, int maxOccurs, bool isUnbounded )
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
            SetIsPresentDocumentation << "Sets whether or not <" << elementName << "> is present.";
            fgrp.addFunction( SetIsPresentFunc );
        }
        
        Function GetValueFunc;
        std::stringstream getValueFuncName;
        getValueFuncName << "get" << elementName;
        GetValueFunc.setName( getValueFuncName.str() );
        GetValueFunc.setReturnType( dmValue.getDataType() );
        GetValueFunc.isConst( true );
        std::stringstream getValueDocumentation;
        getValueDocumentation << "Returns a shared pointer handle to the <" << elementName << "> element. ";
        getValueDocumentation << "Note that if " << GetIsPresentFunc.getName() << " is false, the returned shared ";
        getValueDocumentation << "pointer will contain a null pointer.";
        GetValueFunc.setDocumentation( getValueDocumentation.str() );
        std::stringstream getValueFuncCode;
        getValueFuncCode << "return " << dmValue.getName() << ";";
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
            setValueDocumentation << "pointer will be set to a null pointer.";
        }
        SetValueFunc.setDocumentation( setValueDocumentation.str() );
        std::stringstream setValueFuncCode;
        setValueFuncCode << dmValue.getName() << " = value_in;";
        SetValueFunc.setCode( setValueFuncCode );
        fgrp.addFunction( SetValueFunc );
        
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