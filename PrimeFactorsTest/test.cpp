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
	vector<int> expected = {2};
	EXPECT_EQ(expected, pf.of(2));
}

TEST(PrimeFactors, OfTest3) {

	PrimeFactors pf;
	vector<int> expected = {2,2};
	EXPECT_EQ(expected, pf.of(4));
}


TEST(PrimeFactors, OfTest4) {

	PrimeFactors pf;
	vector<int> expected = {2,3};
	EXPECT_EQ(expected, pf.of(6));
}

TEST(PrimeFactors, OfTest5) {

	PrimeFactors pf;
	vector<int> expected = { 2,2,2 };
	EXPECT_EQ(expected, pf.of(8));
}

TEST(PrimeFactors, OfTest6) {

	PrimeFactors pf;
	vector<int> expected = { 2,2,3 };
	EXPECT_EQ(expected, pf.of(12));
}

TEST(PrimeFactors, OfTest7) {

	PrimeFactors pf;
	vector<int> expected = { 2,7 };
	EXPECT_EQ(expected, pf.of(14));
}

