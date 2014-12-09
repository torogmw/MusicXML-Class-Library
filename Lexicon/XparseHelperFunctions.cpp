/* See MusicXML License at the bottom of this code page. */

/* matthew james briggs */

#include "XparseHelperFunctions.h"
#include "LexiconBaseObjects.h"
#include "MxNumber.h"
#include "MxColor.h"
#include "MxFontSize.h"
#include "MxEndingNumber.h"
#include "MxDate.h"

namespace lexicon
{
    MxList XparseHelperFunctions::ourCxSmps;
    MxList XparseHelperFunctions::ourCxEmpties;
    
    HMxParseableObject XparseHelperFunctions::createSimpleType( const std::string& ClassName )
    {
        ObjectList olist = XparseHelperFunctions::loadSimpleTypes();
        HMxParseableObject object;
        for ( auto o : olist )
        {
            if ( o->getClassName() == ClassName )
            {
                object = o;
                break;
            }
        }
        return object;
    }
    
    std::string XparseHelperFunctions::getObjectInstantiationString( HMxParseableObject o )
    {
        std::string output;
        
        switch ( getSimpleTypeType( o ) )
        {
            case simpleTypeType::String:
            {
                std::stringstream ss;
                ss << o->getClassName() << "( ";
                ss << "\"" << o->toString() << "\" )";
                output = ss.str();
            }
                break;
            case simpleTypeType::MxEnum:
            {
                HMxEnum xcast = getObjectMxEnum( o );
                output = createAllPossibleEnumValues( xcast )[ xcast->getValueInt() ];
            }
                break;
            case simpleTypeType::MxNumberLongDouble:
            {
                HMxNumberLongDouble xcast = getObjectMxNumberLongDouble( o );
                output = xcast->toString();
            }
                break;
            case simpleTypeType::MxNumberInt:
            {
                HMxNumberInt xcast = getObjectMxNumberInt( o );
                output = xcast->toString();
            }
                break;
            case simpleTypeType::MxColor:
            {
                HMxColor xcast = getObjectMxColor( o );
                std::stringstream ss;
                ss << "\"" << xcast->toString() << "\"";
                output = ss.str();
            }
                break;
            case simpleTypeType::MxFontSize:
            {
                HMxFontSize xcast = getObjectMxFontSize( o );
                std::stringstream ss;
                ss << "\"" << xcast->toString() << "\"";
                output = ss.str();
            }
                break;
            case simpleTypeType::MxEndingNumber:
            {
                HMxColor xcast = getObjectMxColor( o );
                std::stringstream ss;
                ss << "\"" << xcast->toString() << "\"";
                output = ss.str();
            }
                break;
            case simpleTypeType::MxDate:
            {
                HMxDate xcast = getObjectMxDate( o );
                std::stringstream ss;
                ss << xcast->getClassName() << "( ";
                ss << "\"" << xcast->toString() << "\" )";
                output = ss.str();
            }
                break;
            default:
            {
                throw "problem";
            }
                break;
        }
        if ( output.size() == 0 )
        {
            // this only applies to MxNumberOrEmpty ( I think ).
            std::stringstream emergency;
            emergency << o->getClassName() << "( \"\" )";
            output = emergency.str();
        }
        return output;
    }
    
    Strings XparseHelperFunctions::createAllPossibleEnumValues( HMxEnum ptr )
    {
        Strings vec;
        int valueWas = ptr->getValueInt();
        for ( int i = 0; i < ptr->getSize(); ++i )
        {
            ptr->setValueInt( i );
            std::string myEnumType;
            if ( ptr->getClassName().substr( 0, 1 ) == "X" )
            {
                myEnumType = ptr->getClassName();
            }
            else
            {
                myEnumType = ptr->getClassName().substr( 6 );
            }
            std::stringstream myValueString;
            myValueString << "lexicon::enums::" << myEnumType << "::" << ptr->getCppEnumSymbolAsString();
            vec.push_back( myValueString.str() );
        }
        ptr->setValueInt( valueWas );
        return vec;
    }
    
