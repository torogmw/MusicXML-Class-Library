/* See MusicXML License at the bottom of this code page. */

/**
 * @file       MxDate.cpp
 * @class      lexicon::MxDate
 * @author     Matthew James Briggs
 * @email      matthew.james.briggs@gmail.com
 * @url        http://matthewjamesbriggs.com
 * @date       2014-06-22
 * @project    Lexicon
 * @version    1.0
 * @musicxmlid 53
 *
 * @brief The MxDate class serves as a binding for the MusicXml
 * 'yyyy-mm-dd' simpleType.
 *
 **/

#include "MxDate.h"
#include <string>
#include <sstream>

namespace lexicon
{
    struct MxDate::Impl
    {
    public:
        Impl( int year_in, int month_in, int day_in )
        :myYear( 1900 )
        ,myMonth( 1 )
        ,myDay( 1 )
        {
            setYear( year_in );
            setMonth( month_in );
            setDay( day_in );
        }
        
        Impl()
        :myYear( 1900 )
        ,myMonth( 1 )
        ,myDay( 1 )
        {}
        
        Impl( const std::string& yyyy_mm_dd )
        :myYear( 1900 )
        ,myMonth( 1 )
        ,myDay( 1 )
        { parseString( yyyy_mm_dd ); }
        
        ~Impl() {}
    public:
        void setYear( int value )
        {
            myYear = constrainToRange( value, 1, 9999 );
            setDay( getDay() );
        }
        void setMonth( int value )
        {
            myMonth = constrainToRange( value, 1, 12 );
            setDay( getDay() );
        }
        void setDay( int value )
        {
            myDay = constrainToRange( value, 1, daysInMonth( getMonth(), getYear() ) );
        }
        
        bool setValue( int year_in, int month_in, int day_in )
        {
            if ( isDateValid( year_in, month_in, day_in ) )
            {
                setYear( year_in );
                setMonth( month_in );
                setDay( day_in );
                return true;
            }
            return false;
        }
        bool isLeapYear( int year_in ) const
        {
            /* per Wikipedia
             
             Pseudocode to determine whether a year is a leap year
             or not in either the Gregorian calendar since 1582 or
             in the proleptic Gregorian calendar between 1 and 1582:
             
             if year is divisible by 400 then
             is_leap_year
             else if year is divisible by 100 then
             not_leap_year
             else if year is divisible by 4 then
             is_leap_year
             else
             not_leap_year
             
             */
            if( year_in < 1 || year_in > 9999 )  // error, unacceptable year
                return false;
            else if ( year_in % 400 == 0 ) // is leapyear per wikipedia
                return true;
            else if ( year_in % 100 == 0 ) // is NOT a leapyear per wikipedia
                return false;
            else if ( year_in % 4 == 0 ) // is leapyear per wikipedia
                return true;
            else
                return false;   // is not leapyear per wikipedia
        }
        
        bool fromString( const std::string value_in )
        {
            return parseString( value_in );
        }
        
        bool parseString( const std::string& value_in )
        {
            if ( isStringFormatValid( value_in ) )
            {
                int year = -1;
                int month = -1;
                int day = -1;
                if (     parseStringYear( value_in, year )
                      && parseStringMonth( value_in, month )
                      && parseStringDay( value_in, day ) )
                {
                    if ( day <= daysInMonth( month, year ) )
                    {
                        setValue( year, month, day );
                        return true;
                    }
                }
            }
            return false;
        } // parseString
        
        bool parseStringYear( const std::string& value_in, int& year_out )
        {
            year_out = -1;
            std::stringstream( value_in.substr( 0, 4 ) ) >> year_out;
            bool success = false;
            if ( year_out >= 1 && year_out <= 9999 )
            {
                success = true;
            }
            return success;
        } //parseStringYear
        
        bool parseStringMonth( const std::string& value_in, int& month_out )
        {
            month_out = -1;
            std::stringstream( value_in.substr( 5, 2 ) ) >> month_out;
            bool success = false;
            if ( month_out >= 1 && month_out <= 12 )
            {
                success = true;
            }
            return success;
        } //parseStringMonth
        
        bool parseStringDay( const std::string& value_in, int& day_out )
        {
            day_out = -1;
            std::stringstream( value_in.substr( 8, 2 ) ) >> day_out;
            bool success = false;
            if ( day_out >= 1 && day_out <= 31 )
            {
                success = true;
            }
            return success;
        } //parseStringDay
        
