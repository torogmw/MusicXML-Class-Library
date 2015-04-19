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
         <xs:documentation>OrnamentsChoice can be any of several types, followed optionally by accidentals. The accidental-mark element's content is represented the same as an accidental element, but with a different name to reflect the different musical meaning.</xs:documentation>
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
        
        class OrnamentsChoice;
        using OrnamentsChoicePtr = std::shared_ptr<OrnamentsChoice>;
        using OrnamentsChoiceUPtr = std::unique_ptr<OrnamentsChoice>;
        using OrnamentsChoiceSet = std::vector<OrnamentsChoicePtr>;
        using OrnamentsChoiceSetIter = OrnamentsChoiceSet::iterator;
        using OrnamentsChoiceSetIterConst = OrnamentsChoiceSet::const_iterator;
        inline OrnamentsChoicePtr makeOrnamentsChoice() { return std::make_shared<OrnamentsChoice>(); }
        class OrnamentsChoice : public ElementInterface
        {
        public:
            enum class Choice
            {
                trillMark = 1,
                turn = 2,
                delayedTurn = 3,
                invertedTurn = 4,
                delayedInvertedTurn = 5,
                verticalTurn = 6,
                shake = 7,
                wavyLine = 8,
                mordent = 9,
                invertedMordent = 10,
                schleifer = 11,
                tremolo = 12,
                otherOrnament = 13
            };
            OrnamentsChoice();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            /* _________ Choice enum _________ */
            OrnamentsChoice::Choice getChoice() const;
            void setChoice( const OrnamentsChoice::Choice value );
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
        };
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
            Ornaments();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            /* _________ OrnamentsChoice minOccurs = 1, maxOccurs = 1 _________ */
            OrnamentsChoicePtr getOrnamentsChoice() const;
            void setOrnamentsChoice( const OrnamentsChoicePtr& value );
            /* _________ AccidentalMark minOccurs = 0, maxOccurs = unbounded _________ */
            const AccidentalMarkSet& getAccidentalMarkSet() const;
            void addAccidentalMark( const AccidentalMarkPtr& value );
            void removeAccidentalMark( const AccidentalMarkSetIterConst& value );
            void clearAccidentalMarkSet();
            AccidentalMarkPtr getAccidentalMark( const AccidentalMarkSetIterConst& setIterator ) const;
        private:
            OrnamentsChoicePtr myOrnamentsChoice;
            AccidentalMarkSet myAccidentalMarkSet;
        };
        
        /* <!--  ID = 5402 [5402] ------------------------->
         <!-- min=1 max=1 RequiredSingleOccurence  -->
         <!-- MsItemElementKind::composite -->
         <!-- RecursiveSubElementCount = 4 -->
         <!-- All Sub Elements Are Implemented: true -->
         <xs:element name="bend" type="bend"/>
         <xs:complexType name="bend">
         <xs:annotation>
         <xs:documentation>The bend type is used in guitar and tablature. The bend-alter element indicates the number of steps in the bend, similar to the alter element. As with the alter element, numbers like 0.5 can be used to indicate microtones. Negative numbers indicate pre-bends or releases; the pre-bend and release elements are used to distinguish what is intended. A with-bar element indicates that the bend is to be done at the bridge with a whammy or vibrato bar. The content of the element indicates how this should be notated.</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:element name="bend-alter" type="semitones">
         <xs:annotation>
         <xs:documentation>The bend-alter element indicates the number of steps in the bend, similar to the alter element. As with the alter element, numbers like 0.5 can be used to indicate microtones. Negative numbers indicate pre-bends or releases; the pre-bend and release elements are used to distinguish what is intended.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:choice minOccurs="0">
         <xs:element name="pre-bend" type="empty">
         <xs:annotation>
         <xs:documentation>The pre-bend element indicates that this is a pre-bend rather than a normal bend or a release.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="release" type="empty">
         <xs:annotation>
         <xs:documentation>The release element indicates that this is a release rather than a normal bend or pre-bend.</xs:documentation>
         </xs:annotation>
         </xs:element>
         </xs:choice>
         <xs:element name="with-bar" type="placement-text" minOccurs="0">
         <xs:annotation>
         <xs:documentation>The with-bar element indicates that the bend is to be done at the bridge with a whammy or vibrato bar. The content of the element indicates how this should be notated.</xs:documentation>
         </xs:annotation>
         </xs:element>
         </xs:sequence>
         <xs:attributeGroup ref="print-style"/>
         <xs:attributeGroup ref="bend-sound"/>
         </xs:complexType> */
        
        class BendChoice;
        using BendChoicePtr = std::shared_ptr<BendChoice>;
        using BendChoiceUPtr = std::unique_ptr<BendChoice>;
        using BendChoiceSet = std::vector<BendChoicePtr>;
        using BendChoiceSetIter = BendChoiceSet::iterator;
        using BendChoiceSetIterConst = BendChoiceSet::const_iterator;
        inline BendChoicePtr makeBendChoice() { return std::make_shared<BendChoice>(); }
        class BendChoice : public ElementInterface
        {
        public:
            enum class Choice
            {
                preBend = 1,
                release = 2
            };
            BendChoice();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            BendChoice::Choice getChoice() const;
            void setChoice( BendChoice::Choice value );
            /* _________ PreBend minOccurs = 1, maxOccurs = 1 _________ */
            PreBendPtr getPreBend() const;
            void setPreBend( const PreBendPtr& value );
            /* _________ Release minOccurs = 1, maxOccurs = 1 _________ */
            ReleasePtr getRelease() const;
            void setRelease( const ReleasePtr& value );
        private:
            Choice myChoice;
            PreBendPtr myPreBend;
            ReleasePtr myRelease;
        };
        
        
        struct BendAttributes;
        using BendAttributesPtr = std::shared_ptr<BendAttributes>;
        
        struct BendAttributes : public AttributesInterface
        {
        public:
            BendAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::TenthsValue defaultX;
            types::TenthsValue defaultY;
            types::TenthsValue relativeX;
            types::TenthsValue relativeY;
            types::CommaSeparatedText fontFamily;
            types::FontStyle fontStyle;
            types::FontSize fontSize;
            types::FontWeight fontWeight;
            types::Color color;
            types::YesNo accelerate;
            types::TrillBeats beats;
            types::Percent firstBeat;
            types::Percent lastBeat;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasColor;
            bool hasAccelerate;
            bool hasBeats;
            bool hasFirstBeat;
            bool hasLastBeat;
        };
        
        class Bend;
        using BendPtr = std::shared_ptr<Bend>;
        using BendUPtr = std::unique_ptr<Bend>;
        using BendSet = std::vector<BendPtr>;
        using BendSetIter = BendSet::iterator;
        using BendSetIterConst = BendSet::const_iterator;
        inline BendPtr makeBend() { return std::make_shared<Bend>(); }
        class Bend : public ElementInterface
        {
        public:
            Bend();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            BendAttributesPtr getAttributes() const;
            void setAttributes( const BendAttributesPtr& value );
            /* _________ BendAlter minOccurs = 1, maxOccurs = 1 _________ */
            BendAlterPtr getBendAlter() const;
            void setBendAlter( const BendAlterPtr& value );
            /* _________ BendChoice minOccurs = 1, maxOccurs = 1 _________ */
            BendChoicePtr getBendChoice() const;
            void setBendChoice( const BendChoicePtr& value );
            /* _________ WithBar minOccurs = 0, maxOccurs = 1 _________ */
            WithBarPtr getWithBar() const;
            void setWithBar( const WithBarPtr& value );
            bool getHasWithBar() const;
            void setHasWithBar( const bool value );
        private:
            BendAttributesPtr myAttributes;
            BendAlterPtr myBendAlter;
            BendChoicePtr myBendChoice;
            WithBarPtr myWithBar;
            bool myHasWithBar;
        };
        /* <!--  ID = 5424 [5424] ------------------------->
         <!-- min=1 max=1 RequiredSingleOccurence  -->
         <!-- MsItemElementKind::composite -->
         <!-- RecursiveSubElementCount = 3 -->
         <!-- All Sub Elements Are Implemented: true -->
         <xs:element name="arrow" type="arrow"/>
         <xs:complexType name="arrow">
         <xs:annotation>
         <xs:documentation>The arrow element represents an arrow used for a musical technical indication..</xs:documentation>
         </xs:annotation>
         <xs:choice>
         <xs:sequence>
         <xs:element name="arrow-direction" type="arrow-direction"/>
         <xs:element name="arrow-style" type="arrow-style" minOccurs="0"/>
         </xs:sequence>
         <xs:element name="circular-arrow" type="circular-arrow"/>
         </xs:choice>
         <xs:attributeGroup ref="print-style"/>
         <xs:attributeGroup ref="placement"/>
         </xs:complexType> */
        
        class ArrowGroup;
        using ArrowGroupPtr = std::shared_ptr<ArrowGroup>;
        using ArrowGroupUPtr = std::unique_ptr<ArrowGroup>;
        using ArrowGroupSet = std::vector<ArrowGroupPtr>;
        using ArrowGroupSetIter = ArrowGroupSet::iterator;
        using ArrowGroupSetIterConst = ArrowGroupSet::const_iterator;
        inline ArrowGroupPtr makeArrowGroup() { return std::make_shared<ArrowGroup>(); }
        class ArrowGroup : public ElementInterface
        {
        public:
            ArrowGroup();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
             /* _________ ArrowDirection minOccurs = 1, maxOccurs = 1 _________ */
            ArrowDirectionPtr getArrowDirection() const;
            void setArrowDirection( const ArrowDirectionPtr& value );
            /* _________ ArrowStyle minOccurs = 0, maxOccurs = 1 _________ */
            ArrowStylePtr getArrowStyle() const;
            void setArrowStyle( const ArrowStylePtr& value );
            bool getHasArrowStyle() const;
            void setHasArrowStyle( const bool value );
        private:
            ArrowDirectionPtr myArrowDirection;
            ArrowStylePtr myArrowStyle;
            bool myHasArrowStyle;
        };
        
        struct ArrowAttributes;
        using ArrowAttributesPtr = std::shared_ptr<ArrowAttributes>;
        
        struct ArrowAttributes : public AttributesInterface
        {
        public:
            ArrowAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::TenthsValue defaultX;
            types::TenthsValue defaultY;
            types::TenthsValue relativeX;
            types::TenthsValue relativeY;
            types::CommaSeparatedText fontFamily;
            types::FontStyle fontStyle;
            types::FontSize fontSize;
            types::FontWeight fontWeight;
            types::Color color;
            types::AboveBelow placement;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasColor;
            bool hasPlacement;
        };
        
        class Arrow;
        using ArrowPtr = std::shared_ptr<Arrow>;
        using ArrowUPtr = std::unique_ptr<Arrow>;
        using ArrowSet = std::vector<ArrowPtr>;
        using ArrowSetIter = ArrowSet::iterator;
        using ArrowSetIterConst = ArrowSet::const_iterator;
        inline ArrowPtr makeArrow() { return std::make_shared<Arrow>(); }
        class Arrow : public ElementInterface
        {
        public:
            enum class Choice
            {
                arrowGroup = 1,
                circularArrow = 2
            };
            Arrow();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            ArrowAttributesPtr getAttributes() const;
            void setAttributes( const ArrowAttributesPtr& value );
            /* _________ Choice _________ */
            Arrow::Choice getChoice() const;
            void setChoice( const Arrow::Choice value );
            /* _________ ArrowGroup minOccurs = 1, maxOccurs = 1 _________ */
            ArrowGroupPtr getArrowGroup() const;
            void setArrowGroup( const ArrowGroupPtr& value );
            /* _________ CircularArrow minOccurs = 1, maxOccurs = 1 _________ */
            CircularArrowPtr getCircularArrow() const;
            void setCircularArrow( const CircularArrowPtr& value );
        private:
            Choice myChoice;
            ArrowAttributesPtr myAttributes;
            ArrowGroupPtr myArrowGroup;
            CircularArrowPtr myCircularArrow;
        };
        /* <!--  ID = 5807 [5807] ------------------------->
         <!-- min=0 max=1 OptionalSingleOccurrence  -->
         <!-- MsItemElementKind::composite -->
         <!-- RecursiveSubElementCount = 2 -->
         <!-- All Sub Elements Are Implemented: true -->
         <xs:element name="group-name-display" type="name-display" minOccurs="0">
         <xs:annotation>
         <xs:documentation>Formatting specified in the group-name-display element overrides formatting specified in the group-name element.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:complexType name="name-display">
         <xs:annotation>
         <xs:documentation>The name-display type is used for exact formatting of multi-font text in part and group names to the left of the system. The print-object attribute can be used to determine what, if anything, is printed at the start of each system. Enclosure for the display-text element is none by default. Language for the display-text element is Italian ("it") by default.</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:choice minOccurs="0" maxOccurs="unbounded">
         <xs:element name="display-text" type="formatted-text"/>
         <xs:element name="accidental-text" type="accidental-text"/>
         </xs:choice>
         </xs:sequence>
         <xs:attributeGroup ref="print-object"/> */
        
        struct GroupNameDisplayAttributes;
        using GroupNameDisplayAttributesPtr = std::shared_ptr<GroupNameDisplayAttributes>;
        
        struct GroupNameDisplayAttributes : public AttributesInterface
        {
        public:
            GroupNameDisplayAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::YesNo printObject;
            bool hasPrintObject;
        };
        
        class GroupNameDisplay;
        using GroupNameDisplayPtr = std::shared_ptr<GroupNameDisplay>;
        using GroupNameDisplayUPtr = std::unique_ptr<GroupNameDisplay>;
        using GroupNameDisplaySet = std::vector<GroupNameDisplayPtr>;
        using GroupNameDisplaySetIter = GroupNameDisplaySet::iterator;
        using GroupNameDisplaySetIterConst = GroupNameDisplaySet::const_iterator;
        inline GroupNameDisplayPtr makeGroupNameDisplay() { return std::make_shared<GroupNameDisplay>(); }
        class GroupNameDisplay : public ElementInterface
        {
        public:
            enum class Choice
            {
                displayText = 1,
                accidentalText = 2
            };
            GroupNameDisplay();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            GroupNameDisplayAttributesPtr getAttributes() const;
            void setAttributes( const GroupNameDisplayAttributesPtr& value );
            /* _________ Choice _________ */
            GroupNameDisplay::Choice getChoice() const;
            void setChoice( const GroupNameDisplay::Choice value );
            /* _________ DisplayText minOccurs = 1, maxOccurs = 1 _________ */
            DisplayTextPtr getDisplayText() const;
            void setDisplayText( const DisplayTextPtr& value );
            /* _________ AccidentalText minOccurs = 1, maxOccurs = 1 _________ */
            AccidentalTextPtr getAccidentalText() const;
            void setAccidentalText( const AccidentalTextPtr& value );
        private:
            GroupNameDisplayAttributesPtr myAttributes;
            Choice myChoice;
            DisplayTextPtr myDisplayText;
            AccidentalTextPtr myAccidentalText;
        };
        
        /* <!--  ID = 5817 [5817] ------------------------->
         <!-- min=0 max=1 OptionalSingleOccurrence  -->
         <!-- MsItemElementKind::composite -->
         <!-- RecursiveSubElementCount = 2 -->
         <!-- All Sub Elements Are Implemented: true -->
         <xs:element name="group-abbreviation-display" type="name-display" minOccurs="0">
         <xs:annotation>
         <xs:documentation>Formatting specified in the group-abbreviation-display element overrides formatting specified in the group-abbreviation element.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:complexType name="name-display">
         <xs:annotation>
         <xs:documentation>The name-display type is used for exact formatting of multi-font text in part and group names to the left of the system. The print-object attribute can be used to determine what, if anything, is printed at the start of each system. Enclosure for the display-text element is none by default. Language for the display-text element is Italian ("it") by default.</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:choice minOccurs="0" maxOccurs="unbounded">
         <xs:element name="display-text" type="formatted-text"/>
         <xs:element name="accidental-text" type="accidental-text"/>
         </xs:choice>
         </xs:sequence>
         <xs:attributeGroup ref="print-object"/>
         </xs:complexType> */
        
        struct GroupAbbreviationDisplayAttributes;
        using GroupAbbreviationDisplayAttributesPtr = std::shared_ptr<GroupAbbreviationDisplayAttributes>;
        
        struct GroupAbbreviationDisplayAttributes : public AttributesInterface
        {
        public:
            GroupAbbreviationDisplayAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::YesNo printObject;
            bool hasPrintObject;
        };
        
        class GroupAbbreviationDisplay;
        using GroupAbbreviationDisplayPtr = std::shared_ptr<GroupAbbreviationDisplay>;
        using GroupAbbreviationDisplayUPtr = std::unique_ptr<GroupAbbreviationDisplay>;
        using GroupAbbreviationDisplaySet = std::vector<GroupAbbreviationDisplayPtr>;
        using GroupAbbreviationDisplaySetIter = GroupAbbreviationDisplaySet::iterator;
        using GroupAbbreviationDisplaySetIterConst = GroupAbbreviationDisplaySet::const_iterator;
        inline GroupAbbreviationDisplayPtr makeGroupAbbreviationDisplay() { return std::make_shared<GroupAbbreviationDisplay>(); }
        class GroupAbbreviationDisplay : public ElementInterface
        {
        public:
            enum class Choice
            {
                displayText = 1,
                accidentalText = 2
            };
            GroupAbbreviationDisplay();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            GroupAbbreviationDisplayAttributesPtr getAttributes() const;
            void setAttributes( const GroupAbbreviationDisplayAttributesPtr& value );
            /* _________ Choice _________ */
            GroupAbbreviationDisplay::Choice getChoice() const;
            void setChoice( const GroupAbbreviationDisplay::Choice value );
            /* _________ DisplayText minOccurs = 1, maxOccurs = 1 _________ */
            DisplayTextPtr getDisplayText() const;
            void setDisplayText( const DisplayTextPtr& value );
            /* _________ AccidentalText minOccurs = 1, maxOccurs = 1 _________ */
            AccidentalTextPtr getAccidentalText() const;
            void setAccidentalText( const AccidentalTextPtr& value );
        private:
            GroupAbbreviationDisplayAttributesPtr myAttributes;
            Choice myChoice;
            DisplayTextPtr myDisplayText;
            AccidentalTextPtr myAccidentalText;
        };
        /* <!--  ID = 5921 [5921, 6375] ------------------------->
         <!-- min=0 max=1 OptionalSingleOccurrence  -->
         <!-- MsItemElementKind::composite -->
         <!-- RecursiveSubElementCount = 12 -->
         <!-- All Sub Elements Are Implemented: true -->
         <xs:element name="identification" type="identification" minOccurs="0"/>
         <xs:complexType name="identification">
         <xs:annotation>
         <xs:documentation>Identification contains basic metadata about the score. It includes the information in MuseData headers that may apply at a score-wide, movement-wide, or part-wide level. The creator, rights, source, and relation elements are based on Dublin Core.</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:element name="creator" type="typed-text" minOccurs="0" maxOccurs="unbounded">
         <xs:annotation>
         <xs:documentation>The creator element is borrowed from Dublin Core. It is used for the creators of the score. The type attribute is used to distinguish different creative contributions. Thus, there can be multiple creators within an identification. Standard type values are composer, lyricist, and arranger. Other type values may be used for different types of creative roles. The type attribute should usually be used even if there is just a single creator element. The MusicXML format does not use the creator / contributor distinction from Dublin Core.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="rights" type="typed-text" minOccurs="0" maxOccurs="unbounded">
         <xs:annotation>
         <xs:documentation>The rights element is borrowed from Dublin Core. It contains copyright and other intellectual property notices. Words, music, and derivatives can have different types, so multiple rights tags with different type attributes are supported. Standard type values are music, words, and arrangement, but other types may be used. The type attribute is only needed when there are multiple rights elements.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="encoding" type="encoding" minOccurs="0"/>
         <xs:element name="source" type="xs:string" minOccurs="0">
         <xs:annotation>
         <xs:documentation>The source for the music that is encoded. This is similar to the Dublin Core source element.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="relation" type="typed-text" minOccurs="0" maxOccurs="unbounded">
         <xs:annotation>
         <xs:documentation>A related resource for the music that is encoded. This is similar to the Dublin Core relation element. Standard type values are music, words, and arrangement, but other types may be used.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="miscellaneous" type="miscellaneous" minOccurs="0"/>
         </xs:sequence>
         </xs:complexType> */
        
        class Identification;
        using IdentificationPtr = std::shared_ptr<Identification>;
        using IdentificationUPtr = std::unique_ptr<Identification>;
        using IdentificationSet = std::vector<IdentificationPtr>;
        using IdentificationSetIter = IdentificationSet::iterator;
        using IdentificationSetIterConst = IdentificationSet::const_iterator;
        inline IdentificationPtr makeIdentification() { return std::make_shared<Identification>(); }
        class Identification : public ElementInterface
        {
        public:
            Identification();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            /* _________ Creator minOccurs = 0, maxOccurs = unbounded _________ */
            const CreatorSet& getCreatorSet() const;
            void addCreator( const CreatorPtr& value );
            void removeCreator( const CreatorSetIterConst& value );
            void clearCreatorSet();
            CreatorPtr getCreator( const CreatorSetIterConst& setIterator ) const;
            /* _________ Rights minOccurs = 0, maxOccurs = unbounded _________ */
            const RightsSet& getRightsSet() const;
            void addRights( const RightsPtr& value );
            void removeRights( const RightsSetIterConst& value );
            void clearRightsSet();
            RightsPtr getRights( const RightsSetIterConst& setIterator ) const;
            /* _________ Encoding minOccurs = 0, maxOccurs = 1 _________ */
            EncodingPtr getEncoding() const;
            void setEncoding( const EncodingPtr& value );
            bool getHasEncoding() const;
            void setHasEncoding( const bool value );
            /* _________ Source minOccurs = 0, maxOccurs = 1 _________ */
            SourcePtr getSource() const;
            void setSource( const SourcePtr& value );
            bool getHasSource() const;
            void setHasSource( const bool value );
            /* _________ Relation minOccurs = 0, maxOccurs = unbounded _________ */
            const RelationSet& getRelationSet() const;
            void addRelation( const RelationPtr& value );
            void removeRelation( const RelationSetIterConst& value );
            void clearRelationSet();
            RelationPtr getRelation( const RelationSetIterConst& setIterator ) const;
            /* _________ Miscellaneous minOccurs = 0, maxOccurs = 1 _________ */
            MiscellaneousPtr getMiscellaneous() const;
            void setMiscellaneous( const MiscellaneousPtr& value );
            bool getHasMiscellaneous() const;
            void setHasMiscellaneous( const bool value );
        private:
            CreatorSet myCreatorSet;
            RightsSet myRightsSet;
            EncodingPtr myEncoding;
            bool myHasEncoding;
            SourcePtr mySource;
            bool myHasSource;
            RelationSet myRelationSet;
            MiscellaneousPtr myMiscellaneous;
            bool myHasMiscellaneous;
        };

        /* 5936 [ equivalents 3861, 5936 ]
         <!--  ID = 5936 [3861, 5936] ------------------------->
         <!-- min=0 max=1 OptionalSingleOccurrence  -->
         <!-- MsItemElementKind::composite -->
         <!-- RecursiveSubElementCount = 2 -->
         <!-- All Sub Elements Are Implemented: true -->
         <xs:element name="part-abbreviation-display" type="name-display" minOccurs="0"/>
         <xs:complexType name="name-display">
         <xs:annotation>
         <xs:documentation>The name-display type is used for exact formatting of multi-font text in part and group names to the left of the system. The print-object attribute can be used to determine what, if anything, is printed at the start of each system. Enclosure for the display-text element is none by default. Language for the display-text element is Italian ("it") by default.</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:choice minOccurs="0" maxOccurs="unbounded">
         <xs:element name="display-text" type="formatted-text"/>
         <xs:element name="accidental-text" type="accidental-text"/>
         </xs:choice>
         </xs:sequence>
         <xs:attributeGroup ref="print-object"/>
         </xs:complexType> */
        struct PartAbbreviationDisplayAttributes;
        using PartAbbreviationDisplayAttributesPtr = std::shared_ptr<PartAbbreviationDisplayAttributes>;
        
        struct PartAbbreviationDisplayAttributes : public AttributesInterface
        {
        public:
            PartAbbreviationDisplayAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::YesNo printObject;
            bool hasPrintObject;
        };
        
        class PartAbbreviationDisplay;
        using PartAbbreviationDisplayPtr = std::shared_ptr<PartAbbreviationDisplay>;
        using PartAbbreviationDisplayUPtr = std::unique_ptr<PartAbbreviationDisplay>;
        using PartAbbreviationDisplaySet = std::vector<PartAbbreviationDisplayPtr>;
        using PartAbbreviationDisplaySetIter = PartAbbreviationDisplaySet::iterator;
        using PartAbbreviationDisplaySetIterConst = PartAbbreviationDisplaySet::const_iterator;
        inline PartAbbreviationDisplayPtr makePartAbbreviationDisplay() { return std::make_shared<PartAbbreviationDisplay>(); }
        class PartAbbreviationDisplay : public ElementInterface
        {
        public:
            enum class Choice
            {
                displayText = 1,
                accidentalText = 2
            };
            PartAbbreviationDisplay();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            PartAbbreviationDisplayAttributesPtr getAttributes() const;
            void setAttributes( const PartAbbreviationDisplayAttributesPtr& value );
            /* _________ Choice _________ */
            PartAbbreviationDisplay::Choice getChoice() const;
            void setChoice( const PartAbbreviationDisplay::Choice value );
            /* _________ DisplayText minOccurs = 1, maxOccurs = 1 _________ */
            DisplayTextPtr getDisplayText() const;
            void setDisplayText( const DisplayTextPtr& value );
            /* _________ AccidentalText minOccurs = 1, maxOccurs = 1 _________ */
            AccidentalTextPtr getAccidentalText() const;
            void setAccidentalText( const AccidentalTextPtr& value );
        private:
            PartAbbreviationDisplayAttributesPtr myAttributes;
            Choice myChoice;
            DisplayTextPtr myDisplayText;
            AccidentalTextPtr myAccidentalText;
        };
        
        /* <!--  ID = 5947 [5947] ------------------------->
         <!-- min=0 max=4294967295 ZeroOrMany  -->
         <!-- MsItemElementKind::composite -->
         <!-- RecursiveSubElementCount = 8 -->
         <!-- All Sub Elements Are Implemented: true -->
         <xs:element name="score-instrument" type="score-instrument" minOccurs="0" maxOccurs="unbounded"/>
         <xs:complexType name="score-instrument">
         <xs:annotation>
         <xs:documentation>The score-instrument type represents a single instrument within a score-part. As with the score-part type, each score-instrument has a required ID attribute, a name, and an optional abbreviation.
         
         A score-instrument type is also required if the score specifies MIDI 1.0 channels, banks, or programs. An initial midi-instrument assignment can also be made here. MusicXML software should be able to automatically assign reasonable channels and instruments without these elements in simple cases, such as where part names match General MIDI instrument names.</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:element name="instrument-name" type="xs:string">
         <xs:annotation>
         <xs:documentation>The instrument-name element is typically used within a software application, rather than appearing on the printed page of a score.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="instrument-abbreviation" type="xs:string" minOccurs="0">
         <xs:annotation>
         <xs:documentation>The optional instrument-abbreviation element is typically used within a software application, rather than appearing on the printed page of a score.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="instrument-sound" type="xs:string" minOccurs="0">
         <xs:annotation>
         <xs:documentation>The instrument-sound element describes the default timbre of the score-instrument. This description is independent of a particular virtual or MIDI instrument specification and allows playback to be shared more easily between applications and libraries.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:choice minOccurs="0">
         <xs:element name="solo" type="empty">
         <xs:annotation>
         <xs:documentation>The solo element was added in Version 2.0. It is present if performance is intended by a solo instrument.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="ensemble" type="positive-integer-or-empty">
         <xs:annotation>
         <xs:documentation>The ensemble element was added in Version 2.0. It is present if performance is intended by an ensemble such as an orchestral section. The text of the ensemble element contains the size of the section, or is empty if the ensemble size is not specified.</xs:documentation>
         </xs:annotation>
         </xs:element>
         </xs:choice>
         <xs:element name="virtual-instrument" type="virtual-instrument" minOccurs="0"/>
         </xs:sequence>
         <xs:attribute name="id" type="xs:ID" use="required"/>
         </xs:complexType> */
        
        class SoloOrEnsemble;
        using SoloOrEnsemblePtr = std::shared_ptr<SoloOrEnsemble>;
        using SoloOrEnsembleUPtr = std::unique_ptr<SoloOrEnsemble>;
        using SoloOrEnsembleSet = std::vector<SoloOrEnsemblePtr>;
        using SoloOrEnsembleSetIter = SoloOrEnsembleSet::iterator;
        using SoloOrEnsembleSetIterConst = SoloOrEnsembleSet::const_iterator;
        inline SoloOrEnsemblePtr makeSoloOrEnsemble() { return std::make_shared<SoloOrEnsemble>(); }
        class SoloOrEnsemble : public ElementInterface
        {
        public:
            enum class Choice
            {
                solo = 1,
                ensemble = 2
            };
            SoloOrEnsemble();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            /* _________ Choice  _________ */
            SoloOrEnsemble::Choice getChoice() const;
            void setChoice( const SoloOrEnsemble::Choice value );
            /* _________ Solo minOccurs = 1, maxOccurs = 1 _________ */
            SoloPtr getSolo() const;
            void setSolo( const SoloPtr& value );
            /* _________ Ensemble minOccurs = 1, maxOccurs = 1 _________ */
            EnsemblePtr getEnsemble() const;
            void setEnsemble( const EnsemblePtr& value );
        private:
            Choice myChoice;
            SoloPtr mySolo;
            EnsemblePtr myEnsemble;
        };
        
        struct ScoreInstrumentAttributes;
        using ScoreInstrumentAttributesPtr = std::shared_ptr<ScoreInstrumentAttributes>;
        
        struct ScoreInstrumentAttributes : public AttributesInterface
        {
        public:
            ScoreInstrumentAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::XsID id;
            const 	bool hasId;
        };
        
        class ScoreInstrument;
        using ScoreInstrumentPtr = std::shared_ptr<ScoreInstrument>;
        using ScoreInstrumentUPtr = std::unique_ptr<ScoreInstrument>;
        using ScoreInstrumentSet = std::vector<ScoreInstrumentPtr>;
        using ScoreInstrumentSetIter = ScoreInstrumentSet::iterator;
        using ScoreInstrumentSetIterConst = ScoreInstrumentSet::const_iterator;
        inline ScoreInstrumentPtr makeScoreInstrument() { return std::make_shared<ScoreInstrument>(); }
        class ScoreInstrument : public ElementInterface
        {
        public:
            ScoreInstrument();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            ScoreInstrumentAttributesPtr getAttributes() const;
            void setAttributes( const ScoreInstrumentAttributesPtr& value );
            /* _________ InstrumentName minOccurs = 1, maxOccurs = 1 _________ */
            InstrumentNamePtr getInstrumentName() const;
            void setInstrumentName( const InstrumentNamePtr& value );
            /* _________ InstrumentAbbreviation minOccurs = 0, maxOccurs = 1 _________ */
            InstrumentAbbreviationPtr getInstrumentAbbreviation() const;
            void setInstrumentAbbreviation( const InstrumentAbbreviationPtr& value );
            bool getHasInstrumentAbbreviation() const;
            void setHasInstrumentAbbreviation( const bool value );
            /* _________ SoloOrEnsemble minOccurs = 0, maxOccurs = 1 _________ */
            SoloOrEnsemblePtr getSoloOrEnsemble() const;
            void setSoloOrEnsemble( const SoloOrEnsemblePtr& value );
            bool getHasSoloOrEnsemble() const;
            void setHasSoloOrEnsemble( const bool value );
            /* _________ InstrumentSound minOccurs = 0, maxOccurs = 1 _________ */
            InstrumentSoundPtr getInstrumentSound() const;
            void setInstrumentSound( const InstrumentSoundPtr& value );
            bool getHasInstrumentSound() const;
            void setHasInstrumentSound( const bool value );
            /* _________ VirtualInstrument minOccurs = 0, maxOccurs = 1 _________ */
            VirtualInstrumentPtr getVirtualInstrument() const;
            void setVirtualInstrument( const VirtualInstrumentPtr& value );
            bool getHasVirtualInstrument() const;
            void setHasVirtualInstrument( const bool value );
        private:
            ScoreInstrumentAttributesPtr myAttributes;
            InstrumentNamePtr myInstrumentName;
            InstrumentAbbreviationPtr myInstrumentAbbreviation;
            bool myHasInstrumentAbbreviation;
            InstrumentSoundPtr myInstrumentSound;
            bool myHasInstrumentSound;
            SoloOrEnsemblePtr mySoloOrEnsemble;
            bool myHasSoloOrEnsemble;
            VirtualInstrumentPtr myVirtualInstrument;
            bool myHasVirtualInstrument;
        };
        
        /* <!--  ID = 6322 [6322] ------------------------->
         <!-- min=1 max=1 RequiredSingleOccurence  -->
         <!-- MsItemElementKind::composite -->
         <!-- RecursiveSubElementCount = 26 -->
         <!-- All Sub Elements Are Implemented: true -->
         <xs:element name="harmony" type="harmony"/>
         <xs:complexType name="harmony">
         <xs:annotation>
         <xs:documentation>The harmony type is based on Humdrum's **harm encoding, extended to support chord symbols in popular music as well as functional harmony analysis in classical music.
         
         If there are alternate harmonies possible, this can be specified using multiple harmony elements differentiated by type. Explicit harmonies have all note present in the music; implied have some notes missing but implied; alternate represents alternate analyses.
         
         The harmony object may be used for analysis or for chord symbols. The print-object attribute controls whether or not anything is printed due to the harmony element. The print-frame attribute controls printing of a frame or fretboard diagram. The print-style attribute group sets the default for the harmony, but individual elements can override this with their own print-style values.</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:group ref="harmony-chord" maxOccurs="unbounded"/>
         <xs:element name="frame" type="frame" minOccurs="0"/>
         <xs:element name="offset" type="offset" minOccurs="0"/>
         <xs:group ref="editorial"/>
         <xs:group ref="staff" minOccurs="0"/>
         </xs:sequence>
         <xs:attribute name="type" type="harmony-type"/>
         <xs:attributeGroup ref="print-object"/>
         <xs:attribute name="print-frame" type="yes-no"/>
         <xs:attributeGroup ref="print-style"/>
         <xs:attributeGroup ref="placement"/>
         </xs:complexType>
         
         <xs:group name="harmony-chord">
         <xs:annotation>
         <xs:documentation>A harmony element can contain many stacked chords (e.g. V of II). A sequence of harmony-chord groups is used for this type of secondary function, where V of II would be represented by a harmony-chord with a V function followed by a harmony-chord with a II function.
         
         A root is a pitch name like C, D, E, where a function is an indication like I, II, III. It is an either/or choice to avoid data inconsistency.</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:choice>
         <xs:element name="root" type="root"/>
         <xs:element name="function" type="style-text">
         <xs:annotation>
         <xs:documentation>The function element is used to represent classical functional harmony with an indication like I, II, III rather than C, D, E. It is relative to the key that is specified in the MusicXML encoding.</xs:documentation>
         </xs:annotation>
         </xs:element>
         </xs:choice>
         <xs:element name="kind" type="kind"/>
         <xs:element name="inversion" type="inversion" minOccurs="0"/>
         <xs:element name="bass" type="bass" minOccurs="0"/>
         <xs:element name="degree" type="degree" minOccurs="0" maxOccurs="unbounded"/>
         </xs:sequence>
         </xs:group>
         
         <xs:group name="editorial">
         <xs:annotation>
         <xs:documentation>The editorial group specifies editorial information for a musical element.</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:group ref="footnote" minOccurs="0"/>
         <xs:group ref="level" minOccurs="0"/>
         </xs:sequence>
         </xs:group>
         
         <xs:group name="staff">
         <xs:annotation>
         <xs:documentation>The staff element is defined within a group due to its use by both notes and direction elements.</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:element name="staff" type="xs:positiveInteger">
         <xs:annotation>
         <xs:documentation>Staff assignment is only needed for music notated on multiple staves. Used by both notes and directions. Staff values are numbers, with 1 referring to the top-most staff in a part.</xs:documentation>
         </xs:annotation>
         </xs:element>
         </xs:sequence>
         </xs:group> */
        
        class HarmonyChordGroup;
        using HarmonyChordGroupPtr = std::shared_ptr<HarmonyChordGroup>;
        using HarmonyChordGroupUPtr = std::unique_ptr<HarmonyChordGroup>;
        using HarmonyChordGroupSet = std::vector<HarmonyChordGroupPtr>;
        using HarmonyChordGroupSetIter = HarmonyChordGroupSet::iterator;
        using HarmonyChordGroupSetIterConst = HarmonyChordGroupSet::const_iterator;
        inline HarmonyChordGroupPtr makeHarmonyChordGroup() { return std::make_shared<HarmonyChordGroup>(); }
        class HarmonyChordGroup : public ElementInterface
        {
        public:
            enum class Choice
            {
                root = 1,
                function = 2
            };
            HarmonyChordGroup();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            /* Choice */
            HarmonyChordGroup::Choice getChoice() const;
            void setChoice( const HarmonyChordGroup::Choice value );
            /* _________ Root minOccurs = 1, maxOccurs = 1 _________ */
            RootPtr getRoot() const;
            void setRoot( const RootPtr& value );
            /* _________ Function minOccurs = 1, maxOccurs = 1 _________ */
            FunctionPtr getFunction() const;
            void setFunction( const FunctionPtr& value );
            /* _________ Kind minOccurs = 1, maxOccurs = 1 _________ */
            KindPtr getKind() const;
            void setKind( const KindPtr& value );
            /* _________ Inversion minOccurs = 0, maxOccurs = 1 _________ */
            InversionPtr getInversion() const;
            void setInversion( const InversionPtr& value );
            bool getHasInversion() const;
            void setHasInversion( const bool value );
            /* _________ Bass minOccurs = 0, maxOccurs = 1 _________ */
            BassPtr getBass() const;
            void setBass( const BassPtr& value );
            bool getHasBass() const;
            void setHasBass( const bool value );
            /* _________ Degree minOccurs = 0, maxOccurs = unbounded _________ */
            const DegreeSet& getDegreeSet() const;
            void addDegree( const DegreePtr& value );
            void removeDegree( const DegreeSetIterConst& value );
            void clearDegreeSet();
            DegreePtr getDegree( const DegreeSetIterConst& setIterator ) const;
        private:
            Choice myChoice;
            RootPtr myRoot;
            FunctionPtr myFunction;
            KindPtr myKind;
            InversionPtr myInversion;
            bool myHasInversion;
            BassPtr myBass;
            bool myHasBass;
            DegreeSet myDegreeSet;
        };
        
        struct HarmonyAttributes;
        using HarmonyAttributesPtr = std::shared_ptr<HarmonyAttributes>;
        
        struct HarmonyAttributes : public AttributesInterface
        {
        public:
            HarmonyAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::HarmonyType type;
            types::YesNo printObject;
            types::YesNo printFrame;
            types::TenthsValue defaultX;
            types::TenthsValue defaultY;
            types::TenthsValue relativeX;
            types::TenthsValue relativeY;
            types::CommaSeparatedText fontFamily;
            types::FontStyle fontStyle;
            types::FontSize fontSize;
            types::FontWeight fontWeight;
            types::Color color;
            types::AboveBelow placement;
            bool hasType;
            bool hasPrintObject;
            bool hasPrintFrame;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasColor;
            bool hasPlacement;
        };
        
        class Harmony;
        using HarmonyPtr = std::shared_ptr<Harmony>;
        using HarmonyUPtr = std::unique_ptr<Harmony>;
        using HarmonySet = std::vector<HarmonyPtr>;
        using HarmonySetIter = HarmonySet::iterator;
        using HarmonySetIterConst = HarmonySet::const_iterator;
        inline HarmonyPtr makeHarmony() { return std::make_shared<Harmony>(); }
        class Harmony : public ElementInterface
        {
        public:
            Harmony();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            HarmonyAttributesPtr getAttributes() const;
            void setAttributes( const HarmonyAttributesPtr& value );
            /* _________ HarmonyChordGroup minOccurs = 1, maxOccurs = unbounded _________ */
            const HarmonyChordGroupSet& getHarmonyChordGroupSet() const;
            void addHarmonyChordGroup( const HarmonyChordGroupPtr& value );
            void removeHarmonyChordGroup( const HarmonyChordGroupSetIterConst& value );
            void clearHarmonyChordGroupSet();
            HarmonyChordGroupPtr getHarmonyChordGroup( const HarmonyChordGroupSetIterConst& setIterator ) const;
            /* _________ Frame minOccurs = 0, maxOccurs = 1 _________ */
            FramePtr getFrame() const;
            void setFrame( const FramePtr& value );
            bool getHasFrame() const;
            void setHasFrame( const bool value );
            /* _________ Offset minOccurs = 0, maxOccurs = 1 _________ */
            OffsetPtr getOffset() const;
            void setOffset( const OffsetPtr& value );
            bool getHasOffset() const;
            void setHasOffset( const bool value );
            /* _________ EditorialGroup minOccurs = 1, maxOccurs = 1 _________ */
            EditorialGroupPtr getEditorialGroup() const;
            void setEditorialGroup( const EditorialGroupPtr& value );
            /* _________ Staff minOccurs = 0, maxOccurs = 1 _________ */
            StaffPtr getStaff() const;
            void setStaff( const StaffPtr& value );
            bool getHasStaff() const;
            void setHasStaff( const bool value );
        private:
            HarmonyAttributesPtr myAttributes;
            HarmonyChordGroupSet myHarmonyChordGroupSet;
            FramePtr myFrame;
            bool myHasFrame;
            OffsetPtr myOffset;
            bool myHasOffset;
            EditorialGroupPtr myEditorialGroup;
            StaffPtr myStaff;
            bool myHasStaff;
        };
        
        class CreditWordsGroup;
        using CreditWordsGroupPtr = std::shared_ptr<CreditWordsGroup>;
        using CreditWordsGroupUPtr = std::unique_ptr<CreditWordsGroup>;
        using CreditWordsGroupSet = std::vector<CreditWordsGroupPtr>;
        using CreditWordsGroupSetIter = CreditWordsGroupSet::iterator;
        using CreditWordsGroupSetIterConst = CreditWordsGroupSet::const_iterator;
        inline CreditWordsGroupPtr makeCreditWordsGroup() { return std::make_shared<CreditWordsGroup>(); }
        class CreditWordsGroup : public ElementInterface
        {
        public:
            CreditWordsGroup();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            /* _________ LinkSet minOccurs = 0, maxOccurs = unbounded _________ */
            const LinkSet& getLinkSet() const;
            void addLink( const LinkPtr& value );
            void removeLink( const LinkSetIterConst& value );
            void clearLinkSet();
            LinkPtr getLink( const LinkSetIterConst& setIterator ) const;
            /* _________ Bookmark minOccurs = 0, maxOccurs = unbounded _________ */
            const BookmarkSet& getBookmarkSet() const;
            void addBookmark( const BookmarkPtr& value );
            void removeBookmark( const BookmarkSetIterConst& value );
            void clearBookmarkSet();
            BookmarkPtr getBookmark( const BookmarkSetIterConst& setIterator ) const;
            /* _________ CreditWords minOccurs = 1, maxOccurs = 1 _________ */
            CreditWordsPtr getCreditWords() const;
            void setCreditWords( const CreditWordsPtr& value );
        private:
            LinkSet myLinkSet;
            BookmarkSet myBookmarkSet;
            CreditWordsPtr myCreditWords;
        };
        
        class CreditChoice;
        using CreditChoicePtr = std::shared_ptr<CreditChoice>;
        using CreditChoiceUPtr = std::unique_ptr<CreditChoice>;
        using CreditChoiceSet = std::vector<CreditChoicePtr>;
        using CreditChoiceSetIter = CreditChoiceSet::iterator;
        using CreditChoiceSetIterConst = CreditChoiceSet::const_iterator;
        inline CreditChoicePtr makeCreditChoice() { return std::make_shared<CreditChoice>(); }
        class CreditChoice : public ElementInterface
        {
        public:
            enum class Choice
            {
                creditImage = 1,
                creditWords = 2
            };
            CreditChoice();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            /* _________ Choice minOccurs = 1, maxOccurs = 1 _________ */
            CreditChoice::Choice getChoice() const;
            void setChoice( const CreditChoice::Choice value );
            /* _________ CreditImage minOccurs = 1, maxOccurs = 1 _________ */
            CreditImagePtr getCreditImage() const;
            void setCreditImage( const CreditImagePtr& value );
            /* _________ CreditWordsGroup minOccurs = 1, maxOccurs = 1 _________ */
            CreditWordsGroupPtr getCreditWordsGroup() const;
            void setCreditWordsGroup( const CreditWordsGroupPtr& value );
        private:
            Choice myChoice;
            CreditImagePtr myCreditImage;
            CreditWordsGroupPtr myCreditWordsGroup;
        };
        
        /*
         6383
         
         
         <!--  ID = 6383 [6383] ------------------------->
         <!-- min=0 max=4294967295 ZeroOrMany  -->
         <!-- MsItemElementKind::composite -->
         <!-- RecursiveSubElementCount = 8 -->
         <!-- All Sub Elements Are Implemented: true -->
         <xs:element name="credit" type="credit" minOccurs="0" maxOccurs="unbounded"/>
         <xs:complexType name="credit">
         <xs:annotation>
         <xs:documentation>The credit type represents the appearance of the title, composer, arranger, lyricist, copyright, dedication, and other text and graphics that commonly appears on the first page of a score. The credit-words and credit-image elements are similar to the words and image elements for directions. However, since the credit is not part of a measure, the default-x and default-y attributes adjust the origin relative to the bottom left-hand corner of the first page. The enclosure for credit-words is none by default.
         
         By default, a series of credit-words elements within a single credit element follow one another in sequence visually. Non-positional formatting attributes are carried over from the previous element by default.
         
         The page attribute for the credit element, new in Version 2.0, specifies the page number where the credit should appear. This is an integer value that starts with 1 for the first page. Its value is 1 by default. Since credits occur before the music, these page numbers do not refer to the page numbering specified by the print element's page-number attribute.
         
         The credit-type element, new in Version 3.0, indicates the purpose behind a credit. Multiple types of data may be combined in a single credit, so multiple elements may be used. Standard values include page number, title, subtitle, composer, arranger, lyricist, and rights.
         </xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:element name="credit-type" type="xs:string" minOccurs="0" maxOccurs="unbounded"/>
         <xs:element name="link" type="link" minOccurs="0" maxOccurs="unbounded"/>
         <xs:element name="bookmark" type="bookmark" minOccurs="0" maxOccurs="unbounded"/>
         <xs:choice>
         <xs:element name="credit-image" type="image"/>
         <xs:sequence>
         <xs:element name="credit-words" type="formatted-text"/>
         <xs:sequence minOccurs="0" maxOccurs="unbounded">
         <xs:element name="link" type="link" minOccurs="0" maxOccurs="unbounded"/>
         <xs:element name="bookmark" type="bookmark" minOccurs="0" maxOccurs="unbounded"/>
         <xs:element name="credit-words" type="formatted-text"/>
         </xs:sequence>
         </xs:sequence>
         </xs:choice>
         </xs:sequence>
         <xs:attribute name="page" type="xs:positiveInteger"/>
         </xs:complexType>
         
         */
        
        struct CreditAttributes;
        using CreditAttributesPtr = std::shared_ptr<CreditAttributes>;
        
        struct CreditAttributes : public AttributesInterface
        {
        public:
            CreditAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::PositiveInteger page;
            bool hasPage;
        };
        
        class Credit;
        using CreditPtr = std::shared_ptr<Credit>;
        using CreditUPtr = std::unique_ptr<Credit>;
        using CreditSet = std::vector<CreditPtr>;
        using CreditSetIter = CreditSet::iterator;
        using CreditSetIterConst = CreditSet::const_iterator;
        inline CreditPtr makeCredit() { return std::make_shared<Credit>(); }
        class Credit : public ElementInterface
        {
        public:
            Credit();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            CreditAttributesPtr getAttributes() const;
            void setAttributes( const CreditAttributesPtr& value );
            /* _________ CreditType minOccurs = 0, maxOccurs = unbounded _________ */
            const CreditTypeSet& getCreditTypeSet() const;
            void addCreditType( const CreditTypePtr& value );
            void removeCreditType( const CreditTypeSetIterConst& value );
            void clearCreditTypeSet();
            CreditTypePtr getCreditType( const CreditTypeSetIterConst& setIterator ) const;
            /* _________ Link minOccurs = 0, maxOccurs = unbounded _________ */
            const LinkSet& getLinkSet() const;
            void addLink( const LinkPtr& value );
            void removeLink( const LinkSetIterConst& value );
            void clearLinkSet();
            LinkPtr getLink( const LinkSetIterConst& setIterator ) const;
            /* _________ Bookmark minOccurs = 0, maxOccurs = unbounded _________ */
            const BookmarkSet& getBookmarkSet() const;
            void addBookmark( const BookmarkPtr& value );
            void removeBookmark( const BookmarkSetIterConst& value );
            void clearBookmarkSet();
            BookmarkPtr getBookmark( const BookmarkSetIterConst& setIterator ) const;
            /* _________ CreditChoice minOccurs = 1, maxOccurs = 1 _________ */
            CreditChoicePtr getCreditChoice() const;
            void setCreditChoice( const CreditChoicePtr& value );
        private:
            CreditAttributesPtr myAttributes;
            CreditTypeSet myCreditTypeSet;
            LinkSet myLinkSet;
            BookmarkSet myBookmarkSet;
            CreditChoicePtr myCreditChoice;
        };

        class HarmonicTypeChoice;
        using HarmonicTypeChoicePtr = std::shared_ptr<HarmonicTypeChoice>;
        using HarmonicTypeChoiceUPtr = std::unique_ptr<HarmonicTypeChoice>;
        using HarmonicTypeChoiceSet = std::vector<HarmonicTypeChoicePtr>;
        using HarmonicTypeChoiceSetIter = HarmonicTypeChoiceSet::iterator;
        using HarmonicTypeChoiceSetIterConst = HarmonicTypeChoiceSet::const_iterator;
        inline HarmonicTypeChoicePtr makeHarmonicTypeChoice() { return std::make_shared<HarmonicTypeChoice>(); }
        class HarmonicTypeChoice : public ElementInterface
        {
        public:
            enum class Choice
            {
                natural = 1,
                artificial = 2
            };
            HarmonicTypeChoice();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            /* _________ Choice minOccurs = 1, maxOccurs = 1 _________ */
            HarmonicTypeChoice::Choice getChoice() const;
            void setChoice( const HarmonicTypeChoice::Choice value );
            /* _________ Natural minOccurs = 1, maxOccurs = 1 _________ */
            NaturalPtr getNatural() const;
            void setNatural( const NaturalPtr& value );
            /* _________ Artificial minOccurs = 1, maxOccurs = 1 _________ */
            ArtificialPtr getArtificial() const;
            void setArtificial( const ArtificialPtr& value );
        private:
            Choice myChoice;
            NaturalPtr myNatural;
            ArtificialPtr myArtificial;
        };
        
        class HarmonicInfoChoice;
        using HarmonicInfoChoicePtr = std::shared_ptr<HarmonicInfoChoice>;
        using HarmonicInfoChoiceUPtr = std::unique_ptr<HarmonicInfoChoice>;
        using HarmonicInfoChoiceSet = std::vector<HarmonicInfoChoicePtr>;
        using HarmonicInfoChoiceSetIter = HarmonicInfoChoiceSet::iterator;
        using HarmonicInfoChoiceSetIterConst = HarmonicInfoChoiceSet::const_iterator;
        inline HarmonicInfoChoicePtr makeHarmonicInfoChoice() { return std::make_shared<HarmonicInfoChoice>(); }
        class HarmonicInfoChoice : public ElementInterface
        {
        public:
            enum class Choice
            {
                basePitch = 1,
                touchingPitch = 2,
                soundingPitch = 3
            };
            HarmonicInfoChoice();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            /* _________ Choice minOccurs = 1, maxOccurs = 1 _________ */
            HarmonicInfoChoice::Choice getChoice() const;
            void setChoice( const HarmonicInfoChoice::Choice value );
            /* _________ BasePitch minOccurs = 1, maxOccurs = 1 _________ */
            BasePitchPtr getBasePitch() const;
            void setBasePitch( const BasePitchPtr& value );
            /* _________ TouchingPitch minOccurs = 1, maxOccurs = 1 _________ */
            TouchingPitchPtr getTouchingPitch() const;
            void setTouchingPitch( const TouchingPitchPtr& value );
            /* _________ SoundingPitch minOccurs = 1, maxOccurs = 1 _________ */
            SoundingPitchPtr getSoundingPitch() const;
            void setSoundingPitch( const SoundingPitchPtr& value );
        private:
            Choice myChoice;
            BasePitchPtr myBasePitch;
            TouchingPitchPtr myTouchingPitch;
            SoundingPitchPtr mySoundingPitch;
        };
        
        /* <!--  ID = 5349 [5349] ------------------------->
         <!-- min=1 max=1 RequiredSingleOccurence  -->
         <!-- MsItemElementKind::composite -->
         <!-- RecursiveSubElementCount = 5 -->
         <!-- All Sub Elements Are Implemented: true -->
         <xs:element name="harmonic" type="harmonic"/>
         <xs:complexType name="harmonic">
         <xs:annotation>
         <xs:documentation>The harmonic type indicates natural and artificial harmonics. Allowing the type of pitch to be specified, combined with controls for appearance/playback differences, allows both the notation and the sound to be represented. Artificial harmonics can add a notated touching-pitch; artificial pinch harmonics will usually not notate a touching pitch. The attributes for the harmonic element refer to the use of the circular harmonic symbol, typically but not always used with natural harmonics.</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:choice minOccurs="0">
         <xs:element name="natural" type="empty">
         <xs:annotation>
         <xs:documentation>The natural element indicates that this is a natural harmonic. These are usually notated at base pitch rather than sounding pitch.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="artificial" type="empty">
         <xs:annotation>
         <xs:documentation>The artificial element indicates that this is an artificial harmonic.</xs:documentation>
         </xs:annotation>
         </xs:element>
         </xs:choice>
         <xs:choice minOccurs="0">
         <xs:element name="base-pitch" type="empty">
         <xs:annotation>
         <xs:documentation>The base pitch is the pitch at which the string is played before touching to create the harmonic.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="touching-pitch" type="empty">
         <xs:annotation>
         <xs:documentation>The touching-pitch is the pitch at which the string is touched lightly to produce the harmonic.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="sounding-pitch" type="empty">
         <xs:annotation>
         <xs:documentation>The sounding-pitch is the pitch which is heard when playing the harmonic.</xs:documentation>
         </xs:annotation>
         </xs:element>
         </xs:choice>
         </xs:sequence>
         <xs:attributeGroup ref="print-object"/>
         <xs:attributeGroup ref="print-style"/>
         <xs:attributeGroup ref="placement"/>
         </xs:complexType> */
        
        struct HarmonicAttributes;
        using HarmonicAttributesPtr = std::shared_ptr<HarmonicAttributes>;
        
        struct HarmonicAttributes : public AttributesInterface
        {
        public:
            HarmonicAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::YesNo printObject;
            types::TenthsValue defaultX;
            types::TenthsValue defaultY;
            types::TenthsValue relativeX;
            types::TenthsValue relativeY;
            types::CommaSeparatedText fontFamily;
            types::FontStyle fontStyle;
            types::FontSize fontSize;
            types::FontWeight fontWeight;
            types::Color color;
            types::AboveBelow placement;
            bool hasPrintObject;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasColor;
            bool hasPlacement;
        };
        
        class Harmonic;
        using HarmonicPtr = std::shared_ptr<Harmonic>;
        using HarmonicUPtr = std::unique_ptr<Harmonic>;
        using HarmonicSet = std::vector<HarmonicPtr>;
        using HarmonicSetIter = HarmonicSet::iterator;
        using HarmonicSetIterConst = HarmonicSet::const_iterator;
        inline HarmonicPtr makeHarmonic() { return std::make_shared<Harmonic>(); }
        class Harmonic : public ElementInterface
        {
        public:
            Harmonic();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            HarmonicAttributesPtr getAttributes() const;
            void setAttributes( const HarmonicAttributesPtr& value );
            /* _________ HarmonicTypeChoice minOccurs = 0, maxOccurs = 1 _________ */
            HarmonicTypeChoicePtr getHarmonicTypeChoice() const;
            void setHarmonicTypeChoice( const HarmonicTypeChoicePtr& value );
            bool getHasHarmonicTypeChoice() const;
            void setHasHarmonicTypeChoice( const bool value );
            /* _________ HarmonicInfoChoice minOccurs = 0, maxOccurs = 1 _________ */
            HarmonicInfoChoicePtr getHarmonicInfoChoice() const;
            void setHarmonicInfoChoice( const HarmonicInfoChoicePtr& value );
            bool getHasHarmonicInfoChoice() const;
            void setHasHarmonicInfoChoice( const bool value );
        private:
            HarmonicAttributesPtr myAttributes;
            HarmonicTypeChoicePtr myHarmonicTypeChoice;
            bool myHasHarmonicTypeChoice;
            HarmonicInfoChoicePtr myHarmonicInfoChoice;
            bool myHasHarmonicInfoChoice;
        };
        
        /* <!--  ID = 6328 [6328] ------------------------->
         <!-- min=1 max=1 RequiredSingleOccurence  -->
         <!-- MsItemElementKind::composite -->
         <!-- RecursiveSubElementCount = 28 -->
         <!-- All Sub Elements Are Implemented: true -->
         <xs:element name="print" type="print"/>
         <xs:complexType name="print">
         <xs:annotation>
         <xs:documentation>The print type contains general printing parameters, including the layout elements defined in the layout.mod file. The part-name-display and part-abbreviation-display elements used in the score.mod file may also be used here to change how a part name or abbreviation is displayed over the course of a piece. They take effect when the current measure or a succeeding measure starts a new system.
         
         Layout elements in a print statement only apply to the current page, system, staff, or measure. Music that follows continues to take the default values from the layout included in the defaults element.</xs:documentation>
         </xs:annotation>
         
         <xs:sequence>
         <xs:group ref="layout"/>
         <xs:element name="measure-layout" type="measure-layout" minOccurs="0"/>
         <xs:element name="measure-numbering" type="measure-numbering" minOccurs="0"/>
         <xs:element name="part-name-display" type="name-display" minOccurs="0"/>
         <xs:element name="part-abbreviation-display" type="name-display" minOccurs="0"/>
         </xs:sequence>
         <xs:attributeGroup ref="print-attributes"/>
         </xs:complexType>
         
         <xs:group name="layout">
         <xs:annotation>
         <xs:documentation>The layout group specifies the sequence of page, system, and staff layout elements that is common to both the defaults and print elements.</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:element name="page-layout" type="page-layout" minOccurs="0"/>
         <xs:element name="system-layout" type="system-layout" minOccurs="0"/>
         <xs:element name="staff-layout" type="staff-layout" minOccurs="0" maxOccurs="unbounded"/>
         </xs:sequence>
         </xs:group> */
        
        struct PrintAttributes;
        using PrintAttributesPtr = std::shared_ptr<PrintAttributes>;
        
        struct PrintAttributes : public AttributesInterface
        {
        public:
            PrintAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::TenthsValue staffSpacing;
            types::YesNo newSystem;
            types::YesNo newPage;
            types::PositiveInteger blankPage;
            types::XsToken pageNumber;
            bool hasStaffSpacing;
            bool hasNewSystem;
            bool hasNewPage;
            bool hasBlankPage;
            bool hasPageNumber;
        };
        
        class Print;
        using PrintPtr = std::shared_ptr<Print>;
        using PrintUPtr = std::unique_ptr<Print>;
        using PrintSet = std::vector<PrintPtr>;
        using PrintSetIter = PrintSet::iterator;
        using PrintSetIterConst = PrintSet::const_iterator;
        inline PrintPtr makePrint() { return std::make_shared<Print>(); }
        class Print : public ElementInterface
        {
        public:
            Print();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            PrintAttributesPtr getAttributes() const;
            void setAttributes( const PrintAttributesPtr& value );
            /* _________ LayoutGroup minOccurs = 1, maxOccurs = 1 _________ */
            LayoutGroupPtr getLayoutGroup() const;
            void setLayoutGroup( const LayoutGroupPtr& value );
            /* _________ MeasureLayout minOccurs = 0, maxOccurs = 1 _________ */
            MeasureLayoutPtr getMeasureLayout() const;
            void setMeasureLayout( const MeasureLayoutPtr& value );
            bool getHasMeasureLayout() const;
            void setHasMeasureLayout( const bool value );
            /* _________ MeasureNumbering minOccurs = 0, maxOccurs = 1 _________ */
            MeasureNumberingPtr getMeasureNumbering() const;
            void setMeasureNumbering( const MeasureNumberingPtr& value );
            bool getHasMeasureNumbering() const;
            void setHasMeasureNumbering( const bool value );
            /* _________ PartNameDisplay minOccurs = 0, maxOccurs = 1 _________ */
            PartNameDisplayPtr getPartNameDisplay() const;
            void setPartNameDisplay( const PartNameDisplayPtr& value );
            bool getHasPartNameDisplay() const;
            void setHasPartNameDisplay( const bool value );
            /* _________ PartAbbreviationDisplay minOccurs = 0, maxOccurs = 1 _________ */
            PartAbbreviationDisplayPtr getPartAbbreviationDisplay() const;
            void setPartAbbreviationDisplay( const PartAbbreviationDisplayPtr& value );
            bool getHasPartAbbreviationDisplay() const;
            void setHasPartAbbreviationDisplay( const bool value );
        private:
            PrintAttributesPtr myAttributes;
            LayoutGroupPtr myLayoutGroup;
            MeasureLayoutPtr myMeasureLayout;
            bool myHasMeasureLayout;
            MeasureNumberingPtr myMeasureNumbering;
            bool myHasMeasureNumbering;
            PartNameDisplayPtr myPartNameDisplay;
            bool myHasPartNameDisplay;
            PartAbbreviationDisplayPtr myPartAbbreviationDisplay;
            bool myHasPartAbbreviationDisplay;
        };
        /* <!--  ID = 6351 [6351] ------------------------->
         <!-- min=1 max=1 RequiredSingleOccurence  -->
         <!-- MsItemElementKind::composite -->
         <!-- RecursiveSubElementCount = 13 -->
         <!-- All Sub Elements Are Implemented: true -->
         <xs:element name="part-group" type="part-group"/>
         
         <xs:complexType name="part-group">
         <xs:annotation>
         <xs:documentation>The part-group element indicates groupings of parts in the score, usually indicated by braces and brackets. Braces that are used for multi-staff parts should be defined in the attributes element for that part. The part-group start element appears before the first score-part in the group. The part-group stop element appears after the last score-part in the group.
         
         The number attribute is used to distinguish overlapping and nested part-groups, not the sequence of groups. As with parts, groups can have a name and abbreviation. Values for the child elements are ignored at the stop of a group.
         
         A part-group element is not needed for a single multi-staff part. By default, multi-staff parts include a brace symbol and (if appropriate given the bar-style) common barlines. The symbol formatting for a multi-staff part can be more fully specified using the part-symbol element.</xs:documentation>
         </xs:annotation>
         
         <xs:sequence>
         
         <xs:element name="group-name" type="group-name" minOccurs="0"/>
         <xs:element name="group-name-display" type="name-display" minOccurs="0">
         <xs:annotation>
         <xs:documentation>Formatting specified in the group-name-display element overrides formatting specified in the group-name element.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="group-abbreviation" type="group-name" minOccurs="0"/>
         <xs:element name="group-abbreviation-display" type="name-display" minOccurs="0">
         <xs:annotation>
         <xs:documentation>Formatting specified in the group-abbreviation-display element overrides formatting specified in the group-abbreviation element.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="group-symbol" type="group-symbol" minOccurs="0"/>
         <xs:element name="group-barline" type="group-barline" minOccurs="0"/>
         <xs:element name="group-time" type="empty" minOccurs="0">
         <xs:annotation>
         <xs:documentation>The group-time element indicates that the displayed time signatures should stretch across all parts and staves in the group.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:group ref="editorial"/>
         
         </xs:sequence>
         
         <xs:attribute name="type" type="start-stop" use="required"/>
         <xs:attribute name="number" type="xs:token" default="1"/>
         </xs:complexType>
         
         <xs:group name="editorial">
         <xs:annotation>
         <xs:documentation>The editorial group specifies editorial information for a musical element.</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:group ref="footnote" minOccurs="0"/>
         <xs:group ref="level" minOccurs="0"/>
         </xs:sequence>
         </xs:group> */
        
        struct PartGroupAttributes;
        using PartGroupAttributesPtr = std::shared_ptr<PartGroupAttributes>;
        
        struct PartGroupAttributes : public AttributesInterface
        {
        public:
            PartGroupAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::StartStop type;
            types::XsToken number;
            const 	bool hasType;
            bool hasNumber;
        };
        
        class PartGroup;
        using PartGroupPtr = std::shared_ptr<PartGroup>;
        using PartGroupUPtr = std::unique_ptr<PartGroup>;
        using PartGroupSet = std::vector<PartGroupPtr>;
        using PartGroupSetIter = PartGroupSet::iterator;
        using PartGroupSetIterConst = PartGroupSet::const_iterator;
        inline PartGroupPtr makePartGroup() { return std::make_shared<PartGroup>(); }
        class PartGroup : public ElementInterface
        {
        public:
            PartGroup();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            PartGroupAttributesPtr getAttributes() const;
            void setAttributes( const PartGroupAttributesPtr& value );
            /* _________ GroupName minOccurs = 0, maxOccurs = 1 _________ */
            GroupNamePtr getGroupName() const;
            void setGroupName( const GroupNamePtr& value );
            bool getHasGroupName() const;
            void setHasGroupName( const bool value );
            /* _________ GroupNameDisplay minOccurs = 0, maxOccurs = 1 _________ */
            GroupNameDisplayPtr getGroupNameDisplay() const;
            void setGroupNameDisplay( const GroupNameDisplayPtr& value );
            bool getHasGroupNameDisplay() const;
            void setHasGroupNameDisplay( const bool value );
            /* _________ GroupAbbreviation minOccurs = 0, maxOccurs = 1 _________ */
            GroupAbbreviationPtr getGroupAbbreviation() const;
            void setGroupAbbreviation( const GroupAbbreviationPtr& value );
            bool getHasGroupAbbreviation() const;
            void setHasGroupAbbreviation( const bool value );
            /* _________ GroupAbbreviationDisplay minOccurs = 0, maxOccurs = 1 _________ */
            GroupAbbreviationDisplayPtr getGroupAbbreviationDisplay() const;
            void setGroupAbbreviationDisplay( const GroupAbbreviationDisplayPtr& value );
            bool getHasGroupAbbreviationDisplay() const;
            void setHasGroupAbbreviationDisplay( const bool value );
            /* _________ GroupSymbol minOccurs = 0, maxOccurs = 1 _________ */
            GroupSymbolPtr getGroupSymbol() const;
            void setGroupSymbol( const GroupSymbolPtr& value );
            bool getHasGroupSymbol() const;
            void setHasGroupSymbol( const bool value );
            /* _________ GroupBarline minOccurs = 0, maxOccurs = 1 _________ */
            GroupBarlinePtr getGroupBarline() const;
            void setGroupBarline( const GroupBarlinePtr& value );
            bool getHasGroupBarline() const;
            void setHasGroupBarline( const bool value );
            /* _________ GroupTime minOccurs = 0, maxOccurs = 1 _________ */
            GroupTimePtr getGroupTime() const;
            void setGroupTime( const GroupTimePtr& value );
            bool getHasGroupTime() const;
            void setHasGroupTime( const bool value );
            /* _________ EditorialGroup minOccurs = 1, maxOccurs = 1 _________ */
            EditorialGroupPtr getEditorialGroup() const;
            void setEditorialGroup( const EditorialGroupPtr& value );
        private:
            PartGroupAttributesPtr myAttributes;
            GroupNamePtr myGroupName;
            bool myHasGroupName;
            GroupNameDisplayPtr myGroupNameDisplay;
            bool myHasGroupNameDisplay;
            GroupAbbreviationPtr myGroupAbbreviation;
            bool myHasGroupAbbreviation;
            GroupAbbreviationDisplayPtr myGroupAbbreviationDisplay;
            bool myHasGroupAbbreviationDisplay;
            GroupSymbolPtr myGroupSymbol;
            bool myHasGroupSymbol;
            GroupBarlinePtr myGroupBarline;
            bool myHasGroupBarline;
            GroupTimePtr myGroupTime;
            bool myHasGroupTime;
            EditorialGroupPtr myEditorialGroup;
        };
        /* <!--  ID = 4932 [4932] ------------------------->
         <!-- min=1 max=1 RequiredSingleOccurence  -->
         <!-- MsItemElementKind::composite -->
         <!-- RecursiveSubElementCount = 39 -->
         <!-- All Sub Elements Are Implemented: true -->
         <xs:element name="technical" type="technical"/>
         <xs:complexType name="technical">
         <xs:annotation>
         <xs:documentation>Technical indications give performance information for individual instruments.</xs:documentation>
         </xs:annotation>
         <xs:choice minOccurs="0" maxOccurs="unbounded">
         <xs:element name="up-bow" type="empty-placement">
         <xs:annotation>
         <xs:documentation>The up-bow element represents the symbol that is used both for up-bowing on bowed instruments, and up-stroke on plucked instruments.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="down-bow" type="empty-placement">
         <xs:annotation>
         <xs:documentation>The down-bow element represents the symbol that is used both for down-bowing on bowed instruments, and down-stroke on plucked instruments.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="harmonic" type="harmonic"/>
         <xs:element name="open-string" type="empty-placement">
         <xs:annotation>
         <xs:documentation>The open-string element represents the zero-shaped open string symbol.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="thumb-position" type="empty-placement">
         <xs:annotation>
         <xs:documentation>The thumb-position element represents the thumb position symbol. This is a circle with a line, where the line does not come within the circle. It is distinct from the snap pizzicato symbol, where the line comes inside the circle.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="fingering" type="fingering"/>
         <xs:element name="pluck" type="placement-text">
         <xs:annotation>
         <xs:documentation>The pluck element is used to specify the plucking fingering on a fretted instrument, where the fingering element refers to the fretting fingering. Typical values are p, i, m, a for pulgar/thumb, indicio/index, medio/middle, and anular/ring fingers.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="double-tongue" type="empty-placement">
         <xs:annotation>
         <xs:documentation>The double-tongue element represents the double tongue symbol (two dots arranged horizontally).</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="triple-tongue" type="empty-placement">
         <xs:annotation>
         <xs:documentation>The triple-tongue element represents the triple tongue symbol (three dots arranged horizontally).</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="stopped" type="empty-placement">
         <xs:annotation>
         <xs:documentation>The stopped element represents the stopped symbol, which looks like a plus sign.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="snap-pizzicato" type="empty-placement">
         <xs:annotation>
         <xs:documentation>The snap-pizzicato element represents the snap pizzicato symbol. This is a circle with a line, where the line comes inside the circle. It is distinct from the thumb-position symbol, where the line does not come inside the circle.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="fret" type="fret"/>
         <xs:element name="string" type="string"/>
         <xs:element name="hammer-on" type="hammer-on-pull-off"/>
         <xs:element name="pull-off" type="hammer-on-pull-off"/>
         <xs:element name="bend" type="bend"/>
         <xs:element name="tap" type="placement-text">
         <xs:annotation>
         <xs:documentation>The tap element indicates a tap on the fretboard. The element content allows specification of the notation; + and T are common choices. If empty, the display is application-specific.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="heel" type="heel-toe"/>
         <xs:element name="toe" type="heel-toe"/>
         <xs:element name="fingernails" type="empty-placement">
         <xs:annotation>
         <xs:documentation>The fingernails element is used in notation for harp and other plucked string instruments.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="hole" type="hole"/>
         <xs:element name="arrow" type="arrow"/>
         <xs:element name="handbell" type="handbell"/>
         <xs:element name="other-technical" type="placement-text">
         <xs:annotation>
         <xs:documentation>The other-technical element is used to define any technical indications not yet in the MusicXML format. This allows extended representation, though without application interoperability.</xs:documentation>
         </xs:annotation>
         </xs:element>
         </xs:choice>
         </xs:complexType> */
        
        class TechnicalChoice;
        using TechnicalChoicePtr = std::shared_ptr<TechnicalChoice>;
        using TechnicalChoiceUPtr = std::unique_ptr<TechnicalChoice>;
        using TechnicalChoiceSet = std::vector<TechnicalChoicePtr>;
        using TechnicalChoiceSetIter = TechnicalChoiceSet::iterator;
        using TechnicalChoiceSetIterConst = TechnicalChoiceSet::const_iterator;
        inline TechnicalChoicePtr makeTechnicalChoice() { return std::make_shared<TechnicalChoice>(); }
        class TechnicalChoice : public ElementInterface
        {
        public:
            enum class Choice
            {
                upBow = 1,
                downBow = 2,
                harmonic = 3,
                openString = 4,
                thumbPosition = 5,
                fingering = 6,
                pluck = 7,
                doubleTongue = 8,
                tripleTounge = 9,
                stopped = 10,
                snapPizzicato = 11,
                fret = 12,
                string_ = 13,
                hammerOn = 14,
                pullOff = 15,
                bend = 16,
                tap = 17,
                heel = 18,
                toe = 19,
                fingernails = 20,
                hole = 21,
                arrow = 22,
                handbell = 23,
                otherTechnical = 24
            };
            TechnicalChoice();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            /* _________ Choice minOccurs = 1, maxOccurs = 1 _________ */
            TechnicalChoice::Choice getChoice() const;
            void setChoice( const TechnicalChoice::Choice value );
            /* _________ UpBow minOccurs = 1, maxOccurs = 1 _________ */
            UpBowPtr getUpBow() const;
            void setUpBow( const UpBowPtr& value );
            /* _________ DownBow minOccurs = 1, maxOccurs = 1 _________ */
            DownBowPtr getDownBow() const;
            void setDownBow( const DownBowPtr& value );
            /* _________ Harmonic minOccurs = 1, maxOccurs = 1 _________ */
            HarmonicPtr getHarmonic() const;
            void setHarmonic( const HarmonicPtr& value );
            /* _________ OpenString minOccurs = 1, maxOccurs = 1 _________ */
            OpenStringPtr getOpenString() const;
            void setOpenString( const OpenStringPtr& value );
            /* _________ ThumbPosition minOccurs = 1, maxOccurs = 1 _________ */
            ThumbPositionPtr getThumbPosition() const;
            void setThumbPosition( const ThumbPositionPtr& value );
            /* _________ Fingering minOccurs = 1, maxOccurs = 1 _________ */
            FingeringPtr getFingering() const;
            void setFingering( const FingeringPtr& value );
            /* _________ Pluck minOccurs = 1, maxOccurs = 1 _________ */
            PluckPtr getPluck() const;
            void setPluck( const PluckPtr& value );
            /* _________ DoubleTongue minOccurs = 1, maxOccurs = 1 _________ */
            DoubleTonguePtr getDoubleTongue() const;
            void setDoubleTongue( const DoubleTonguePtr& value );
            /* _________ TripleTongue minOccurs = 1, maxOccurs = 1 _________ */
            TripleTonguePtr getTripleTongue() const;
            void setTripleTongue( const TripleTonguePtr& value );
            /* _________ Stopped minOccurs = 1, maxOccurs = 1 _________ */
            StoppedPtr getStopped() const;
            void setStopped( const StoppedPtr& value );
            /* _________ SnapPizzicato minOccurs = 1, maxOccurs = 1 _________ */
            SnapPizzicatoPtr getSnapPizzicato() const;
            void setSnapPizzicato( const SnapPizzicatoPtr& value );
            /* _________ Fret minOccurs = 1, maxOccurs = 1 _________ */
            FretPtr getFret() const;
            void setFret( const FretPtr& value );
            /* _________ String minOccurs = 1, maxOccurs = 1 _________ */
            StringPtr getString() const;
            void setString( const StringPtr& value );
            /* _________ HammerOn minOccurs = 1, maxOccurs = 1 _________ */
            HammerOnPtr getHammerOn() const;
            void setHammerOn( const HammerOnPtr& value );
            /* _________ PullOff minOccurs = 1, maxOccurs = 1 _________ */
            PullOffPtr getPullOff() const;
            void setPullOff( const PullOffPtr& value );
            /* _________ Bend minOccurs = 1, maxOccurs = 1 _________ */
            BendPtr getBend() const;
            void setBend( const BendPtr& value );
            /* _________ Tap minOccurs = 1, maxOccurs = 1 _________ */
            TapPtr getTap() const;
            void setTap( const TapPtr& value );
            /* _________ Heel minOccurs = 1, maxOccurs = 1 _________ */
            HeelPtr getHeel() const;
            void setHeel( const HeelPtr& value );
            /* _________ Toe minOccurs = 1, maxOccurs = 1 _________ */
            ToePtr getToe() const;
            void setToe( const ToePtr& value );
            /* _________ Fingernails minOccurs = 1, maxOccurs = 1 _________ */
            FingernailsPtr getFingernails() const;
            void setFingernails( const FingernailsPtr& value );
            /* _________ Hole minOccurs = 1, maxOccurs = 1 _________ */
            HolePtr getHole() const;
            void setHole( const HolePtr& value );
            /* _________ Arrow minOccurs = 1, maxOccurs = 1 _________ */
            ArrowPtr getArrow() const;
            void setArrow( const ArrowPtr& value );
            /* _________ Handbell minOccurs = 1, maxOccurs = 1 _________ */
            HandbellPtr getHandbell() const;
            void setHandbell( const HandbellPtr& value );
            /* _________ OtherTechnical minOccurs = 1, maxOccurs = 1 _________ */
            OtherTechnicalPtr getOtherTechnical() const;
            void setOtherTechnical( const OtherTechnicalPtr& value );
        private:
            Choice myChoice;
            UpBowPtr myUpBow;
            DownBowPtr myDownBow;
            HarmonicPtr myHarmonic;
            OpenStringPtr myOpenString;
            ThumbPositionPtr myThumbPosition;
            FingeringPtr myFingering;
            PluckPtr myPluck;
            DoubleTonguePtr myDoubleTongue;
            TripleTonguePtr myTripleTongue;
            StoppedPtr myStopped;
            SnapPizzicatoPtr mySnapPizzicato;
            FretPtr myFret;
            StringPtr myString;
            HammerOnPtr myHammerOn;
            PullOffPtr myPullOff;
            BendPtr myBend;
            TapPtr myTap;
            HeelPtr myHeel;
            ToePtr myToe;
            FingernailsPtr myFingernails;
            HolePtr myHole;
            ArrowPtr myArrow;
            HandbellPtr myHandbell;
            OtherTechnicalPtr myOtherTechnical;
        };
        
        class Technical;
        using TechnicalPtr = std::shared_ptr<Technical>;
        using TechnicalUPtr = std::unique_ptr<Technical>;
        using TechnicalSet = std::vector<TechnicalPtr>;
        using TechnicalSetIter = TechnicalSet::iterator;
        using TechnicalSetIterConst = TechnicalSet::const_iterator;
        inline TechnicalPtr makeTechnical() { return std::make_shared<Technical>(); }
        class Technical : public ElementInterface
        {
        public:
            Technical();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            /* _________ TechnicalChoice minOccurs = 0, maxOccurs = unbounded _________ */
            const TechnicalChoiceSet& getTechnicalChoiceSet() const;
            void addTechnicalChoice( const TechnicalChoicePtr& value );
            void removeTechnicalChoice( const TechnicalChoiceSetIterConst& value );
            void clearTechnicalChoiceSet();
            TechnicalChoicePtr getTechnicalChoice( const TechnicalChoiceSetIterConst& setIterator ) const;
        private:
            TechnicalChoiceSet myTechnicalChoiceSet;
        };
        
        
        
        /* <xs:group name="editorial-voice-direction">
         <xs:annotation>
         <xs:documentation>The editorial-voice-direction group supports the common combination of editorial and voice information for a direction element. It is separate from the editorial-voice element because extensions and restrictions might be different for directions than for the note and forward elements.</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:group ref="footnote" minOccurs="0"/>
         <xs:group ref="level" minOccurs="0"/>
         <xs:group ref="voice" minOccurs="0"/>
         </xs:sequence>
         </xs:group> */
        
        using EditorialVoiceDirectionGroup = EditorialVoiceGroup;
        using EditorialVoiceDirectionGroupPtr = std::shared_ptr<EditorialVoiceDirectionGroup>;
        using EditorialVoiceDirectionGroupUPtr = std::unique_ptr<EditorialVoiceDirectionGroup>;
        using EditorialVoiceDirectionGroupSet = std::vector<EditorialVoiceDirectionGroupPtr>;
        using EditorialVoiceDirectionGroupSetIter = EditorialVoiceDirectionGroupSet::iterator;
        using EditorialVoiceDirectionGroupSetIterConst = EditorialVoiceDirectionGroupSet::const_iterator;
        inline EditorialVoiceDirectionGroupPtr makeEditorialVoiceDirectionGroup() { return std::make_shared<EditorialVoiceDirectionGroup>(); }
        
        /* !--  ID = 6316 [6316] ------------------------->
         <!-- min=1 max=1 RequiredSingleOccurence  -->
         <!-- MsItemElementKind::composite -->
         <!-- RecursiveSubElementCount = 116 -->
         <!-- All Sub Elements Are Implemented: true -->
         <xs:element name="direction" type="direction"/>
         <xs:complexType name="direction">
         <xs:annotation>
         <xs:documentation>A direction is a musical indication that is not attached to a specific note. Two or more may be combined to indicate starts and stops of wedges, dashes, etc.
         
         By default, a series of direction-type elements and a series of child elements of a direction-type within a single direction element follow one another in sequence visually. For a series of direction-type children, non-positional formatting attributes are carried over from the previous element by default.</xs:documentation>
         </xs:annotation>
         
         <xs:sequence>
         <xs:element name="direction-type" type="direction-type" maxOccurs="unbounded"/>
         <xs:element name="offset" type="offset" minOccurs="0"/>
         <xs:group ref="editorial-voice-direction"/>
         <xs:group ref="staff" minOccurs="0"/>
         <xs:element name="sound" type="sound" minOccurs="0"/>
         </xs:sequence>
         
         <xs:attributeGroup ref="placement"/>
         <xs:attributeGroup ref="directive"/>
         
         </xs:complexType>
         
         <xs:group name="editorial-voice-direction">
         <xs:annotation>
         <xs:documentation>The editorial-voice-direction group supports the common combination of editorial and voice information for a direction element. It is separate from the editorial-voice element because extensions and restrictions might be different for directions than for the note and forward elements.</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:group ref="footnote" minOccurs="0"/>
         <xs:group ref="level" minOccurs="0"/>
         <xs:group ref="voice" minOccurs="0"/>
         </xs:sequence>
         </xs:group>
         
         <xs:group name="staff">
         <xs:annotation>
         <xs:documentation>The staff element is defined within a group due to its use by both notes and direction elements.</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:element name="staff" type="xs:positiveInteger">
         <xs:annotation>
         <xs:documentation>Staff assignment is only needed for music notated on multiple staves. Used by both notes and directions. Staff values are numbers, with 1 referring to the top-most staff in a part.</xs:documentation>
         </xs:annotation>
         </xs:element>
         </xs:sequence>
         </xs:group> */
        
        struct DirectionAttributes;
        using DirectionAttributesPtr = std::shared_ptr<DirectionAttributes>;
        
        struct DirectionAttributes : public AttributesInterface
        {
        public:
            DirectionAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::AboveBelow placement;
            types::YesNo directive;
            bool hasPlacement;
            bool hasDirective;
        };
        
        class Direction;
        using DirectionPtr = std::shared_ptr<Direction>;
        using DirectionUPtr = std::unique_ptr<Direction>;
        using DirectionSet = std::vector<DirectionPtr>;
        using DirectionSetIter = DirectionSet::iterator;
        using DirectionSetIterConst = DirectionSet::const_iterator;
        inline DirectionPtr makeDirection() { return std::make_shared<Direction>(); }
        class Direction : public ElementInterface
        {
        public:
            Direction();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            DirectionAttributesPtr getAttributes() const;
            void setAttributes( const DirectionAttributesPtr& value );
            /* _________ DirectionType minOccurs = 0, maxOccurs = unbounded _________ */
            const DirectionTypeSet& getDirectionTypeSet() const;
            void addDirectionType( const DirectionTypePtr& value );
            void removeDirectionType( const DirectionTypeSetIterConst& value );
            void clearDirectionTypeSet();
            DirectionTypePtr getDirectionType( const DirectionTypeSetIterConst& setIterator ) const;
            /* _________ Offset minOccurs = 0, maxOccurs = 1 _________ */
            OffsetPtr getOffset() const;
            void setOffset( const OffsetPtr& value );
            bool getHasOffset() const;
            void setHasOffset( const bool value );
            /* _________ EditorialVoiceDirectionGroup minOccurs = 1, maxOccurs = 1 _________ */
            EditorialVoiceDirectionGroupPtr getEditorialVoiceDirectionGroup() const;
            void setEditorialVoiceDirectionGroup( const EditorialVoiceDirectionGroupPtr& value );
            /* _________ Staff minOccurs = 0, maxOccurs = 1 _________ */
            StaffPtr getStaff() const;
            void setStaff( const StaffPtr& value );
            bool getHasStaff() const;
            void setHasStaff( const bool value );
            /* _________ Sound minOccurs = 0, maxOccurs = 1 _________ */
            SoundPtr getSound() const;
            void setSound( const SoundPtr& value );
            bool getHasSound() const;
            void setHasSound( const bool value );
        private:
            DirectionAttributesPtr myAttributes;
            DirectionTypeSet myDirectionTypeSet;
            OffsetPtr myOffset;
            bool myHasOffset;
            EditorialVoiceDirectionGroupPtr myEditorialVoiceDirectionGroup;
            StaffPtr myStaff;
            bool myHasStaff;
            SoundPtr mySound;
            bool myHasSound;
        };
    }
}