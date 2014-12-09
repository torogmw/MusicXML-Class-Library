/* See MusicXML License at the bottom of this code page. */

/* matthew james briggs */

#include "mainDoLoadSimpleTypes.h"
#include "AttributeInfoV2.h"
#include "ExecuteQuery.h"
//#include "LexiconBaseObjects.h"
//#include "MxNumber.h"
#include "AttGrpInfo.h"
#include <memory>
#include "end.h"
#include "AttGrpBldr.h"

using namespace lexicon;

namespace XsdClasses
{
    /* ctor */
    AttributeInfoV2::AttributeInfoV2()
    :myAttributeGroupID( -1 )
    ,myAttributeID( -1 )
    ,myAttributeXmlName( "unknown" )
    ,myAttributeCppName( "unknown" )
    ,myAttributeTypeCategory( "unknown" )
    ,myAttributeXmlType( "unknown" )
    ,myAttributeCppType( "unknown" )
    ,myHasDefault( false )
    ,myDefaultValue( "" )
    ,myIsRequired( false )
    ,myIsRef( false )
    ,myRef( "" )
    ,myIsFixed( false )
    ,myObject()
    ,myFuncGetValueExists( false )
    ,myFuncGetValue()
    ,myFuncSetValueExists( false )
    ,myFuncSetValue()
    ,myFuncGetIsRequiredExists( false )
    ,myFuncGetIsRequired()
    ,myFuncGetIsPresentExists( false )
    ,myFuncGetIsPresent()
    ,myFuncSetIsPresentExists( false )
    ,myFuncSetIsPresent()
    ,myFuncGetHasDefaultExists( false )
    ,myFuncGetHasDefault()
    ,myFuncGetDefaultValueExists( false )
    ,myFuncGetDefaultValue()
    {
        
    }
    
    AttributeInfoV2::AttributeInfoV2( const mysqlpp::Row& row )
    :myAttributeGroupID( -1 )
    ,myAttributeID( -1 )
    ,myAttributeXmlName( "unknown" )
    ,myAttributeCppName( "unknown" )
    ,myAttributeTypeCategory( "unknown" )
    ,myAttributeXmlType( "unknown" )
    ,myAttributeCppType( "unknown" )
    ,myHasDefault( false )
    ,myDefaultValue( "" )
    ,myIsRequired( false )
    ,myIsRef( false )
    ,myRef( "" )
    ,myIsFixed( false )
    ,myObject()
    ,myFuncGetValueExists( false )
    ,myFuncGetValue()
    ,myFuncSetValueExists( false )
    ,myFuncSetValue()
    ,myFuncGetIsRequiredExists( false )
    ,myFuncGetIsRequired()
    ,myFuncGetIsPresentExists( false )
    ,myFuncGetIsPresent()
    ,myFuncSetIsPresentExists( false )
    ,myFuncSetIsPresent()
    ,myFuncGetHasDefaultExists( false )
    ,myFuncGetHasDefault()
    ,myFuncGetDefaultValueExists( false )
    ,myFuncGetDefaultValue()
    {
        this->set( row );
        getObject();
    }
    
    /* dtor */
    AttributeInfoV2::~AttributeInfoV2() {}
    
    HAttGrpBldr AttributeInfoV2::getParentAttGrpBldr() const
    {
        return myParentAttGrpBldr;
    }
    void AttributeInfoV2::setParentAttGrpBldr( HAttGrpBldr parentAttGrpInfo )
    {
        myParentAttGrpBldr = parentAttGrpInfo;
    }
    
    void AttributeInfoV2::selectAttributeGroupAttributes(Attributes &output)
    {
        std::string select = "SELECT AttributeGroupID,AttributeID,AttributeXmlName,AttributeCppName,AttributeTypeCategory,AttributeXmlType,AttributeCppType,HasDefault,DefaultValue,IsRequired,IsRef,Ref,IsFixed FROM attributeGroupAttributes ORDER BY AttributeGroupID, AttributeID;";
        mysqlpp::StoreQueryResult res = mysqlpp::ExecuteQuery( constants::getSqlConnectionValues(), select );
        for ( auto it = res.begin(); it != res.end(); ++it )
        {
            mysqlpp::Row row = *it;
            output.push_back( AttributeInfoV2( row ) );
        }
    }
    
    int AttributeInfoV2::getAttributeGroupID() const
    {
        return myAttributeGroupID;
    }
    int AttributeInfoV2::getAttributeID() const
    {
        return myAttributeID;
    }
    std::string AttributeInfoV2::getAttributeXmlName() const
    {
        return myAttributeXmlName;
    }
    std::string AttributeInfoV2::getAttributeCppName() const
    {
        return myAttributeCppName;
    }
    std::string AttributeInfoV2::getAttributeTypeCategory() const
    {
        return myAttributeTypeCategory;
    }
    std::string AttributeInfoV2::getAttributeXmlType() const
    {
        return myAttributeXmlType;
    }
    std::string AttributeInfoV2::getAttributeCppType() const
    {
        return myAttributeCppType;
    }
    bool AttributeInfoV2::getHasDefault() const
    {
        return myHasDefault;
    }
    std::string AttributeInfoV2::getDefaultValue() const
    {
        return myDefaultValue;
    }
    bool AttributeInfoV2::getIsRequired() const
    {
        return myIsRequired;
    }
    bool AttributeInfoV2::getIsRef() const
    {
        return myIsRef;
    }
    std::string AttributeInfoV2::getRef() const
    {
        return myRef;
    }
    bool AttributeInfoV2::getIsFixed() const
    {
        return myIsFixed;
    }
    
