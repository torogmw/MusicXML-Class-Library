/* matthew james briggs */

#include "MsItem.h"
#include "MsItemSimpleType.h"
#include <set>
#include "MsitemWeb.h"
#include "camelCase.h"
#include "isCppKeyword.h"

namespace xsd
{
    /* ctor */
    MsItem::MsItem( const XpItemPtr& xpItemPtr )
    :myXpItemPtr( xpItemPtr )
    ,myDtDef( "" )
    ,myMsItemKindString( "unknown" )
    ,myMsItemKind( MsItemKind::unknown )
    ,myIsImplemented( false )
    ,myIsFirstClassConcept( false )
    ,myParent( nullptr )
    ,myIsSpecialCase( false )
    ,myCppName()
    {
        if ( xpItemPtr )
        {
            parseDtDef();
            parseMsItemKind();
            parseIsFirstClassConcept();
            parseSpecialCases();
            parseCppName();
        }
    }
    
    /* dtor */
    MsItem::~MsItem() {}
    
    bool MsItem::getIsSpecialCase() const
    {
        return myIsSpecialCase;
    }
    std::string MsItem::getMsItemKindString() const
    {
        if ( myXpItemPtr )
        {
            return myXpItemPtr->getTag();
        }
        return "";
    }
    int MsItem::getID() const
    {
        if ( myXpItemPtr )
        {
            return myXpItemPtr->getID();
        }
        return -1;
    }
    
    std::string MsItem::getDtDef() const
    {
        return myDtDef;
    }
    
    void MsItem::parseIsFirstClassConcept()
    {
        myIsFirstClassConcept = false;
        if ( myMsItemKind == MsItemKind::simpleType
            || myMsItemKind == MsItemKind::attribute
            || myMsItemKind == MsItemKind::element )
        {
            myIsFirstClassConcept = true;
        }
    }
    
