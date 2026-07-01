#include "gmock/gmock.h"
#include "prime-factors.cpp"

using namespace testing;
class PrimeFixture : public Test {
public:
	PrimeFactors prime_factor;
	std::vector<int> expected;
};

TEST(PrimeFixture, Of1) {
	PrimeFactors prime_factor;
	std::vector<int> expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}

TEST(PrimeFixture, Of2) {
	PrimeFactors prime_factor;
	std::vector<int> expected = {2};
	EXPECT_EQ(expected, prime_factor.of(2));
}