    void AttributeInfoV2::setAttributeGroupID( const int value )
    {
        myAttributeGroupID = value;
    }
    void AttributeInfoV2::setAttributeID( const int value )
    {
        myAttributeID = value;
    }
    void AttributeInfoV2::setAttributeXmlName( const std::string& value )
    {
        myAttributeXmlName = value;
    }
    void AttributeInfoV2::setAttributeCppName( const std::string& value )
    {
        myAttributeCppName = value;
    }
    void AttributeInfoV2::setAttributeTypeCategory( const std::string& value )
    {
        myAttributeTypeCategory = value;
    }
    void AttributeInfoV2::setAttributeXmlType( const std::string& value )
    {
        myAttributeXmlType = value;
    }
    void AttributeInfoV2::setAttributeCppType( const std::string& value )
    {
        myAttributeCppType = value;
    }
    void AttributeInfoV2::setHasDefault( const bool value )
    {
        myHasDefault = value;
    }
    void AttributeInfoV2::setDefaultValue( const std::string& value )
    {
        myDefaultValue = value;
    }
    void AttributeInfoV2::setIsRequired( const bool value )
    {
        myIsRequired = value;
    }
    void AttributeInfoV2::setIsRef( const bool value )
    {
        myIsRef = value;
    }
    void AttributeInfoV2::setRef( const std::string& value )
    {
        myRef = value;
    }
    void AttributeInfoV2::setIsFixed(bool value)
    {
        myIsFixed = value;
    }
    
    void AttributeInfoV2::set( const mysqlpp::Row& row )
    {
        setAttributeGroupID( mysqlpp::getFieldInt( row, "AttributeGroupID" ) );
        setAttributeID( mysqlpp::getFieldInt( row, "AttributeID" ) );
        setAttributeXmlName( mysqlpp::getFieldString( row, "AttributeXmlName" ) );
        setAttributeCppName( mysqlpp::getFieldString( row, "AttributeCppName" ) );
        setAttributeTypeCategory( mysqlpp::getFieldString( row, "AttributeTypeCategory" ) );
        setAttributeXmlType( mysqlpp::getFieldString( row, "AttributeXmlType" ) );
        setAttributeCppType( mysqlpp::getFieldString( row, "AttributeCppType" ) );
        setHasDefault( mysqlpp::getFieldBool( row, "HasDefault" ) );
        setDefaultValue( mysqlpp::getFieldString( row, "DefaultValue" ) );
        setIsRequired( mysqlpp::getFieldBool( row, "IsRequired" ) );
        setIsRef( mysqlpp::getFieldBool( row, "IsRef" ) );
        setRef( mysqlpp::getFieldString( row, "Ref" ) );
        setIsFixed( mysqlpp::getFieldBool( row, "IsFixed" ) );
        
        /* set function code */
        initFuncGetValue();
        initFuncSetValue();
        initFuncGetIsRequired();
        initFuncGetIsPresent();
        initFuncSetIsPresent();
        initFuncGetHasDefault();
        initFuncGetDefaultValue();
    }

    void AttributeInfoV2::set( const xparse::ElementPtr& e )
    {
        int attributeID = e->getIndex();
        std::stringstream sql;
        sql << "SELECT" << end();
        sql << "-1 AS AttributeGroupID" << end();
        sql << ",a.AttributeID" << end();
        sql << ",a.Name AS AttributeXmlName" << end();
        sql << ",a.CppName AS AttributeCppName" << end();
        sql << ",'' AS AttributeTypeCategory" << end();
        sql << ",a.Type AS AttributeXmlType" << end();
        sql << ",t.CppClassName AS AttributeCppType" << end();
        sql << ",CASE WHEN a.DefaultValue<>'' THEN 'true' ELSE 'false' END AS HasDefault" << end();
        sql << ",DefaultValue" << end();
        sql << ",IsRequired" << end();
        sql << ",IsRef" << end();
        sql << ",Ref" << end();
        sql << ",CASE WHEN x.XsMetaFixed<>'' THEN 'true' ELSE 'false' END AS IsFixed" << end();
        sql << "FROM attributes AS a" << end();
        sql << "LEFT JOIN simpleTypes AS t ON a.Type = t.Name" << end();
        sql << "LEFT JOIN xsd AS x ON x.ID = a.AttributeID" << end();
        sql << "WHERE a.AttributeID = " << attributeID << end();
        
        mysqlpp::StoreQueryResult res = mysqlpp::ExecuteQuery( sql.str() );
        auto it = res.begin();
        auto endit = res.end();
        if ( it != endit )
        {
            mysqlpp::Row row = *it;
            setAttributeGroupID( mysqlpp::getFieldInt( row, "AttributeGroupID" ) );
            setAttributeID( mysqlpp::getFieldInt( row, "AttributeID" ) );
            setAttributeXmlName( mysqlpp::getFieldString( row, "AttributeXmlName" ) );
            setAttributeCppName( mysqlpp::getFieldString( row, "AttributeCppName" ) );
            setAttributeTypeCategory( mysqlpp::getFieldString( row, "AttributeTypeCategory" ) );
            setAttributeXmlType( mysqlpp::getFieldString( row, "AttributeXmlType" ) );
            setAttributeCppType( mysqlpp::getFieldString( row, "AttributeCppType" ) );
            setHasDefault( mysqlpp::getFieldBool( row, "HasDefault" ) );
            setDefaultValue( mysqlpp::getFieldString( row, "DefaultValue" ) );
            setIsRequired( mysqlpp::getFieldBool( row, "IsRequired" ) );
            setIsRef( mysqlpp::getFieldBool( row, "IsRef" ) );
            setRef( mysqlpp::getFieldString( row, "Ref" ) );
            setIsFixed( mysqlpp::getFieldBool( row, "IsFixed" ) );
        }
        
        /* set function code */
        initFuncGetValue();
        initFuncSetValue();
        initFuncGetIsRequired();
        initFuncGetIsPresent();
        initFuncSetIsPresent();
        initFuncGetHasDefault();
        initFuncGetDefaultValue();
    }
    