    void MsItem::parseDtDef()
    {
        if ( myDtDef.length() > 0 )
        {
            myDtDef = "";
        }
        if ( myXpItemPtr->hasProperties() )
        {
            for ( auto prop : myXpItemPtr->getProperties() )
            {
                if ( prop->getLabel() == "name" )
                {
                    myDtDef = prop->getValue();
                }
            }
        }
        if ( myDtDef.length() == 0 )
        {
            std::string supertype ="";
            for ( auto prop : myXpItemPtr->getProperties() )
            {
                if ( prop->getLabel() == "ref" ||
                    prop->getLabel() == "type" ||
                    prop->getLabel() == "base" )
                {
                    supertype = prop->getValue();
                }
                if ( supertype.length() > 0 )
                {
                    if ( supertype.substr( 0, 1 ) == "x" )
                    {
                        if ( supertype.substr(0,3) == "xs:" )
                        {
                            myDtDef = supertype.substr( 3 );
                        }
                        else if ( supertype.substr(0,4) == "xml:" )
                        {
                            myDtDef = supertype.substr( 4 );
                        }
                        else if ( supertype.substr(0,6) == "xlink:" )
                        {
                            myDtDef = supertype.substr( 6 );
                        }
                    }
                }
            }
        }
    }
    void MsItem::setMsItemKind( const xsd::MsItemKind& value )
    {
        if ( value == MsItemKind::annotation )
        {
            myMsItemKind = MsItemKind::annotation;
            myMsItemKindString = "xs:annotation";
        }
        else if ( value == MsItemKind::documentation )
        {
            myMsItemKind = MsItemKind::documentation;
            myMsItemKindString = "xs:documentation";
        }
        else if ( value == MsItemKind::enumeration )
        {
            myMsItemKind = MsItemKind::enumeration;
            myMsItemKindString = "xs:enumeration";
        }
        else if ( value == MsItemKind::element )
        {
            myMsItemKind = MsItemKind::element;
            myMsItemKindString = "xs:element";
        }
        else if ( value == MsItemKind::attribute )
        {
            myMsItemKind = MsItemKind::attribute;
            myMsItemKindString = "xs:attribute";
        }
        else if ( value == MsItemKind::attributeGroup )
        {
            myMsItemKind = MsItemKind::attributeGroup;
            myMsItemKindString = "xs:attributeGroup";
        }
        else if ( value == MsItemKind::complexType )
        {
            myMsItemKind = MsItemKind::complexType;
            myMsItemKindString = "xs:complexType";
        }
        else if ( value == MsItemKind::simpleType )
        {
            myMsItemKind = MsItemKind::simpleType;
            myMsItemKindString = "xs:simpleType";
        }
        else if ( value == MsItemKind::restriction )
        {
            myMsItemKind = MsItemKind::restriction;
            myMsItemKindString = "xs:restriction";
        }
        else if ( value == MsItemKind::sequence )
        {
            myMsItemKind = MsItemKind::sequence;
            myMsItemKindString = "xs:sequence";
        }
        else if ( value == MsItemKind::group )
        {
            myMsItemKind = MsItemKind::group;
            myMsItemKindString = "xs:group";
        }
        else if ( value == MsItemKind::extension )
        {
            myMsItemKind = MsItemKind::extension;
            myMsItemKindString = "xs:extension";
        }
        else if ( value == MsItemKind::simpleContent )
        {
            myMsItemKind = MsItemKind::simpleContent;
            myMsItemKindString = "xs:simpleContent";
        }
        else if ( value == MsItemKind::choice )
        {
            myMsItemKind = MsItemKind::choice;
            myMsItemKindString = "xs:choice";
        }
        else if ( value == MsItemKind::minInclusive )
        {
            myMsItemKind = MsItemKind::minInclusive;
            myMsItemKindString = "xs:minInclusive";
        }
        else if ( value == MsItemKind::maxInclusive )
        {
            myMsItemKind = MsItemKind::maxInclusive;
            myMsItemKindString = "xs:maxInclusive";
        }
        else if ( value == MsItemKind::pattern )
        {
            myMsItemKind = MsItemKind::pattern;
            myMsItemKindString = "xs:pattern";
        }
        else if ( value == MsItemKind::complexContent )
        {
            myMsItemKind = MsItemKind::complexContent;
            myMsItemKindString = "xs:complexContent";
        }
        else if ( value == MsItemKind::union_ )
        {
            myMsItemKind = MsItemKind::union_;
            myMsItemKindString = "xs:union";
        }
        else if ( value == MsItemKind::import )
        {
            myMsItemKind = MsItemKind::import;
            myMsItemKindString = "xs:import";
        }
        else if ( value == MsItemKind::minExclusive )
        {
            myMsItemKind = MsItemKind::minExclusive;
            myMsItemKindString = "xs:minExclusive";
        }
        else if ( value == MsItemKind::schema )
        {
            myMsItemKind = MsItemKind::schema;
            myMsItemKindString = "xs:schema";
        }
        else
        {
            myMsItemKind = MsItemKind::unknown;
            myMsItemKindString = "unknown";
        }
    }
    void MsItem::parseMsItemKind()
    {
        std::string tag = myXpItemPtr->getTag();
        if ( tag == "xs:annotation" )
        {
            setMsItemKind( MsItemKind::annotation );
        }
        else if ( tag == "xs:documentation" )
        {
            setMsItemKind( MsItemKind::documentation );
        }
        else if ( tag == "xs:enumeration" )
        {
            setMsItemKind( MsItemKind::enumeration );
        }
        else if ( tag == "xs:element" )
        {
            setMsItemKind( MsItemKind::element );
        }
        else if ( tag == "xs:attribute" )
        {
            setMsItemKind( MsItemKind::attribute );
        }
        else if ( tag == "xs:attributeGroup" )
        {
            setMsItemKind( MsItemKind::attributeGroup );
        }
        else if ( tag == "xs:complexType" )
        {
            setMsItemKind( MsItemKind::complexType );
        }
        else if ( tag == "xs:simpleType" )
        {
            setMsItemKind( MsItemKind::simpleType );
        }
        else if ( tag == "xs:restriction" )
        {
            setMsItemKind( MsItemKind::restriction );
        }
        else if ( tag == "xs:sequence" )
        {
            setMsItemKind( MsItemKind::sequence );
        }
        else if ( tag == "xs:group" )
        {
            setMsItemKind( MsItemKind::group );
        }
        else if ( tag == "xs:extension" )
        {
            setMsItemKind( MsItemKind::extension );
        }
        else if ( tag == "xs:simpleContent" )
        {
            setMsItemKind( MsItemKind::simpleContent );
        }
        else if ( tag == "xs:choice" )
        {
            setMsItemKind( MsItemKind::choice );
        }
        else if ( tag == "xs:minInclusive" )
        {
            setMsItemKind( MsItemKind::minInclusive );
        }
        else if ( tag == "xs:maxInclusive" )
        {
            setMsItemKind( MsItemKind::maxInclusive );
        }
        else if ( tag == "xs:pattern" )
        {
            setMsItemKind( MsItemKind::pattern );
        }
        else if ( tag == "xs:complexContent" )
        {
            setMsItemKind( MsItemKind::complexContent );
        }
        else if ( tag == "xs:union" )
        {
            setMsItemKind( MsItemKind::union_ );
        }
        else if ( tag == "xs:import" )
        {
            setMsItemKind( MsItemKind::import );
        }
        else if ( tag == "xs:minExclusive" )
        {
            setMsItemKind( MsItemKind::minExclusive );
        }
        else if ( tag == "xs:schema" )
        {
            setMsItemKind( MsItemKind::schema );
        }
        else
        {
            setMsItemKind( MsItemKind::unknown );
        }
    }
    
