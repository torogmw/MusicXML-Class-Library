/* matthew james briggs */

#include "SequenceSmpBldr.h"
#include "SequenceParser.h"

namespace XsdClasses
{
    /* ctor */
    SequenceSmpBldr::SequenceSmpBldr( const xparse::ElementPtr& e )
    :mjb::IClassBldr( e )
    {}
    
    /* dtor */
    SequenceSmpBldr::~SequenceSmpBldr() {}
    
    void SequenceSmpBldr::init()
    {
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
            throw std::invalid_argument( "This sequence has xselements that are not implemented yet." );
        }
        IClassBldr::setClassNamePrefix( "MxSeqSmp" );
        IClassBldr::setName( SequenceParser::getCppName( IClassBldr::getXsdNode() ), true );
    }
}