        bool isStringFormatValid( const std::string& value_in ) const
        {
            int length = (int)value_in.size();
            if ( length != 10 )
            {
                return false;
            }
            else
            {
                for ( int i = 0; i < length; ++i )
                {
                    if ( ( i >= 0 && i <= 3 ) && ! isdigit( value_in[i] ) )
                    {
                        return false;
                    }
                    else if ( ( i >= 5 && i <= 6 ) && ! isdigit( value_in[i] ) )
                    {
                        return false;
                    }
                    else if ( ( i >= 8 && i <= 9 ) && ! isdigit( value_in[i] ) )
                    {
                        return false;
                    }
                    else if ( ( i == 4 || i == 7 ) && ! ( value_in[i] == '-' ) )
                    {
                        return false;
                    }
                }
            }
            return true;
        }
        
        int daysInMonth( int month_in, int year_in ) const
        {
            if ( isLeapYear( year_in ) )
            {
                return MONTHDAYS[1][constrainToRange( month_in, 1, 12 )];
            }
            else
            {
                return MONTHDAYS[0][constrainToRange( month_in, 1, 12 )];
            }
        }
        int constrainToRange( int value_in, int minimumValue, int maximumValue ) const
        {
            if ( value_in < minimumValue )
            {
                return minimumValue;
            }
            if ( value_in > maximumValue )
            {
                return maximumValue;
            }
            return value_in;
        }
        int getYear() const { return myYear; }
        int getDay() const { return myDay; }
        int getMonth() const { return myMonth; }
        int getWeekday() const
        {
            // returns sequential day of the week 1 for Sunday, 2 for Monday ... 7 for Saturday
            // this implements Zeller's Congruence
            // algorithm: http://en.wikipedia.org/wiki/Zeller%27s_congruence
            // implementation: http://ideone.com/CkDGvY
            int h,q,m,k,j,day,month,year;
            day = getDay();
            month = getMonth();
            year = getYear();
            if(month==1)
            {
                month = 13;
                year--;
            }
            if(month==2)
            {
                month = 14;
                year--;
            }
            q = day;
            m = month;
            k = year % 100;
            j = year / 100;
            h = q + 13*(m+1)/5 + k + k/4 + j/4 + 5*j;
            h = h % 7;
            
            // Zeller's Congruence returns 0 for Saturday
            // Convert this to 7 so that
            // 1 = Sunday
            // 2 = Monday
            // 3 = Tuesday
            // 4 = Wednesday
            // 5 = Thursday
            // 6 = Friday
            // 7 = Saturday
            if (h==0)
            {
                h=7;
            }
            return h;
        }
        
        bool isDateValid( int year_in, int month_in, int day_in ) const
        {
            if ( year_in < 1 )
            {
                return false;
            }
            else if ( year_in > 9999 )
            {
                return false;
            }
            else if ( month_in < 1 )
            {
                return false;
            }
            else if ( month_in > 12 )
            {
                return false;
            }
            else if ( day_in < 1 )
            {
                return false;
            }
            else if ( day_in > daysInMonth( month_in, year_in ) )
            {
                return false;
            }
            else
            {
                return true;
            }
        }
        
        std::string getXmlTypeName() const { return myXmlTypeName; }
        std::string getClassName() const { return myClassName; }
        std::string getDocumentation() const { return myDocumentation; }
        
        bool equal( const MxDate& other_in ) const
        {
            return compare( other_in ) == 0;
        }
        bool notEqual( const MxDate& other_in ) const
        {
            return compare( other_in ) != 0;
        }
        
        bool greaterThan( const MxDate& other_in ) const
        {
            int temp = 999;
            temp = compare( other_in );
            return temp > 0;
        }
        bool greaterThanOrEqual( const MxDate& other_in ) const
        {
            return compare( other_in ) >= 0;
        }
        bool lessThan( const MxDate& other_in ) const
        {
            return compare( other_in ) < 0;
        }
        bool lessThanOrEqual( const MxDate& other_in ) const
        {
            return compare( other_in ) <= 0;
        }
        
