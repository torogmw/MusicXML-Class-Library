#pragma once
#include "ElementInterface.h"
#include "Enums.h"
#include "Strings.h"
#include "FontSize.h"
#include "Integers.h"
#include "Decimals.h"
#include "NumberOrNormal.h"
#include "PositiveIntegerOrEmpty.h"
#include "Color.h"
#include "Date.h"
#include <memory>
#include "Elements.h"

namespace mx
{
    namespace e
    {
        /* <!--  ID = 6191 [6191] ------------------------->
         <!-- min=1 max=1 RequiredSingleOccurence  -->
         <!-- MsItemElementKind::composite -->
         <!-- RecursiveSubElementCount = 2 -->
         <!-- All Sub Elements Are Implemented: true -->
         <xs:element name="root" type="root"/>
         <xs:complexType name="root">
         <xs:annotation>
         <xs:documentation>The root type indicates a pitch like C, D, E vs. a function indication like I, II, III. It is used with chord symbols in popular music. The root element has a root-step and optional root-alter element similar to the step and alter elements, but renamed to distinguish the different musical meanings.</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:element name="root-step" type="root-step"/>
         <xs:element name="root-alter" type="root-alter" minOccurs="0"/>
         </xs:sequence>
         </xs:complexType> */
        
        class Root;
        using RootPtr = std::shared_ptr<Root>;
        using RootUPtr = std::unique_ptr<Root>;
        using RootSet = std::vector<RootPtr>;
        using RootSetIter = RootSet::iterator;
        using RootSetIterConst = RootSet::const_iterator;
        inline RootPtr makeRoot() { return std::make_shared<Root>(); }
        class Root : public ElementInterface
        {
        public:
            Root();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            /* _________ RootStep minOccurs = 1, maxOccurs = 1 _________ */
            RootStepPtr getRootStep() const;
            void setRootStep( const RootStepPtr& value );
            /* _________ RootAlter minOccurs = 0, maxOccurs = 1 _________ */
            RootAlterPtr getRootAlter() const;
            void setRootAlter( const RootAlterPtr& value );
            bool getHasRootAlter() const;
            void setHasRootAlter( const bool value );
        private:
            RootStepPtr myRootStep;
            RootAlterPtr myRootAlter;
            bool myHasRootAlter;
        };

        /* <!--  ID = 6206 [6206] ------------------------->
         <!-- min=0 max=1 OptionalSingleOccurrence  -->
         <!-- MsItemElementKind::composite -->
         <!-- RecursiveSubElementCount = 2 -->
         <!-- All Sub Elements Are Implemented: true -->
         <xs:element name="bass" type="bass" minOccurs="0"/>
         <xs:complexType name="bass">
         <xs:annotation>
         <xs:documentation>The bass type is used to indicate a bass note in popular music chord symbols, e.g. G/C. It is generally not used in functional harmony, as inversion is generally not used in pop chord symbols. As with root, it is divided into step and alter elements, similar to pitches.</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:element name="bass-step" type="bass-step"/>
         <xs:element name="bass-alter" type="bass-alter" minOccurs="0"/>
         </xs:sequence>
         </xs:complexType> */
        
        class Bass;
        using BassPtr = std::shared_ptr<Bass>;
        using BassUPtr = std::unique_ptr<Bass>;
        using BassSet = std::vector<BassPtr>;
        using BassSetIter = BassSet::iterator;
        using BassSetIterConst = BassSet::const_iterator;
        inline BassPtr makeBass() { return std::make_shared<Bass>(); }
        class Bass : public ElementInterface
        {
        public:
            Bass();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            /* _________ BassStep minOccurs = 1, maxOccurs = 1 _________ */
            BassStepPtr getBassStep() const;
            void setBassStep( const BassStepPtr& value );
            /* _________ BassAlter minOccurs = 0, maxOccurs = 1 _________ */
            BassAlterPtr getBassAlter() const;
            void setBassAlter( const BassAlterPtr& value );
            bool getHasBassAlter() const;
            void setHasBassAlter( const bool value );
        private:
            BassStepPtr myBassStep;
            BassAlterPtr myBassAlter;
            bool myHasBassAlter;
        };
        
