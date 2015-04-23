#pragma once
#include "MxTestHelper.h"
#include "Elements.h"

namespace MxTestHelpers
{
    mx::e::HarmonicInfoChoicePtr tgenHarmonicInfoChoice( variant v );
    void tgenHarmonicInfoChoiceExpected( std::ostream& os, int indentLevel, variant v );
}