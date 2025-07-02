#include "gmock/gmock.h"
#include "similarity-checker.cpp"

TEST(SimilarityCheckerFixture, TC1) {
	EXPECT_EQ(1, 1);
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}