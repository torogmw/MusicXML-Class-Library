/* See MusicXML License at the bottom of this code page. */

#pragma once
#include "LexiconBaseObjects.h"
#include <iostream>
#include <string>
#include <sstream>

namespace lexicon
{
    

    template <typename T, bool isLBOUND, bool isUBOUND, bool isLINCL, bool isUINCL>
    class MxNumberImpl // : public MxParseableObject
    {
    public:
        MxNumberImpl( const T& value_in, const T& LBOUND_IN, const T& UBOUND_IN )
        :myValue( value_in )
        ,LBOUND( LBOUND_IN )
        ,UBOUND( UBOUND_IN )
        {
            if ( isLBOUND && myValue <= LBOUND )
            {
                if ( isLINCL )
                {
                    myValue = LBOUND;
                }
                else // if ( ! isLINCL )
                {
                    T two = 2;
                    myValue = ( LBOUND + UBOUND ) / two;
                }
            }
            if ( isUBOUND && myValue >= UBOUND )
            {
                if ( isUINCL )
                {
                    myValue = UBOUND;
                }
                else // if ( ! isLINCL )
                {
                    T two = 2;
                    myValue = ( LBOUND + UBOUND ) / two;
                }
            }
        }
        virtual ~MxNumberImpl() {}
        virtual T getValue() const
        {
            return myValue;
        }
        virtual bool setValue( const T& new_value )
        {
            if ( !isLBOUND && !isUBOUND )
            {
                myValue = new_value;
                return true;
            }
            if ( isLBOUND )
            {
                if ( isLINCL && new_value < LBOUND )
                {
                    return false;
                }
                if ( ( !isLINCL ) && new_value <= LBOUND )
                {
                    return false;
                }
            }
            if ( isUBOUND )
            {
                if ( isUINCL && new_value > UBOUND )
                {
                    return false;
                }
                if ( ( !isUINCL ) && new_value >= UBOUND )
                {
                    return false;
                }
            }
            myValue = new_value;
            return true;
        }
        
        virtual std::ostream& stream( std::ostream& os ) const
        {
            return os << myValue;
        }
        
        bool isUpperRangeBound() const
        {
            return isUBOUND;
        }
        bool isLowerRangeBound() const
        {
            return isLBOUND;
        }
        bool isLowerRangeLimitInclusive() const
        {
            return isLINCL;
        }
        
        bool isUpperRangeLimitInclusive() const
        {
            return isUINCL;
        }
        operator T() const
        {
            return myValue;
        }
        T getLowerBound() const
        {
            return LBOUND;
        }
        T getUpperBound() const
        {
            return UBOUND;
        }
        virtual bool operator==( const T& other ) const
        {
            return myValue == other;
        }
        virtual bool operator!=( const T& other ) const
        {
            return myValue != other;
        }
        virtual bool operator>=( const T& other ) const
        {
            return myValue >= other;
        }
        virtual bool operator<=( const T& other ) const
        {
            return myValue <= other;
        }
        virtual bool operator>( const T& other ) const
        {
            return myValue > other;
        }
        virtual bool operator<( const T& other ) const
        {
            return myValue < other;
        }
        
        /* because I have an incomplete type problem */
        // virtual std::string getClassName() const { return "MxNumberImpl"; }
        // virtual std::string toString() const { return "MxNumberImpl"; }
        // virtual std::string getXmlTypeName() const { return "MxNumberImpl"; }
        // virtual std::string getDocumentation() const { return "MxNumberImpl"; }
        // virtual bool fromString( const std::string& value ) { return false; }
        
    private:
        T myValue;
        T LBOUND;
        T UBOUND;
        
    };
    
    template <bool isLBOUND, bool isUBOUND, bool isLINCL, bool isUINCL>
    class MxNumberInt : public MxNumber<int>
    {
    public:
        MxNumberInt( const int& value_in, const int& LBOUND_IN, const int& UBOUND_IN )
        :myMxNumberImpl( value_in, LBOUND_IN, UBOUND_IN )
        { }
        virtual ~MxNumberInt() {}
        virtual int getValue() const
        {
            return myMxNumberImpl.getValue();
        }
        virtual bool setValue( const int& new_value )
        {
            return myMxNumberImpl.setValue( new_value );
        }
        
