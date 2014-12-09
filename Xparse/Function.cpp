/* See MusicXML License at the bottom of this code page. */

/* matthew james briggs */

#include "Function.h"
#include <sstream>
#include "tab.h"

namespace mjb
{
    /* ctor */
    Function::Function()
    :myName( "newFunction" )
    ,myIsConst( false )
    ,myIsVirtual( false )
    ,myIsPureVirtual( false )
    ,myIsInline( false )
    ,myIsConstructorDestructor( false )
    ,myCode( "return 0;" )
    ,myParameterStartSignalToken( "$@" )
    ,myReturnType( "int" )
    ,myParameters( )
    ,myDocumentation()
    ,myNote( "" )
    {}
    
    /* dtor */
    Function::~Function() {}
    
    void Function::setCode( const std::string& code_in )
    {
        myCode = code_in;
    }
    
    void Function::setCode( const std::ostream& code_in )
    {
        std::stringstream ss;
        ss << code_in.rdbuf();
        myCode = ss.str();
    }
    
    std::string Function::getCode() const
    {
        return myCode;
    }
    
    
    std::string Function::getName() const
    {
        return myName;
    }
    
    void Function::setName( const std::string& name_in )
    {
        myName = name_in;
    }
    
    
    bool Function::isConst() const
    {
        return myIsConst;
    }
    
    void Function::isConst( bool isConst_in )
    {
        myIsConst = isConst_in;
    }
    
    
    bool Function::isVirtual() const
    {
        return myIsVirtual;
    }
    
    void Function::isVirtual( bool isVirtual_in )
    {
        myIsVirtual = isVirtual_in;
    }
    
    
    bool Function::isPureVirtual() const
    {
        return myIsPureVirtual;
    }
    
    void Function::isPureVirtual( bool isPureVirtual_in )
    {
        myIsPureVirtual = isPureVirtual_in;
    }
    
    
    bool Function::isInline() const
    {
        return myIsInline;
    }
    
    void Function::isInline( bool isInline_in )
    {
        myIsInline = isInline_in;
    }
    
    
    
    
    std::string Function::getDeclaration( int indentLevel_in, bool includeDefaultValues_in, const std::string& qualifiers_in, bool includeDefinition_in ) const
    {
        std::stringstream ss;
        ss << declare( true //inludeVirtual
                      ,includeDefaultValues_in
                      ,qualifiers_in
                      ,indentLevel_in);
        if ( includeDefinition_in )
        {
            ss << std::endl;
            ss << define( indentLevel_in );
        }
        else
        {
            ss << ";";
        }
        return ss.str();
    }
    
    std::string Function::getDefinition( int indentLevel_in
                                        ,bool isAlreadyDeclared_in
                                        ,const std::string& qualifiers_in
                                        ,bool includeDocumentation_in ) const
    {
        std::stringstream ss;
        if ( isAlreadyDeclared_in )
        {
            ss << declare( false //inludeVirtual
                          ,false //includeDefaultValues
                          ,qualifiers_in
                          ,indentLevel_in
                          ,includeDocumentation_in );
            
        }
        else
        {
            ss << declare( true //inludeVirtual
                          ,true //includeDefaultValues
                          ,qualifiers_in
                          ,indentLevel_in
                          ,includeDocumentation_in );
        }
//        if ( isConstructorDestructor() )
//        {
//            //todo
//        }
        ss << std::endl;
        ss << define( indentLevel_in );
        return ss.str();
    }
    
    
    std::string Function::getParameterStartSignalToken() const
    {
        return myParameterStartSignalToken;
    }
    
    void Function::setParameterStartSignalToken( const std::string& token_in )
    {
        myParameterStartSignalToken = token_in;
    }
    
    
    int Function::getParameterCount() const
    {
        return (int)myParameters.size();
    }
    
    void Function::addParameter( const Parameter& parameter_in )
    {
        Parameter new_parameter = parameter_in;
        new_parameter.setFindAndReplaceStartSignalToken( myParameterStartSignalToken );
        myParameters.push_back( new_parameter );
    }
    
    void Function::removeParameter( const Parameter& parameter_in )
    {
        myParameters.push_back( parameter_in );
        ParameterIterator found = std::find( myParameters.begin(), myParameters.end(), parameter_in );
        if ( found != myParameters.end() )
        {
            myParameters.erase( found );
        }
    }
    
    void Function::removeParameter( int index )
    {
        ParameterIterator it = myParameters.begin();
        for ( int i = 0; i < index && it != myParameters.end(); ++i)
        {
            ++it;
        }
        if ( it != myParameters.end() )
        {
            myParameters.erase( it );
        }
    }
    
    Parameter Function::getParameter( int index ) const
    {
        ParameterIteratorConst it = myParameters.cbegin();
        for ( int i = 0; i < index && it != myParameters.cend(); ++i)
        {
            ++it;
        }
        if ( it != myParameters.end() )
        {
            return *it;
        }
        else
        {
            throw std::out_of_range("parameter index out of range");
        }
        return Parameter();
    }
    
    
    bool Function::isConstructorDestructor() const
    {
        return myIsConstructorDestructor;
    }
    