        /* <!--  ID = 6210 [6210] ------------------------->
         <!-- min=0 max=4294967295 ZeroOrMany  -->
         <!-- MsItemElementKind::composite -->
         <!-- RecursiveSubElementCount = 3 -->
         <!-- All Sub Elements Are Implemented: true -->
         <xs:element name="degree" type="degree" minOccurs="0" maxOccurs="unbounded"/>
         <xs:complexType name="degree">
         <xs:annotation>
         <xs:documentation>The degree type is used to add, alter, or subtract individual notes in the chord. The print-object attribute can be used to keep the degree from printing separately when it has already taken into account in the text attribute of the kind element. The degree-value and degree-type text attributes specify how the value and type of the degree should be displayed.
         
         A harmony of kind "other" can be spelled explicitly by using a series of degree elements together with a root.</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:element name="degree-value" type="degree-value"/>
         <xs:element name="degree-alter" type="degree-alter"/>
         <xs:element name="degree-type" type="degree-type"/>
         </xs:sequence>
         <xs:attributeGroup ref="print-object"/>
         </xs:complexType> */
        
        struct DegreeAttributes;
        using DegreeAttributesPtr = std::shared_ptr<DegreeAttributes>;
        
        struct DegreeAttributes : public AttributesInterface
        {
        public:
            DegreeAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::YesNo printObject;
            bool hasPrintObject;
        };
        
        class Degree;
        using DegreePtr = std::shared_ptr<Degree>;
        using DegreeUPtr = std::unique_ptr<Degree>;
        using DegreeSet = std::vector<DegreePtr>;
        using DegreeSetIter = DegreeSet::iterator;
        using DegreeSetIterConst = DegreeSet::const_iterator;
        inline DegreePtr makeDegree() { return std::make_shared<Degree>(); }
        class Degree : public ElementInterface
        {
        public:
            Degree();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            DegreeAttributesPtr getAttributes() const;
            void setAttributes( const DegreeAttributesPtr& value );
            /* _________ DegreeValue minOccurs = 1, maxOccurs = 1 _________ */
            DegreeValuePtr getDegreeValue() const;
            void setDegreeValue( const DegreeValuePtr& value );
            /* _________ DegreeAlter minOccurs = 1, maxOccurs = 1 _________ */
            DegreeAlterPtr getDegreeAlter() const;
            void setDegreeAlter( const DegreeAlterPtr& value );
            /* _________ DegreeType minOccurs = 1, maxOccurs = 1 _________ */
            DegreeTypePtr getDegreeType() const;
            void setDegreeType( const DegreeTypePtr& value );
        private:
            DegreeAttributesPtr myAttributes;
            DegreeValuePtr myDegreeValue;
            DegreeAlterPtr myDegreeAlter;
            DegreeTypePtr myDegreeType;
        };
        /* <!--  ID = 6233 [6233] ------------------------->
         <!-- min=0 max=1 OptionalSingleOccurrence  -->
         <!-- MsItemElementKind::composite -->
         <!-- RecursiveSubElementCount = 7 -->
         <!-- All Sub Elements Are Implemented: true -->
         <xs:element name="page-layout" type="page-layout" minOccurs="0"/>
         <xs:complexType name="page-layout">
         <xs:annotation>
         <xs:documentation>Page layout can be defined both in score-wide defaults and in the print element. Page margins are specified either for both even and odd pages, or via separate odd and even page number values. The type is not needed when used as part of a print element. If omitted when used in the defaults element, "both" is the default.</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:sequence minOccurs="0">
         <xs:element name="page-height" type="tenths"/>
         <xs:element name="page-width" type="tenths"/>
         </xs:sequence>
         <xs:element name="page-margins" type="page-margins" minOccurs="0" maxOccurs="2"/>
         </xs:sequence>
         </xs:complexType> */
        
