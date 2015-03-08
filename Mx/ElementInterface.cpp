
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
        std::ostream& ElementInterface::toStream( std::ostream& os, const int indentLevel ) const
        {
            indent( os, indentLevel );
            streamOpenTag( os );
            bool isOneLineOnly = false;
            streamContents( os, indentLevel, isOneLineOnly );
            if ( !isOneLineOnly )
            {
                indent( os, indentLevel );
            }
            streamCloseTag( os );
            return os;
        }
        std::ostream& indent( std::ostream& os, const int indentLevel )
        {
            for ( int i = 0; i < indentLevel; ++i )
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