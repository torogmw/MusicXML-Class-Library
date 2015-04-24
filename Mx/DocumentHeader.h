#include <iostream>
#include <memory>

namespace mx
{
    namespace d
    {
        enum class DocumentType
        {
            partwise = 1,
            timewise = 2
        };
        constexpr const DocumentType kDefaultDocumentType = DocumentType::partwise;
        std::ostream& stream( std::ostream& os, const DocumentType value );
        
        enum class XmlVersion
        {
            onePointZero = 1
        };
        constexpr const XmlVersion kDefaultXmlVersion = XmlVersion::onePointZero;
        std::ostream& stream( std::ostream& os, const XmlVersion value );
        
        enum class DocumentEncoding
        {
            utfEight = 1
        };
        constexpr const DocumentEncoding kDefaultDocumentEncoding = DocumentEncoding::utfEight;
        std::ostream& stream( std::ostream& os, const DocumentEncoding value );
        
        class DocumentHeader;
        using DocumentHeaderPtr = std::shared_ptr<DocumentHeader>;
        
        
        
    }
}