        virtual std::ostream& stream( std::ostream& os ) const
        {
            return myMxNumberImpl.stream( os );
        }
        
        bool isUpperRangeBound() const
        {
            return myMxNumberImpl.isUpperRangeBound();
        }
        bool isLowerRangeBound() const
        {
            return myMxNumberImpl.isLowerRangeBound();
        }
        bool isLowerRangeLimitInclusive() const
        {
            return myMxNumberImpl.isLowerRangeLimitInclusive();
        }
        
        bool isUpperRangeLimitInclusive() const
        {
            return myMxNumberImpl.isUpperRangeLimitInclusive();
        }
        operator int() const
        {
            return myMxNumberImpl.getValue();
        }
        int getLowerBound() const
        {
            return myMxNumberImpl.getLowerBound();
        }
        int getUpperBound() const
        {
            return myMxNumberImpl.getUpperBound();
        }
        virtual bool operator==( const int& other ) const
        {
            return myMxNumberImpl.operator==( other );
        }
        virtual bool operator!=( const int& other ) const
        {
            return myMxNumberImpl.operator!=( other );
        }
        virtual bool operator>=( const int& other ) const
        {
            return myMxNumberImpl.operator>=( other );
        }
        virtual bool operator<=( const int& other ) const
        {
            return myMxNumberImpl.operator<=( other );
        }
        virtual bool operator>( const int& other ) const
        {
            return myMxNumberImpl.operator>( other );
        }
        virtual bool operator<( const int& other ) const
        {
            return myMxNumberImpl.operator<( other );
        }
        /* because I have an incomplete type problem */
//        virtual std::string getClassName() const { return "MxNumberInt"; }
//        virtual std::string toString() const { return "MxNumberInt"; }
//        virtual std::string getXmlTypeName() const { return "MxNumberInt"; }
//        virtual std::string getDocumentation() const { return "MxNumberInt"; }
//        virtual bool fromString( const std::string& value ) { return false; }
        
    private:
        MxNumberImpl<int,isLBOUND,isUBOUND,isLINCL,isUINCL> myMxNumberImpl;
    };
#if 1==1
    template <bool isLBOUND, bool isUBOUND, bool isLINCL, bool isUINCL>
    class MxNumberLongDouble : public MxNumber<long double>
    {
    public:
        MxNumberLongDouble( const long double& value_in, const long double& LBOUND_IN, const long double& UBOUND_IN )
        :myMxNumberImpl( value_in, LBOUND_IN, UBOUND_IN )
        { }
        virtual ~MxNumberLongDouble() {}
        virtual long double getValue() const
        {
            return myMxNumberImpl.getValue();
        }
        virtual bool setValue( const long double& new_value )
        {
            return myMxNumberImpl.setValue( new_value );
        }
        
        virtual std::ostream& stream( std::ostream& os ) const
        {
            return os << dbl2str( this->getValue() );
        }
        
        bool isUpperRangeBound() const
        {
            return myMxNumberImpl.isUpperRangeBound();
        }
        bool isLowerRangeBound() const
        {
            return myMxNumberImpl.isLowerRangeBound();
        }
        bool isLowerRangeLimitInclusive() const
        {
            return myMxNumberImpl.isLowerRangeLimitInclusive();
        }
        
        bool isUpperRangeLimitInclusive() const
        {
            return myMxNumberImpl.isUpperRangeLimitInclusive();
        }
        operator long double() const
        {
            return myMxNumberImpl.getValue();
        }
        long double getLowerBound() const
        {
            return myMxNumberImpl.getLowerBound();
        }
        long double getUpperBound() const
        {
            return myMxNumberImpl.getUpperBound();
        }
        virtual bool operator==( const long double& other ) const
        {
            return myMxNumberImpl.operator==( other );
        }
        virtual bool operator!=( const long double& other ) const
        {
            return myMxNumberImpl.operator!=( other );
        }
        virtual bool operator>=( const long double& other ) const
        {
            return myMxNumberImpl.operator>=( other );
        }
        virtual bool operator<=( const long double& other ) const
        {
            return myMxNumberImpl.operator<=( other );
        }
        virtual bool operator>( const long double& other ) const
        {
            return myMxNumberImpl.operator>( other );
        }
        virtual bool operator<( const long double& other ) const
        {
            return myMxNumberImpl.operator<( other );
        }
        /* because I have an incomplete type problem */
//        virtual std::string getClassName() const { return "MxNumberLongDouble"; }
//        virtual std::string toString() const { return "MxNumberLongDouble"; }
//        virtual std::string getXmlTypeName() const { return "MxNumberLongDouble"; }
//        virtual std::string getDocumentation() const { return "MxNumberLongDouble"; }
//        virtual bool fromString( const std::string& value ) { return false; }
        
