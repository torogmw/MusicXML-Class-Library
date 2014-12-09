#include "TestHarness.h"
#include "MxDate.h"
#include <sstream>

using namespace lexicon;

TEST( stream01, MxDate )
{
    MxDate object( 2014, 8, 22 );
	std::stringstream ss1;
	object.stream( ss1 );
	std::string expected = "2014-08-22";
	std::string actual = ss1.str();
	CHECK_EQUAL( expected, actual )
	object.setValue( 2014, 2, 1 );
	std::stringstream ss2;
	object.stream( object.stream( ss2 ) );
	expected = "2014-02-012014-02-01";
	actual = ss2.str();
	CHECK_EQUAL( expected, actual )
	std::stringstream ss3;
	ss3 << object;
	expected = "2014-02-01";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}

TEST( stream02, MxDate )
{
	MxDate object( 2001, 03, 25 );
	std::stringstream ss1;
	object.stream( ss1 );
	std::string expected = "2001-03-25";
	std::string actual = ss1.str();
	CHECK_EQUAL( expected, actual )
	object.setValue( 13, 12, 1 );
	std::stringstream ss2;
	object.stream( object.stream( ss2 ) );
	expected = "0013-12-010013-12-01";
	actual = ss2.str();
	CHECK_EQUAL( expected, actual )
	std::stringstream ss3;
	ss3 << object;
	expected = "0013-12-01";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}