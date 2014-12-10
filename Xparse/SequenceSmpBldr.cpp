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


namespace XsdClasses
{
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
    }
    
    
    std::string SequenceSmpBldr::getHFile() const
    {
        throw std::invalid_argument( "not implemented." );
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