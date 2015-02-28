#pragma once
#include "MsItemWeb.h"
#include "enumsCpp.h"
#include "enumsH.h"
#include "enumsTest.h"
namespace go
{
    void goCreateEnums()
    {
        xsd::MsItemWeb web;
        xsd::writeEnumHFile( web );
        xsd::writeEnumCppFile( web );
        xsd::writeEnumTestFile( web );
    }
}