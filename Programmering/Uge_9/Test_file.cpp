#define CATCH_CONFIG_MAIN 
#include <Catch2_headerfile.hpp>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>





unsigned int Factorial( unsigned int number ) {
    return number <= 1 ? number : Factorial(number-1)*number;
}

TEST_CASE( "Factorials are computed", "[factorial]" ) {
    REQUIRE( Factorial(1) == 1 );
    REQUIRE( Factorial(2) == 2 );
    REQUIRE( Factorial(3) == 6 );
    REQUIRE( Factorial(10) == 3628800 );
}

printf("Hello World!");