        void addDays( int days )
        {
            if (days == 0)
            {
                return;
            }
            else if ( days > 0 )
            {
                for ( int i = 0; i < days; i++)
                {
                    if ( equal( MxDate( 9999, 12, 31 ) ) )
                    {
                        return;
                    }
                    else if ( getMonth() == 12 && getDay() == 31 )
                    {
                        setYear( getYear() + 1 );
                        setMonth( 1 );
                        setDay( 1 );
                    }
                    else if ( getDay() == daysInMonth( getMonth(), getYear() ) )
                    {
                        setMonth( getMonth() + 1 );
                        setDay( 1 );
                    }
                    else
                    {
                        setDay( getDay() + 1 );
                    }
                }
            }
            else if ( days < 0 )
            {
                for ( int i = 0; i > days; i-- )
                {
                    if ( equal( MxDate( 1, 1, 1 ) ) )
                    {
                        return;
                    }
                    else if ( getMonth() == 1 && getDay() == 1 )
                    {
                        setYear( getYear() - 1 );
                        setMonth( 12 );
                        setDay( 31 );
                    }
                    else if ( getDay() == 1 )
                    {
                        setMonth( getMonth() - 1 );
                        setDay( daysInMonth( getMonth(), getYear() ) );
                    }
                    else
                    {
                        setDay( getDay() - 1 );
                    }
                }
            }
        }
        void addMonths( int months )
        {
            
            // modulus math is hard to understand when negative numbers are involved
            // store the sign of 'months' as an int and make months positive
            int direction = 1;
            if (months < 0)
            {
                direction = -1;
                months *= -1;
            }
            
            // remember what day value we had to start with
            int day_was = getDay();
            
            // figure out how many years to add
            // note: int/int truncates
            int new_year = getYear() + ( direction * ( months / 12 ) );
            // if the year goes out of bounds, return min/max date
            
            // figure out how many months to add
            int new_month = getMonth() + ( direction * ( months % 12 ) );
            
            // if new_month equals 0 then direction must be -1
            // the actual month should be December of the previous year.
            if ( new_month == 0 )
            {
                --new_year;
                setMonth( 12 );
            }
            // if new_month < 0 then direction must be -1
            // and, we know we didn't subtract more than -11
            // so we can figure out the correct month by
            // adding 12 and moving to the previous year
            else if ( new_month < 0 )
            {
                --new_year;
                setMonth( new_month + 12);
            }
            // if new_month > 12, we know we did not add more than 11
            // so we can add a year and take the mod of new_month;
            else if ( new_month > 12 )
            {
                ++new_year;
                setMonth( new_month % 12 );
            }
            else
            {
                setMonth( new_month );
            }
            
            //  does the day fit within the month?
            int daysover = day_was - daysInMonth( getMonth(), new_year );
            
            //  If the day is out of bounds we need to correct it.
            //  This implements the rules followed by Microsoft Excel 2010
            //  and also by Google Docs (as of 2013) and Sql Server 2012
            //  if the target date has a day value to high for the target
            //  month, then adjust the day value to the maximum day value
            //  available in the target month
            if ( daysover > 0 )
            {
                // jump to the last day of the month
                setYear( new_year );
                setDay( daysInMonth( getMonth(), getYear() ) );
            }
            else
            {
                setYear( new_year );
                setDay( day_was ); // restore the correct day value
            }
            
            // check for out-of-bounds year value
            if ( new_year < 1 )
            {
                setYear( 1 );
                setMonth( 1 );
                setDay( 1 );
            }
            else if ( new_year > 9999 )
            {
                setYear( 9999 );
                setMonth( 12 );
                setDay( 31 );
            }
            else
            {
                setYear( new_year );
            }
        }
        
        void addYears( int years )
        {
            int new_year = getYear() + years;
            //year( ( year() + years ) );
            
            // if day was a leap day and the new year is not a leap year
            // month/day need to be moved to March 1 instead of Feb 29
            if ( getMonth() == 2 && getDay() == 29 && !isLeapYear( new_year ) )
            {
                setDay( 1 );
                setMonth( 3 );
            }
            setYear( new_year );
        }
        
        std::ostream& stream( std::ostream& os_out ) const
        {
            zeroPad( getYear(), 4, os_out );
            os_out << "-";
            zeroPad( getMonth(), 2, os_out );
            os_out << "-";
            zeroPad( getDay(), 2, os_out );
            return os_out;
        }
        
    private:
        int myYear;
        int myMonth;
        int myDay;
        void setInitialValue( int year_in, int month_in, int day_in )
        {
            if ( isDateValid( year_in, month_in, day_in ) )
            {
                setValue( year_in, month_in, day_in );
            }
            else
            {
                setValue( 1900, 1, 1 );
            }
        }
        std::ostream& zeroPad( int value, int width, std::ostream& os ) const
        {
            char prev_fillch = os.fill ('0');
            std::streamsize prev_width = os.width( width );
            os << value;
            os.fill( prev_fillch );
            os.width( prev_width );
            return os;
        }
        int compare( const MxDate& other ) const
        {
            if ( this->getYear() > other.getYear() )
            {
                return 1;
            }
            else if ( this->getYear() < other.getYear() )
            {
                return -1;
            }
            else
            {
                if ( this->getMonth() > other.getMonth() )
                {
                    return 1;
                }
                else if ( this->getMonth() < other.getMonth() )
                {
                    return -1;
                }
                else
                {
                    if ( this->getDay() > other.getDay() )
                    {
                        return 1;
                    }
                    else if ( this->getDay() < other.getDay() )
                    {
                        return -1;
                    }
                }
            }
            return 0;
        }
        
