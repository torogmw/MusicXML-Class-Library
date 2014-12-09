DROP VIEW IF EXISTS attributeGroup04ContainedAttributes
;
CREATE VIEW attributeGroup04ContainedAttributes
AS
SELECT
 agcat.ID AS AttributeGroupID
,agcat.Name AS AttributeGroupName
,agcat.NestedAttributeGroups
,agcat.AttributeCount
,agcat.Category AS AttributeGroupCategory
,CASE WHEN attr.Name<>'' THEN attr.Name ELSE attr.XsMetaRef END AS AttributeName
,CASE WHEN attr.XsMetaType<>'' THEN attr.XsMetaType ELSE attr.XsMetaRef END AS SimpleTypeName
,simp.ID AS SimpleTypeID
,attr.ID AS AttributeID
,simp.CppClassName AS SimpleTypeCppClassName
,simp.Category AS SimpleTypeCategory
,CASE WHEN attr.XsMetaUse<>'' THEN 'true' ELSE 'false' END AS IsRequired
,attr.XsMetaDefault AS DefaultValue
,CASE WHEN attr.XsMetaFixed<>'' THEN 'true' ELSE 'false' END AS IsValueFixed
,attr.XsMetaFixed AS FixedValue
,attributes.CppName AS AttributeCppName
FROM attributeGroup03Category AS agcat
INNER JOIN xsd AS agxsd ON agcat.ID = agxsd.ID
INNER JOIN xsd AS attr ON attr.ParentID = agxsd.ID AND attr.XsTag = 'xs:attribute'
INNER JOIN simpleTypes AS simp ON simp.Name = CASE WHEN attr.XsMetaType<>'' THEN attr.XsMetaType ELSE attr.XsMetaRef END
INNER JOIN attributes ON attr.ID = attributes.AttributeID
;
SELECT
*
FROM attributeGroup04ContainedAttributes
;