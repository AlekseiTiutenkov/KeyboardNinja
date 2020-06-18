#define CATCH_CONFIG_MAIN
#include "../thirdparty/catch.hpp"
#include "../src/Realize.hpp"

TEST_CASE("Example") {
	char Sentence[] = "Test";
	float expected = 4;
	
	REQUIRE(realize(Sentence) == expected);
}
