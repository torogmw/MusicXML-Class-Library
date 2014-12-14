//#include "TestHarness.h"
//#include "MxSeqSmpNode6156.h"
//using namespace lexicon;
//
//TEST( Test0000_DefaultCtor, MxSeqSmpNode6156 )
//{
//	MxSeqSmpNode6156 object;
//	CHECK( true )
//}
//TEST( Test0001_getXmlTypeName, MxSeqSmpNode6156 )
//{
//	MxSeqSmpNode6156 object;
//	std::string expected;
//	std::string actual;
//	expected = "node-6156";
//	actual = object.getXmlTypeName();
//	CHECK_EQUAL( expected, actual )
//}
//TEST( Test0002_getClassName, MxSeqSmpNode6156 )
//{
//	MxSeqSmpNode6156 object;
//	std::string expected;
//	std::string actual;
//	expected = "MxSeqSmpNode6156";
//	actual = object.getClassName();
//	CHECK_EQUAL( expected, actual )
//}
//TEST( Test0003_getDocumentation, MxSeqSmpNode6156 )
//{
//	MxSeqSmpNode6156 object;
//	std::string expected;
//	std::string actual;
//	expected = "No XSD Documentation.";
//	actual = object.getDocumentation();
//	CHECK_EQUAL( expected, actual )
//}
//
///* Cancel Functions --------------------------------------------------------- */
//
//TEST( Test0004_getIsCancelPresent, MxSeqSmpNode6156 )
//{
//	MxSeqSmpNode6156 object;
//	bool expected;
//	bool actual;
//	expected = false;
//	actual = object.getIsCancelPresent();
//	CHECK_EQUAL( expected, actual )
//}
//TEST( Test0005_setIsCancelPresent, MxSeqSmpNode6156 )
//{
//	MxSeqSmpNode6156 object;
//	bool expected;
//	bool actual;
//	expected = false;
//	actual = object.getIsCancelPresent();
//	CHECK_EQUAL( expected, actual )
//	object.setIsCancelPresent( true );
//	expected = true;
//	actual = object.getIsCancelPresent();
//	CHECK_EQUAL( expected, actual )
//}
//TEST( Test0006_getCancel, MxSeqSmpNode6156 )
//{
//	MxSeqSmpNode6156 object;
//	std::string expected;
//	std::string actual;
//	HMxEsCancel element;
//	expected = "";
//	actual = object.getCancel()->toString();
//	CHECK_EQUAL( expected, actual )
//}
//TEST( Test0007_setCancel, MxSeqSmpNode6156 )
//{
//	MxSeqSmpNode6156 object;
//	std::string expected;
//	std::string actual;
//	HMxEsCancel element;
//	expected = "";
//	actual = object.getCancel()->toString();
//	CHECK_EQUAL( expected, actual )
//}
//TEST( Test0008_getCancelMinOccurs, MxSeqSmpNode6156 )
//{
//	MxSeqSmpNode6156 object;
//	int expected;
//	int actual;
//	expected = 0;
//	actual = object.getCancelMinOccurs();
//	CHECK_EQUAL( expected, actual )
//}
//TEST( Test0009_getCancelMaxOccurs, MxSeqSmpNode6156 )
//{
//	MxSeqSmpNode6156 object;
//	int expected;
//	int actual;
//	expected = 1;
//	actual = object.getCancelMaxOccurs();
//	CHECK_EQUAL( expected, actual )
//}
//TEST( Test0010_getIsCancelUnbounded, MxSeqSmpNode6156 )
//{
//	MxSeqSmpNode6156 object;
//	bool expected;
//	bool actual;
//	expected = false;
//	actual = object.getIsCancelUnbounded();
//	CHECK_EQUAL( expected, actual )
//}
//
///* End: Cancel Functions ---------------------------------------------------- */
//
///* Fifths Functions --------------------------------------------------------- */
//
//TEST( Test0011_getIsFifthsPresent, MxSeqSmpNode6156 )
//{
//	MxSeqSmpNode6156 object;
//	bool expected;
//	bool actual;
//	expected = true;
//	actual = object.getIsFifthsPresent();
//	CHECK_EQUAL( expected, actual )
//}
//TEST( Test0012_getFifths, MxSeqSmpNode6156 )
//{
//	MxSeqSmpNode6156 object;
//	std::string expected;
//	std::string actual;
//	HMxEmFifths element;
//	expected = "";
//	actual = object.getFifths()->toString();
//	CHECK_EQUAL( expected, actual )
//}
//TEST( Test0013_setFifths, MxSeqSmpNode6156 )
//{
//	MxSeqSmpNode6156 object;
//	std::string expected;
//	std::string actual;
//	HMxEmFifths element;
//	expected = "";
//	actual = object.getFifths()->toString();
//	CHECK_EQUAL( expected, actual )
//}
//TEST( Test0014_getFifthsMinOccurs, MxSeqSmpNode6156 )
//{
//	MxSeqSmpNode6156 object;
//	int expected;
//	int actual;
//	expected = 1;
//	actual = object.getFifthsMinOccurs();
//	CHECK_EQUAL( expected, actual )
//}
//TEST( Test0015_getFifthsMaxOccurs, MxSeqSmpNode6156 )
//{
//	MxSeqSmpNode6156 object;
//	int expected;
//	int actual;
//	expected = 1;
//	actual = object.getFifthsMaxOccurs();
//	CHECK_EQUAL( expected, actual )
//}
//TEST( Test0016_getIsFifthsUnbounded, MxSeqSmpNode6156 )
//{
//	MxSeqSmpNode6156 object;
//	bool expected;
//	bool actual;
//	expected = false;
//	actual = object.getIsFifthsUnbounded();
//	CHECK_EQUAL( expected, actual )
//}
//
///* End: Fifths Functions ---------------------------------------------------- */
//
///* Mode Functions ----------------------------------------------------------- */
//
//TEST( Test0017_getIsModePresent, MxSeqSmpNode6156 )
//{
//	MxSeqSmpNode6156 object;
//	bool expected;
//	bool actual;
//	expected = false;
//	actual = object.getIsModePresent();
//	CHECK_EQUAL( expected, actual )
//}
//TEST( Test0018_setIsModePresent, MxSeqSmpNode6156 )
//{
//	MxSeqSmpNode6156 object;
//	bool expected;
//	bool actual;
//	expected = false;
//	actual = object.getIsModePresent();
//	CHECK_EQUAL( expected, actual )
//	object.setIsModePresent( true );
//	expected = true;
//	actual = object.getIsModePresent();
//	CHECK_EQUAL( expected, actual )
//}
//TEST( Test0019_getMode, MxSeqSmpNode6156 )
//{
//	MxSeqSmpNode6156 object;
//	std::string expected;
//	std::string actual;
//	HMxEmMode element;
//	expected = "";
//	actual = object.getMode()->toString();
//	CHECK_EQUAL( expected, actual )
//}
//TEST( Test0020_setMode, MxSeqSmpNode6156 )
//{
//	MxSeqSmpNode6156 object;
//	std::string expected;
//	std::string actual;
//	HMxEmMode element;
//	expected = "";
//	actual = object.getMode()->toString();
//	CHECK_EQUAL( expected, actual )
//}
//TEST( Test0021_getModeMinOccurs, MxSeqSmpNode6156 )
//{
//	MxSeqSmpNode6156 object;
//	int expected;
//	int actual;
//	expected = 0;
//	actual = object.getModeMinOccurs();
//	CHECK_EQUAL( expected, actual )
//}
//TEST( Test0022_getModeMaxOccurs, MxSeqSmpNode6156 )
//{
//	MxSeqSmpNode6156 object;
//	int expected;
//	int actual;
//	expected = 1;
//	actual = object.getModeMaxOccurs();
//	CHECK_EQUAL( expected, actual )
//}
//TEST( Test0023_getIsModeUnbounded, MxSeqSmpNode6156 )
//{
//	MxSeqSmpNode6156 object;
//	bool expected;
//	bool actual;
//	expected = false;
//	actual = object.getIsModeUnbounded();
//	CHECK_EQUAL( expected, actual )
//}
//
///* End: Mode Functions ------------------------------------------------------ */
//


//TEST( toString, MxSeqSmpNode6156 )
//{
//    CHECK( false )
//}