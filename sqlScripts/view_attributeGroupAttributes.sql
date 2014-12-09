DROP VIEW IF EXISTS attributeGroupAttributes;

CREATE VIEW attributeGroupAttributes
AS
SELECT
 grp.ID AS AttributeGroupID
,a.AttributeID
,a.Name AS AttributeXmlName
,a.CppName AS AttributeCppName
,s.Category AS AttributeTypeCategory 
,a.Type AS AttributeXmlType
,s.CppClassName AS AttributeCppType
,a.HasDefault
,a.DefaultValue
,a.IsRequired
,a.IsRef
,a.Ref
,CASE WHEN x.XsMetaFixed = '' THEN 'false' ELSE 'true' END AS IsFixed
FROM attributeGroups AS grp
INNER JOIN xsd AS x ON x.ParentID = grp.ID AND x.XsTag = 'xs:attribute'
INNER JOIN attributes AS a ON a.AttributeID = x.ID
INNER JOIN `simpleTypes` s ON s.Name = a.Type
WHERE grp.AttributeCount > 0
;