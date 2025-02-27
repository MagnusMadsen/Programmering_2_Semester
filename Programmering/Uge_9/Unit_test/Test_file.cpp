#define CATCH_CONFIG_MAIN 
#include <Catch2_headerfile.hpp>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <sqlite3.h>

sqlite3 *db;


int OPEN_WebshopDB(const char* DB_file) {

    sqlite3_open(DB_file, &db);
    return 0; 

}

TEST_CASE("opening the database", "[sql]") {

    REQUIRE(OPEN_WebshopDB("Webshop.db") == 0);
  
}






