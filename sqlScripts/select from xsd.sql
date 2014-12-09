USE matthfc8_musicxml
;

SELECT
 XsTag
,COUNT(*)
FROM xsd as x
WHERE XsNodeTypeString = 'XsElement'
GROUP BY XsTag
ORDER BY XsTag
;


SELECT
 parent.XsTag AS ParentXsTag
,child.XsTag AS ChildXsTag
,child.NodeNameValue
,CASE WHEN child.NodeNameValue NOT IN ( 'type', 'name' ) THEN child.Value ELSE '(various)' END AS Val
,COUNT(*) AS RowCount
FROM xsd AS parent
INNER JOIN xsd AS child ON parent.ID = child.ParentID
WHERE parent.XsNodeTypeString = 'XsElement'
AND parent.XsTag = 'xs:attribute'
AND parent.ID > 0
GROUP BY
 parent.XsTag
,child.XsTag
,child.NodeNameValue
,CASE WHEN child.NodeNameValue NOT IN ( 'type', 'name' ) THEN child.Value ELSE '(various)' END
;

SELECT
 parent.XsTag AS ParentXsTag
,child.XsTag AS ChildXsTag
,child.NodeNameValue
,COUNT(*) AS RowCount
FROM xsd AS parent
INNER JOIN xsd AS child ON parent.ID = child.ParentID
WHERE parent.XsNodeTypeString = 'XsElement'
AND parent.XsTag = 'xs:attribute'
AND parent.ID > 0
GROUP BY
 parent.XsTag
,child.XsTag
,child.NodeNameValue
;

SELECT
 parent.XsTag AS ParentXsTag
,child.XsTag AS ChildXsTag
,COUNT(*) AS RowCount
FROM xsd AS parent
INNER JOIN xsd AS child ON parent.ID = child.ParentID
WHERE parent.XsNodeTypeString = 'XsElement'
AND parent.XsTag = 'xs:attributeGroup'
AND parent.ID > 0
GROUP BY
 parent.XsTag
,child.XsTag
;


SELECT
 parent.XsTag AS ParentXsTag
,child.XsTag AS ChildXsTag
,child.NodeNameValue
,COUNT(*) AS RowCount
FROM xsd AS parent
INNER JOIN xsd AS child ON parent.ID = child.ParentID
WHERE parent.XsNodeTypeString = 'XsElement'
AND parent.XsTag = 'xs:complexType'
AND parent.ID > 0
GROUP BY
 parent.XsTag
,child.XsTag
,child.NodeNameValue
;

