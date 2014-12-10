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
        if( ! SequenceParser::getIsSequence( e ) );
        {
            throw "This is not a sequence.";
        }
        if ( ! SequenceParser::getIsSequenceComposedOfElementsOnly( e ) )
        {
            throw "This sequence has items that are not an xs::Element."
        }
        IClassBldr::setClassNamePrefix( "MxSeqSmp" );
        IClassBldr::setName( "" );
    }
}