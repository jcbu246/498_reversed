#define CATCH_CONFIG_MAIN
#include <string>
#include "catch.hpp"
#include "../vowel_count.h"

using namespace std;

TEST_CASE( "An empty string has no vowels" ) {
	REQUIRE( vowel_count("") == 0 );
}

TEST_CASE( "Normal vowels are counted" ) {
	REQUIRE( vowel_count("aeiou") == 5 );
	REQUIRE( vowel_count("aeiouaeiou") == 10 );
	REQUIRE( vowel_count("hello") == 2 );
}

TEST_CASE( "Strings without vowels" ) {
	REQUIRE( vowel_count("WC") == 0 );
	REQUIRE( vowel_count("strchr") == 0 );
	REQUIRE( vowel_count("@#!%$*") == 0 );
}

TEST_CASE( "Strings where y is a vowel" ) {
	REQUIRE( vowel_count("ypres") == 2 );
	REQUIRE( vowel_count("y") == 1 );
	REQUIRE( vowel_count("play") == 2 );
}

TEST_CASE( "Strings where y is not a vowel" ) {
	REQUIRE( vowel_count("you") == 2 );
	REQUIRE( vowel_count("froyo") == 2 );
	REQUIRE( vowel_count("player") == 2 );
}

TEST_CASE( "Strings where y is both" ) {
	REQUIRE( vowel_count("playyard") == 3 );
	REQUIRE( vowel_count("yay") == 2 );
	REQUIRE( vowel_count("heyy") == 2 );
}

TEST_CASE( "count_vowels does not mutate its argument" ) {
	char str[] = "hello";
	(void) vowel_count(str);
	REQUIRE( string(str) == "hello" );
}
