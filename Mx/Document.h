#include <iostream>
#include <memory>
#include "Elements.h"

namespace mx
{
    namespace d
    {
        class DocumentPartwise
        {
        public:
            DocumentPartwise();
            /* _________ ScorePartwise minOccurs = 1, maxOccurs = 1 _________ */
            e::ScorePartwisePtr getScorePartwise() const;
            void setScorePartwise( const e::ScorePartwisePtr& value );
            std::ostream& toStream( std::ostream& os ) const;
        private:
            mx::e::ScorePartwisePtr myScorePartwise;
        };
    }
}