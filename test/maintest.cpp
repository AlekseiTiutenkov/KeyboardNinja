#define CATCH_CONFIG_MAIN
#include "../thirdparty/catch.hpp"
#include "../src/Realize_test.hpp"
#include "../src/Greeting_and_menu_test.hpp"


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

TEST_CASE("Test: numbers") {
	char Sentence[] = "135-64";
	float expected = 5;
	
	REQUIRE(realize(Sentence) == expected);
}

TEST_CASE("Test: 0 and 1") {
	char Sentence[] = "0";
	float expected = 1;
	
	REQUIRE(realize(Sentence) == expected);
}

TEST_CASE("Test: slash n") {
	char Sentence[] = "\n";
	float expected = 0;
	
	REQUIRE(realize(Sentence) == expected);
}

TEST_CASE("Test: TAB") {
	char Sentence[] = "\t";
	float expected = 0;
	
	REQUIRE(realize(Sentence) == expected);
}

TEST_CASE("Test: slash n&TAB") {
	char Sentence[] = "\nand.123\t";
	float expected = 6;
	
	REQUIRE(realize(Sentence) == expected);
}


TEST_CASE("Test: Entering string") {
	int expected = 1;
	
	REQUIRE(Greeting_and_menu() == expected);
}

TEST_CASE("Test: Other characters") {
	char Sentence[] = "\r";
	float expected = 1;
	
	REQUIRE(realize(Sentence) == expected);
}

TEST_CASE("Test: Other characters two") {
	char Sentence[] = "\0";
	float expected = 0;
	
	REQUIRE(realize(Sentence) == expected);
}

TEST_CASE("Test: Other simvols") {
	char Sentence[] = "\\";
	float expected = 1;
	
	REQUIRE(realize(Sentence) == expected);
}

TEST_CASE("Test: Other simvols two") {
	char Sentence[] = "&&";
	float expected = 2;
	
	REQUIRE(realize(Sentence) == expected);
}


TEST_CASE("Test: Other simvols three") {
	char Sentence[] = "||";
	float expected = 2;
	
	REQUIRE(realize(Sentence) == expected);
}