    std::string AttributeInfoV2::toString( const HMxParseableObject& value ) const
    {
        std::stringstream output;
        output << getAttributeXmlName();
        output << "=\\\"";
        output << value->toString();
        output << "\\\"";
        return output.str();
    }
    std::string AttributeInfoV2::toString( const std::string& value ) const
    {
        std::stringstream output;
        output << getAttributeXmlName();
        output << "=\\\"";
        output << value;
        output << "\\\"";
        return output.str();
    }
    AttributeType AttributeInfoV2::getAttributeType() const
    {
        AttributeType ret = AttributeType::Other;
        HMxEnum e;
        HMxNumberInt i;
        HMxNumberLongDouble d;
        

        e = std::dynamic_pointer_cast<MxEnum>( getObject() );
        i = std::dynamic_pointer_cast<MxNumber<int>>( getObject() );
        d = std::dynamic_pointer_cast<MxNumber<long double>>( getObject() );
        if( e.get() != nullptr )
        {
            ret = AttributeType::MxEnum;
            return ret;
        }
        else if ( i.get() != nullptr )
        {
            ret = AttributeType::MxNumberInt;
            return ret;
        }
        else if ( d.get() != nullptr )
        {
            ret = AttributeType::MxNumberLongDouble;
            return ret;
        }
        else if ( getObject()->getClassName() == "MxColor" )
        {
            ret = AttributeType::MxColor;
            return ret;
        }
        
        else if ( getObject()->getClassName() == "MxFontSize" )
        {
            ret = AttributeType::MxFontSize;
            return ret;
        }
        else if ( getObject()->getClassName() == "MxToken" ||
                 getObject()->getClassName() == "XsToken" ||
                 getObject()->getClassName() == "MxCommaSeparatedText" ||
                 getObject()->getClassName() == "XmlLang" ||
                 getObject()->getClassName() == "XsAnyUri" ||
                 getObject()->getClassName() == "XsNmToken" ||
                 getObject()->getClassName() == "XlinkHref" ||
                 getObject()->getClassName() == "XlinkRole" ||
                 getObject()->getClassName() == "XlinkTitle" ||
                 getObject()->getClassName() == "MxEndingNumber" ||
                 getObject()->getClassName() == "XsIdRef" ||
                 getObject()->getClassName() == "MxTimeOnly" ||
                 getObject()->getClassName() == "XsId" )
        {
            ret = AttributeType::String;
            return ret;
        }
        else
        {
            throw "oops";
        }
        return ret;
    }
    void AttributeInfoV2::changeObjectValue() const
    {
        if ( ! getIsFixed() )
        {
            AttributeType t = getAttributeType();
            HMxParseableObject obj = getObject();
            switch ( t )
            {
                case AttributeType::String:
                {
                    if ( obj->toString() == "ABC" )
                    {
                        obj->fromString( "DEF" );
                    }
                    else if ( obj->toString() == "DEF" )
                    {
                        obj->fromString( "XYZ" );
                    }
                    else
                    {
                        obj->fromString( "ABC" );
                    }
                }
                    break;
                case AttributeType::MxEnum:
                {
                    HMxEnum e = createMxEnum();
                    if ( e->getValueInt() == e->getSize()-1 )
                    {
                        e->setValueInt( 0 );
                    }
                    else
                    {
                        e->setValueInt( e->getValueInt() + 1 );
                    }
                }
                    break;
                case AttributeType::MxNumberLongDouble:
                {
                    HMxNumberLongDouble o = createMxNumberLongDouble();
                    long double myVal = o->getValue();
                    if ( myVal + 0.1 < o->getUpperBound() || ! o->isUpperRangeBound())
                    {
                        o->setValue( myVal + 0.1 );
                    }
                    else
                    {
                        if ( o->isLowerRangeLimitInclusive() )
                        {
                            o->setValue( o->getLowerBound() );
                        }
                        else
                        {
                            o->setValue( o->getLowerBound()+0.1 );
                        }
                    }
                }
                    break;
                case AttributeType::MxNumberInt:
                {
                    HMxNumberInt o = createMxNumberInt();
                    int myVal = o->getValue();
                    if ( myVal + 1 < o->getUpperBound() || ! o->isUpperRangeBound())
                    {
                        o->setValue( myVal + 1 );
                    }
                    else
                    {
                        if ( o->isLowerRangeLimitInclusive() )
                        {
                            o->setValue( o->getLowerBound() );
                        }
                        else
                        {
                            o->setValue( o->getLowerBound()+1 );
                        }
                    }
                }
                    break;
                case AttributeType::MxColor:
                {
                    HMxColor o = createMxColor();
                    bool hasAlpha = o->hasAlpha();
                    o->setBlue( o->getAlpha()>254 ? 0 : o->getAlpha()+1 );
                    o->setGreen( o->getRed()>254 ? 0 : o->getRed()+1 );
                    o->setRed( o->getGreen()>254 ? 0 : o->getGreen()+1 );
                    o->setAlpha( o->getBlue()>254 ? 0 : o->getBlue()+1 );
                    o->hasAlpha( ! hasAlpha );
                }
                    break;
                case AttributeType::MxFontSize:
                {
                    HMxFontSize o = createMxFontSize();
                    if ( o->isCssFontSize() )
                    {
                        MxNumberDecimal d = o->getValueNumeric();
                        if ( d.getValue() < d.getUpperBound() - 1.1 )
                        {
                            o->setValue( d.getValue()+1.1 );
                        }
                        else
                        {
                            o->setValue( 6 );
                        }
                    }
                    else
                    {
                        MxEnumCssFontSize size = o->getValueCssFontSize();
                        if ( size.getValueInt() == size.getSize() -1 )
                        {
                            size.setValueInt( 0 );
                            o->setValue( size );
                        }
                        else
                        {
                            size.setValueInt( size.getValueInt() + 1 );
                            o->setValue( size );
                        }
                    }
                }
                    break;
                default:
                    break;
            } // switch AttributeType
        }
        
    }
    std::string AttributeInfoV2::getSetObjectValueCode( const std::string& objectVariableName ) const
    {
        std::stringstream output;
        if ( ! getIsFixed() )
        {
            AttributeType t = getAttributeType();
            HMxParseableObject obj = getObject();
            switch ( t )
            {
                case AttributeType::String:
                {
                    output << objectVariableName << ".";
                    output << getFuncSetValue().getName();
                    output << "( ";
                    output << getFuncSetValue().getParameter( 0 ).getDataType();
                    output << "( \"";
                    output << obj->toString();
                    output << "\" ) );";
                }
                    break;
                case AttributeType::MxEnum:
                {
                    HMxEnum e = createMxEnum();
                    output << objectVariableName << ".";
                    output << getFuncSetValue().getName();
                    output << "( ";
                    output << getFuncSetValue().getParameter( 0 ).getDataType();
                    output << "( ";
                    output << createAllPossibleEnumValues()[e->getValueInt()];
                    output << " ) );";
                }
                    break;
                case AttributeType::MxNumberLongDouble:
                {
                    HMxNumberLongDouble o = createMxNumberLongDouble();
                    output << objectVariableName << ".";
                    output << getFuncSetValue().getName();
                    output << "( ";
                    output << getFuncSetValue().getParameter( 0 ).getDataType();
                    output << "( ";
                    output << o->toString();
                    output << " ) );";
                }
                    break;
                case AttributeType::MxNumberInt:
                {
                    HMxNumberInt o = createMxNumberInt();
                    output << objectVariableName << ".";
                    output << getFuncSetValue().getName();
                    output << "( ";
                    output << getFuncSetValue().getParameter( 0 ).getDataType();
                    output << "( ";
                    output << o->toString();
                    output << " ) );";
                }
                    break;
                case AttributeType::MxColor:
                {
                    HMxColor o = createMxColor();
                    output << objectVariableName << ".";
                    output << getFuncSetValue().getName();
                    output << "( ";
                    output << getFuncSetValue().getParameter( 0 ).getDataType();
                    output << "( \"";
                    output << o->toString();
                    output << "\" ) );";
                }
                    break;
                case AttributeType::MxFontSize:
                {
                    HMxFontSize o = createMxFontSize();
                    output << objectVariableName << ".";
                    output << getFuncSetValue().getName();
                    output << "( ";
                    output << getFuncSetValue().getParameter( 0 ).getDataType();
                    output << "( \"";
                    output << o->toString();
                    output << "\" ) );";
                }
                    break;
                default:
                    break;
            } // switch AttributeType
        } // if ! Fixed
        return output.str();
    }
    HMxEnum AttributeInfoV2::createMxEnum() const
    {
        if ( getAttributeType() == AttributeType::MxEnum )
        {
            return std::dynamic_pointer_cast<MxEnum>( getObject() );
        }
        std::stringstream message;
        message << "Something went wrong when trying to downcast " << getAttributeCppType();
        message << " to HMxEnum";
        std::cout << message.str() << std::endl;
        throw message.str();
    }
    HMxNumberInt AttributeInfoV2::createMxNumberInt() const
    {
        if ( getAttributeType() == AttributeType::MxNumberInt )
        {
            return std::dynamic_pointer_cast<MxNumber<int>>( getObject() );
        }
        std::stringstream message;
        message << "Something went wrong when trying to downcast " << getAttributeCppType();
        message << " to MxNumberInt";
        std::cout << message.str() << std::endl;
        throw message.str();
    }
    HMxNumberLongDouble AttributeInfoV2::createMxNumberLongDouble() const
    {
        if ( getAttributeType() == AttributeType::MxNumberLongDouble )
        {
            return std::dynamic_pointer_cast<MxNumber<long double>>( getObject() );
        }
        std::stringstream message;
        message << "Something went wrong when trying to downcast " << getAttributeCppType();
        message << " to MxNumberLongDouble";
        std::cout << message.str() << std::endl;
        throw message.str();
    }
    