        class PageLayout;
        using PageLayoutPtr = std::shared_ptr<PageLayout>;
        using PageLayoutUPtr = std::unique_ptr<PageLayout>;
        using PageLayoutSet = std::vector<PageLayoutPtr>;
        using PageLayoutSetIter = PageLayoutSet::iterator;
        using PageLayoutSetIterConst = PageLayoutSet::const_iterator;
        inline PageLayoutPtr makePageLayout() { return std::make_shared<PageLayout>(); }
        class PageLayout : public ElementInterface
        {
        public:
            PageLayout();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            /* _________ PageHeight minOccurs = 1, maxOccurs = 1 _________ */
            PageHeightPtr getPageHeight() const;
            void setPageHeight( const PageHeightPtr& value );
            /* _________ PageWidth minOccurs = 1, maxOccurs = 1 _________ */
            PageWidthPtr getPageWidth() const;
            void setPageWidth( const PageWidthPtr& value );
            /* _________ PageMargins minOccurs = 0, maxOccurs = 2 _________ */
            const PageMarginsSet& getPageMarginsSet() const;
            void addPageMargins( const PageMarginsPtr& value );
            void removePageMargins( const PageMarginsSetIterConst& value );
            void clearPageMarginsSet();
            PageMarginsPtr getPageMargins( const PageMarginsSetIterConst& setIterator ) const;
        private:
            PageHeightPtr myPageHeight;
            PageWidthPtr myPageWidth;
            PageMarginsSet myPageMarginsSet;
        };
        /* <!--  ID = 6237 [6237] ------------------------->
         <!-- min=0 max=1 OptionalSingleOccurrence  -->
         <!-- MsItemElementKind::composite -->
         <!-- RecursiveSubElementCount = 8 -->
         <!-- All Sub Elements Are Implemented: true -->
         <xs:element name="system-layout" type="system-layout" minOccurs="0"/>
         <xs:complexType name="system-layout">
         <xs:annotation>
         <xs:documentation>A system is a group of staves that are read and played simultaneously. System layout includes left and right margins and the vertical distance from the previous system. The system distance is measured from the bottom line of the previous system to the top line of the current system. It is ignored for the first system on a page. The top system distance is measured from the page's top margin to the top line of the first system. It is ignored for all but the first system on a page.
         
         Sometimes the sum of measure widths in a system may not equal the system width specified by the layout elements due to roundoff or other errors. The behavior when reading MusicXML files in these cases is application-dependent. For instance, applications may find that the system layout data is more reliable than the sum of the measure widths, and adjust the measure widths accordingly.</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:element name="system-margins" type="system-margins" minOccurs="0"/>
         <xs:element name="system-distance" type="tenths" minOccurs="0"/>
         <xs:element name="top-system-distance" type="tenths" minOccurs="0"/>
         <xs:element name="system-dividers" type="system-dividers" minOccurs="0"/>
         </xs:sequence>
         </xs:complexType> */
        
