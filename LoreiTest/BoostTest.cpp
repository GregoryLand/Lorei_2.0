#define BOOST_TEST_MODULE Lorei_Boost_Test
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_CASE(basic_boost_test)
{
	BOOST_CHECK(true);
	BOOST_CHECK_EQUAL(false, false);
}