    HMxParseableObject AttributeInfoV2::createStringObject() const
    {
        if ( getAttributeType() == AttributeType::String )
        {
            return getObject();
        }
        std::stringstream message;
        message << "Something went wrong when trying to downcast " << getAttributeCppType();
        message << " to MxParseableObject";
        std::cout << message.str() << std::endl;
        throw message.str();
    }
    AttributeInfoV2::HMxColor AttributeInfoV2::createMxColor() const
    {
        if ( getAttributeType() == AttributeType::MxColor )
        {
            return std::dynamic_pointer_cast<MxColor>( getObject() );
        }
        std::stringstream message;
        message << "Something went wrong when trying to downcast " << getAttributeCppType();
        message << " to MxColor";
        std::cout << message.str() << std::endl;
        throw message.str();
    }
    
    AttributeInfoV2::HMxFontSize AttributeInfoV2::createMxFontSize() const
    {
        if ( getAttributeType() == AttributeType::MxFontSize )
        {
            return std::dynamic_pointer_cast<MxFontSize>( getObject() );
        }
        std::stringstream message;
        message << "Something went wrong when trying to downcast " << getAttributeCppType();
        message << " to MxFontSize";
        std::cout << message.str() << std::endl;
        throw message.str();
    }
    Strings AttributeInfoV2::createAllPossibleEnumValues() const
    {
        std::vector<std::string> vec;
        HMxEnum ptr = createMxEnum();
        int valueWas = ptr->getValueInt();
        for ( int i = 0; i < ptr->getSize(); ++i )
        {
            ptr->setValueInt( i );
            std::string myEnumType;
            if ( ptr->getClassName().substr( 0, 1 ) == "X" )
            {
                myEnumType = ptr->getClassName();
            }
            else
            {
                myEnumType = getAttributeCppType().substr( 6 );
            }
            std::stringstream myValueString;
            myValueString << "lexicon::enums::" << myEnumType << "::" << ptr->getCppEnumSymbolAsString();
            vec.push_back( myValueString.str() );
        }
        ptr->setValueInt( valueWas );
        return vec;
    }
    Strings AttributeInfoV2::createAllPossibleEnumTempInstantiations() const
    {
        Strings temp = createAllPossibleEnumValues();
        Strings output;
        for( auto it = temp.begin(); it != temp.end(); ++it )
        {
            std::stringstream ss;
            ss << this->getAttributeCppType() << "( " << *it << " )";
            output.push_back( ss.str() );
        }
        return output;
    }
    
