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

    }
}