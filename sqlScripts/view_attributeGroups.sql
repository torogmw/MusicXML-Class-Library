DROP VIEW IF EXISTS attributeGroupsView;
CREATE VIEW attributeGroupsView
AS
SELECT
 three.`ID`
,three.`Name`
,data.`CppName`
,three.`Category`
,data.`IsImplemented`
,three.`NestedAttributeGroups`
,three.`AttributeCount`
,documentation.Documentation
FROM `attributeGroup03Category` three
INNER JOIN `attributeGroupData` data ON three.ID = data.ID
INNER JOIN xsd AS x ON three.ID = x.ID
LEFT JOIN xsd AS annotation ON annotation.ParentID = x.ID AND annotation.XsTag = 'xs:annotation'
LEFT JOIN xsd AS documentation ON documentation.ParentID = annotation.ID AND documentation.XsTag = 'xs:documentation'
;

DROP TABLE IF EXISTS attributeGroups;
CREATE TABLE attributeGroups
(
	 ID int primary key
	,Name varchar(50)
	,CppName varchar(50)
	,Category varchar(50)
	,IsImplemented varchar(6)
	,NestedAttributeGroups int
	,AttributeCount int
	,Documentation text
)
;
INSERT INTO attributeGroups SELECT * FROM attributeGroupsView
;

SELECT ID, Name, CppName, Category, IsImplemented, NestedAttributeGroups, AttributeCount, Documentation FROM attributeGroups ORDER BY ID;