    void Function::isConstructorDestructor( bool value_in )
    {
        myIsConstructorDestructor = value_in;
    }
    std::string Function::declare( bool includeVirtual_in
                        ,bool includeDefaultValues_in
                        ,const std::string& qualifiers_in
                        ,int indentLevel_in
                        ,bool includeDocumentation_in ) const
    {
        std::stringstream temp_tabs_ss;
        for ( int i = 0; i < indentLevel_in; ++i )
        {
            temp_tabs_ss << '\t';
        }
        std::string tabs = temp_tabs_ss.str();
        std::stringstream ss;
        if ( includeDocumentation_in && (int)myDocumentation.size() > 0 )
        {
            ss << document( tabs );
        }
        ss << tabs;
        if ( ( isVirtual() || isPureVirtual() ) && includeVirtual_in )
        {
            ss << "virtual ";
        }
        if ( ! isConstructorDestructor() )
        {
            ss << getReturnType();
            ss << " ";
        }
        ss << qualifiers_in;
        ss << getName();
        ss << "(";
        if ( getParameterCount() > 0 )
        {
            ss << " ";
            for (int i = 0; i < getParameterCount(); ++i)
            {
                ss << getParameter( i ).toString( includeDefaultValues_in );
                if ( i < getParameterCount() - 1 )
                {
                    ss << ",";
                }
                ss << " ";
            }
        }
        ss << ")";
        if ( isConst() )
        {
            ss << " const";
        }
        if ( isPureVirtual() && includeVirtual_in )
        {
            ss << " = 0";
        }
        return ss.str();
    }
    
    std::string Function::define(int indent_level) const
    {
        std::stringstream temp_tabs;
        for (int i=0; i < indent_level; ++i)
        {
            temp_tabs << '\t';
        }
        std::string braces_tabs = temp_tabs.str();
        temp_tabs << '\t';
        std::string tabs = temp_tabs.str();
        std::stringstream ss;
        ss << braces_tabs << "{";
        if ( (int)myCode.size() > 0 )
        {
            ss << std::endl;
            ss << tabs;
        }
        for ( auto it = myCode.cbegin(); it != myCode.cend(); ++it )
        {
            std::string found;
            if ( getReplaceable( it, found ) )
            {
                bool isFound = false;
                for ( auto param = parametersBeginConst(); param != parametersEndConst(); ++param )
                {
                    std::string this_parameter_token = param->getFindAndReplaceSymbol();
                    if ( this_parameter_token == found )
                    {
                        ss << param->getName();
                        isFound = true;
                        
                    }
                }
                if ( ! isFound )
                {
                    ss << found;
                }
                int length = ( (int)found.size() ) - 1;
                if ( length < 0 )
                {
                    length = 0;
                }
                for ( int i=0; i < length; ++i)
                {
                    ++it;
                }
            }
            else if ( *it == '\r' )
            {
                ; // ignore windows carriage returns
            }
            else if ( *it == '\n' )
            {
                ss << std::endl;
                ss << tabs;
            }
            else
            {
                ss << *it;
            }

        }
        if ( (int)myCode.size() > 0 )
        {
            ss << std::endl;
            ss << braces_tabs;
        }
        ss << "}";
        return ss.str();
    }
    
    std::string Function::getReturnType() const
    {
        return myReturnType;
    }
    void Function::setReturnType( const std::string& returnType_in )
    {
        myReturnType = returnType_in;
    }
    
    ParameterIterator Function::parametersBegin()
    {
        return myParameters.begin();
    }
    ParameterIterator Function::parametersEnd()
    {
        return myParameters.end();
    }
    ParameterIteratorConst Function::parametersBeginConst() const
    {
        return myParameters.cbegin();
    }
    ParameterIteratorConst Function::parametersEndConst() const
    {
        return myParameters.cend();
    }
    bool Function::getReplaceable( const std::string::const_iterator& firstCharacter_in
                                  ,std::string& foundSymbol_out ) const
    {
        if ( (int)myParameterStartSignalToken.size() == 0 )
        {
            return false;
        }
        std::stringstream symbol;
        auto search_it = firstCharacter_in;
        for ( auto token_it = myParameterStartSignalToken.cbegin();
             token_it != myParameterStartSignalToken.cend();
             ++token_it, ++search_it )
        {
            if ( *search_it != *token_it )
            {
                return false;
            }

            symbol << *search_it;
        }
        
        for ( auto continue_it = search_it; search_it != myCode.cend(); ++continue_it )
        {
            if ( ! isspace( *continue_it )
                && *continue_it != '='
                && *continue_it != '!'
                && *continue_it != '<'
                && *continue_it != '>'
                && *continue_it != '.'
                && *continue_it != '-'
                && *continue_it != ':'
                && *continue_it != '\"'
                && *continue_it != '+'
                && *continue_it != '-'
                && *continue_it != '^'
                && *continue_it != '%'
                && *continue_it != '&'
                && *continue_it != '('
                && *continue_it != ')'
                && *continue_it != ';'
                && *continue_it != '['
                && *continue_it != ']'
                && *continue_it != '*'
                && *continue_it != '/'
                && *continue_it != ','
                && *continue_it != '?'
                && *continue_it != '#'
                )
            {
                symbol << *continue_it;
            }
            else
            {
                break;
            }
        }
        foundSymbol_out = symbol.str();
        return true;
    }
    
    std::string Function::getDocumentation() const
    {
        return myDocumentation;
    }
    void Function::setDocumentation( const std::string& value )
    {
        myDocumentation = value;
    }
    
    std::string Function::document(const std::string &tabs) const
    {
        std::stringstream ss;
        ss << tabs;
        ss << "/** ";
        int pos = 0;
        for ( char c: myDocumentation )
        {
            if ( pos > 65 && isspace( c ) )
            {
                ss << std::endl;
                ss << tabs << "    ";
                pos = 0;
            }
            else if ( pos == 0 && isspace( c ) )
            {
                ; // ignore
            }
            else if ( c == '\n' )
            {
                ss << std::endl;
                ss << tabs << "    ";
                pos = 0;
            }
            else
            {
                ss << c;
                ++pos;
            }
        }
        ss << " **/" << std::endl;
        return ss.str();
    }
    
    std::string Function::getNote() const
    {
        return myNote;
    }
    void Function::setNote( const std::string& value_in )
    {
        myNote = value_in;
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

