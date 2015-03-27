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
        /*
         <!--  ID = 3301 [3301] ------------------------->
         <!-- min=1 max=4294967295 OneOrMMany  -->
         <!-- MsItemElementKind::composite -->
         <!-- RecursiveSubElementCount = 93 -->
         <!-- All Sub Elements Are Implemented: true -->
         <xs:element name="direction-type" type="direction-type" maxOccurs="unbounded"/>
         <xs:complexType name="direction-type">
         <xs:annotation>
         <xs:documentation>Textual direction types may have more than 1 component due to multiple fonts. The dynamics element may also be used in the notations element. Attribute groups related to print suggestions apply to the individual direction-type, not to the overall direction.</xs:documentation>
         </xs:annotation>
         <xs:choice>
         <xs:element name="rehearsal" type="formatted-text" maxOccurs="unbounded">
         <xs:annotation>
         <xs:documentation>The rehearsal type specifies a rehearsal mark. Language is Italian ("it") by default. Enclosure is square by default. Left justification is assumed if not specified.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="segno" type="empty-print-style-align" maxOccurs="unbounded">
         <xs:annotation>
         <xs:documentation>The segno element is the visual indicator of a segno sign. A sound element is needed to guide playback applications reliably.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="words" type="formatted-text" maxOccurs="unbounded">
         <xs:annotation>
         <xs:documentation>The words element specifies a standard text direction. Left justification is assumed if not specified. Language is Italian ("it") by default. Enclosure is none by default.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="coda" type="empty-print-style-align" maxOccurs="unbounded">
         <xs:annotation>
         <xs:documentation>The coda element is the visual indicator of a coda sign. A sound element is needed to guide playback applications reliably.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="wedge" type="wedge"/>
         <xs:element name="dynamics" type="dynamics" maxOccurs="unbounded"/>
         <xs:element name="dashes" type="dashes"/>
         <xs:element name="bracket" type="bracket"/>
         <xs:element name="pedal" type="pedal"/>
         <xs:element name="metronome" type="metronome"/>
         <xs:element name="octave-shift" type="octave-shift"/>
         <xs:element name="harp-pedals" type="harp-pedals"/>
         <xs:element name="damp" type="empty-print-style-align">
         <xs:annotation>
         <xs:documentation>The damp element specifies a harp damping mark.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="damp-all" type="empty-print-style-align">
         <xs:annotation>
         <xs:documentation>The damp-all element specifies a harp damping mark for all strings.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="eyeglasses" type="empty-print-style-align">
         <xs:annotation>
         <xs:documentation>The eyeglasses element specifies the eyeglasses symbol, common in commercial music.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="string-mute" type="string-mute"/>
         <xs:element name="scordatura" type="scordatura"/>
         <xs:element name="image" type="image"/>
         <xs:element name="principal-voice" type="principal-voice"/>
         <xs:element name="accordion-registration" type="accordion-registration"/>
         <xs:element name="percussion" type="percussion" maxOccurs="unbounded"/>
         <xs:element name="other-direction" type="other-direction"/>
         </xs:choice>
         </xs:complexType> */
        
        struct AttributesIterface;
        using AttributesIterfacePtr = std::shared_ptr<AttributesIterface>;
        
        struct AttributesIterface : public AttributesInterface
        {
        public:
            AttributesIterface();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
        };
        
        class DirectionType;
        using DirectionTypePtr = std::shared_ptr<DirectionType>;
        using DirectionTypeUPtr = std::unique_ptr<DirectionType>;
        using DirectionTypeSet = std::vector<DirectionTypePtr>;
        using DirectionTypeSetIter = DirectionTypeSet::iterator;
        using DirectionTypeSetIterConst = DirectionTypeSet::const_iterator;
        inline DirectionTypePtr makeDirectionType() { return std::make_shared<DirectionType>(); }
        class DirectionType : public ElementInterface
        {
        public:
            enum class Choice
            {
                rehearsal = 1,
                segno = 2,
                words = 3,
                coda = 4,
                wedge = 5,
                dynamics = 6,
                dashes = 7,
                bracket = 8,
                pedal = 9,
                metronome = 10,
                octaveShift = 11,
                harpPedals = 12,
                damp = 13,
                dampAll = 14,
                eyeglasses = 15,
                stringMute = 16,
                scordatura = 17,
                image = 18,
                principalVoice = 19,
                accordionRegistration = 20,
                percussion = 21,
                otherDirection = 22
            };
            DirectionType();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            DirectionType::Choice getChoice() const;
            void setChoice( const DirectionType::Choice value );
            /* _________ Rehearsal minOccurs = 1, maxOccurs = unbounded _________ */
            const RehearsalSet& getRehearsalSet() const;
            void addRehearsal( const RehearsalPtr& value );
            void removeRehearsal( const RehearsalSetIterConst& value );
            void clearRehearsalSet();
            RehearsalPtr getRehearsal( const RehearsalSetIterConst& setIterator ) const;
            /* _________ Segno minOccurs = 1, maxOccurs = unbounded _________ */
            const SegnoSet& getSegnoSet() const;
            void addSegno( const SegnoPtr& value );
            void removeSegno( const SegnoSetIterConst& value );
            void clearSegnoSet();
            SegnoPtr getSegno( const SegnoSetIterConst& setIterator ) const;
            /* _________ Words minOccurs = 1, maxOccurs = unbounded _________ */
            const WordsSet& getWordsSet() const;
            void addWords( const WordsPtr& value );
            void removeWords( const WordsSetIterConst& value );
            void clearWordsSet();
            WordsPtr getWords( const WordsSetIterConst& setIterator ) const;
            /* _________ Coda minOccurs = 1, maxOccurs = unbounded _________ */
            const CodaSet& getCodaSet() const;
            void addCoda( const CodaPtr& value );
            void removeCoda( const CodaSetIterConst& value );
            void clearCodaSet();
            CodaPtr getCoda( const CodaSetIterConst& setIterator ) const;
            /* _________ Wedge minOccurs = 1, maxOccurs = 1 _________ */
            WedgePtr getWedge() const;
            void setWedge( const WedgePtr& value );
            /* _________ Dynamics minOccurs = 1, maxOccurs = unbounded _________ */
            const DynamicsSet& getDynamicsSet() const;
            void addDynamics( const DynamicsPtr& value );
            void removeDynamics( const DynamicsSetIterConst& value );
            void clearDynamicsSet();
            DynamicsPtr getDynamics( const DynamicsSetIterConst& setIterator ) const;
            /* _________ Dashes minOccurs = 1, maxOccurs = 1 _________ */
            DashesPtr getDashes() const;
            void setDashes( const DashesPtr& value );
            /* _________ Bracket minOccurs = 1, maxOccurs = 1 _________ */
            BracketPtr getBracket() const;
            void setBracket( const BracketPtr& value );
            /* _________ Pedal minOccurs = 1, maxOccurs = 1 _________ */
            PedalPtr getPedal() const;
            void setPedal( const PedalPtr& value );
            /* _________ Metronome minOccurs = 1, maxOccurs = 1 _________ */
            MetronomePtr getMetronome() const;
            void setMetronome( const MetronomePtr& value );
            /* _________ OctaveShift minOccurs = 1, maxOccurs = 1 _________ */
            OctaveShiftPtr getOctaveShift() const;
            void setOctaveShift( const OctaveShiftPtr& value );
            /* _________ HarpPedals minOccurs = 1, maxOccurs = 1 _________ */
            HarpPedalsPtr getHarpPedals() const;
            void setHarpPedals( const HarpPedalsPtr& value );
            /* _________ Damp minOccurs = 1, maxOccurs = 1 _________ */
            DampPtr getDamp() const;
            void setDamp( const DampPtr& value );
            /* _________ DampAll minOccurs = 1, maxOccurs = 1 _________ */
            DampAllPtr getDampAll() const;
            void setDampAll( const DampAllPtr& value );
            /* _________ Eyeglasses minOccurs = 1, maxOccurs = 1 _________ */
            EyeglassesPtr getEyeglasses() const;
            void setEyeglasses( const EyeglassesPtr& value );
            /* _________ StringMute minOccurs = 1, maxOccurs = 1 _________ */
            StringMutePtr getStringMute() const;
            void setStringMute( const StringMutePtr& value );
            /* _________ Scordatura minOccurs = 1, maxOccurs = 1 _________ */
            ScordaturaPtr getScordatura() const;
            void setScordatura( const ScordaturaPtr& value );
            /* _________ Image minOccurs = 1, maxOccurs = 1 _________ */
            ImagePtr getImage() const;
            void setImage( const ImagePtr& value );
            /* _________ PrincipalVoice minOccurs = 1, maxOccurs = 1 _________ */
            PrincipalVoicePtr getPrincipalVoice() const;
            void setPrincipalVoice( const PrincipalVoicePtr& value );
            /* _________ AccordionRegistration minOccurs = 1, maxOccurs = 1 _________ */
            AccordionRegistrationPtr getAccordionRegistration() const;
            void setAccordionRegistration( const AccordionRegistrationPtr& value );
            /* _________ Percussion minOccurs = 1, maxOccurs = unbounded _________ */
            const PercussionSet& getPercussionSet() const;
            void addPercussion( const PercussionPtr& value );
            void removePercussion( const PercussionSetIterConst& value );
            void clearPercussionSet();
            PercussionPtr getPercussion( const PercussionSetIterConst& setIterator ) const;
            /* _________ OtherDirection minOccurs = 1, maxOccurs = 1 _________ */
            OtherDirectionPtr getOtherDirection() const;
            void setOtherDirection( const OtherDirectionPtr& value );
        private:
            Choice myChoice;
            RehearsalSet myRehearsalSet;
            SegnoSet mySegnoSet;
            WordsSet myWordsSet;
            CodaSet myCodaSet;
            WedgePtr myWedge;
            DynamicsSet myDynamicsSet;
            DashesPtr myDashes;
            BracketPtr myBracket;
            PedalPtr myPedal;
            MetronomePtr myMetronome;
            OctaveShiftPtr myOctaveShift;
            HarpPedalsPtr myHarpPedals;
            DampPtr myDamp;
            DampAllPtr myDampAll;
            EyeglassesPtr myEyeglasses;
            StringMutePtr myStringMute;
            ScordaturaPtr myScordatura;
            ImagePtr myImage;
            PrincipalVoicePtr myPrincipalVoice;
            AccordionRegistrationPtr myAccordionRegistration;
            PercussionSet myPercussionSet;
            OtherDirectionPtr myOtherDirection;
        };
        
        
#if 1==0
        class X_______X;
        using X_______XPtr = std::shared_ptr<X_______X>;
        using X_______XUPtr = std::unique_ptr<X_______X>;
        using X_______XSet = std::vector<X_______XPtr>;
        using X_______XSetIter = X_______XSet::iterator;
        using X_______XSetIterConst = X_______XSet::const_iterator;
        inline X_______XPtr makeX_______X() { return std::make_shared<X_______X>(); }
        class X_______X : public ElementInterface
        {
        public:
            X_______X();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
        private:
        };
        
        class X_______X;
        using X_______XPtr = std::shared_ptr<X_______X>;
        using X_______XUPtr = std::unique_ptr<X_______X>;
        using X_______XSet = std::vector<X_______XPtr>;
        using X_______XSetIter = X_______XSet::iterator;
        using X_______XSetIterConst = X_______XSet::const_iterator;
        inline X_______XPtr makeX_______X() { return std::make_shared<X_______X>(); }
        class X_______X : public ElementInterface
        {
        public:
            X_______X();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
        private:
        };
#endif
    }
}