    Strings AttributeInfoV2::createAllPossibleEnumVariableInstantiations( const std::string variableName ) const
    {
        Strings temp = createAllPossibleEnumValues();
        Strings output;
        for( auto it = temp.begin(); it != temp.end(); ++it )
        {
            std::stringstream ss;
            ss << this->getAttributeCppType() << " ";
            ss << variableName << "( " << *it << " );";
            output.push_back( ss.str() );
        }
        return output;
    }
    Strings AttributeInfoV2::createAllPossibleEnumVariableAssignment( const std::string variableName ) const
    {
        Strings temp = createAllPossibleEnumValues();
        Strings output;
        for( auto it = temp.begin(); it != temp.end(); ++it )
        {
            std::stringstream ss;
            ss << variableName << " = " << *it << ";";
            output.push_back( ss.str() );
        }
        return output;
    }
    Strings AttributeInfoV2::createAllPossibleEnumVariableExpectedStrings() const
    {
        std::vector<std::string> vec;
        HMxEnum ptr = createMxEnum();
        int valueWas = ptr->getValueInt();
        for ( int i = 0; i < ptr->getSize(); ++i )
        {
            ptr->setValueInt( i );
            vec.push_back( ptr->toString() );
        }
        ptr->setValueInt( valueWas );
        return vec;
    }
    /* Function Building */
    
