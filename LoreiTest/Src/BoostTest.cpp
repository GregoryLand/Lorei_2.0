#include <boost/test/unit_test.hpp>
#include "LoreiLib.h"
// This cpp is just to make sure boost test is linking in correctly
// Feel free to copy and paste this code to create your own test modules
// Change the BOOST_AUTO_TEST_SUITE and BOOST_AUTO_TEST_CASE arguments to do so

//KeepAtStartOfTestSection//////////////////////////////////////////////////////////////////////////////////////////
BOOST_AUTO_TEST_SUITE( boost_test );
///////////////////////////////////////////////////////////////////////////////////////////KeepAtStartOfTestSection

BOOST_AUTO_TEST_CASE(basic_boost_test)
{
	BOOST_CHECK(true);
	BOOST_CHECK_EQUAL(false, false);
}

BOOST_AUTO_TEST_CASE( Lorei_Lib_Link )
{
	BOOST_CHECK_EQUAL( Lorei::ProgramName(), "Language Operated Request and Execution Interface" );
}
//KeepAtEndOfFile//////////////////////////////////////////////////////////////////////////////////////////////////
BOOST_AUTO_TEST_SUITE_END();
////////////////////////////////////////////////////////////////////////////////////////////////////KeepAtEndOfFile