    void XparseHelperFunctions::changeSimpleTypeValue( HMxParseableObject o )
    {
        switch ( getSimpleTypeType( o ) )
        {
            case simpleTypeType::String:
            {
                if ( o->toString() == "A,B,C" )
                {
                    o->fromString( "D,E,F" );
                }
                else if ( o->toString() == "D,E,F"  )
                {
                    o->fromString( "WOOF" );
                }
                else if ( o->toString() == "WOOF"  )
                {
                    o->fromString( "X,Y,Z" );
                }
                else
                {
                    o->fromString( "A,B,C" );
                }
            }
                break;
            case simpleTypeType::MxEnum:
            {
                HMxEnum xcast = getObjectMxEnum( o );
                int mysize = xcast->getSize();
                int currval = xcast->getValueInt();
                int newval = ++currval;
                if ( currval >= mysize )
                {
                    newval = 0;
                }
                xcast->setValueInt( newval );
            }
                break;
            case simpleTypeType::MxNumberLongDouble:
            {
                HMxNumberLongDouble xcast = getObjectMxNumberLongDouble( o );
                long double mymin = xcast->getLowerBound();
                if ( ! xcast->isLowerRangeLimitInclusive() )
                {
                    mymin += 0.1;
                }
                long double mymax = xcast->getLowerBound();
                if ( ! xcast->isUpperRangeLimitInclusive() )
                {
                    mymax -= 0.1;
                }
                long double currval = xcast->getValue();
                long double newval = currval += 0.1;
                if ( currval > mymax )
                {
                    newval = mymin;
                }
                xcast->setValue( newval );
            }
                break;
            case simpleTypeType::MxNumberInt:
            {
                HMxNumberInt xcast = getObjectMxNumberInt( o );
                int mymin = xcast->getLowerBound();
                if ( ! xcast->isLowerRangeLimitInclusive() )
                {
                    mymin += 1;
                }
                int mymax = xcast->getUpperBound();
                if ( ! xcast->isUpperRangeLimitInclusive() )
                {
                    mymax -= 1;
                }
                int currval = xcast->getValue();
                int newval = currval += 1;
                if ( currval > mymax )
                {
                    newval = mymin;
                }
                xcast->setValue( newval );
            }
                break;
            case simpleTypeType::MxColor:
            {
                HMxColor xcast = getObjectMxColor( o );
                bool hasAlpha = xcast->hasAlpha();
                xcast->setBlue( xcast->getAlpha()>254 ? 0 : xcast->getAlpha()+1 );
                xcast->setGreen( xcast->getRed()>254 ? 0 : xcast->getRed()+1 );
                xcast->setRed( xcast->getGreen()>254 ? 0 : xcast->getGreen()+1 );
                xcast->setAlpha( xcast->getBlue()>254 ? 0 : xcast->getBlue()+1 );
                xcast->hasAlpha( ! hasAlpha );
            }
                break;
            case simpleTypeType::MxFontSize:
            {
                HMxFontSize xcast = getObjectMxFontSize( o );
                if ( xcast->isCssFontSize() )
                {
                    MxNumberDecimal d = xcast->getValueNumeric();
                    if ( d.getValue() < d.getUpperBound() - 1.1 )
                    {
                        xcast->setValue( d.getValue()+1.1 );
                    }
                    else
                    {
                        xcast->setValue( 6 );
                    }
                }
                else
                {
                    MxEnumCssFontSize size = xcast->getValueCssFontSize();
                    if ( size.getValueInt() == size.getSize() -1 )
                    {
                        size.setValueInt( 0 );
                        xcast->setValue( size );
                    }
                    else
                    {
                        size.setValueInt( size.getValueInt() + 1 );
                        xcast->setValue( size );
                    }
                }
            }
                break;
            case simpleTypeType::MxEndingNumber:
            {
                if ( o->toString() == "1,2,3" )
                {
                    o->fromString( "4,5,6" );
                }
                else if ( o->toString() == "4,5,6"  )
                {
                    o->fromString( "77,88" );
                }
                else if ( o->toString() == "77,88"  )
                {
                    o->fromString( "7,8,9" );
                }
                else
                {
                    o->fromString( "1,2,3" );
                }
            }
                break;
            case simpleTypeType::MxDate:
            {
                if ( o->toString() == "2014-12-06" )
                {
                    o->fromString( "2013-01-31" );
                }
                else if ( o->toString() == "2013-01-31"  )
                {
                    o->fromString( "2012-05-01" );
                }
                else if ( o->toString() == "2012-05-01"  )
                {
                    o->fromString( "1930-11-27" );
                }
                else
                {
                    o->fromString( "2014-12-06" );
                }
            }
                break;
            default:
            {
                throw "problem";
            }
                break;
        }
    }
    