    void MsItem::setIsImplemented( bool isImplemented )
    {
        myIsImplemented = isImplemented;
    }
    bool MsItem::getIsImplemented() const
    {
        return myIsImplemented;
    }
    
    
    bool operator<( const MsItem& lhs, const MsItem& rhs )
    {
        return lhs.getID() < rhs.getID();
    }
    bool operator>( const MsItem& lhs, const MsItem& rhs )
    {
        return ( operator<( rhs, lhs ) );
    }
    bool operator<=( const MsItem& lhs, const MsItem& rhs )
    {
        return operator<( lhs, rhs) || operator==( lhs, rhs );
    }
    bool operator>=( const MsItem& lhs, const MsItem& rhs )
    {
        return operator<( rhs, lhs) || operator==( lhs, rhs );
    }
    bool operator==( const MsItem& lhs, const MsItem& rhs )
    {
        return lhs.getID() == rhs.getID();
    }
    bool operator!=( const MsItem& lhs, const MsItem& rhs )
    {
        return ! operator==( lhs, rhs );
    }
    
    bool MsItem::getIsFirstClassConcept() const
    {
        return myIsFirstClassConcept;
    }
    
    bool operator<( const MsItemPtr& lhs, const MsItemPtr& rhs )
    {
        if ( ! lhs )
        {
            return true;
        }
        else if ( ! rhs )
        {
            return false;
        }
        return lhs->getID() < rhs->getID();
    }
    bool operator>( const MsItemPtr& lhs, const MsItemPtr& rhs )
    {
        return ( operator<( rhs, lhs ) );
    }
    bool operator<=( const MsItemPtr& lhs, const MsItemPtr& rhs )
    {
        return operator<( lhs, rhs) || operator==( lhs, rhs );
    }
    bool operator>=( const MsItemPtr& lhs, const MsItemPtr& rhs )
    {
        return operator<( rhs, lhs) || operator==( lhs, rhs );
    }
    bool operator==( const MsItemPtr& lhs, const MsItemPtr& rhs )
    {
        if ( ! lhs )
        {
            return false;
        }
        else if ( ! rhs )
        {
            return false;
        }
        return lhs->getID() == rhs->getID();
    }
    bool operator!=( const MsItemPtr& lhs, const MsItemPtr& rhs )
    {
        return ! operator==( lhs, rhs );
    }
    MsItemPtr MsItem::getParent() const
    {
        return myParent;
    }
    void MsItem::setParent( const MsItemPtr& parent )
    {
        if ( parent )
        {
            myParent = parent;
        }
    }
    MsItemSetIter MsItem::getChildrenBegin()
    {
        return myChildren.begin();
    }
    MsItemSetIter MsItem::getChildrenEnd()
    {
        return myChildren.end();
    }
    MsItemSetIterConst MsItem::getChildrenBegin() const
    {
        return myChildren.cbegin();
    }
    MsItemSetIterConst MsItem::getChildrenEnd() const
    {
        return myChildren.cend();
    }
    const MsItemSet& MsItem::getChildren() const
    {
        return myChildren;
    }
    void MsItem::addChild( const MsItemPtr& child )
    {
        myChildren.push_back( child );
    }
    void MsItem::clearChildren()
    {
        myChildren.clear();
    }
    XpItemPtr MsItem::getXpItem() const
    {
        return myXpItemPtr;
    }
    MsItemSet MsItem::buildMsItemWeb( const XpItemPtr& root )
    {
        /*
         xlink:actuate
         xlink:href
         xlink:role
         xlink:show
         xlink:title
         xlink:type
         xml:lang
         xml:space
         xs:anyURI
         xs:ID
         xs:IDREF
         xs:integer
         xs:NMTOKEN
         xs:nonNegativeInteger
         xs:positiveInteger
         xs:string
         xs:token
         */
        int newnodeid = -1;
        addItemToXsd( "xlink:actuate", "xs:simpleType", newnodeid, root );
        addItemToXsd( "xlink:href", "xs:simpleType", newnodeid, root );
        addItemToXsd( "xlink:role", "xs:simpleType", newnodeid, root );
        addItemToXsd( "xlink:show", "xs:simpleType", newnodeid, root );
        addItemToXsd( "xlink:title", "xs:simpleType", newnodeid, root );
        addItemToXsd( "xlink:type", "xs:simpleType", newnodeid, root );
        addItemToXsd( "xml:lang", "xs:simpleType", newnodeid, root );
        addItemToXsd( "xml:space", "xs:simpleType", newnodeid, root );
        addItemToXsd( "xs:anyURI", "xs:simpleType", newnodeid, root );
        addItemToXsd( "xs:ID", "xs:simpleType", newnodeid, root );
        addItemToXsd( "xs:IDREF", "xs:simpleType", newnodeid, root );
        addItemToXsd( "xs:integer", "xs:simpleType", newnodeid, root );
        addItemToXsd( "xs:NMTOKEN", "xs:simpleType", newnodeid, root );
        addItemToXsd( "xs:nonNegativeInteger", "xs:simpleType", newnodeid, root );
        addItemToXsd( "xs:positiveInteger", "xs:simpleType", newnodeid, root );
        addItemToXsd( "xs:string", "xs:simpleType", newnodeid, root );
        addItemToXsd( "xs:token", "xs:simpleType", newnodeid, root );
        addItemToXsd( "xs:decimal", "xs:simpleType", newnodeid, root );
        MsItemSet output;
        
        constructMsItemWebScaffold( root, output );
        if ( output.size() > 0 )
        {
            MsItemPtr msitemroot = *( output.begin() );
            buildMsItemWebRecursive( msitemroot, output );
        }
        return output;
    }
    void MsItem::addItemToXsd( const std::string& name, const std::string& tag, int& nodeid, const XpItemPtr& root )
    {
        XpItemPtr newitem( std::make_shared<XpItem>( tag, "", root.get(), nodeid ) );
        newitem->addProperty( std::make_shared<XpProperty>( "name", name ) );
        root->addChild( newitem );
        --nodeid;
    }
    void MsItem::constructMsItemWebScaffold( const XpItemPtr& root, MsItemSet& output )
    {
        MsItem temp( root );
        if ( temp.getMsItemKind() == MsItemKind::simpleType )
        {
            output.push_back( std::make_shared<MsItemSimpleType>( root ) );
        }
        else
        {
            output.push_back( std::make_shared<MsItem>( root ) );
        }
        
        for ( auto x : root->getChildren() )
        {
            constructMsItemWebScaffold( x, output );
        }
    }
    void MsItem::buildMsItemWebRecursive( const MsItemPtr& current, MsItemSet& web )
    {
        if ( current )
        {
            //int parentID = -1; //current->getID();
            if ( current->getXpItem()->getParent() )
            {
                int parentID = current->getXpItem()->getParent()->getID();
                auto parentIter = std::find_if( web.begin(), web.end(), [parentID] (const MsItemPtr& x) { return x->getID() == parentID; });
                if( parentIter != web.cend() )
                {
                    current->setParent( *parentIter );
                }
            }
            else
            {
                current->setParent( nullptr );
            }
            
            for ( auto childxp = current->getXpItem()->getChildrenBegin();
                 childxp != current->getXpItem()->getChildrenEnd();
                 ++childxp )
            {
                int childID = (*childxp)->getID();
                auto childIter = std::find_if( web.begin(), web.end(), [childID] (const MsItemPtr& x) { return x->getID() == childID; });
                auto child = *childIter;
                current->addChild( child );
                buildMsItemWebRecursive( child, web );
            }
        }
    }
    