    private:
        MxNumberImpl<long double,isLBOUND,isUBOUND,isLINCL,isUINCL> myMxNumberImpl;
        static std::string dbl2str(long double d)
        {
            // from http://stackoverflow.com/questions/15165502/double-to-string-without-scientific-notation-or-trailing-zeros-efficiently
            size_t len = std::snprintf(0, 0, "%.10Lf", d);
            std::string s(len+1, 0);
            // technically non-portable, see below
            std::snprintf(&s[0], len+1, "%.10Lf", d);
            // remove nul terminator
            s.pop_back();
            // remove trailing zeros
            s.erase(s.find_last_not_of('0') + 1, std::string::npos);
            // remove trailing point
            if(s.back() == '.')
            {
                s.pop_back();
            }
            return s;
        }
    };
#endif
    
#if 1==0
    template <bool isLBOUND, bool isUBOUND, bool isLINCL, bool isUINCL>
    class MxNumberLongDouble : public MxNumber<long double, isLBOUND, isUBOUND, isLINCL, isUINCL>
    {
    public:
        MxNumberLongDouble( const long double& value_in, const long double& LBOUND_IN, const long double& UBOUND_IN )
        :MxNumber<long double, isLBOUND, isUBOUND, isLINCL, isUINCL>::MxNumber( value_in, LBOUND_IN, UBOUND_IN ) {}
        virtual std::ostream& stream( std::ostream& os ) const
        {
            return os << dbl2str( MxNumber<long double, isLBOUND, isUBOUND, isLINCL, isUINCL>::getValue() );
        }
    private:
        static std::string dbl2str(long double d)
        {
            // from http://stackoverflow.com/questions/15165502/double-to-string-without-scientific-notation-or-trailing-zeros-efficiently
            size_t len = std::snprintf(0, 0, "%.10Lf", d);
            std::string s(len+1, 0);
            // technically non-portable, see below
            std::snprintf(&s[0], len+1, "%.10Lf", d);
            // remove nul terminator
            s.pop_back();
            // remove trailing zeros
            s.erase(s.find_last_not_of('0') + 1, std::string::npos);
            // remove trailing point
            if(s.back() == '.')
            {
                s.pop_back();
            }
            return s;
        }
    };
#endif
}


