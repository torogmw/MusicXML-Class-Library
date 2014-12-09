/* See MusicXML License at the bottom of this code page. */

/* matthew james briggs */

#include "MxColor.h"
#include <sstream>
#include <iomanip>

namespace lexicon
{
    
    struct MxColor::Impl
    {
    public:
        Impl( unsigned char alpha_in,
             unsigned char red_in,
             unsigned char green_in,
             unsigned char blue_in,
             bool hasAlpha_in)
        :myAlpha( alpha_in )
        ,myRed( red_in )
        ,myGreen( green_in )
        ,myBlue( blue_in )
        ,myHasAlpha( hasAlpha_in )
        {
            if ( ! hasAlpha_in )
            {
                myAlpha = 255;
            }
            myAlpha = rangeCheck( myAlpha );
            myRed = rangeCheck( myRed );
            myGreen = rangeCheck( myGreen );
            myBlue = rangeCheck( myBlue );
        }
        unsigned char getAlpha() const
        {
            return myAlpha;
        }
        unsigned char getRed() const
        {
            return myRed;
        }
        unsigned char getGreen() const
        {
            return myGreen;
        }
        unsigned char getBlue() const
        {
            return myBlue;
        }
        bool hasAlpha() const
        {
            return myHasAlpha;
        }
        std::ostream& stream( std::ostream& os_out )
        {
            os_out << "#";
            if ( hasAlpha() )
            {
                streamHexValue( getAlpha(), os_out );
            }
            streamHexValue( getRed(), os_out );
            streamHexValue( getGreen(), os_out );
            streamHexValue( getBlue(), os_out );
            return os_out;
        }
        std::string getXmlTypeName() const
        {
            return myXmlTypeName;
        }
        std::string getClassName() const
        {
            return myClassName;
        }
        std::string getDocumentation() const
        {
            return myDocumentation;
        }
        void hasAlpha( bool value_in )
        {
            myHasAlpha = value_in;
        }
        void setAlpha( unsigned char value_in )
        {
            hasAlpha( true );
            myAlpha = rangeCheck( value_in );
        }
        void setRed( unsigned char value_in )
        {
            myRed = rangeCheck( value_in );
        }
        void setGreen( unsigned char value_in )
        {
            myGreen = rangeCheck( value_in );
        }
        void setBlue( unsigned char value_in )
        {
            myBlue = rangeCheck( value_in );
        }
        bool fromString( const std::string& value_in )
        {
            if ( !isStringValid( value_in ) )
            {
                return false;
            }
            size_t redStartingPosition = 1;
            if ( stringHasAplha( value_in ) )
            {
                redStartingPosition = 3;
                hasAlpha( true );
                setAlpha( readHexFromString( value_in, 1 ) );
            }
            else
            {
                setAlpha( 255 );
                hasAlpha( false );
            }
            setRed( readHexFromString( value_in, redStartingPosition ) );
            setGreen( readHexFromString( value_in, redStartingPosition + 2 ) );
            setBlue( readHexFromString( value_in, redStartingPosition + 4 ) );
            return true;
        }
        int compare( const MxColor& other ) const
        {
            if ( getAlpha() > other.getAlpha() )
            {
                return 1;
            }
            else if ( getAlpha() < other.getAlpha() )
            {
                return -1;
            }
            else
            {
                if ( getRed() > other.getRed() )
                {
                    return 1;
                }
                else if ( getRed() < other.getRed() )
                {
                    return -1;
                }
                else
                {
                    if ( getGreen() > other.getGreen() )
                    {
                        return 1;
                    }
                    else if ( getGreen() < other.getGreen() )
                    {
                        return -1;
                    }
                    else
                    {
                        if ( getRed() > other.getRed() )
                        {
                            return 1;
                        }
                        else if ( getRed() < other.getRed() )
                        {
                            return -1;
                        }
                        else
                        {
                            if ( getBlue() > other.getBlue() )
                            {
                                return 1;
                            }
                            else if ( getBlue() < other.getBlue() )
                            {
                                return -1;
                            }
                    
                        } // blue checks
                
                    } // else check blue
            
                } // else check green
            
            } // else check red
        
            return 0;
        
        } // end compare
        
    private:
        const static std::string myXmlTypeName;
        const static std::string myClassName;
        const static std::string myDocumentation;
        const static int myXsdID;
        unsigned char myAlpha;
        unsigned char myRed;
        unsigned char myGreen;
        unsigned char myBlue;
        bool myHasAlpha;
        inline unsigned char rangeCheck( unsigned char value_in ) const
        {
            if ( value_in < 0 )
            {
                return 0;
            }
            else if ( value_in > 255 )
            {
                return 255;
            }
            return value_in;
        }
        bool isStringLengthValid( const std::string& value_in ) const
        {
            std::string::size_type validARGB = 9;
            std::string::size_type validRGB = 7;
            std::string::size_type stringLength = value_in.length();
            if ( stringLength == validARGB || stringLength == validRGB )
            {
                return true;
            }
            return false;
        }
        bool isCharHexValid( char c ) const
        {
            if ( isdigit( c ) )
            {
                return true;
            }
            else if ( c == 'a' || c == 'A' ||
                      c == 'b' || c == 'B' ||
                      c == 'c' || c == 'C' ||
                      c == 'd' || c == 'D' ||
                      c == 'e' || c == 'E' ||
                      c == 'f' || c == 'F' )
            {
                return true;
            }
            return false;
        }
        bool isStringValid( const std::string& value_in ) const
        {
            if ( ! isStringLengthValid( value_in ) )
            {
                return false;
            }
            int pos = 0;
            for ( auto c : value_in )
            {
                if ( pos == 0  )
                {
                    if ( c != '#' )
                    {
                        return false;
                    }
                }
                else
                {
                    if ( ! isCharHexValid( c ) )
                    {
                        return false;
                    }
                }
                ++pos;
            }
            return true;
        }
        bool stringHasAplha( const std::string& value_in ) const
        {
            std::string::size_type validARGB = 9;
            return value_in.size() == validARGB;
        }
        std::ostream& streamHexValue( unsigned char c, std::ostream& os_out ) const
        {
            int number = c;
            char fillCharWas = os_out.fill( '0' );
            std::streamsize widthWas = os_out.width( 2 );
            std::ios::fmtflags flagsWere( os_out.flags() );
            os_out << std::hex << std::setw( 2 ) << std::uppercase << number;
            os_out.fill( fillCharWas );
            os_out.width( widthWas );
            os_out.flags( flagsWere );
//            char buffer[3];
//            sprintf( buffer , "%X02", c );
//            buffer[2] = 0;
//            std::string str( buffer );
//            os_out << str;
            return os_out;
        }
        unsigned char readHexFromString( const std::string& s, size_t startingPoisition ) const
        {
            unsigned char c = strtoul(s.substr(startingPoisition, 2).c_str(), NULL, 16);;
            return c;
        }
    };
    
