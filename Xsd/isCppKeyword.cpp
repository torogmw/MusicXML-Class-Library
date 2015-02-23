#include "isCppKeyword.h"

namespace xsd
{
    bool isCppKeyword( const std::string word )
    {
        if ( word == "alignas" ) { return true; }
        else if ( word == "alignof" ) { return true; }
        else if ( word == "and" ) { return true; }
        else if ( word == "and_eq" ) { return true; }
        else if ( word == "asm" ) { return true; }
        else if ( word == "auto" ) { return true; }
        else if ( word == "bitand" ) { return true; }
        else if ( word == "bitor" ) { return true; }
        else if ( word == "bool" ) { return true; }
        else if ( word == "break" ) { return true; }
        else if ( word == "case" ) { return true; }
        else if ( word == "catch" ) { return true; }
        else if ( word == "char" ) { return true; }
        else if ( word == "char16_t" ) { return true; }
        else if ( word == "char32_t" ) { return true; }
        else if ( word == "class" ) { return true; }
        else if ( word == "compl" ) { return true; }
        else if ( word == "concept" ) { return true; }
        else if ( word == "const" ) { return true; }
        else if ( word == "constexpr" ) { return true; }
        else if ( word == "const_cast" ) { return true; }
        else if ( word == "continue" ) { return true; }
        else if ( word == "decltype" ) { return true; }
        else if ( word == "default" ) { return true; }
        else if ( word == "delete" ) { return true; }
        else if ( word == "do" ) { return true; }
        else if ( word == "double" ) { return true; }
        else if ( word == "dynamic_cast" ) { return true; }
        else if ( word == "else" ) { return true; }
        else if ( word == "enum" ) { return true; }
        else if ( word == "explicit" ) { return true; }
        else if ( word == "export" ) { return true; }
        else if ( word == "extern" ) { return true; }
        else if ( word == "false" ) { return true; }
        else if ( word == "float" ) { return true; }
        else if ( word == "for" ) { return true; }
        else if ( word == "friend" ) { return true; }
        else if ( word == "goto" ) { return true; }
        else if ( word == "if" ) { return true; }
        else if ( word == "inline" ) { return true; }
        else if ( word == "int" ) { return true; }
        else if ( word == "long" ) { return true; }
        else if ( word == "mutable" ) { return true; }
        else if ( word == "namespace" ) { return true; }
        else if ( word == "new" ) { return true; }
        else if ( word == "noexcept" ) { return true; }
        else if ( word == "not" ) { return true; }
        else if ( word == "not_eq" ) { return true; }
        else if ( word == "nullptr" ) { return true; }
        else if ( word == "operator" ) { return true; }
        else if ( word == "or" ) { return true; }
        else if ( word == "or_eq" ) { return true; }
        else if ( word == "private" ) { return true; }
        else if ( word == "protected" ) { return true; }
        else if ( word == "public" ) { return true; }
        else if ( word == "register" ) { return true; }
        else if ( word == "reinterpret_cast" ) { return true; }
        else if ( word == "requires" ) { return true; }
        else if ( word == "return" ) { return true; }
        else if ( word == "short" ) { return true; }
        else if ( word == "signed" ) { return true; }
        else if ( word == "sizeof" ) { return true; }
        else if ( word == "static" ) { return true; }
        else if ( word == "static_assert" ) { return true; }
        else if ( word == "static_cast" ) { return true; }
        else if ( word == "struct" ) { return true; }
        else if ( word == "switch" ) { return true; }
        else if ( word == "template" ) { return true; }
        else if ( word == "this" ) { return true; }
        else if ( word == "thread_local" ) { return true; }
        else if ( word == "throw" ) { return true; }
        else if ( word == "true" ) { return true; }
        else if ( word == "try" ) { return true; }
        else if ( word == "typedef" ) { return true; }
        else if ( word == "typeid" ) { return true; }
        else if ( word == "typename" ) { return true; }
        else if ( word == "union" ) { return true; }
        else if ( word == "unsigned" ) { return true; }
        else if ( word == "using" ) { return true; }
        else if ( word == "virtual" ) { return true; }
        else if ( word == "void" ) { return true; }
        else if ( word == "volatile" ) { return true; }
        else if ( word == "wchar_t" ) { return true; }
        else if ( word == "while" ) { return true; }
        else if ( word == "xor" ) { return true; }
        else if ( word == "xor_eq" ) { return true; }
        return false;
    }
}