    void AttributeInfoV2::initFuncGetValue()
    {
        Function f;
        std::stringstream name;
        name << "get" << this->getAttributeCppName();
        f.setName( name.str() );
        f.setReturnType( this->getAttributeCppType() );
        f.isConst( true );
        std::stringstream code;
        code << "return my" << this->getAttributeCppName() << ";";
        f.setCode( code.str() );
        std::stringstream documentation;
        documentation << "Returns the internal value of the '" << this->getAttributeXmlName();
        documentation << "' (aka '" << this->getAttributeCppName() << "') attribute.";
        f.setDocumentation( documentation.str() );
        std::stringstream attributeID;
        attributeID << this->getAttributeID();
        f.setNote( attributeID.str() );
        myFuncGetValueExists = true;
        myFuncGetValue = f;
    }
    void AttributeInfoV2::initFuncSetValue()
    {
        Function f;
        std::stringstream name;
        name << "set" << this->getAttributeCppName();
        f.setName( name.str() );
        f.setReturnType( "void" );
        f.isConst( false );
        Parameter param;
        param.setName( "value_in" );
        param.setDataType( this->getAttributeCppType() );
        param.isConst( true );
        f.addParameter( param );
        std::stringstream code;
        code << "my" << this->getAttributeCppName() << " = value_in;";
        f.setCode( code.str() );
        std::stringstream documentation;
        documentation << "Sets the internal value of the '" << this->getAttributeXmlName();
        documentation << "' (aka '" << this->getAttributeCppName() << "') attribute.";
        f.setDocumentation( documentation.str() );
        std::stringstream attributeID;
        attributeID << this->getAttributeID();
        f.setNote( attributeID.str() );
        
        /* Xlink:Type is "fixed" so don't create a setter */
        if ( this->getIsFixed() )
        {
            myFuncSetValueExists = false;
        }
        else
        {
            myFuncSetValue = f;
            myFuncSetValueExists = true;
        }
    }
    void AttributeInfoV2::initFuncGetIsRequired()
    {
        Function f;
        std::stringstream name;
        name << "getIs" << this->getAttributeCppName() << "Required";
        f.setName( name.str() );
        f.setReturnType( "bool" );
        f.isConst( true );
        std::stringstream code;
        code << "return " << std::boolalpha << this->getIsRequired() << ";";
        f.setCode( code.str() );
        std::stringstream documentation;
        documentation << "Indicates whether or not the '" << this->getAttributeXmlName();
        documentation << "' (aka '" << this->getAttributeCppName() << "') attribute is";
        documentation << " required to be present in a MusicXML document.";
        f.setDocumentation( documentation.str() );
        std::stringstream attributeID;
        attributeID << this->getAttributeID();
        f.setNote( attributeID.str() );
        myFuncGetIsRequired = f;
        myFuncGetIsRequiredExists = true;
    }
    void AttributeInfoV2::initFuncGetIsPresent()
    {
        Function f;
        std::stringstream name;
        name << "getIs" << this->getAttributeCppName() << "Present";
        f.setName( name.str() );
        f.setReturnType( "bool" );
        f.isConst( true );
        std::stringstream code;
        code << "return myIs" << this->getAttributeCppName() << "Present;";
        f.setCode( code.str() );
        std::stringstream documentation;
        documentation << "Indicates whether or not the '" << this->getAttributeXmlName();
        documentation << "' (aka '" << this->getAttributeCppName() << "') attribute is (or will be)";
        documentation << " present in the MusicXML document.";
        if ( this->getIsRequired() )
        {
            documentation << " Note: because '" << this->getAttributeXmlName();
            documentation << "' is required by the MusicXML specification, ";
            documentation << name.str() << " will always return 'true'. There is no ";
            documentation << "corresponding setIs" << this->getAttributeCppName() << "Present ";
            documentation << "function for this attribute.";
        }
        f.setDocumentation( documentation.str() );
        std::stringstream attributeID;
        attributeID << this->getAttributeID();
        f.setNote( attributeID.str() );
        myFuncGetIsPresent = f;
        myFuncGetIsPresentExists = true;
    }
    void AttributeInfoV2::initFuncSetIsPresent()
    {
        Function f;
        std::stringstream name;
        name << "setIs" << this->getAttributeCppName() << "Present";
        f.setName( name.str() );
        f.setReturnType( "void" );
        f.isConst( false );
        Parameter param;
        param.setName( "value_in" );
        param.setDataType( "bool" );
        param.isConst( true );
        f.addParameter( param );
        std::stringstream code;
        code << "myIs" << this->getAttributeCppName() << "Present = value_in;";
        f.setCode( code.str() );
        std::stringstream documentation;
        documentation << "Sets the value which indicates whether or not the '" << this->getAttributeXmlName();
        documentation << "' (aka '" << this->getAttributeCppName() << "') attribute is (or will be)";
        documentation << " present in the MusicXML document.";
        f.setDocumentation( documentation.str() );
        std::stringstream attributeID;
        attributeID << this->getAttributeID();
        f.setNote( attributeID.str() );
        if ( getIsRequired() )
        {
            myFuncSetIsPresentExists = false;
        }
        else
        {
            myFuncSetIsPresent = f;
            myFuncSetIsPresentExists = true;
        }
    }
    void AttributeInfoV2::initFuncGetHasDefault()
    {
        Function f;
        std::stringstream name;
        name << "getIs" << this->getAttributeCppName() << "DefaultDefined";
        f.setName( name.str() );
        f.setReturnType( "bool" );
        f.isConst( true );
        std::stringstream code;
        code << "return " << std::boolalpha << this->getHasDefault() << ";";
        f.setCode( code.str() );
        std::stringstream documentation;
        documentation << "Indicates whether or not the '" << this->getAttributeXmlName();
        documentation << "' (aka '" << this->getAttributeCppName() << "') has a default value ";
        documentation << "defined in the MusicXML xsd specification (either explicitly or in the ";
        documentation << "documentation).";
        f.setDocumentation( documentation.str() );
        std::stringstream attributeID;
        attributeID << this->getAttributeID();
        f.setNote( attributeID.str() );
        myFuncGetHasDefault = f;
        myFuncGetHasDefaultExists = true;
    }
    void AttributeInfoV2::initFuncGetDefaultValue()
    {
        Function f;
        std::stringstream name;
        name << "get" << this->getAttributeCppName() << "DefaultValue";
        f.setName( name.str() );
        f.setReturnType( this->getAttributeCppType() );
        f.isConst( true );
        std::stringstream code;
        code << "return " << this->getAttributeCppType() << "( " << this->getDefaultValue() << " );";
        f.setCode( code.str() );
        std::stringstream documentation;
        documentation << "Returns the default value as defined by the MusicXML xsd document for the '" << this->getAttributeXmlName();
        documentation << "' (aka '" << this->getAttributeCppName() << "') attribute.";
        f.setDocumentation( documentation.str() );
        std::stringstream attributeID;
        attributeID << this->getAttributeID();
        f.setNote( attributeID.str() );
        myFuncGetDefaultValue = f;
        myFuncGetDefaultValueExists = true;
    }
    
    
    std::string AttributeInfoV2::replaceMyWith( const std::string& input, const std::string& replaceMyWithThis ) const
    {
        std::stringstream output;
        output << replaceMyWithThis;
        int i = 0;
        for ( char c : input )
        {
            if ( i > 1 )
            {
                output << c;
            }
        }
        return output.str();
    }
    
    
    void AttributeInfoV2::alterForNestedAttributeGroup
    ( Function& f, const AttGrpInfo* const grp, const std::string& getSet ) const
    {
        /* alter documentation */
        std::stringstream documentation;
        documentation << f.getDocumentation();
        documentation << " This attribute is a member of the '";
        documentation << grp->getName();
        documentation << "' (aka '";
        documentation << grp->getCppName() << "') attributeGroup.";
        f.setDocumentation( documentation.str() );
        
        /* alter code */
        if ( getSet == "get" )
        {
            std::stringstream code;
            code << "return my" << grp->getCppName() << ".";
            code << f.getName() << "();";
            f.setCode( code.str() );
        }
        else if ( getSet == "set" )
        {
            std::stringstream code;
            code << "my" << grp->getCppName() << ".";
            code << f.getName() << "( value_in );";
            f.setCode( code.str() );
        }
    }
    
