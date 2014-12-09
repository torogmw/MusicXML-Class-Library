/* See MusicXML License at the bottom of this code page. */

/* matthew james briggs
 
 Reader.h   Takes an istream and parses the istream
            during construction.  Throws during
            construction if it cannot parse the
            xml.
 
            Once Reader is constructed, it has only
            one public function, document(), which
            returns the resulting xparse:Document
            object.
 
 Exceptions std::runtime_error
 
            This object throws a std::runtime_error
            exception during construction if it
            cannot parse the xml input.
 
 */

#pragma once
#include <iostream>
#include "Document.h"
#include "Element.h"
#include "Attribute.h"


namespace xparse
{
    class Reader
    {

    public:
//-------------------------------------------------------------//
        /* ctor */
        Reader( std::istream& input );
        
//-------------------------------------------------------------//
        /* dtor */
        virtual ~Reader();

//-------------------------------------------------------------//
        /* returns the parsed xml document */
        Document document() const;
        HDocument documentPtr() const;
        
    private:
//-------------------------------------------------------------//
        /* the input stream containing xml */
        std::istream& m_is;
        
//-------------------------------------------------------------//
        /* Readers purpose is to construct this
         Document object from xml input */
        HDocument m_doc;
        
//-------------------------------------------------------------//   
        /* these are used to remember a position
         and rewind the istream buffer to the
         desired, remembered position. */
        std::streamoff m_start_position;
        std::streamoff m_remembered_pos;

//-------------------------------------------------------------//
        /* reads the entire istream and
         constructs a Docuement */
        void parse( Document& doc );
                     
//-------------------------------------------------------------//
        /* sets the buffer position
         back to the beginning and clears
         all error flags from the istream */
        void reset_stream();    

//-------------------------------------------------------------//
        /* sets the m_remembered_pos value
         to the current buffer position */
        void remember_position();
        
//-------------------------------------------------------------//
        /* sets the buffer to m_remembered_pos
         and clears any istream error flags */
        void rewind();
        
//-------------------------------------------------------------//
        /* checks the next istream char against an expected
         char.  If they match, nothing happens. If the do
         not match, a std::runtime_exception is throws.
         A custom message can be given, otherwise the message
         will state the expecte vs. found char values */
        void expected( char expected, const std::string& message = "" );
        
//-------------------------------------------------------------//
        /* Checks each char in the expected string, calling
         the above char version for each position in the given
         string */
        void expected( const std::string& expected, const std::string& message = "" );
        
//-------------------------------------------------------------//
        /* moves the istream forward to the next non-
         whitespace position. */
        void ignore_ws();
        
//-------------------------------------------------------------//
        /* if this function is called when the istream
         buffer is pointing at the first character of
         an xml comment, it moves the buffer forward to
         the end of the xml comment and returns true.
         Otherwise it returns false and returns the buffer
         to the position it was at when the function was
         called. */
        bool ignore_comment();
        
//-------------------------------------------------------------//
        /* moves the buffer forward to the first
         position that is neither whitespace nor
         an xml comment */
        void ignore_ws_and_comments();
                
//-------------------------------------------------------------//
        /* checks the istreams eof bit and good bit.
         throws if eof is true or if good is false */
        void abort_check();

//-------------------------------------------------------------//
        /* parses the xml version tag and
         returns the version number as a string.
         throws if the xml is malformed.
         returns an empty string if the xml
         doesn't have a version tag */
        std::string parse_xml_ver();
        
//-------------------------------------------------------------//
        /* parses the xml DOCTYPE tag and
         returns the DOCTYPE information as a
         string.  Throws if the xml is
         malformed.  Returns an empty string
         if the xml does not have a Doctype
         tag. */
        std::string parse_doc_type();
        
//-------------------------------------------------------------//
        /* if called when the istream buffer is
         pointing at the start of an attribute,
         will return a shared pointer to the parsed,
         constructed attribute.  Will ignore
         whitespace and comments prior to the
         start of the attribute */
        AttributePtr parse_attribute();

//-------------------------------------------------------------//
        /* advances the istream position to the first character
         after the found search token and returns true. Returns
         false if the search token is not found. */
        bool find( const std::string& token );

//-------------------------------------------------------------//
        /* returns true if the search token is found after
         the starting position. returns false if it is not
         found.  rewinds the istream position to where it
         was when the function was called */
        bool find_and_rewind( const std::string& token );

//-------------------------------------------------------------//
        /* checks to see if the next (non-whitespace, non-
         commented) text in the istream is the given closing tag.
         Give this function the token string, and if the token
         string is found immediately following the start position
         it returns true (ignoring whitespace and comments).
         Otherwise it returns flase.  Technically this could be
         used with any token, but it's being used to see if a tag
         is about to be closed or if there is more text/attributes
         elements to parse */
        bool check_for_closing_tag( std::string closing_tag );

//-------------------------------------------------------------//
        /* If this is pointing at the start of an element
         (or whitespace/comments preceding an element, the
         function will parse the element and return a
         constructed element.  Note this calls itself
         recursively to also parse any nested elements.
         Effectively this function gets called once on the root
         element and then calls itself recursively until the
         end of the root element has been found */
        ElementPtr parse_elements( int& firstElementIndex );
        ElementPtr parse_elements();
    };
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

