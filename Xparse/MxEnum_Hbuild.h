/* See MusicXML License at the bottom of this code page. */

#pragma once
#include <string>
#include <sstream>
#include <vector>
#include <fstream>

#if 1==0

using namespace std;
using namespace xparse;

struct MxEnumInfoValuesXX
{
    string CLASSNAME;
    string MUSICXMLTYPENAME;
    string DOCUMENTATION;
    string CPPENUMNAME;
    vector<string> ENUMCPPVALUES;
    vector<string> ENUMXMLVALUES;
    int XMLNODEID;
    int COUNT() const
    {
        return (int) ENUMCPPVALUES.size();
    }
};

string HBuildPart1( const MxEnumInfoValues& v );
string HBuildPart2( const MxEnumInfoValues& v );
string HBuildPart3( const MxEnumInfoValues& v );
string HBuildPart4( const MxEnumInfoValues& v );
string HBuildPart5( const MxEnumInfoValues& v );
string HBuildPart6( const MxEnumInfoValues& v );
string HBuildPart7( const MxEnumInfoValues& v );
string HBuildPart8( const MxEnumInfoValues& v );
string HBuildPart9( const MxEnumInfoValues& v );
string HBuildString( const MxEnumInfoValues& v );

void HBuildFile( const MxEnumInfoValues& v, const string& outputdirectory )
{
    stringstream filepath;
    filepath << outputdirectory << v.CLASSNAME << ".h";
    string contents = HBuildString( v );
    ofstream ofile( filepath.str(), ios_base::binary );
    ofile << contents;
    ofile.close();
}

string HBuildString( const MxEnumInfoValues& v )
{
    stringstream ss;
    ss << HBuildPart1( v );
    ss << HBuildPart3( v );
    ss << HBuildPart4( v );
    ss << HBuildPart5( v );
    ss << HBuildPart6( v );
    ss << HBuildPart7( v );
    ss << HBuildPart8( v );
    ss << HBuildPart9( v );
    return ss.str();
}



string HBuildPart1( const MxEnumInfoValues& v )
{
    stringstream ss;
    ss << "#pragma once" << endl << endl;
    ss << "/*" << endl;
    ss << "Author:  Matthew James Briggs" << endl;
    ss << "Class:   " << v.CLASSNAME << endl;
    ss << "File:    " << v.CLASSNAME << ".h" << endl;
    ss << "Created: June 18, 2014" << endl;
    ss << "Project: Lexicon - a C++ library for Music XML" << endl;
    ss  << endl;
    ss << "Musix XML XSD Node ID:        " << v.XMLNODEID << endl;
    ss << "Musix XML Category:           Simple Type, Enumeration" << endl;
    ss << "Musix XML Name:               " << v.MUSICXMLTYPENAME << endl;
    ss << HBuildPart2( v );
    ss << "Music XML Documentation: ";
    
    stringstream documentation;
    int position = 26;
    for ( char c : v.DOCUMENTATION )
    {
        if ( c==' ' && position >= 50 )
        {
            documentation << endl;
            position = 0;
        }
        else
        {
            documentation << c;
        }
        ++position;
    }
    ss << documentation.str() << endl << endl;
    return ss.str();
}

string HBuildPart2( const MxEnumInfoValues& v )
{
    stringstream ss;
    ss << "Music XML Enumeration Values: " << v.ENUMXMLVALUES[0] << endl;
    for (int i = 1; i < (int)v.ENUMXMLVALUES.size(); ++i)
    {
        ss << "                              " << v.ENUMXMLVALUES[i] << endl;
    }
    ss << endl;
    return ss.str();
}