/*

MusicXML™ Public License Version 3.0

This MusicXML™ work (including software, documents, or other related items) is being provided by the Copyright Holder under the following license. By obtaining, using and/or copying this work, each Contributor and Recipient (hereinafter, collectively known as "Licensee") agree that he/she has read, understood, and will comply with the following terms and conditions:

A. DEFINITIONS

"Copyright Holder" means MakeMusic, Inc.

"Contribution" means:

in the case of MakeMusic, Inc., the Original Program, and
in the case of each Contributor,
changes to the Program, and
additions to the Program;
where such changes and/or additions to the Program originate from and are distributed by that particular Contributor. A Contribution 'originates' from a Contributor if it was added to the Program by such Contributor itself or anyone acting on such Contributor's behalf. Contributions do not include additions to the Program which: (i) are separate modules of software distributed in conjunction with the Program under their own license agreement, and (ii) are not derivative works of the Program.
"Contributor" means MakeMusic, Inc. and any other entity that distributes the Program.

"MusicXML™ Mark" means the MusicXML™ trademark owned by MakeMusic, Inc.

"Original Program" means the original version of the software accompanying this Agreement as released by MakeMusic, Inc., including source code, object code and documentation, if any.

"Program" means the Original Program and Contributions.

"Recipient" means anyone who receives the Program under this Agreement, including all Contributors.

B. GRANT OF RIGHTS

Permission to use, copy, modify, and distribute the Program, with or without modification, for any purpose and without fee or royalty is hereby granted, provided that each Recipient include the following on ALL copies of the Program or portions thereof, including modifications, that he/she make:

The full text of this License in a location viewable to users of the redistributed or derivative work.

Any pre-existing intellectual property disclaimers, notices, or terms and conditions. If none exist, a short notice of the following form (hypertext is preferred, text is permitted) should be used within the body of any redistributed or derivative code: "© MakeMusic, Inc. All rights reserved. http://www.makemusic.com"

Notice of any changes or modifications to the MusicXML™ files, including the date changes were made. (We recommend you provide URLs to the location from which the code is derived.)

In addition, creators of derivative works must include the full text of this License in a location viewable to users of the derivative work.

Title to copyright in the Program will at all times remain with Copyright Holder.

C. NO WARRANTY

EXCEPT AS EXPRESSLY SET FORTH IN THIS AGREEMENT, THE PROGRAM IS PROVIDED ON AN "AS IS" BASIS, AND COPYRIGHT HOLDER MAKES NO WARRANTIES OR CONDITIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED INCLUDING, WITHOUT LIMITATION, ANY WARRANTIES OR CONDITIONS OF TITLE, NON-INFRINGEMENT, MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE. Each Recipient is solely responsible for determining the appropriateness of using and distributing the Program and assumes all risks associated with its exercise of rights under this Agreement, including but not limited to the risks and costs of program errors, compliance with applicable laws, damage to or loss of data, programs or equipment, and unavailability or interruption of operations.

D. DISCLAIMER OF LIABILITY

EXCEPT AS EXPRESSLY SET FORTH IN THIS AGREEMENT, NEITHER COPYRIGHT HOLDER NOR ANY CONTRIBUTORS SHALL HAVE ANY LIABILITY FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING WITHOUT LIMITATION LOST PROFITS), HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OR DISTRIBUTION OF THE PROGRAM OR THE EXERCISE OF ANY RIGHTS GRANTED HEREUNDER, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.

E. TRADEMARK

1. The MusicXML™ Mark (or a derivative Mark, such as MusicXML™ Plus) may not be used to identify any product or service not originating from or licensed by Copyright Holder without specific, written prior permission. However, it is acceptable for a Contributor product or service to be described as being MusicXML™-compatible, assuming that the claim is true in Copyright Holder’s reasonable judgment.

2. This License does not grant any rights to use any other trademarks owned by Copyright Holder, including without limitation "Recordare®", "Dolet®", and "In the Beginning Was the Note®", even if such marks are included in the Program. For purposes of clarification and the avoidance of doubt, the trademarks "Recordare®", "Dolet®", and "In the Beginning Was the Note®" must not be used to endorse or promote Contributor versions of the Program without the prior written permission of Copyright Holder.

3. All rights not expressly granted herein by Copyright Holder with respect to the MusicXML™ Mark or any other trademarks owned by Copyright Holder are reserved by and to Copyright Holder.

F. GENERAL

If any provision of this Agreement is invalid or unenforceable under applicable law, it shall not affect the validity or enforceability of the remainder of the terms of this Agreement, and without further action by the parties hereto, such provision shall be reformed to the minimum extent necessary to make such provision valid and enforceable.

All Recipient's rights under this Agreement shall terminate if it fails to comply with any of the material terms or conditions of this Agreement and does not cure such failure in a reasonable period of time after becoming aware of such noncompliance. If all Recipient's rights under this Agreement terminate, Recipient agrees to cease use and distribution of the Program as soon as reasonably practicable. However, Recipient's obligations under this Agreement and any licenses granted by Recipient relating to the Program shall continue and survive.

MakeMusic, Inc. may publish new versions (including revisions) of this Agreement from time to time. Each new version of the Agreement will be given a distinguishing version number. The Program (including Contributions) may always be distributed subject to the version of the Agreement under which it was received. In addition, after a new version of the Agreement is published, Contributor may elect to distribute the Program (including its Contributions) under the new version. No one other than MakeMusic, Inc. has the right to modify this Agreement. Except as expressly stated in Sections B and E above, Recipient receives no rights or licenses to the intellectual property of any Contributor under this Agreement, whether expressly, by implication, estoppel or otherwise. All rights in the Program not expressly granted under this Agreement are reserved.

This Agreement is governed by the laws of the State of California and the intellectual property laws of the United States of America.


*/

