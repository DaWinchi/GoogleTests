#include "pch.h"
#include "../export.h"

TEST(ReverseTests, EvenNumberOfSymbols) {
	char str[] = "string";
	reverse(str);
	ASSERT_STREQ(str, "gnirts");
}

TEST(ReverseTests, OddNumberOfSymbols) {
	char str[] = "house";
	reverse(str);
	ASSERT_STREQ(str, "esuoh");
}

TEST(ReverseTests, OneSymbols) {
	char str[] = "h";
	reverse(str);
	ASSERT_STREQ(str, "h");
}

TEST(ReverseTests, TwoSymbols) {
	char str[] = "QA";
	reverse(str);
	ASSERT_STREQ(str, "AQ");
}

TEST(ReverseTests, NotCorrectNumOfSynmbols) {
	char str[] = "memory";
	reverse(str);
	ASSERT_STRNE(str, "yromemp");
}
TEST(ReverseTests, UnicodeSymbols) {
	char str[] = "мыло";
	reverse(str);
	ASSERT_STREQ(str, "олым");
}

