#pragma once
#include "MsItem.h"
#include "MsItemWeb.h"
#include "MsItemAttribute.h"
#include "XpItem.h"
#include <set>
#include "File.h"
#include "globals.h"
#include "MsItemElement.h"
#include <sstream>
#include "goSetIsImplemented.h"
#include "end.h"
#include "tab.h"
#include "codegenAttributesStructH.h"
#include "codegenAttributesStructCpp.h"
#include "codegenEmptyElementWithAttributesH.h"
#include "codegenEmptyElementWithAttributesCpp.h"
#include "codegenEmptyElementWithAttributesTest.h"

namespace go
{
    enum class EmptyElementType
    {
        emptyPrintStyleAlign = 0,
        emptyPrintObjectStyleAlign = 1,
        emptyPlacement = 2,
        emptyLine = 3,
        emptyTrillSound = 4,
        emptyFont = 5,
        other = 6
    };
    inline EmptyElementType goIsEmptyElementWithAttributes( const xsd::MsItemElementPtr& e )
    {
        using namespace xsd;
        using namespace fs;
        using namespace std;
        
        EmptyElementType rval = EmptyElementType::other;
        MsItemPtr ref = e->getInheritedMsItem();
        if ( ref )
        {
            if ( ref->getDtDef() == "empty-print-style-align" )
            {
                rval = EmptyElementType::emptyPrintObjectStyleAlign;
            }
            else if ( ref->getDtDef() == "empty-print-object-style-align" )
            {
                rval = EmptyElementType::emptyPrintObjectStyleAlign;
            }
            else if ( ref->getDtDef() == "empty-placement" )
            {
                rval = EmptyElementType::emptyPlacement;
            }
            else if ( ref->getDtDef() == "empty-line" )
            {
                rval = EmptyElementType::emptyLine;
            }
            else if ( ref->getDtDef() == "empty-trill-sound" )
            {
                rval = EmptyElementType::emptyTrillSound;
            }
            else if ( ref->getDtDef() == "empty-font" )
            {
                rval = EmptyElementType::emptyFont;
            }
        }
        return rval;
    }
    inline bool goIsEmptyElementWithAttributes_v2( const xsd::MsItemElementPtr& e )
    {
        using namespace xsd;
        using namespace fs;
        using namespace std;
        
        bool rval = false;
        MsItemPtr ref = e->getInheritedMsItem();
        if ( ref )
        {
            if ( ref->getMsItemKind() == MsItemKind::complexType )
            {
                for ( auto c : ref->getChildren() )
                {
                    if ( c->getMsItemKind() == MsItemKind::annotation ||
                        c->getMsItemKind() == MsItemKind::attribute ||
                        c->getMsItemKind() == MsItemKind::attributeGroup )
                    {
                        ; // OK
                    }
                    else
                    {
                        return false;
                    }
                }
                return true;
            }
        }
        return rval;
    }
    inline xsd::MsItemElementSet goListUnimplementedEmptyElementWithAttributes_v2( const xsd::MsItemWebPtr& web )
    {
        using namespace xsd;
        MsItemElementSet uelements;
        MsItemElementSet temp = findUnimplementedElements( web );
        for ( auto x : temp )
        {
            if ( goIsEmptyElementWithAttributes_v2(x) )
            {
                uelements.push_back( x );
            }
        }
        return uelements;
    }
    inline void goCreateEmptyElementsWithAttributes_v2()
    {
        using namespace xsd;
        using namespace fs;
        using namespace std;
        
        MsItemWebPtr w = std::make_shared<MsItemWeb>();
        MsItemElementSet xelements = findUnimplementedElements( w );
        MsItemElementSet elements;
        for ( auto ufufuf : xelements )
        {
            if ( goIsEmptyElementWithAttributes_v2( ufufuf ) )
            {
                elements.push_back( ufufuf );
            }
        }
        
        string tab1 = "   ";
        string tab2 = tab1+tab1;
        string tab3 = tab2+tab1;
        string className = "";
        string xmlName = "";
        string attStructName;
        string attStructPtrName;
        EmptyElementType currentType = EmptyElementType::other;
        stringstream h;
        stringstream cpp;
        stringstream test;
        for ( auto current : elements )
        {
            currentType = goIsEmptyElementWithAttributes( current );
            className = current->getCppName();
            xmlName = current->getXmlName();
            attStructName = className+"Attributes";
            
            codegenAttributesStructH( h, attStructName, current, true, true );
            codegenAttributesStructCpp( cpp, attStructName, current, true );
            codegenEmptyElementWithAttributesH( h, attStructName, current );
            codegenEmptyElementWithAttributesCpp( cpp, attStructName, current );
            codegenEmptyElementWithAttributesTest( test, attStructName, current );
            
            Directory d{ globals::getOutputDirectory() };
            FileName fn{ className+"Test", "cpp" };
            FileInfo fo{ fn, d };
            File f{ fo };
            f.setContents( test.str() );
            f.writeToDisk();
            // cout << test.str() << endl;
            test.str("");
            // setIsImplemented( current->getXpItem() );
        }
        // cout << h.str() << endl;
        cout << cpp.str() << endl;
    }
    inline void goCreateEmptyElementsWithAttributes()
    {
        using namespace xsd;
        using namespace fs;
        using namespace std;
        
        MsItemWeb w;
        MsItemSet iset = w.getFilteredMsItemSet( MsItemKind::element );
        MsItemElementSet elements;
        for ( const auto currentitem : iset )
        {
            if ( currentitem->getIsImplemented() == false )
            {
                
                MsItemElementPtr newe = std::make_shared<MsItemElement>( *currentitem );
                EmptyElementType t = goIsEmptyElementWithAttributes( newe );
                if ( t != EmptyElementType::other )
                {
                    elements.push_back( newe );
                }
            }
        }
        bool emptyPrintStyleAlignAttributesDefined = false;
        bool emptyPrintObjectStyleAlignAttributesDefined = false;
        bool emptyPlacementAttributesDefined = false;
        bool emptyLineAttributesDefined = false;
        bool emptyTrillSoundAttributesDefined = false;
        bool emptyFontAttributesDefined = false;
        string tab1 = "   ";
        string tab2 = tab1+tab1;
        string tab3 = tab2+tab1;
        string className = "";
        string xmlName = "";
        string attStructName;
        string attStructPtrName;
        EmptyElementType currentType = EmptyElementType::other;
        stringstream h;
        stringstream cpp;
        stringstream test;
        for ( auto current : elements )
        {
            currentType = goIsEmptyElementWithAttributes( current );
            className = current->getCppName();
            xmlName = current->getXmlName();
            if ( currentType == EmptyElementType::emptyFont )
            {
                attStructName = "EmptyFontAttributes";
                if ( !emptyFontAttributesDefined )
                {
                    emptyFontAttributesDefined = true;
                    codegenAttributesStructH( h, attStructName, current, false, false );
                    codegenAttributesStructCpp( cpp, attStructName, current );
                }
                
            }
            else if ( currentType == EmptyElementType::emptyPrintStyleAlign )
            {
                attStructName = "EmptyPrintStyleAlignAttributes";
                if ( !emptyPrintStyleAlignAttributesDefined )
                {
                    emptyPrintStyleAlignAttributesDefined = true;
                    codegenAttributesStructH( h, attStructName, current, false, false );
                    codegenAttributesStructCpp( cpp, attStructName, current );
                }
            }
            else if ( currentType == EmptyElementType::emptyPrintObjectStyleAlign )
            {
                attStructName = "EmptyPrintObjectStyleAlignAttributes";
                if ( !emptyPrintObjectStyleAlignAttributesDefined )
                {
                    emptyPrintObjectStyleAlignAttributesDefined = true;
                    codegenAttributesStructH( h, attStructName, current, false, false );
                    codegenAttributesStructCpp( cpp, attStructName, current );
                }
            }
            else if ( currentType == EmptyElementType::emptyPlacement )
            {
                attStructName = "EmptyPlacementAttributes";
                if ( !emptyPlacementAttributesDefined )
                {
                    emptyPlacementAttributesDefined = true;
                    codegenAttributesStructH( h, attStructName, current, false, false );
                    codegenAttributesStructCpp( cpp, attStructName, current );
                }
            }
            else if ( currentType == EmptyElementType::emptyLine )
            {
                attStructName = "EmptyLineAttributes";
                if ( !emptyLineAttributesDefined )
                {
                    emptyLineAttributesDefined = true;
                    codegenAttributesStructH( h, attStructName, current, false, false );
                    codegenAttributesStructCpp( cpp, attStructName, current );
                }
            }
            else if ( currentType == EmptyElementType::emptyTrillSound )
            {
                attStructName = "EmptyTrillSoundAttributes";
                if ( !emptyTrillSoundAttributesDefined )
                {
                    emptyTrillSoundAttributesDefined = true;
                    codegenAttributesStructH( h, attStructName, current, false, false );
                    codegenAttributesStructCpp( cpp, attStructName, current );
                }
            }
            else
            {
                throw std::runtime_error( "uh oh" );
            }
            codegenEmptyElementWithAttributesH( h, attStructName, current );
            codegenEmptyElementWithAttributesCpp( cpp, attStructName, current );
            codegenEmptyElementWithAttributesTest( test, attStructName, current );
            
            Directory d{ globals::getOutputDirectory() };
            FileName fn{ className+"Test", "cpp" };
            FileInfo fo{ fn, d };
            File f{ fo };
            f.setContents( test.str() );
            f.writeToDisk();
            // cout << test.str() << endl;
            test.str("");
            // setIsImplemented( current->getXpItem() );
        }
        // cout << h.str() << endl;
        cout << test.str() << endl;
    }
}