    public:
        const static std::string myXmlTypeName;
        const static std::string myClassName;
        const static std::string myDocumentation;
        const static int myXsdID;
        const static int MONTHDAYS [2][13];

        
    }; // struct MxDate::Impl
    
    const std::string MxDate::Impl::myXmlTypeName = "yyyy-mm-dd";
    const std::string MxDate::Impl::myClassName = "MxDate";
    const std::string MxDate::Impl::myDocumentation = "Calendar dates are represented yyyy-mm-dd format, following ISO 8601. This is a W3C XML Schema date type, but without the optional timezone data.";
    const int MxDate::Impl::myXsdID = 53;
    const int MxDate::Impl::MONTHDAYS [2][13]
    {
        {0,31,28,31,30,31,30,31,31,30,31,30,31} // 0 = Not a leap year
        ,
        {0,31,29,31,30,31,30,31,31,30,31,30,31} // 1 = Leap year
    };
    
    /* MxDate ---------------------------------------------------------------- */
    
    /* Constructor, Destructor, Copy, Assignment ------------------------------------------ */
    
    MxDate::MxDate( int year_in, int month_in, int day_in )
    :myImpl( new Impl( year_in, month_in, day_in ) )
    {}
    
    MxDate::MxDate()
    :myImpl( new Impl() )
    {}
    
    MxDate::MxDate( const std::string& yyyy_mm_dd )
    :myImpl( new Impl( yyyy_mm_dd ) )
    {}
    
    MxDate::~MxDate() {}
    
    MxDate::MxDate( const MxDate& other )
    :myImpl( new Impl( other.myImpl->getYear(),
                       other.myImpl->getMonth(),
                       other.myImpl->getDay() ) )
    {}
    
    MxDate& MxDate::operator=( const MxDate& other )
    {
        this->myImpl = std::unique_ptr<Impl>( new Impl( other.myImpl->getYear(),
                                                       other.myImpl->getMonth(),
                                                       other.myImpl->getDay() ) );
        return *this;
    }
    
    /* Getters ---------------------------------------------------------------------------- */
    
    /** Returns the year as an int. **/
    int MxDate::getYear() const
    {
        return myImpl->getYear();
    }
    
    /** Returns the month as an int. **/
    int MxDate::getMonth() const
    {
        return myImpl->getMonth();
    }
    
    /** Returns the day as an int. **/
    int MxDate::getDay() const
    {
        return myImpl->getDay();
    }
    
    /** Returns true if the contained year is a leap year **/
    bool MxDate::isLeapYear() const
    {
        return myImpl->isLeapYear( getYear() );
    }
    
    /** Returns true if the passed year is a leap year **/
    bool MxDate::isLeapYear( int year_in ) const
    {
        return myImpl->isLeapYear( year_in );
    }
    
    /** Returns the number of days in the current month **/
    int MxDate::daysInMonth() const
    {
        return myImpl->daysInMonth( getMonth(), getYear() );
    }
    
    /** Returns the number of days in the passed month/year **/
    int MxDate::daysIntMonth( int month_in, int year_in ) const
    {
        return myImpl->daysInMonth( month_in, year_in );
    }
    
    /* gets the day of the week where 1 = Sunday, 2 = Monday,
     3 = Tuesday, 4 = Wednesday, 5 = Thursday, 6 = Friday,
     7 = Saturday */
    int MxDate::getWeekday() const
    {
        return myImpl->getWeekday();
    }
    
    /** Returns the name of this simpleType as found in the musicxml.xsd
     document. **/
    std::string MxDate::getXmlTypeName() const
    {
        return myImpl->getXmlTypeName();
    }
    
    /** Returns the name of this C++ class, i.e. 'MxDate'. This
     is a function implemented by all objects that inherit from LexiconObject. **/
    std::string MxDate::getClassName() const
    {
        return myImpl->getClassName();
    }
    