    MsItemKind MsItem::getMsItemKind() const
    {
        return myMsItemKind;
    }
    
    void MsItem::parseSpecialCases()
    {
        switch ( getID() )
        {
            case -1:
            {
                myDtDef = "xlink:actuate";
                myIsSpecialCase = true;
                myIsFirstClassConcept = true;
                setMsItemKind( MsItemKind::simpleType );
            }
                break;
            case -2:
            {
                myDtDef = "xlink:href";
                myIsSpecialCase = true;
                myIsFirstClassConcept = true;
                setMsItemKind( MsItemKind::simpleType );
            }
                break;
            case -3:
            {
                myDtDef = "xlink:role";
                myIsSpecialCase = true;
                myIsFirstClassConcept = true;
                setMsItemKind( MsItemKind::simpleType );
            }
                break;
            case -4:
            {
                myDtDef = "xlink:show";
                myIsSpecialCase = true;
                myIsFirstClassConcept = true;
                setMsItemKind(  MsItemKind::simpleType );
            }
                break;
            case -5:
            {
                myDtDef = "xlink:title";
                myIsSpecialCase = true;
                myIsFirstClassConcept = true;
                setMsItemKind(  MsItemKind::simpleType );
            }
                break;
            case -6:
            {
                myDtDef = "xlink:type";
                myIsSpecialCase = true;
                myIsFirstClassConcept = true;
                setMsItemKind(  MsItemKind::simpleType );
            }
                break;
            case -7:
            {
                myDtDef = "xml:lang";
                myIsSpecialCase = true;
                myIsFirstClassConcept = true;
                setMsItemKind(  MsItemKind::simpleType );
            }
                break;
            case -8:
            {
                myDtDef = "xml:space";
                myIsSpecialCase = true;
                myIsFirstClassConcept = true;
                setMsItemKind(  MsItemKind::simpleType );
            }
                break;
            case -9:
            {
                myDtDef = "xs:anyURI";
                myIsSpecialCase = true;
                myIsFirstClassConcept = true;
                setMsItemKind(  MsItemKind::simpleType );
            }
                break;
            case -10:
            {
                myDtDef = "xs:ID";
                myIsSpecialCase = true;
                myIsFirstClassConcept = true;
                setMsItemKind(  MsItemKind::simpleType );
            }
                break;
            case -11:
            {
                myDtDef = "xs:IDREF";
                myIsSpecialCase = true;
                myIsFirstClassConcept = true;
                setMsItemKind(  MsItemKind::simpleType );
            }
                break;
            case -12:
            {
                myDtDef = "xs:integer";
                myIsSpecialCase = true;
                myIsFirstClassConcept = true;
                setMsItemKind(  MsItemKind::simpleType );
            }
                break;
            case -13:
            {
                myDtDef = "xs:NMTOKEN";
                myIsSpecialCase = true;
                myIsFirstClassConcept = true;
                setMsItemKind(  MsItemKind::simpleType );
            }
                break;
            case -14:
            {
                myDtDef = "xs:nonNegativeInteger";
                myIsSpecialCase = true;
                myIsFirstClassConcept = true;
                myIsImplemented = true;
                setMsItemKind(  MsItemKind::simpleType );
            }
                break;
            case -15:
            {
                myDtDef = "xs:positiveInteger";
                myIsSpecialCase = true;
                myIsFirstClassConcept = true;
                myIsImplemented = true;
                setMsItemKind(  MsItemKind::simpleType );
            }
                break;
            case -16:
            {
                myDtDef = "xs:string";
                myIsSpecialCase = true;
                myIsFirstClassConcept = true;
                setMsItemKind(  MsItemKind::simpleType );
            }
                break;
            case -17:
            {
                myDtDef = "xs:token";
                myIsSpecialCase = true;
                myIsFirstClassConcept = true;
                setMsItemKind(  MsItemKind::simpleType );
            }
                break;
            case 279:
            {
                // number-or-normal
                myIsSpecialCase = true;
                myIsFirstClassConcept = true;
                // setMsItemKind(  MsItemKind::unknown );
            }
                break;
            case 283:
            {
                // myDtDef = "xs:decimal";
                myIsSpecialCase = true;
                myIsFirstClassConcept = false;
                // setMsItemKind(  MsItemKind::unknown );
            }
                break;
            case 285:
            {
                myDtDef = "number-or-normal-enumeration";
                myIsFirstClassConcept = false;
                myIsSpecialCase = true;
                setMsItemKind(  MsItemKind::unknown );
            }
                break;
            case 326:
            {
                // positive-integer-or-empty
                myIsFirstClassConcept = true;
                myIsSpecialCase = true;
                // setMsItemKind(  MsItemKind::simpleType );
            }
                break;
            case 330:
            {
                // myDtDef = "xs:positiveInteger";
                myIsFirstClassConcept = false;
                myIsSpecialCase = true;
                // setMsItemKind(  MsItemKind::unknown );
            }
                break;
            case 332:
            {
                myDtDef = "positive-integer-or-empty-enumeration";
                myIsFirstClassConcept = false;
                myIsSpecialCase = true;
                setMsItemKind(  MsItemKind::unknown );
            }
                break;
            case 1297:
            {
                // myDtDef = "line-width-type";
                myIsSpecialCase = true;
                // setMsItemKind(  MsItemKind::simpleType );
                /* this is a badly defined enum that can also take custom values */
            }
                break;
            case 2031:
            {
                // myDtDef = "xml:lang";
                myIsFirstClassConcept = false;
                myIsSpecialCase = true;
                // setMsItemKind(  MsItemKind::unknown );
            }
                break;
            case 2033:
            {
                // myDtDef = "xml:space";
                myIsFirstClassConcept = false;
                myIsSpecialCase = true;
                // setMsItemKind(  MsItemKind::unknown );
            }
                break;
            case 2168:
            {
                // myDtDef = "xlink:href";
                myIsFirstClassConcept = false;
                myIsSpecialCase = true;
                // setMsItemKind(  MsItemKind::unknown );
            }
                break;
            case 2171:
            {
                // myDtDef = "xlink:type";
                myIsFirstClassConcept = false;
                myIsSpecialCase = true;
                // setMsItemKind(  MsItemKind::unknown );
            }
                break;
            case 2174:
            {
                // myDtDef = "xlink:role";
                myIsFirstClassConcept = false;
                myIsSpecialCase = true;
                // setMsItemKind(  MsItemKind::unknown );
            }
                break;
            case 2176:
            {
                // myDtDef = "xlink:title";
                myIsFirstClassConcept = false;
                myIsSpecialCase = true;
                // setMsItemKind(  MsItemKind::unknown );
            }
                break;
            case 2178:
            {
                // myDtDef = "xlink:show";
                myIsFirstClassConcept = false;
                myIsSpecialCase = true;
                // setMsItemKind(  MsItemKind::unknown );
            }
                break;
            case 2181:
            {
                // myDtDef = "xlink:actuate";
                myIsFirstClassConcept = false;
                myIsSpecialCase = true;
                //  setMsItemKind(  MsItemKind::unknown );
            }
                break;
            case 2679:
            {
                // myDtDef = "xml:lang";
                myIsFirstClassConcept = false;
                myIsSpecialCase = true;
                // setMsItemKind(  MsItemKind::unknown );
            }
                break;
            case 5452:
            {
                // myDtDef = "xml:lang";
                myIsFirstClassConcept = false;
                myIsSpecialCase = true;
                // setMsItemKind(  MsItemKind::unknown );
            }
                break;
            case 5473:
            {
                // myDtDef = "xml:lang";
                myIsFirstClassConcept = false;
                myIsSpecialCase = true;
                // setMsItemKind(  MsItemKind::unknown );
            }
                break;
            case 5789:
            {
                // myDtDef = "xml:lang";
                myIsFirstClassConcept = false;
                myIsSpecialCase = true;
                // setMsItemKind(  MsItemKind::unknown );
            }
                break;

            default:
                break;
        }
        std::set<int> ex{ 35,
            43,
            113,
            449,
            555,
            561,
            607,
            741,
            1291,
            310,
            318 };
        if ( std::find( ex.begin(), ex.end(), getID() ) != ex.end() )
        {
            myIsSpecialCase = true;
        }
    }
    bool MsItem::getInherits() const
    {
        return bool(myInheritedDt);
    }
    MsItemPtr MsItem::getInheritedMsItem() const
    {
        return myInheritedDt;
    }
    std::string MsItem::csv() const
    {
        char c = ',';
        std::stringstream ss;
        ss << getIsImplemented() << c;
        ss << getID() << c;
        ss << getDtDef() << c;
        ss << std::boolalpha << getIsFirstClassConcept() << c;
        ss << std::boolalpha << getIsSpecialCase() << c;
        ss << getMsItemKindString() << c;
        if ( getInherits() )
        {
            ss << ( getInheritedMsItem()->getDtDef() );
        }
        ss << c;
        ss << getInheritedMsItemKindString() << c;
        ss << getXml() << c;
        return ss.str();
    }
    
