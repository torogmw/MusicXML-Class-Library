//#include "TestHarness.h"
//#include "MxSeqSmpNode5619.h"
//using namespace lexicon;
//
//TEST( Test0000_DefaultCtor, MxSeqSmpNode5619 )
//{
//	MxSeqSmpNode5619 object;
//	CHECK( true )
//}
//TEST( Test0001_getXmlTypeName, MxSeqSmpNode5619 )
//{
//	MxSeqSmpNode5619 object;
//	std::string expected;
//	std::string actual;
//	expected = "node-5619";
//	actual = object.getXmlTypeName();
//	CHECK_EQUAL( expected, actual )
//}
//TEST( Test0002_getClassName, MxSeqSmpNode5619 )
//{
//	MxSeqSmpNode5619 object;
//	std::string expected;
//	std::string actual;
//	expected = "MxSeqSmpNode5619";
//	actual = object.getClassName();
//	CHECK_EQUAL( expected, actual )
//}
//TEST( Test0003_getDocumentation, MxSeqSmpNode5619 )
//{
//	MxSeqSmpNode5619 object;
//	std::string expected;
//	std::string actual;
//	expected = "No XSD Documentation.";
//	actual = object.getDocumentation();
//	CHECK_EQUAL( expected, actual )
//}
//
///* TupletNumber Functions --------------------------------------------------- */
//
//TEST( Test0004_getIsTupletNumberPresent, MxSeqSmpNode5619 )
//{
//	MxSeqSmpNode5619 object;
//	bool expected;
//	bool actual;
//	expected = false;
//	actual = object.getIsTupletNumberPresent();
//	CHECK_EQUAL( expected, actual )
//}
//TEST( Test0005_setIsTupletNumberPresent, MxSeqSmpNode5619 )
//{
//	MxSeqSmpNode5619 object;
//	bool expected;
//	bool actual;
//	expected = false;
//	actual = object.getIsTupletNumberPresent();
//	CHECK_EQUAL( expected, actual )
//	object.setIsTupletNumberPresent( true );
//	expected = true;
//	actual = object.getIsTupletNumberPresent();
//	CHECK_EQUAL( expected, actual )
//}
//TEST( Test0006_getTupletNumber, MxSeqSmpNode5619 )
//{
//	MxSeqSmpNode5619 object;
//	std::string expected;
//	std::string actual;
//	HMxEsTupletNumber element;
//	expected = "";
//	actual = object.getTupletNumber()->toString();
//	CHECK_EQUAL( expected, actual )
//}
//TEST( Test0007_setTupletNumber, MxSeqSmpNode5619 )
//{
//	MxSeqSmpNode5619 object;
//	std::string expected;
//	std::string actual;
//	HMxEsTupletNumber element;
//	expected = "";
//	actual = object.getTupletNumber()->toString();
//	CHECK_EQUAL( expected, actual )
//}
//TEST( Test0008_getTupletNumberMinOccurs, MxSeqSmpNode5619 )
//{
//	MxSeqSmpNode5619 object;
//	int expected;
//	int actual;
//	expected = 0;
//	actual = object.getTupletNumberMinOccurs();
//	CHECK_EQUAL( expected, actual )
//}
//TEST( Test0009_getTupletNumberMaxOccurs, MxSeqSmpNode5619 )
//{
//	MxSeqSmpNode5619 object;
//	int expected;
//	int actual;
//	expected = 1;
//	actual = object.getTupletNumberMaxOccurs();
//	CHECK_EQUAL( expected, actual )
//}
//TEST( Test0010_getIsTupletNumberUnbounded, MxSeqSmpNode5619 )
//{
//	MxSeqSmpNode5619 object;
//	bool expected;
//	bool actual;
//	expected = false;
//	actual = object.getIsTupletNumberUnbounded();
//	CHECK_EQUAL( expected, actual )
//}
//
///* End: TupletNumber Functions ---------------------------------------------- */
//
///* TupletType Functions ----------------------------------------------------- */
//
//TEST( Test0011_getIsTupletTypePresent, MxSeqSmpNode5619 )
//{
//	MxSeqSmpNode5619 object;
//	bool expected;
//	bool actual;
//	expected = false;
//	actual = object.getIsTupletTypePresent();
//	CHECK_EQUAL( expected, actual )
//}
//TEST( Test0012_setIsTupletTypePresent, MxSeqSmpNode5619 )
//{
//	MxSeqSmpNode5619 object;
//	bool expected;
//	bool actual;
//	expected = false;
//	actual = object.getIsTupletTypePresent();
//	CHECK_EQUAL( expected, actual )
//	object.setIsTupletTypePresent( true );
//	expected = true;
//	actual = object.getIsTupletTypePresent();
//	CHECK_EQUAL( expected, actual )
//}
//TEST( Test0013_getTupletType, MxSeqSmpNode5619 )
//{
//	MxSeqSmpNode5619 object;
//	std::string expected;
//	std::string actual;
//	HMxEsTupletType element;
//	expected = "";
//	actual = object.getTupletType()->toString();
//	CHECK_EQUAL( expected, actual )
//}
//TEST( Test0014_setTupletType, MxSeqSmpNode5619 )
//{
//	MxSeqSmpNode5619 object;
//	std::string expected;
//	std::string actual;
//	HMxEsTupletType element;
//	expected = "";
//	actual = object.getTupletType()->toString();
//	CHECK_EQUAL( expected, actual )
//}
//TEST( Test0015_getTupletTypeMinOccurs, MxSeqSmpNode5619 )
//{
//	MxSeqSmpNode5619 object;
//	int expected;
//	int actual;
//	expected = 0;
//	actual = object.getTupletTypeMinOccurs();
//	CHECK_EQUAL( expected, actual )
//}
//TEST( Test0016_getTupletTypeMaxOccurs, MxSeqSmpNode5619 )
//{
//	MxSeqSmpNode5619 object;
//	int expected;
//	int actual;
//	expected = 1;
//	actual = object.getTupletTypeMaxOccurs();
//	CHECK_EQUAL( expected, actual )
//}
//TEST( Test0017_getIsTupletTypeUnbounded, MxSeqSmpNode5619 )
//{
//	MxSeqSmpNode5619 object;
//	bool expected;
//	bool actual;
//	expected = false;
//	actual = object.getIsTupletTypeUnbounded();
//	CHECK_EQUAL( expected, actual )
//}
//
///* End: TupletType Functions ------------------------------------------------ */
//
///* TupletDot Functions ------------------------------------------------------ */
//
//TEST( Test0018_getTupletDotCount, MxSeqSmpNode5619 )
//{
//	MxSeqSmpNode5619 object;
//	std::size_t expected;
//	std::size_t actual;
//	expected = 0;
//	actual = object.getTupletDotCount();
//	CHECK_EQUAL( expected, actual )
//}
//TEST( Test0019_getTupletDotBegin, MxSeqSmpNode5619 )
//{
//	MxSeqSmpNode5619 object;
//	MxEeTupletDotsIter expected;
//	MxEeTupletDotsIter actual;
//}
//TEST( Test0020_getTupletDotBeginConst, MxSeqSmpNode5619 )
//{
//	MxSeqSmpNode5619 object;
//	MxEeTupletDotsIterConst expected;
//	MxEeTupletDotsIterConst actual;
//}
//TEST( Test0021_addTupletDot, MxSeqSmpNode5619 )
//{
//	MxSeqSmpNode5619 object;
//	std::size_t expected;
//	std::size_t actual;
//}
//TEST( Test0022_removeTupletDot, MxSeqSmpNode5619 )
//{
//	MxSeqSmpNode5619 object;
//	std::size_t expected;
//	std::size_t actual;
//	expected = 0;
//	// actual = object.removeTupletDot();
//	CHECK_EQUAL( expected, actual )
//}
//TEST( Test0023_getTupletDotMinOccurs, MxSeqSmpNode5619 )
//{
//	MxSeqSmpNode5619 object;
//	int expected;
//	int actual;
//}
//TEST( Test0024_getTupletDotMaxOccurs, MxSeqSmpNode5619 )
//{
//	MxSeqSmpNode5619 object;
//	int expected;
//	int actual;
//	expected = 32767;
//	actual = object.getTupletDotMaxOccurs();
//	CHECK_EQUAL( expected, actual )
//}
//TEST( Test0025_getIsTupletDotUnbounded, MxSeqSmpNode5619 )
//{
//	MxSeqSmpNode5619 object;
//	bool expected;
//	bool actual;
//	expected = true;
//	actual = object.getIsTupletDotUnbounded();
//	CHECK_EQUAL( expected, actual )
//}
//
///* End: TupletDot Functions ------------------------------------------------- */
//

//TEST( toString, MxSeqSmpNode5619 )
//{
//    CHECK( false )
//}
