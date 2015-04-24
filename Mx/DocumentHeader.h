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
        
        enum class MusicXmlVersion
        {
            ThreePointZero = 1
        };
        constexpr const MusicXmlVersion kDefaultMusicXmlVersion = MusicXmlVersion::ThreePointZero;
        std::ostream& stream( std::ostream& os, const MusicXmlVersion value );
        
        struct DocumentSpecifications
        {
            constexpr DocumentSpecifications();
            XmlVersion xmlVersion;
            DocumentEncoding documentEncoding;
            DocumentType documentType;
            MusicXmlVersion musicXmlVersion;
        };
        
        /* this class is basically a stub
         it could come in handy for forward
         compatibility later */
        class DocumentHeader;
        using DocumentHeaderPtr = std::shared_ptr<DocumentHeader>;
        DocumentHeaderPtr makeDocumentHeader();
        DocumentHeaderPtr makeDocumentHeader( const DocumentSpecifications& specs );
        
        class DocumentHeader
        {
        public:
            DocumentHeader();
            DocumentHeader( const DocumentSpecifications& specs );
            virtual ~DocumentHeader();
            virtual std::ostream& toStream( std::ostream& os ) const;
            // XmlVersion getXmlVersion() const;
            // void setXmlVersion( const XmlVersion value );
            // DocumentEncoding getDocumentEncoding() const;
            // void setDocumentEncoding( const DocumentEncoding value );
            DocumentType getDocumentType() const;
            void setDocumentType( const DocumentType value );
        private:
            DocumentSpecifications mySpecs;
        };
        
    }
}