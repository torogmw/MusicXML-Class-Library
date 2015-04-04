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
        /* <!--  ID = 4929 [4929] ------------------------->
         <!-- min=1 max=1 RequiredSingleOccurence  -->
         <!-- MsItemElementKind::composite -->
         <!-- RecursiveSubElementCount = 14 -->
         <!-- All Sub Elements Are Implemented: true -->
         <xs:element name="ornaments" type="ornaments"/>
         <xs:complexType name="ornaments">
         <xs:annotation>
         <xs:documentation>Ornaments can be any of several types, followed optionally by accidentals. The accidental-mark element's content is represented the same as an accidental element, but with a different name to reflect the different musical meaning.</xs:documentation>
         </xs:annotation>
         <xs:sequence minOccurs="0" maxOccurs="unbounded">
         <xs:choice>
         <xs:element name="trill-mark" type="empty-trill-sound">
         <xs:annotation>
         <xs:documentation>The trill-mark element represents the trill-mark symbol.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="turn" type="horizontal-turn">
         <xs:annotation>
         <xs:documentation>The turn element is the normal turn shape which goes up then down.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="delayed-turn" type="horizontal-turn">
         <xs:annotation>
         <xs:documentation>The delayed-turn element indicates a normal turn that is delayed until the end of the current note.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="inverted-turn" type="horizontal-turn">
         <xs:annotation>
         <xs:documentation>The inverted-turn element has the shape which goes down and then up.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="delayed-inverted-turn" type="horizontal-turn">
         <xs:annotation>
         <xs:documentation>The delayed-inverted-turn element indicates an inverted turn that is delayed until the end of the current note.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="vertical-turn" type="empty-trill-sound">
         <xs:annotation>
         <xs:documentation>The vertical-turn element has the turn symbol shape arranged vertically going from upper left to lower right.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="shake" type="empty-trill-sound">
         <xs:annotation>
         <xs:documentation>The shake element has a similar appearance to an inverted-mordent element.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="wavy-line" type="wavy-line"/>
         <xs:element name="mordent" type="mordent">
         <xs:annotation>
         <xs:documentation>The mordent element represents the sign with the vertical line. The long attribute is "no" by default.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="inverted-mordent" type="mordent">
         <xs:annotation>
         <xs:documentation>The inverted-mordent element represents the sign without the vertical line. The long attribute is "no" by default.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="schleifer" type="empty-placement">
         <xs:annotation>
         <xs:documentation>The name for this ornament is based on the German, to avoid confusion with the more common slide element defined earlier.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="tremolo" type="tremolo"/>
         <xs:element name="other-ornament" type="placement-text">
         <xs:annotation>
         <xs:documentation>The other-ornament element is used to define any ornaments not yet in the MusicXML format. This allows extended representation, though without application interoperability.</xs:documentation>
         </xs:annotation>
         </xs:element>
         </xs:choice>
         <xs:element name="accidental-mark" type="accidental-mark" minOccurs="0" maxOccurs="unbounded"/>
         </xs:sequence>
         </xs:complexType> */
        
        class Ornaments;
        using OrnamentsPtr = std::shared_ptr<Ornaments>;
        using OrnamentsUPtr = std::unique_ptr<Ornaments>;
        using OrnamentsSet = std::vector<OrnamentsPtr>;
        using OrnamentsSetIter = OrnamentsSet::iterator;
        using OrnamentsSetIterConst = OrnamentsSet::const_iterator;
        inline OrnamentsPtr makeOrnaments() { return std::make_shared<Ornaments>(); }
        class Ornaments : public ElementInterface
        {
        public:
            enum class Choice
            {
                trillMark = 1
            };
            Ornaments();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            /* _________ TrillMark minOccurs = 1, maxOccurs = 1 _________ */
            TrillMarkPtr getTrillMark() const;
            void setTrillMark( const TrillMarkPtr& value );
            /* _________ Turn minOccurs = 1, maxOccurs = 1 _________ */
            TurnPtr getTurn() const;
            void setTurn( const TurnPtr& value );
            /* _________ DelayedTurn minOccurs = 1, maxOccurs = 1 _________ */
            DelayedTurnPtr getDelayedTurn() const;
            void setDelayedTurn( const DelayedTurnPtr& value );
            /* _________ InvertedTurn minOccurs = 1, maxOccurs = 1 _________ */
            InvertedTurnPtr getInvertedTurn() const;
            void setInvertedTurn( const InvertedTurnPtr& value );
            /* _________ DelayedInvertedTurn minOccurs = 1, maxOccurs = 1 _________ */
            DelayedInvertedTurnPtr getDelayedInvertedTurn() const;
            void setDelayedInvertedTurn( const DelayedInvertedTurnPtr& value );
            /* _________ VerticalTurn minOccurs = 1, maxOccurs = 1 _________ */
            VerticalTurnPtr getVerticalTurn() const;
            void setVerticalTurn( const VerticalTurnPtr& value );
            /* _________ Shake minOccurs = 1, maxOccurs = 1 _________ */
            ShakePtr getShake() const;
            void setShake( const ShakePtr& value );
            /* _________ WavyLine minOccurs = 1, maxOccurs = 1 _________ */
            WavyLinePtr getWavyLine() const;
            void setWavyLine( const WavyLinePtr& value );
            /* _________ Mordent minOccurs = 1, maxOccurs = 1 _________ */
            MordentPtr getMordent() const;
            void setMordent( const MordentPtr& value );
            /* _________ InvertedMordent minOccurs = 1, maxOccurs = 1 _________ */
            InvertedMordentPtr getInvertedMordent() const;
            void setInvertedMordent( const InvertedMordentPtr& value );
            /* _________ Schleifer minOccurs = 1, maxOccurs = 1 _________ */
            SchleiferPtr getSchleifer() const;
            void setSchleifer( const SchleiferPtr& value );
            /* _________ Tremolo minOccurs = 1, maxOccurs = 1 _________ */
            TremoloPtr getTremolo() const;
            void setTremolo( const TremoloPtr& value );
            /* _________ OtherOrnament minOccurs = 1, maxOccurs = 1 _________ */
            OtherOrnamentPtr getOtherOrnament() const;
            void setOtherOrnament( const OtherOrnamentPtr& value );
            /* _________ AccidentalMark minOccurs = 0, maxOccurs = unbounded _________ */
            const AccidentalMarkSet& getAccidentalMarkSet() const;
            void addAccidentalMark( const AccidentalMarkPtr& value );
            void removeAccidentalMark( const AccidentalMarkSetIterConst& value );
            void clearAccidentalMarkSet();
        private:
            Choice myChoice;
            TrillMarkPtr myTrillMark;
            TurnPtr myTurn;
            DelayedTurnPtr myDelayedTurn;
            InvertedTurnPtr myInvertedTurn;
            DelayedInvertedTurnPtr myDelayedInvertedTurn;
            VerticalTurnPtr myVerticalTurn;
            ShakePtr myShake;
            WavyLinePtr myWavyLine;
            MordentPtr myMordent;
            InvertedMordentPtr myInvertedMordent;
            SchleiferPtr mySchleifer;
            TremoloPtr myTremolo;
            OtherOrnamentPtr myOtherOrnament;
            AccidentalMarkSet myAccidentalMarkSet;
        };

    }
}