    void AttributeInfoV2::alterForNestedAttributeGroup
    ( Function& f, const HAttGrpBldr& grp, const std::string& getSet ) const
    {
        /* alter documentation */
        std::stringstream documentation;
        documentation << f.getDocumentation();
        documentation << " This attribute is a member of the '";
        documentation << grp->getInfo()->getName();
        documentation << "' (aka '";
        documentation << grp->getInfo()->getCppName() << "') attributeGroup.";
        f.setDocumentation( documentation.str() );
        
        /* alter code */
        if ( getSet == "get" )
        {
            std::stringstream code;
            code << "return my" << grp->getName() << ".";
            code << f.getName() << "();";
            f.setCode( code.str() );
        }
        else if ( getSet == "set" )
        {
            std::stringstream code;
            code << "my" << grp->getName() << ".";
            code << f.getName() << "( value_in );";
            f.setCode( code.str() );
        }
    }
    
    std::string AttributeInfoV2::replaceMyWithGet( const std::string& input ) const
    {
        return replaceMyWith( input, "get" );
    }
    
    std::string AttributeInfoV2::replaceMyWithSet( const std::string& input ) const
    {
        return replaceMyWith( input, "set" );
    }
    //
    //    AttributeInfoV2 AttributeInfoV2::getAttribute() const
    //    {
    //        return myAttribute;
    //    }
    
    bool AttributeInfoV2::getFuncGetValueExists() const
    {
        return myFuncGetValueExists;
    }
    mjb::Function AttributeInfoV2::getFuncGetValue() const
    {
        return myFuncGetValue;
    }
    
    bool AttributeInfoV2::getFuncSetValueExists() const
    {
        return myFuncSetValueExists;
    }
    mjb::Function AttributeInfoV2::getFuncSetValue() const
    {
        return myFuncSetValue;
    }
    
    bool AttributeInfoV2::getFuncGetIsRequiredExists() const
    {
        return myFuncGetIsRequiredExists;
    }
    mjb::Function AttributeInfoV2::getFuncGetIsRequired() const
    {
        return myFuncGetIsRequired;
    }
    
    bool AttributeInfoV2::getFuncGetIsPresentExists() const
    {
        return myFuncGetIsPresentExists;
    }
    mjb::Function AttributeInfoV2::getFuncGetIsPresent() const
    {
        return myFuncGetIsPresent;
    }
    
    bool AttributeInfoV2::getFuncSetIsPresentExists() const
    {
        return myFuncSetIsPresentExists;
    }
    mjb::Function AttributeInfoV2::getFuncSetIsPresent() const
    {
        return myFuncSetIsPresent;
    }
    
    bool AttributeInfoV2::getFuncGetHasDefaultExists() const
    {
        return myFuncGetHasDefaultExists;
    }
    mjb::Function AttributeInfoV2::getFuncGetHasDefault() const
    {
        return myFuncGetHasDefault;
    }
    
    bool AttributeInfoV2::getFuncGetDefaultValueExists() const
    {
        return myFuncGetDefaultValueExists;
    }
    mjb::Function AttributeInfoV2::getFuncGetDefaultValue() const
    {
        return myFuncGetDefaultValue;
    }
    
//    const AttGrpInfo* const AttributeInfoV2::GroupNestedUnder( const AttGrpInfo* const ptr ) const
//    {
//        if ( ptr == nullptr )
//        {
//            if ( myParentAttGrpBldr.get() != nullptr )
//            {
//                return myParentAttGrpBldr.get();
//            }
//        }
//        return ptr;
//    }

