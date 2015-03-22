#include "goCreateElementStub.h"
#include "MsItemElement.h"
#include "MsItemWeb.h"
#include "MsItem.h"
#include <memory>
#include "File.h"
#include "codegenAttributesStructH.h"
#include "codegenAttributesStructCpp.h"
#include "globals.h"
#include "codegenElementStubH.h"
#include "codegenElementStubCpp.h"
#include "codegenElementStubTest.h"

namespace go
{
    void goCreateElementStubs( int ID )
    {
        using namespace xsd;
        using namespace fs;
        using namespace std;
        stringstream h;
        stringstream cpp;
        stringstream test;
        MsItemWebPtr web = make_shared<MsItemWeb>();
        MsItemElementPtr e;
        for ( auto x : web->getMsItemSet() )
        {
            if ( x->getID() == ID )
            {
                e = make_shared<MsItemElement>( *x );
            }
        }
        if ( !e ) { throw runtime_error{ "element not found" }; }
        string attStructName = "AttributesIterface";
        if ( e->getAttributes().size() > 0 )
        {
            attStructName = e->getCppName() + "Attributes";
        }
        codegenAttributesStructH( h, attStructName, e, true, false );
        codegenAttributesStructCpp( cpp, attStructName, e, false );
        
        codegenElementStubH( h, attStructName, e );
        codegenElementStubCpp( cpp, attStructName, e );
        codegenElementStubTest( test, attStructName, e );
        
        /* Output */
        Directory d{ globals::getOutputDirectory() };
        FileName fnh{ "newelement", "h" };
        FileName fncpp{ "newelement", "cpp" };
        FileName fntest{ "newelementTest", "cpp" };
        FileInfo foh{ fnh, d };
        FileInfo focpp{ fncpp, d };
        FileInfo fotest{ fntest, d };
        File h_file{ foh };
        File cpp_file{ focpp };
        File test_file{ fotest };
        h_file.setContents( h.str() );
        cpp_file.setContents( cpp.str() );
        test_file.setContents( test.str() );
        h_file.writeToDisk();
        cpp_file.writeToDisk();
        test_file.writeToDisk();
    }
}