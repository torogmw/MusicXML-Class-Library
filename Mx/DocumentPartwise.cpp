/* MusicXML Class Library v0.1.0
 Copyright (c) 2015 by Matthew James Briggs */

#include "DocumentPartwise.h"
#include "DocumentHeader.h"

using namespace mx::e;
namespace mx
{
    namespace d
    {
        DocumentPartwise::DocumentPartwise()
        :myScorePartwise( makeScorePartwise() )
        {}
        /* _________ ScorePartwise minOccurs = 1, maxOccurs = 1 _________ */
        ScorePartwisePtr DocumentPartwise::getScorePartwise() const
        {
            return myScorePartwise;
        }
        void DocumentPartwise::setScorePartwise( const ScorePartwisePtr& value )
        {
            if ( value )
            {
                myScorePartwise = value;
            }
        }
        std::ostream& DocumentPartwise::toStream( std::ostream& os ) const
        {
            DocumentHeader tempheader;
            tempheader.setDocumentType( DocumentType::partwise );
            tempheader.toStream( os );
            os << std::endl;
            myScorePartwise->toStream( os, 0 );
            return os;
        }
    }
}