string HBuildPart3( const MxEnumInfoValues& v )
{
    stringstream ss;
    ss << "Note: All MxEnum_..._ classes share the same interface." << endl;
    ss << "" << endl;
    ss << "lexicon::enums::" << v.CPPENUMNAME << "" << endl;
    ss << "is an enum representing the possible values of the" << endl;
    ss << "MusicXML '" << v.MUSICXMLTYPENAME << "' enumeration." << endl;
    ss << "" << endl;
    ss << "" << v.CLASSNAME << "" << endl;
    ss << "is a wrapper to add functionality" << endl;
    ss << "to the underlying C++ enum." << endl;
    ss << "" << endl;
    ss << "----- functions -------------------------------------------" << endl;
    ss << "" << endl;
    ss << "Constructor: Constructor takes a lexicon::enums::" << v.CPPENUMNAME << "" << endl;
    ss << "argument. A default constructor is provided which takes the" << endl;
    ss << "zeroeth lexicon::enums::" << v.CPPENUMNAME << " value ( " << v.ENUMCPPVALUES[0] << " )." << endl;
    ss << "" << endl;
    ss << "String Constructor: A second constructor takes a string argument" << endl;
    ss << "this string should be a valid MusicXml enum value per MusicXml xsd" << endl;
    ss << "" << endl;
    ss << "getValue() returns the contained lexicon::enums::" << v.CPPENUMNAME << "" << endl;
    ss << "value." << endl;
    ss << "" << endl;
    ss << "getValueInt() returns the int representation of the" << endl;
    ss << "contained enum value" << endl;
    ss << "" << endl;
    ss << "getCppEnumSymbolAsString() returns the C++ symbol associated with" << endl;
    ss << "the contained enum value. e.g. \"" << v.ENUMCPPVALUES[0];
    if ( (int)v.ENUMCPPVALUES.size() > 1 )
    {
        ss << "\", \"" << v.ENUMCPPVALUES[1];
    }
    ss << "\"..." << endl;
    ss << "" << endl;
    ss << "toString() returns the enum value as represented" << endl;
    ss << "in the Music XML xsd specification.  This differs from the" << endl;
    ss << "C++ symbol in cases where the Music XML enum value contains" << endl;
    ss << "an illegal C++ symbol (typically '-')" << endl;
    ss << "" << endl;
    ss << "setValue( lexicon::enums::" << v.CPPENUMNAME << " ) sets the internal" << endl;
    ss << "value to that of the passed parameter.  No return value." << endl;
    ss << "" << endl;
    ss << "setValue( int ) sets the internal value to the enum value" << endl;
    ss << "which corresponds to the passed integer. If an illegal" << endl;
    ss << "int value is passed, false is returned indicating failure" << endl;
    ss << "otherwise true is returned indicating success." << endl;
    ss << "" << endl;
    ss << "fromString( string ) sets the internal value to the enum value" << endl;
    ss << "whose Music XML symbol matches the passed string. If an illegal" << endl;
    ss << "string value is passed, false is returned indicating failure" << endl;
    ss << "otherwise true is returned indicating success." << endl;
    ss << "" << endl;
    ss << "getCppEnumSymbolAsString returns the Cpp symbol as a string." << endl;
    ss << "This is similar to toString but where toString returns the" << endl;
    ss << "MusicXml symbol, getCppEnumSymbolAsString returns the Cpp symbol." << endl;
    ss << "toString() returns the enum value as a string using the MusicXml" << endl;
    ss << "specification's symbol." << endl;
    ss << "" << endl;
    ss << "setCppEnumSymbolAsString takes the Cpp symbol as a string and sets" << endl;
    ss << "the internal enum value. Sometimes the MusicXml symbol and Cpp symbol" << endl;
    ss << "differ because the MusicXml value has an illegal symbol '-'." << endl;
    ss << "setCppEnumSymbolAsString takes the C++ symbol while fromString" << endl;
    ss << "takes the XML symbol." << endl;
    ss << "" << endl;
    ss << "getSize() returns the total number of possible values" << endl;
    ss << "that the enum has." << endl;
    ss << "" << endl;
    ss << "getXmlTypeName() returns the name of this symple type as" << endl;
    ss << "found in the Music XML xsd document ( MusixXmlXsdType )." << endl;
    ss << "In this case..  \"" << v.MUSICXMLTYPENAME << "\"" << endl;
    ss << "" << endl;
    ss << "getClassName() returns the C++ class name. In this case..." << endl;
    ss << "" << v.CLASSNAME << " ( LexiconObject )" << endl;
    ss << "" << endl;
    ss << "getDocumentation() returns the description found in the" << endl;
    ss << "Music XML xsd document. ( MusixXmlXsdType )" << endl;
    ss << "" << endl;
    ss << "stream( os ) streams the getXmlTypeName() value to the" << endl;
    ss << "passed std::ostream object. ( LexiconObject )" << endl;
    ss << "" << endl;
    ss << "Comparison Operators" << endl;
    ss << "Equality means two objects have the same underlying" << endl;
    ss << "enum value. GreaterThan and LessThan are defined by" << endl;
    ss << "comparing the result of getValueInt()" << endl;
    ss << "" << endl;
    ss << "Increment/Decrement Operators (++ and --)" << endl;
    ss << "These cause the underlying enum value to cycle" << endl;
    ss << "through available values. When the edge of the" << endl;
    ss << "range of options, they wrap around to the beginning" << endl;
    ss << "(or end).  Pre/Post increment/decrement work as" << endl;
    ss << "expected." << endl;
    ss << "" << endl;
    ss << "operator<< Like all LexiconObjects, the streaming" << endl;
    ss << "operator is defined via inheritance from LexiconObject" << endl;
    ss << "" << endl;
    ss << "*/" << endl;
    return ss.str();
}

string HBuildPart4( const MxEnumInfoValues& v )
{
    stringstream ss;
    ss << endl;
    ss << "#include <iostream>" << endl;
    ss << "#include <string>" << endl;
    ss << "#include <memory>" << endl;
    ss << "#include \"LexiconBaseObjects.h\"" << endl;
    ss << "" << endl;
    ss << "    namespace lexicon" << endl;
    ss << "    {" << endl;
    ss << "/* Underlying Enumeration ------------------------------------- */" << endl;
    ss << "        namespace enums" << endl;
    ss << "        {" << endl;
    ss << "            enum class " << v.CPPENUMNAME << endl;
    ss << "            {" << endl;
    for (int i = 0; i < (int)v.ENUMCPPVALUES.size(); ++i)
    {
        ss << "                " << v.ENUMCPPVALUES[i] << " = " << i;
        if ( i < (int)v.ENUMCPPVALUES.size() - 1 )
        {
            ss << ",";
        }
        ss << endl;
    }
    ss << "            };" << endl;
    ss << "        }" << endl;
    return ss.str();
}

