#include "pch.h"
#include "../PrimeFactors/PrimeFactors.cpp"

#include <vector>
using namespace std;

TEST(PrimeFactors, OfTest) {

	PrimeFactors pf;
	vector<int> expected = {};
	EXPECT_EQ(expected, pf.of(1));
}

TEST(PrimeFactors, OfTest2) {

	PrimeFactors pf;
	vector<int> expected = {};
	EXPECT_EQ(expected, pf.of(2));
}

