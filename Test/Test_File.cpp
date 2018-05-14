#include "rational.h"

using namespace ExactArithmetic;

#ifndef BOOST_TEST_MODULE
#define BOOST_TEST_MODULE Demo
#endif

#ifndef BOOST_INCLUDED_UNIT_TEST_FRAMEWORK_HPP_071894GER
#include <boost/test/included/unit_test.hpp>
#endif

BOOST_AUTO_TEST_SUITE(Cancel)

	Rational threeOverThree(3, 3);
	Rational fourOverFour(4, 4);
	Rational threeOverSix(3, 6);
	Rational twoOverFour(2, 4);
	Rational half(1, 2);
	Rational quarter(1, 4);

	BOOST_AUTO_TEST_CASE(cancels2Unity)
	{
		BOOST_CHECK_EQUAL(threeOverThree, Rational(1, 1));
		BOOST_CHECK_EQUAL(fourOverFour, Rational(1, 1));
		BOOST_CHECK_EQUAL(threeOverThree, fourOverFour);
	}

	BOOST_AUTO_TEST_CASE(cancels2Half)
	{
		BOOST_CHECK_EQUAL(threeOverSix, Rational(1, 2));
		BOOST_CHECK_EQUAL(twoOverFour, Rational(1, 2));
		BOOST_CHECK_EQUAL(threeOverSix, twoOverFour);
		BOOST_CHECK_EQUAL(Rational(2000000, 1000000), Rational(2));
	}

	BOOST_AUTO_TEST_CASE(addition)
	{
		BOOST_CHECK_EQUAL(Rational(1,6) + Rational(1,6), Rational(1,6));
		BOOST_CHECK_EQUAL(Rational(1,3) + Rational(1,3), Rational(1,3));
	}

BOOST_AUTO_TEST_SUITE_END()
