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
    }
}