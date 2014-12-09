DROP VIEW IF EXISTS attributeGroup05ContainedChildAttributeGroups;
CREATE VIEW attributeGroup05ContainedChildAttributeGroups
AS
SELECT
 d.ID
,d.Name
,d.CppName
,c.Category
,c.NestedAttributeGroups
,x.XsMetaRef AS ChildAttributeGroupName
,x.ID AS ChildAttributeGroupID
,child_info.Category AS ChildCategory
,child_info.`AttributeCount` AS ChildAttributeCount
,child_info.NestedAttributeGroups AS ChildNestedAttributeGroups
FROM attributeGroupData AS d
INNER JOIN attributeGroup03Category AS c ON d.ID = c.ID
INNER JOIN xsd AS x ON d.ID = x.ParentID AND x.XsTag = 'xs:attributeGroup'
LEFT JOIN attributeGroup03Category AS child_info ON child_info.ID = x.ID
WHERE c.NestedAttributeGroups > 0
;
SELECT
*
FROM attributeGroup05ContainedChildAttributeGroups
;
SELECT
*
FROM matthfc8_musicxml.attributeGroup03Category
;
1965