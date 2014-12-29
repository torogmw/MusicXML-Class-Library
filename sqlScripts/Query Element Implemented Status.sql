SELECT
'xs:element' AS Name
,SUM( CASE WHEN IsImplemented = 'true' THEN 1 ELSE 0 END ) AS Implemented
,SUM( CASE WHEN IsImplemented = 'false' THEN 1 ELSE 0 END ) AS NotImplemented
FROM xsd
WHERE XsTag = 'xs:element'
;

SELECT
 e.ID AS ElementID
,e.ParentID AS ElementParentID
,e.Name AS ElementName
,e.XsMetaType AS ReferencedType
,t.ID AS ReferencedTypeID
,t.XsTag AS ReferencedTypeType
,e.IsImplemented AS ElementIsImplemented
FROM xsd AS e
LEFT JOIN xsd AS t ON e.XsMetaType = t.XsMetaName
  AND t.XsTag IN ( 'xs:complexType', 'xs:simpleType' ) AND t.XsMetaName <> ''
WHERE e.XsTag = 'xs:element'
ORDER BY e.IsImplemented, t.XsTag
;
SELECT * FROM xsd WHERE XsTag IN ( 'xs:complexType', 'xs:simpleType' )