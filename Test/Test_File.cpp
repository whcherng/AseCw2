#include "rational.h"

using namespace ExactArithmetic;

#ifndef BOOST_TEST_MODULE
#define BOOST_TEST_MODULE Demo
#endif

#ifndef BOOST_INCLUDED_UNIT_TEST_FRAMEWORK_HPP_071894GER
#include <boost/test/included/unit_test.hpp>
#endif

BOOST_AUTO_TEST_SUITE(TestOperator)

	BOOST_AUTO_TEST_CASE(comparisonOps)
	{
		BOOST_CHECK(Rational(1, 5)>Rational(1, 10));
		BOOST_CHECK(Rational(2, 10)>Rational(1, 10));

		BOOST_CHECK(Rational(6, 100) <= Rational(1, 2));
		BOOST_CHECK(Rational(1, 2) >= Rational(6, 100));

		BOOST_CHECK(Rational(2, 10) >=Rational(1, 5));
		BOOST_CHECK(Rational(2, 10) <= Rational(1, 5));

		BOOST_CHECK(Rational(2, 10) == Rational(1, 5));
	}

	BOOST_AUTO_TEST_CASE(arithmeticOps)
	{
		BOOST_CHECK_EQUAL(Rational(5, 10) + Rational(3, 10), Rational(4, 5));
		BOOST_CHECK_EQUAL(Rational(5, 10) - Rational(3, 10), Rational(1, 5));
		BOOST_CHECK_EQUAL(Rational(5, 10)*Rational(3, 5), Rational(3, 10));
		BOOST_CHECK_EQUAL(Rational(5, 10)/Rational(3, 5), Rational(5, 6));

	}

	BOOST_AUTO_TEST_CASE(arithmeticOps2)
	{
		Rational a = Rational(5, 10);
		a += Rational(3, 10);
		BOOST_CHECK_EQUAL(a, Rational(4, 5));
		a = Rational(5, 10);
		a -= Rational(3, 10);
		BOOST_CHECK_EQUAL(a, Rational(1, 5));
		a = Rational(5, 10);
		a *= Rational(3, 5);
		BOOST_CHECK_EQUAL(a, Rational(3, 10));
		a = Rational(5, 10);
		a /= Rational(3, 5);
		BOOST_CHECK_EQUAL(a, Rational(25, 30));
	}

BOOST_AUTO_TEST_SUITE_END()
