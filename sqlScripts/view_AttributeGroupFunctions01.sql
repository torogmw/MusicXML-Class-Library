DROP VIEW IF EXISTS AttributeGroupFunctions01Attributes;
CREATE VIEW AttributeGroupFunctions01Attributes
AS
SELECT
 a.`AttributeGroupID`
,a.`AttributeGroupName`
,'getValue' AS FunctionType
,a.`SimpleTypeCppClassName` AS FunctionReturnType
,CONCAT( 'get', a.`AttributeCppName` ) AS FunctionName
,'' AS FunctionParameterType
,'false' AS FunctionParameterConst
,'false' AS FunctionParameterRef
,'true' AS FunctionConst
,a.`AttributeID`
,'Attribute' AS ParentDataType
FROM `attributeGroup04ContainedAttributes` a

UNION

SELECT
 a.`AttributeGroupID`
,a.`AttributeGroupName`
,'setValue' AS FunctionType
,'void' AS FunctionReturnType
,CONCAT( 'set', a.`AttributeCppName` ) AS FunctionName
,a.`SimpleTypeCppClassName`  AS FunctionParameterType
,'true' AS FunctionParameterConst
,'true' AS FunctionParameterRef
,'false' AS FunctionConst
,a.`AttributeID`
,'Attribute' AS ParentDataType
FROM `attributeGroup04ContainedAttributes` a

UNION

SELECT
 a.`AttributeGroupID`
,a.`AttributeGroupName`
,'getIsRequired' AS FunctionType
,'bool' AS FunctionReturnType
,CONCAT(CONCAT( 'getIs', a.`AttributeCppName` ),'Required') AS FunctionName
,'' AS FunctionParameterType
,'false' AS FunctionParameterConst
,'false' AS FunctionParameterRef
,'true' AS FunctionConst
,a.`AttributeID`
,'Attribute' AS ParentDataType
FROM `attributeGroup04ContainedAttributes` a

UNION

SELECT
 a.`AttributeGroupID`
,a.`AttributeGroupName`
,'getIsPresent' AS FunctionType
,'bool' AS FunctionReturnType
,CONCAT(CONCAT( 'getIs', a.`AttributeCppName` ),'Present') AS FunctionName
,'' AS FunctionParameterType
,'false' AS FunctionParameterConst
,'false' AS FunctionParameterRef
,'true' AS FunctionConst
,a.`AttributeID`
,'Attribute' AS ParentDataType
FROM `attributeGroup04ContainedAttributes` a

UNION

SELECT
 a.`AttributeGroupID`
,a.`AttributeGroupName`
,'setIsPresent' AS FunctionType
,'void' AS FunctionReturnType
,CONCAT(CONCAT( 'setIs', a.`AttributeCppName` ),'Present') AS FunctionName
,'bool'  AS FunctionParameterType
,'false' AS FunctionParameterConst
,'false' AS FunctionParameterRef
,'false' AS FunctionConst
,a.`AttributeID`
,'Attribute' AS ParentDataType
FROM `attributeGroup04ContainedAttributes` a
;
