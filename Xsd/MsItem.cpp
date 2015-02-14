/* matthew james briggs */

#include "MsItem.h"

namespace xsd
{
    /* ctor */
    MsItem::MsItem( const XpItemPtr& xpItemPtr )
    :myXpItemPtr( xpItemPtr )
    ,myDtDef( "" )
    ,myMsItemKind( MsItemKind::unknown )
    ,myIsImplemented( false )
    ,myIsFirstClassConcept( false )
    ,myParent( nullptr )
    ,myIsSpecialCase( false )
    {
        if ( xpItemPtr )
        {
            parseDtDef();
            parseMsItemKind();
            parseIsFirstClassConcept();
            parseSpecialCases();
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
                    return;
                }
            }
        }
    }
    void MsItem::parseMsItemKind()
    {
        std::string tag = myXpItemPtr->getTag();
        if ( tag == "xs:annotation" )
        {
            myMsItemKind = MsItemKind::annotation;
        }
        else if ( tag == "xs:documentation" )
        {
            myMsItemKind = MsItemKind::documentation;
        }
        else if ( tag == "xs:enumeration" )
        {
            myMsItemKind = MsItemKind::enumeration;
        }
        else if ( tag == "xs:element" )
        {
            myMsItemKind = MsItemKind::element;
        }
        else if ( tag == "xs:attribute" )
        {
            myMsItemKind = MsItemKind::attribute;
        }
        else if ( tag == "xs:attributeGroup" )
        {
            myMsItemKind = MsItemKind::attributeGroup;
        }
        else if ( tag == "xs:complexType" )
        {
            myMsItemKind = MsItemKind::complexType;
        }
        else if ( tag == "xs:simpleType" )
        {
            myMsItemKind = MsItemKind::simpleType;
        }
        else if ( tag == "xs:restriction" )
        {
            myMsItemKind = MsItemKind::restriction;
        }
        else if ( tag == "xs:sequence" )
        {
            myMsItemKind = MsItemKind::sequence;
        }
        else if ( tag == "xs:group" )
        {
            myMsItemKind = MsItemKind::group;
        }
        else if ( tag == "xs:extension" )
        {
            myMsItemKind = MsItemKind::extension;
        }
        else if ( tag == "xs:simpleContent" )
        {
            myMsItemKind = MsItemKind::simpleContent;
        }
        else if ( tag == "xs:choice" )
        {
            myMsItemKind = MsItemKind::choice;
        }
        else if ( tag == "xs:minInclusive" )
        {
            myMsItemKind = MsItemKind::minInclusive;
        }
        else if ( tag == "xs:maxInclusive" )
        {
            myMsItemKind = MsItemKind::maxInclusive;
        }
        else if ( tag == "xs:pattern" )
        {
            myMsItemKind = MsItemKind::pattern;
        }
        else if ( tag == "xs:complexContent" )
        {
            myMsItemKind = MsItemKind::complexContent;
        }
        else if ( tag == "xs:union" )
        {
            myMsItemKind = MsItemKind::union_;
        }
        else if ( tag == "xs:import" )
        {
            myMsItemKind = MsItemKind::import;
        }
        else if ( tag == "xs:minExclusive" )
        {
            myMsItemKind = MsItemKind::minExclusive;
        }
        else if ( tag == "xs:schema" )
        {
            myMsItemKind = MsItemKind::schema;
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
        output.push_back( std::make_shared<MsItem>( root ) );
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
                myDtDef = "xlink:href";
                myIsSpecialCase = true;
                myIsFirstClassConcept = true;
                myMsItemKind =  MsItemKind::simpleType;
            }
                break;
            case -2:
            {
                myDtDef = "xlink:role";
                myIsSpecialCase = true;
                myIsFirstClassConcept = true;
                myMsItemKind =  MsItemKind::simpleType;
            }
                break;
            case -3:
            {
                myDtDef = "xlink:show";
                myIsSpecialCase = true;
                myIsFirstClassConcept = true;
                myMsItemKind =  MsItemKind::simpleType;
            }
                break;
            case -4:
            {
                myDtDef = "xlink:title";
                myIsSpecialCase = true;
                myIsFirstClassConcept = true;
                myMsItemKind =  MsItemKind::simpleType;
            }
                break;
            case -5:
            {
                myDtDef = "xlink:type";
                myIsSpecialCase = true;
                myIsFirstClassConcept = true;
                myMsItemKind =  MsItemKind::simpleType;
            }
                break;
            case -6:
            {
                myDtDef = "xml:lang";
                myIsSpecialCase = true;
                myIsFirstClassConcept = true;
                myMsItemKind =  MsItemKind::simpleType;
            }
                break;
            case -7:
            {
                myDtDef = "xml:space";
                myIsSpecialCase = true;
                myIsFirstClassConcept = true;
                myMsItemKind =  MsItemKind::simpleType;
            }
                break;
            case -8:
            {
                myDtDef = "xs:anyURI";
                myIsSpecialCase = true;
                myIsFirstClassConcept = true;
                myMsItemKind =  MsItemKind::simpleType;
            }
                break;
            case -9:
            {
                myDtDef = "xs:ID";
                myIsSpecialCase = true;
                myIsFirstClassConcept = true;
                myMsItemKind =  MsItemKind::simpleType;
            }
                break;
            case -10:
            {
                myDtDef = "xs:IDREF";
                myIsSpecialCase = true;
                myIsFirstClassConcept = true;
                myMsItemKind =  MsItemKind::simpleType;
            }
                break;
            case -11:
            {
                myDtDef = "xs:integer";
                myIsSpecialCase = true;
                myIsFirstClassConcept = true;
                myMsItemKind =  MsItemKind::simpleType;
            }
                break;
            case -12:
            {
                myDtDef = "xs:NMTOKEN";
                myIsSpecialCase = true;
                myIsFirstClassConcept = true;
                myMsItemKind =  MsItemKind::simpleType;
            }
                break;
            case -13:
            {
                myDtDef = "xs:nonNegativeInteger";
                myIsSpecialCase = true;
                myIsFirstClassConcept = true;
                myMsItemKind =  MsItemKind::simpleType;
            }
                break;
            case -14:
            {
                myDtDef = "xs:positiveInteger";
                myIsSpecialCase = true;
                myIsFirstClassConcept = true;
                myMsItemKind =  MsItemKind::simpleType;
            }
                break;
            case -15:
            {
                myDtDef = "xs:string";
                myIsSpecialCase = true;
                myIsFirstClassConcept = true;
                myMsItemKind =  MsItemKind::simpleType;
            }
                break;
            case -16:
            {
                myDtDef = "xs:token";
                myIsSpecialCase = true;
                myIsFirstClassConcept = true;
                myMsItemKind =  MsItemKind::simpleType;
            }
                break;
            case 279:
            {
                // number-or-normal
                myIsSpecialCase = true;
                myIsFirstClassConcept = true;
                myMsItemKind =  MsItemKind::unknown;
            }
                break;
            case 283:
            {
                myDtDef = "xs:decimal";
                myIsSpecialCase = true;
                myIsFirstClassConcept = false;
                myMsItemKind =  MsItemKind::unknown;
            }
                break;
            case 285:
            {
                myDtDef = "xs:token";
                myIsFirstClassConcept = false;
                myIsSpecialCase = true;
                myMsItemKind =  MsItemKind::unknown;
            }
                break;
            case 326:
            {
                // positive-integer-or-empty
                myIsFirstClassConcept = true;
                myIsSpecialCase = true;
                myMsItemKind =  MsItemKind::simpleType;
            }
                break;
            case 330:
            {
                myDtDef = "xs:positiveInteger";
                myIsFirstClassConcept = false;
                myIsSpecialCase = true;
                myMsItemKind =  MsItemKind::unknown;
            }
                break;
            case 332:
            {
                myDtDef = "xs:string";
                myIsFirstClassConcept = false;
                myIsSpecialCase = true;
                myMsItemKind =  MsItemKind::unknown;
            }
                break;
            case 2031:
            {
                myDtDef = "xml:lang";
                myIsSpecialCase = true;
            }
                break;
            case 2033:
            {
                myDtDef = "xml:space";
                myIsSpecialCase = true;
            }
                break;
            case 2168:
            {
                myDtDef = "xlink:href";
                myIsSpecialCase = true;
            }
                break;
            case 2171:
            {
                myDtDef = "xlink:type";
                myIsSpecialCase = true;
            }
                break;
            case 2174:
            {
                myDtDef = "xlink:role";
                myIsSpecialCase = true;
            }
                break;
            case 2176:
            {
                myDtDef = "xlink:title";
                myIsSpecialCase = true;
            }
                break;
            case 2178:
            {
                myDtDef = "xlink:show";
                myIsSpecialCase = true;
            }
                break;
            case 2181:
            {
                myDtDef = "xlink:actuate";
                myIsSpecialCase = true;
            }
                break;
            case 2679:
            {
                myDtDef = "xml:lang";
                myIsSpecialCase = true;
            }
                break;
            case 5452:
            {
                myDtDef = "xml:lang";
                myIsSpecialCase = true;
            }
                break;
            case 5473:
            {
                myDtDef = "xml:lang";
                myIsSpecialCase = true;
            }
                break;
            case 5789:
            {
                myDtDef = "xml:lang";
                myIsSpecialCase = true;
            }
                break;

            default:
                break;
        }
    }
    
    std::string MsItem::csv() const
    {
        char c = ',';
        std::stringstream ss;
        ss << getID() << c;
        ss << getDtDef() << c;
        ss << std::boolalpha << getIsFirstClassConcept() << c;
        ss << std::boolalpha << getIsSpecialCase() << c;
        ss << getMsItemKindString() << c;
        return ss.str();
    }
    std::string MsItem::csvHeaders() const
    {
        char c = ',';
        std::stringstream ss;
        ss << "getID" << c;
        ss << "getDtDef" << c;
        ss << std::boolalpha << "getIsFirstClassConcept" << c;
        ss << std::boolalpha << "getIsSpecialCase" << c;
        ss << "getMsItemKindString" << c;
        return ss.str();
    }
}