    /* altered for nested attribute groups */
    mjb::Function AttributeInfoV2::getFuncGetValue( const AttGrpInfo* const ptr ) const
    {
        Function f = getFuncGetValue();
        if ( ptr != nullptr )
        {
            alterForNestedAttributeGroup( f, ptr, "get" );
        }
        else if ( myParentAttGrpBldr )
        {
            alterForNestedAttributeGroup( f, myParentAttGrpBldr->getInfo().get(), "get" );
        }
        return f;
    }
    
    mjb::Function AttributeInfoV2::getFuncSetValue( const AttGrpInfo* const ptr ) const
    {
        Function f = getFuncSetValue();
        if ( ptr != nullptr )
        {
            alterForNestedAttributeGroup( f, ptr, "set" );
        }
        else if ( myParentAttGrpBldr )
        {
            alterForNestedAttributeGroup( f, myParentAttGrpBldr->getInfo().get(), "set" );
        }
        return f;
    }
    
    mjb::Function AttributeInfoV2::getFuncGetIsRequired( const AttGrpInfo* const ptr ) const
    {
        Function f = getFuncGetIsRequired();
        if ( ptr != nullptr )
        {
            alterForNestedAttributeGroup( f, ptr, "get" );
        }
        else if ( myParentAttGrpBldr )
        {
            alterForNestedAttributeGroup( f, myParentAttGrpBldr->getInfo().get(), "get" );
        }
        return f;
    }
    
    mjb::Function AttributeInfoV2::getFuncGetIsPresent( const AttGrpInfo* const ptr ) const
    {
        Function f = getFuncGetIsPresent();
        if ( ptr != nullptr )
        {
            alterForNestedAttributeGroup( f, ptr, "get" );
        }
        else if ( myParentAttGrpBldr )
        {
            alterForNestedAttributeGroup( f, myParentAttGrpBldr->getInfo().get(), "get" );
        }
        return f;
    }
    
    mjb::Function AttributeInfoV2::getFuncSetIsPresent( const AttGrpInfo* const ptr ) const
    {
        Function f = getFuncSetIsPresent();
        if ( ptr != nullptr )
        {
            alterForNestedAttributeGroup( f, ptr, "set" );
        }
        else if ( myParentAttGrpBldr )
        {
            alterForNestedAttributeGroup( f, myParentAttGrpBldr->getInfo().get(), "set" );
        }
        return f;
    }
    
    mjb::Function AttributeInfoV2::getFuncGetHasDefault( const AttGrpInfo* const ptr ) const
    {
        Function f = getFuncGetHasDefault();
        if ( ptr != nullptr )
        {
            alterForNestedAttributeGroup( f, ptr, "get" );
        }
        else if ( myParentAttGrpBldr )
        {
            alterForNestedAttributeGroup( f, myParentAttGrpBldr->getInfo().get(), "get" );
        }
        return f;
    }
    
    mjb::Function AttributeInfoV2::getFuncGetDefaultValue( const AttGrpInfo* const ptr ) const
    {
        Function f = getFuncGetDefaultValue();
        if ( ptr != nullptr )
        {
            alterForNestedAttributeGroup( f, ptr, "get" );
        }
        else if ( myParentAttGrpBldr )
        {
            alterForNestedAttributeGroup( f, myParentAttGrpBldr->getInfo().get(), "get" );
        }
        return f;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    mjb::Function AttributeInfoV2::getFuncGetValue( int dummy ) const
    {
        Function f = getFuncGetValue();
        if ( myParentAttGrpBldr )
        {
            alterForNestedAttributeGroup( f, myParentAttGrpBldr, "get" );
        }
        return f;
    }
    
    mjb::Function AttributeInfoV2::getFuncSetValue( int dummy ) const
    {
        Function f = getFuncSetValue();
        if ( myParentAttGrpBldr )
        {
            alterForNestedAttributeGroup( f, myParentAttGrpBldr, "set" );
        }
        return f;
    }
    
    mjb::Function AttributeInfoV2::getFuncGetIsRequired( int dummy ) const
    {
        Function f = getFuncGetIsRequired();
        if ( myParentAttGrpBldr )
        {
            alterForNestedAttributeGroup( f, myParentAttGrpBldr, "get" );
        }
        return f;
    }
    
    mjb::Function AttributeInfoV2::getFuncGetIsPresent( int dummy ) const
    {
        Function f = getFuncGetIsPresent();
        if ( myParentAttGrpBldr )
        {
            alterForNestedAttributeGroup( f, myParentAttGrpBldr, "get" );
        }
        return f;
    }
    
    mjb::Function AttributeInfoV2::getFuncSetIsPresent( int dummy ) const
    {
        Function f = getFuncSetIsPresent();
        if ( myParentAttGrpBldr )
        {
            alterForNestedAttributeGroup( f, myParentAttGrpBldr, "set" );
        }
        return f;
    }
    
    mjb::Function AttributeInfoV2::getFuncGetHasDefault( int dummy ) const
    {
        Function f = getFuncGetHasDefault();
        if ( myParentAttGrpBldr )
        {
            alterForNestedAttributeGroup( f, myParentAttGrpBldr, "get" );
        }
        return f;
    }
    
    mjb::Function AttributeInfoV2::getFuncGetDefaultValue( int dummy ) const
    {
        Function f = getFuncGetDefaultValue();
        if ( myParentAttGrpBldr )
        {
            alterForNestedAttributeGroup( f, myParentAttGrpBldr, "get" );
        }
        return f;
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

