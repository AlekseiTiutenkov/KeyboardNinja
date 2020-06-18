#define CATCH_CONFIG_MAIN
#include "../thirdparty/catch.hpp"
#include "../src/Realize_test.hpp"

TEST_CASE("Example") {
	char Sentence[] = "Test";
	float expected = 4;
	
	REQUIRE(realize(Sentence) == expected);
}

TEST_CASE("Test: 1 long word") {
	char Sentence[] = "Dooooooooor";
	float expected = 11;
	
	REQUIRE(realize(Sentence) == expected);
}

TEST_CASE("Test: empty word") {
	char Sentence[] = " ";
	float expected = 0;
	
	REQUIRE(realize(Sentence) == expected);
}

TEST_CASE("Test: sentence 3 words") {
	char Sentence[] = "One, two, free.";
	float expected = 10;
	
	REQUIRE(realize(Sentence) == expected);
}

TEST_CASE("Test: long sentence with '.' and '-' ") {
	char Sentence[] = "One, two, free, four, five, six. eight. nine-ten";
	float expected = 33;
	
	REQUIRE(realize(Sentence) == expected);
}

TEST_CASE("Test: razdeliteli") {
	char Sentence[] = "---...";
	float expected = 0;
	
	REQUIRE(realize(Sentence) == expected);
}
