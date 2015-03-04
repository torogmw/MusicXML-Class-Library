
#include "ElementInterface.h"

namespace mx
{
    namespace e
    {
        ElementInterface::ElementInterface()
        {}
        
        ElementInterface::~ElementInterface() {}
        
        
        std::ostream& ElementInterface::streamOpenTag( std::ostream& os ) const
        {
            os << "<";
            this->streamName( os );
            if ( hasAttributes() )
            {
                streamAttributes( os );
            }
            os << ">";
            return os;
        }
        std::ostream& ElementInterface::streamCloseTag( std::ostream& os ) const
        {
            os << "</";
            this->streamName( os );
            os << ">";
            return os;
        }
        std::ostream& ElementInterface::streamSelfCloseTag( std::ostream& os ) const
        {
            os << "<";
            this->streamName( os );
            if ( hasAttributes() )
            {
                streamAttributes( os );
            }
            os << "/>";
            return os;
        }
        std::ostream& ElementInterface::stream( std::ostream& os, const int indent_level ) const
        {
            indent( os, indent_level );
            streamOpenTag( os );
            streamContents( os, indent_level );
            indent( os, indent_level );
            streamCloseTag( os );
            return os;
        }
        std::ostream& indent( std::ostream& os, const int indent_level )
        {
            for ( int i = 0; i < indent_level; ++i )
            {
                os << INDENT;
            }
            return os;
        }
        bool ElementInterface::hasAttributes() const
        {
            return false;
        }
    }
}