    /** Returns the documentation for this musicxml type as found in the musicxml.xsd
     document. **/
    std::string MxDate::getDocumentation() const
    {
        return myImpl->getDocumentation();
    }
    
    /* Inherited: toString() const;
     Returns the internal date value as a yyyy-mm-dd string value. All objects
     inheriting from LexiconObject implement a toString() function. All
     objects inheriting from MxObject implement this function to
     return the musicxml representation of their internal value. */
    
    /* Setters ---------------------------------------------------------------------------- */
    
    /** Sets the yyyy mm dd value if the passed yyyy, mm, dd
     are valid date values.  otherwise returns false and does
     not change the internal state **/
    bool MxDate::setValue( int year_in, int month_in, int day_in )
    {
        return myImpl->setValue( year_in, month_in, day_in );
    }
    
    /** Takes an int and sets the year value.  Does nothing if the year is
     an invalid value (must be >= 1 and <= 9999 **/
    void MxDate::setYear( int year_in )
    {
        myImpl->setYear( year_in );
    }
    
    /** Takes an int and sets the month value.  Does nothing if the month is
     an invalid value (must be >= 1 and <= 12 **/
    void MxDate::setMonth( int month_in )
    {
        myImpl->setMonth( month_in );
    }
    
    /** Takes an int and sets the day value.  Does nothing if the day is
     an invalid value (must be >= 1 and <= 28,29,30,31 depending on year **/
    void MxDate::setDay( int day_in )
    {
        myImpl->setDay( day_in );
    }
    
    /** Sets the year, month and day based upon a string in the format
     yyyy-mm-dd if the string is malformed or if the date value is not
     valid, the internal values will not be changed. **/
    bool MxDate::fromString( const std::string& value_in )
    {
        return myImpl->fromString( value_in );
    }
    
    /* Comparison Operators --------------------------------------------------------------- */
    
    /** Two MxDate objects are equal if they have the same yyyy-mm-dd
     value. less than means chronologically prior-to, greater than means
     chronologically subsequent-to. **/
    bool MxDate::operator==( const MxDate& other_in ) const
    {
        return myImpl->equal( other_in );
    }
    bool MxDate::operator!=( const MxDate& other_in ) const
    {
        return myImpl->notEqual( other_in );
    }
    bool MxDate::operator>( const MxDate& other_in ) const
    {
        return myImpl->greaterThan( other_in );
    }
    bool MxDate::operator<( const MxDate& other_in ) const
    {
        return myImpl->lessThan( other_in );
    }
    bool MxDate::operator>=( const MxDate& other_in ) const
    {
        return myImpl->greaterThanOrEqual( other_in );
    }
    bool MxDate::operator<=( const MxDate& other_in ) const
    {
        return myImpl->lessThanOrEqual( other_in );
    }
    
    /* Increment/Decrement Operators ------------------------------------------------------ */
    
    /** Increment and decriment the date, one day at a time.
     Pre/Post function as expected. **/
    MxDate& MxDate::operator++()
    {
        myImpl->addDays( 1 );
        return *this;
    }
    MxDate MxDate::operator++( int )
    {
        MxDate temp( *this );
        myImpl->addDays( 1 );
        return temp;
    }
    MxDate& MxDate::operator--()
    {
        myImpl->addDays( -1 );
        return *this;
    }
    MxDate MxDate::operator--( int )
    {
        MxDate temp( *this );
        myImpl->addDays( -1 );
        return temp;
    }
    
    /* Date Operations -------------------------------------------------------------------- */
    
    /** Alter the object's value by adding (or subtracting) a number of days.
     Month and year values will be changed as needed. **/
    MxDate& MxDate::addDays( int days_in )
    {
        myImpl->addDays( days_in );
        return *this;
    }
    
    /** Alter the object's value by adding (or subtracting) a number of months.
     Month and day values will be changed as needed. **/
    MxDate& MxDate::addMonths( int months_in )
    {
        myImpl->addMonths( months_in );
        return *this;
    }
    
    /** Alter the object's value by adding (or subtracting) a number of years.
     Month and day values will be changed as needed (i.e. if affected by
     leap year change.) **/
    MxDate& MxDate::addYears( int years_in )
    {
        myImpl->addYears( years_in );
        return *this;
    }
    
    /* Streaming support ------------------------------------------------------------------ */
    
    /** Streams the value as a yyyy-mm-dd string. **/
    std::ostream& MxDate::stream( std::ostream& os_out ) const
    {
        return myImpl->stream( os_out );
    }
    
} // namespace lexicon



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