    simpleTypeType XparseHelperFunctions::getSimpleTypeType( HMxParseableObject o )
    {
        simpleTypeType ret = simpleTypeType::Other;
        HMxEnum e;
        HMxNumberInt i;
        HMxNumberLongDouble d;
        
        e = std::dynamic_pointer_cast<MxEnum>( o );
        i = std::dynamic_pointer_cast<MxNumber<int>>( o );
        d = std::dynamic_pointer_cast<MxNumber<long double>>( o );
        
        /*
             String = 0,
             MxEnum = 1,
             MxNumberLongDouble = 2,
             MxNumberInt = 3,
             MxColor = 4,
             MxFontSize = 5,
             MxEndingNumber = 6,
             Other = -1
         */
        
        if( e.get() != nullptr )
        {
            ret = simpleTypeType::MxEnum;
            return ret;
        }
        else if ( i.get() != nullptr )
        {
            ret = simpleTypeType::MxNumberInt;
            return ret;
        }
        else if ( d.get() != nullptr )
        {
            ret = simpleTypeType::MxNumberLongDouble;
            return ret;
        }
        else if ( o->getClassName() == "MxColor" )
        {
            ret = simpleTypeType::MxColor;
            return ret;
        }
        else if ( o->getClassName() == "MxFontSize" )
        {
            ret = simpleTypeType::MxFontSize;
            return ret;
        }
        else if ( o->getClassName() == "MxEndingNumber" )
        {
            ret = simpleTypeType::MxEndingNumber;
            return ret;
        }
        else if ( o->getClassName() == "MxToken" ||
                 o->getClassName() == "XsToken" ||
                 o->getClassName() == "MxCommaSeparatedText" ||
                 o->getClassName() == "XmlLang" ||
                 o->getClassName() == "XsAnyUri" ||
                 o->getClassName() == "XsNmToken" ||
                 o->getClassName() == "XlinkHref" ||
                 o->getClassName() == "XlinkRole" ||
                 o->getClassName() == "XlinkTitle" ||
                 o->getClassName() == "XsString" ||
                 o->getClassName() == "XsIdRef" )
        {
            ret = simpleTypeType::String;
            return ret;
        }
        else if ( o->getClassName() == "MxDate" )
        {
            ret = simpleTypeType::MxDate;
            return ret;
        }
        else
        {
            int oops = -1;
            ++oops;
            throw "oops";
        }
        return ret;
    }
    