string HBuildPart5( const MxEnumInfoValues& v )
{
    stringstream ss;
    ss << "/* " << v.CLASSNAME << " ------------------------------------------------- */" << endl;
    ss << "    class " << v.CLASSNAME << " : public MxParseableObject" << endl;
    ss << "    {" << endl;
    ss << "    public:" << endl;
    ss << "/* Constructors and Assignment -------------------------------- */" << endl;
    ss << "        " << v.CLASSNAME << "( const enums::" << v.CPPENUMNAME << "& value" << endl;
    ss << "                               = enums::" << v.CPPENUMNAME << "::" << v.ENUMCPPVALUES[0] << " );" << endl;
    ss << "        " << v.CLASSNAME << "( const std::string& value );" << endl;
    ss << "        ~" << v.CLASSNAME << "();" << endl;
    ss << "        " << v.CLASSNAME << "( const " << v.CLASSNAME << "& other );" << endl;
    ss << "        " << v.CLASSNAME << "& operator=( const " << v.CLASSNAME << "& rhs );" << endl;
    ss << endl;
    return ss.str();
}

string HBuildPart6( const MxEnumInfoValues& v )
{
    stringstream ss;
    ss << "/* Getters (const) -------------------------------------------- */" << endl;
    ss << '\t' << "    enums::" << v.CPPENUMNAME << " getValue() const;" << endl;
    ss << '\t' << "    int getValueInt() const;" << endl;
    ss << '\t' << "    std::string getCppEnumSymbolAsString() const;" << endl;
    ss << '\t' << "    std::string toString() const;" << endl;
    ss << '\t' << "    int getSize() const;" << endl;
    ss << '\t' << "    virtual std::string getXmlTypeName() const;" << endl;
    ss << '\t' << "    virtual std::string getClassName() const;" << endl;
    ss << '\t' << "    virtual std::string getDocumentation() const;" << endl;
    ss << endl;
    return ss.str();
}

string HBuildPart7( const MxEnumInfoValues& v )
{
    stringstream ss;
    ss << "/* Setters ---------------------------------------------------- */" << endl;
    ss << '\t' << "    void setValue( const enums::" << v.CPPENUMNAME << " & new_value );" << endl;
    ss << '\t' << "    bool setValue( int new_value );" << endl;
    ss << '\t' << "    bool fromString( const std::string& xml_string_value );" << endl;
    ss << '\t' << "    bool setCppEnumSymbolAsString( const std::string& cpp_enum_symbol );" << endl;
    ss << endl;
    return ss.str();
}

string HBuildPart8( const MxEnumInfoValues& v )
{
    stringstream ss;
    ss << "/* LexiconObject Streaming Support ---------------------------- */" << endl;
    ss << '\t' << "    virtual std::ostream& stream( std::ostream& os ) const;" << endl;
    ss << endl;
    ss << "/* Comparison Operators --------------------------------------- */" << endl;
    ss << '\t' << "    bool operator==( const " << v.CLASSNAME << "& other ) const;" << endl;
    ss << '\t' << "    bool operator!=( const " << v.CLASSNAME << "& other ) const;" << endl;
    ss << '\t' << "    bool operator>=( const " << v.CLASSNAME << "& other ) const;" << endl;
    ss << '\t' << "    bool operator<=( const " << v.CLASSNAME << "& other ) const;" << endl;
    ss << '\t' << "    bool operator>( const " << v.CLASSNAME << "& other ) const;" << endl;
    ss << '\t' << "    bool operator<( const " << v.CLASSNAME << "& other ) const;" << endl;
    ss << endl;
    return ss.str();
}

string HBuildPart9( const MxEnumInfoValues& v )
{
    stringstream ss;
    ss << "/* Increment/Decrement Operators ------------------------------ */" << endl;
    ss << '\t' << "    " << v.CLASSNAME << "& operator++();" << endl;
    ss << '\t' << "    " << v.CLASSNAME << "& operator--();" << endl;
    ss << '\t' << "    " << v.CLASSNAME << " operator++( int );" << endl;
    ss << '\t' << "    " << v.CLASSNAME << " operator--( int );" << endl;
    ss << endl;
    ss << "/* Implementation --------------------------------------------- */" << endl;
    ss << '\t' << "private:" << endl;
    ss << '\t' << "    struct Impl;" << endl;
    ss << '\t' << "    std::unique_ptr<Impl> myImpl;" << endl;
    ss << "/* ------------------------------------------------------------ */" << endl;
    ss << "    };" << endl;
    ss << "}" << endl;
    return ss.str();
}

#endif


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