        class SystemLayout;
        using SystemLayoutPtr = std::shared_ptr<SystemLayout>;
        using SystemLayoutUPtr = std::unique_ptr<SystemLayout>;
        using SystemLayoutSet = std::vector<SystemLayoutPtr>;
        using SystemLayoutSetIter = SystemLayoutSet::iterator;
        using SystemLayoutSetIterConst = SystemLayoutSet::const_iterator;
        inline SystemLayoutPtr makeSystemLayout() { return std::make_shared<SystemLayout>(); }
        class SystemLayout : public ElementInterface
        {
        public:
            SystemLayout();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            /* _________ SystemMargins minOccurs = 0, maxOccurs = 1 _________ */
            SystemMarginsPtr getSystemMargins() const;
            void setSystemMargins( const SystemMarginsPtr& value );
            bool getHasSystemMargins() const;
            void setHasSystemMargins( const bool value );
            SystemDistancePtr getSystemDistance() const;
            void setSystemDistance( const SystemDistancePtr& value );
            bool getHasSystemDistance() const;
            void setHasSystemDistance( const bool value );
            /* _________ TopSystemDistance minOccurs = 0, maxOccurs = 1 _________ */
            TopSystemDistancePtr getTopSystemDistance() const;
            void setTopSystemDistance( const TopSystemDistancePtr& value );
            bool getHasTopSystemDistance() const;
            void setHasTopSystemDistance( const bool value );
            /* _________ SystemDividers minOccurs = 0, maxOccurs = 1 _________ */
            SystemDividersPtr getSystemDividers() const;
            void setSystemDividers( const SystemDividersPtr& value );
            bool getHasSystemDividers() const;
            void setHasSystemDividers( const bool value );
        private:
            SystemMarginsPtr mySystemMargins;
            bool myHasSystemMargins;
            SystemDistancePtr mySystemDistance;
            bool myHasSystemDistance;
            TopSystemDistancePtr myTopSystemDistance;
            bool myHasTopSystemDistance;
            SystemDividersPtr mySystemDividers;
            bool myHasSystemDividers;
        };
        /* <!--  ID = 6241 [6241] ------------------------->
         <!-- min=0 max=4294967295 ZeroOrMany  -->
         <!-- MsItemElementKind::composite -->
         <!-- RecursiveSubElementCount = 1 -->
         <!-- All Sub Elements Are Implemented: true -->
         <xs:element name="staff-layout" type="staff-layout" minOccurs="0" maxOccurs="unbounded"/>
         <xs:complexType name="staff-layout">
         <xs:annotation>
         <xs:documentation>Staff layout includes the vertical distance from the bottom line of the previous staff in this system to the top line of the staff specified by the number attribute. The optional number attribute refers to staff numbers within the part, from top to bottom on the system. A value of 1 is assumed if not present. When used in the defaults element, the values apply to all parts. This value is ignored for the first staff in a system.</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:element name="staff-distance" type="tenths" minOccurs="0"/>
         </xs:sequence>
         <xs:attribute name="number" type="staff-number"/>
         </xs:complexType> */
        
        struct StaffLayoutAttributes;
        using StaffLayoutAttributesPtr = std::shared_ptr<StaffLayoutAttributes>;
        
        struct StaffLayoutAttributes : public AttributesInterface
        {
        public:
            StaffLayoutAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::StaffNumber number;
            bool hasNumber;
        };
        
        class StaffLayout;
        using StaffLayoutPtr = std::shared_ptr<StaffLayout>;
        using StaffLayoutUPtr = std::unique_ptr<StaffLayout>;
        using StaffLayoutSet = std::vector<StaffLayoutPtr>;
        using StaffLayoutSetIter = StaffLayoutSet::iterator;
        using StaffLayoutSetIterConst = StaffLayoutSet::const_iterator;
        inline StaffLayoutPtr makeStaffLayout() { return std::make_shared<StaffLayout>(); }
        class StaffLayout : public ElementInterface
        {
        public:
            StaffLayout();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            StaffLayoutAttributesPtr getAttributes() const;
            void setAttributes( const StaffLayoutAttributesPtr& value );
            /* _________ StaffDistance minOccurs = 0, maxOccurs = 1 _________ */
            StaffDistancePtr getStaffDistance() const;
            void setStaffDistance( const StaffDistancePtr& value );
            bool getHasStaffDistance() const;
            void setHasStaffDistance( const bool value );
        private:
            StaffLayoutAttributesPtr myAttributes;
            StaffDistancePtr myStaffDistance;
            bool myHasStaffDistance;
        };
    }
}