    HMxParseableObject XparseHelperFunctions::getObjectString( HMxParseableObject o )
    {
        if ( getSimpleTypeType( o ) != simpleTypeType::String )
        {
            throw "attempted an improper downcast";
        }
        return o;
    }
    HMxEnum XparseHelperFunctions::getObjectMxEnum( HMxParseableObject o )
    {
        if ( getSimpleTypeType( o ) != simpleTypeType::MxEnum )
        {
            throw "attempted an improper downcast";
        }
        return std::dynamic_pointer_cast<MxEnum>( o );
    }
    HMxNumberLongDouble XparseHelperFunctions::getObjectMxNumberLongDouble( HMxParseableObject o )
    {
        if ( getSimpleTypeType( o ) != simpleTypeType::MxNumberLongDouble )
        {
            throw "attempted an improper downcast";
        }
        return std::dynamic_pointer_cast<MxNumber<long double>>( o );
    }
    HMxNumberInt XparseHelperFunctions::getObjectMxNumberInt( HMxParseableObject o )
    {
        if ( getSimpleTypeType( o ) != simpleTypeType::MxNumberInt )
        {
            throw "attempted an improper downcast";
        }
        return std::dynamic_pointer_cast<MxNumber<int>>( o );
    }
    HMxColor XparseHelperFunctions::getObjectMxColor( HMxParseableObject o )
    {
        if ( getSimpleTypeType( o ) != simpleTypeType::MxColor )
        {
            throw "attempted an improper downcast";
        }
        return std::dynamic_pointer_cast<MxColor>( o );
    }
    HMxDate XparseHelperFunctions::getObjectMxDate( HMxParseableObject o )
    {
        if ( getSimpleTypeType( o ) != simpleTypeType::MxDate )
        {
            throw "attempted an improper downcast";
        }
        return std::dynamic_pointer_cast<MxDate>( o );
    }
    HMxFontSize XparseHelperFunctions::getObjectMxFontSize( HMxParseableObject o )
    {
        if ( getSimpleTypeType( o ) != simpleTypeType::MxFontSize )
        {
            throw "attempted an improper downcast";
        }
        return std::dynamic_pointer_cast<MxFontSize>( o );
    }
    HMxEndingNumber XparseHelperFunctions::getObjectMxEndingNumber( HMxParseableObject o )
    {
        if ( getSimpleTypeType( o ) != simpleTypeType::MxEndingNumber )
        {
            throw "attempted an improper downcast";
        }
        return std::dynamic_pointer_cast<MxEndingNumber>( o );
    }
    void XparseHelperFunctions::init()
    {
        if ( ourCxEmpties.size() == 0 )
        {
            MxList temp = privateCreateCxEmpty();
            for ( auto x : temp )
            {
                ourCxEmpties.push_back( x );
            }
        }
        if ( ourCxSmps.size() == 0 )
        {
            MxList temp = privateCreateCxSmp();
            for ( auto x : temp )
            {
                ourCxSmps.push_back( x );
            }
        }
    }
    MxList XparseHelperFunctions::loadCxSmp()
    {
        init();
        return ourCxSmps;
    }
    MxList XparseHelperFunctions::loadCxEmpty()
    {
        init();
        return ourCxEmpties;
    }
    HMxObject XparseHelperFunctions::getObjectByXmlName( const std::string& XmlName )
    {
        init();
        for ( auto o : ourCxSmps )
        {
            if ( o->getXmlTypeName() == XmlName )
            {
                return o;
            }
        }
        for ( auto o : ourCxEmpties )
        {
            if ( o->getXmlTypeName() == XmlName )
            {
                return o;
            }
        }
        
        for ( auto o : loadSimpleTypes() )
        {
            if ( o->getXmlTypeName() == XmlName )
            {
                return o;
            }
        }
        for ( auto o : getElementObjects() )
        {
            if ( o->getXmlTypeName() == XmlName )
            {
                return o;
            }
        }
        throw "blow";
        return std::make_shared<MxColor>();
    }
    
    bool XparseHelperFunctions::getIsElementObjectImplemented( const std::string& XmlName )
    {
        MxList mlist = getElementObjects();
        for ( auto o : mlist )
        {
            if ( o->getXmlTypeName() == XmlName )
            {
                return true;
            }
        }
        return false;
    }
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