    const std::string MxColor::Impl::myXmlTypeName = "color";
    const std::string MxColor::Impl::myClassName = "MxColor";
    const std::string MxColor::Impl::myDocumentation = "The color type indicates the color of an element. Color may be represented as hexadecimal RGB triples, as in HTML, or as hexadecimal ARGB tuples, with the A indicating alpha of transparency. An alpha value of 00 is totally transparent; FF is totally opaque. If RGB is used, the A value is assumed to be FF. For instance, the RGB value \"#800080\" represents purple. An ARGB value of \"#40800080\" would be a transparent purple. As in SVG 1.1, colors are defined in terms of the sRGB color space (IEC 61966).";
    const int MxColor::Impl::myXsdID = 6;
    
    /* ctor */
    MxColor::MxColor()
    :myImpl( new Impl( 255, 0, 0, 0, false ) )
    {}
    
    MxColor::MxColor( unsigned char red_in,
                     unsigned char green_in,
                     unsigned char blue_in)
    :myImpl( new Impl( 255, red_in, green_in, blue_in, false ) )
    {}
    
    MxColor::MxColor( unsigned char alpha_in,
                     unsigned char red_in,
                     unsigned char green_in,
                     unsigned char blue_in)
    :myImpl( new Impl( alpha_in, red_in, green_in, blue_in, true ) )
    {}
    
    MxColor::MxColor( const std::string& value_in )
    :myImpl( new Impl( 255, 0, 0, 0, false ) )
    {
        fromString( value_in );
    }
    
    MxColor::MxColor( const MxColor& other )
    :myImpl( new Impl( other.getAlpha(),
                       other.getRed(),
                       other.getGreen(),
                       other.getBlue(),
                       other.hasAlpha() ) )
    {}
    
    MxColor& MxColor::operator=( const MxColor& other )
    {
        setAlpha( other.getAlpha() );
        setRed( other.getRed() );
        setGreen( other.getGreen() );
        setBlue( other.getBlue() );
        hasAlpha( other.hasAlpha() );
        return *this;
    }
    /* dtor */
    MxColor::~MxColor() {}
    
    unsigned char MxColor::getAlpha() const
    {
        return myImpl->getAlpha();
    }
    unsigned char MxColor::getRed() const
    {
        return myImpl->getRed();
    }
    unsigned char MxColor::getGreen() const
    {
        return myImpl->getGreen();
    }
    unsigned char MxColor::getBlue() const
    {
        return myImpl->getBlue();
    }
    bool MxColor::hasAlpha() const
    {
        return myImpl->hasAlpha();
    }
    std::ostream& MxColor::stream( std::ostream& os_out ) const
    {
        return myImpl->stream( os_out);
    }
    std::string MxColor::getXmlTypeName() const
    {
        return myImpl->getXmlTypeName();
    }
    std::string MxColor::getClassName() const
    {
        return myImpl->getClassName();
    }
    std::string MxColor::getDocumentation() const
    {
        return myImpl->getDocumentation();
    }
    
    void MxColor::setAlpha( unsigned char value_in )
    {
        myImpl->setAlpha( value_in );
    }
    void MxColor::setRed( unsigned char value_in )
    {
        myImpl->setRed( value_in );
    }
    void MxColor::setGreen( unsigned char value_in )
    {
        myImpl->setGreen( value_in );
    }
    void MxColor::setBlue( unsigned char value_in )
    {
        myImpl->setBlue( value_in );
    }
    void MxColor::hasAlpha( bool value_in )
    {
        myImpl->hasAlpha( value_in );
    }
    bool MxColor::fromString( const std::string& value_in )
    {
        return myImpl->fromString( value_in );
    }
    
    bool MxColor::operator==( const MxColor& other ) const
    {
        return myImpl->compare( other ) == 0;
    }
    bool MxColor::operator!=( const MxColor& other ) const
    {
        return myImpl->compare( other ) != 0;
    }
    bool MxColor::operator<=( const MxColor& other ) const
    {
        return myImpl->compare( other ) <= 0;
    }
    bool MxColor::operator>=( const MxColor& other ) const
    {
        return myImpl->compare( other ) >= 0;
    }
    bool MxColor::operator<( const MxColor& other ) const
    {
        return myImpl->compare( other ) < 0;
    }
    bool MxColor::operator>( const MxColor& other ) const
    {
        return myImpl->compare( other ) > 0;
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