    void MsItem::parseInheritence( MsItemSet& web, const MsItemPtr& itemToParse )
    {
//        if ( (itemToParse->getDtDef() == "bracket" ||
//              itemToParse->getDtDef() == "sound" ) && itemToParse->getMsItemKind() == MsItemKind::element )
//        {
//            int xyz = 0;
//            ++xyz;
//        }
        MsItemPtr item = itemToParse;
        if ( item->getXpItem() )
        {
            XpItemPtr xpitem = item->getXpItem();
            if ( xpitem->hasProperties() )
            {
                for ( auto p : xpitem->getProperties() )
                {
                    if ( p )
                    {
                        if ( p->getLabel() == "ref" || p->getLabel() == "type" || p->getLabel() == "base" )
                        {
                            std::string supertype = p->getValue();
                            auto found  = web.end();
                            if ( supertype.length() > 4 &&
                                    (
                                        supertype.substr(0,3) == "xs:" ||
                                        supertype.substr(0,4) == "xml:" ||
                                        supertype.substr(0,5) == "xlink:"
                                    )
                                )
                            {
                                found = std::find_if( web.begin(),
                                                     web.end(),
                                                     [ &supertype ](const MsItemPtr& predicateitem){ return predicateitem->getID() < 0 && ( predicateitem->getDtDef() == supertype && predicateitem->getMsItemKind() != MsItemKind::element ); } );
                            }
                            else
                            {
//                                found = std::find_if( web.begin(),
//                                                     web.end(),
//                                                     [ &supertype ](const MsItemPtr& predicateitem){ return predicateitem->getDtDef() == supertype && ( predicateitem->getMsItemKind() == MsItemKind::complexType
//                                                                                                                                                       || predicateitem->getMsItemKind() != MsItemKind::simpleType
//                                                                                                                                                       || predicateitem->getMsItemKind() != MsItemKind::group
//                                                                                                                                                       || predicateitem->getMsItemKind() != MsItemKind::sequence
//                                                                                                                                                       || predicateitem->getMsItemKind() != MsItemKind::choice
//                                                                                                                                                       || predicateitem->getMsItemKind() != MsItemKind::pattern
//                                                                                                                                                       || predicateitem->getMsItemKind() != MsItemKind::union_
//                                                                                                                                                       ); } );
                                auto b = web.begin();
                                auto e = web.end();
                                auto it = b;
                                for( ; it != e; ++it )
                                {
                                    if ( (*it)->getDtDef() == supertype && (*it)->getMsItemKind() == MsItemKind::simpleType )
                                    {
                                        found = (it);
                                        break;
                                    }
                                }
                                if ( found == e )
                                {
                                    for( it = b; it != e; ++it )
                                    {
                                        if ( (*it)->getDtDef() == supertype && (*it)->getMsItemKind() == MsItemKind::complexType )
                                        {
                                            found = (it);
                                            break;
                                        }
                                    }
                                }
                                if ( found == e )
                                {
                                    for( it = b; it != e; ++it )
                                    {
                                        if ( (*it)->getDtDef() == supertype && (*it)->getMsItemKind() == MsItemKind::group )
                                        {
                                            found = (it);
                                            break;
                                        }
                                    }
                                }
                                if ( found == e )
                                {
                                    for( it = b; it != e; ++it )
                                    {
                                        if ( (*it)->getDtDef() == supertype &&
                                            ( (*it)->getMsItemKind() == MsItemKind::sequence ||
                                             (*it)->getMsItemKind() == MsItemKind::choice ||
                                             (*it)->getMsItemKind() == MsItemKind::union_ ||
                                             (*it)->getMsItemKind() == MsItemKind::pattern ||
                                             (*it)->getMsItemKind() == MsItemKind::unknown ) )
                                        {
                                            found = (it);
                                            break;
                                        }
                                    }
                                }
                            }
                            
                            if ( found != web.end() )
                            {
                                item->setInheritedMsItem( *found );
                            }
                        }
                    }
                }
                if ( item->getInheritedMsItem().get() == nullptr ) /* it was not found
                                                   try complex type ref */
                {
                    if ( item->getMsItemKind() == MsItemKind::complexType )
                    {
                        for ( auto cmplxChild : item->getChildren() )
                        {
                            if ( cmplxChild->getMsItemKind() == MsItemKind::simpleContent )
                            {
                                for ( auto smplcChild : cmplxChild->getChildren() )
                                {
                                    if ( smplcChild->getMsItemKind() == MsItemKind::extension )
                                    {
                                        for ( auto smplcProp : smplcChild->getXpItem()->getProperties() )
                                        {
                                            if ( smplcProp->getLabel() == "base" )
                                            {
                                                std::string exbase = smplcProp->getValue();
                                                MsItemPtr refMsItemPtr = findItemByNameAndKind( exbase, MsItemKind::simpleType, item );
                                                if ( refMsItemPtr )
                                                {
                                                    return;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    void MsItem::setInheritedMsItem( const MsItemPtr& inheriteditem )
    {
        myInheritedDt = inheriteditem;
    }
    void MsItem::resolveInheritenceInWeb( MsItemSet& web )
    {
        for ( auto i : web )
        {
            MsItem::parseInheritence( web, i );
        }
    }
    MsItemKind MsItem::getInheritedMsItemKind() const
    {
        if ( myInheritedDt )
        {
            return myInheritedDt->getMsItemKind();
        }
        return MsItemKind::unknown;
    }
    std::string MsItem::getXml() const
    {
        std::stringstream ss;
        this->getXpItem()->stream( ss, 0 );
        std::string rawXml = ss.str();
        std::stringstream buffer;
        for ( auto c : rawXml )
        {
            if ( c != ',' && c != '\n' && c != '\r' )
            {
                buffer << c;
            }
        }
        return buffer.str();
    }
    std::string MsItem::getInheritedMsItemKindString() const
    {
        if ( myInheritedDt )
        {
            return myInheritedDt->getMsItemKindString();
        }
        return "unknown";
    }
    std::string MsItem::csvHeaders() const
    {
        char c = ',';
        std::stringstream ss;
        ss << "Implemented" << c;
        ss << "getID" << c;
        ss << "getDtDef" << c;
        ss << std::boolalpha << "getIsFirstClassConcept" << c;
        ss << std::boolalpha << "getIsSpecialCase" << c;
        ss << "getMsItemKindString" << c;
        ss << "getInheritedDtDef" << c;
        ss << "getInheritedMsItemKindString" << c;
        ss << "Xml" << c;
        return ss.str();
    }
    std::string toString( const MsItemSet& input )
    {
        std::string output;
        std::stringstream ss;
        if ( input.size() > 0 )
        {
            auto it = input.cbegin();
            auto endit = input.cend();
            
            ss << (*it)->csvHeaders() << std::endl;
            for (; it != endit; ++it )
            {
                ss << (*it)->csv() << std::endl;
            }
        }
        output = ss.str();
        return output;
    }
    MsItemPtr MsItem::getRoot() const
    {
        MsItemPtr top = std::make_shared<MsItem>( *this );
        MsItemPtr current = std::make_shared<MsItem>( *this );
        if ( this->getParent() )
        {

            while ( current->getParent() )
            {
                top = current->getParent();
                current = current->getParent();
            }
        }
        return top;
    }
    std::string MsItem::getCppName() const
    {
        return myCppName;
    }
    void findSubElementsRecursively( const MsItemPtr& searchthis, MsItemSet& output, const int parentMsItemID )
    {
        if ( searchthis->getMsItemKind() == MsItemKind::element && searchthis->getID() != parentMsItemID )
        {
            output.push_back( searchthis );
        }
        if ( searchthis->getXpItem()->getProperties().size() > 0 )
        {
            std::string ref = "";
            for ( auto prop : searchthis->getXpItem()->getProperties() )
            {
                if ( prop->getLabel() == "ref" || prop->getLabel() == "type" || prop->getLabel() == "base" )
                {
                    ref = prop->getValue();
                    break;
                }
            }
            if ( ref.length() > 0 && !isGroupDefinition( searchthis ) )
            {
                MsItemPtr refItem;
                if ( searchthis->getMsItemKind() == MsItemKind::group )
                {
                    if ( ! isGroupDefinition( searchthis ) )
                    {
                        refItem = findItemByNameAndKind( ref, MsItemKind::group, searchthis );
                    }
                }
                if ( !refItem ) // && searchthis->getMsItemKind() != MsItemKind::complexType )
                {
                    refItem = findItemByNameAndKind( ref, MsItemKind::complexType, searchthis );
                }
                if ( refItem )
                {
                    findSubElementsRecursively( refItem, output, parentMsItemID );
                }
            }
        }
        if ( searchthis->getChildren().size() > 0 )
        {
            for ( auto child : searchthis->getChildren() )
            {
                findSubElementsRecursively( child, output, parentMsItemID );
            }
        }
    }
    MsItemSet findSubElementsXXX( const MsItemPtr& parent )
    {
        MsItemSet output;
        findSubElementsRecursively( parent, output, parent->getID() );
        return output;
    }
    bool isGroupDefinition( const MsItemPtr& item )
    {
        if ( item->getMsItemKind() == MsItemKind::group )
        {
            if ( item->getXpItem()->getProperties().size() == 1 )
            {
                if ( (*(item->getXpItem()->getProperties().cbegin()))->getLabel() == "name" )
                {
                    return true;
                }
            }
        }
        return false;
    }
    void MsItem::parseCppName()
    {
        std::string xmlName = MsItem::getDtDef();
        if ( xmlName.length() == 0 )
        {
            std::stringstream ss;
            ss << "Node" << MsItem::getID();
            xmlName = ss.str();
        }
        std::string name = camelCase( xmlName, true );
        if ( isCppKeyword( name ) )
        {
            name = name + "_";
        }
        myCppName = name;
    }
}