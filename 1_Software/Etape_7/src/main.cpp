#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include <stdlib.h>
#include <stdint.h>
#include <assert.h>
#include "pgcd.h"

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

//int main (int argc, char * argv []){

  TEST_CASE ( "PGCD classique", "[pgcd]" ){

    SECTION(" A > B "){
      REQUIRE(PGCD(9,3) == 3);
      REQUIRE(PGCD(11,5) == 1);
      REQUIRE(PGCD(22,8) == 2);
    }

    SECTION(" A < B "){
      REQUIRE(PGCD(3,9) == 3);
      REQUIRE(PGCD(5,11) == 1);
      REQUIRE(PGCD(8, 22) == 2);
    }

    SECTION(" A = B "){
      REQUIRE(PGCD(9,9) == 9);
      REQUIRE(PGCD(11,11) == 11);
      REQUIRE(PGCD(22,22) == 22);
    }
  }

  TEST_CASE ("PGCD particulier", "[pgcd]"){
    SECTION(" A = 0 "){
      REQUIRE(PGCD(0,3) == 3);
      REQUIRE(PGCD(0,5) == 5);
      REQUIRE(PGCD(0,8) == 8);
    }

    SECTION(" B = 0 "){
      REQUIRE(PGCD(3,0) == 3);
      REQUIRE(PGCD(5,0) == 5);
      REQUIRE(PGCD(8,0) == 8);
    }

    SECTION(" A = B = 0 "){
      REQUIRE(PGCD(0,0) == 0);
      REQUIRE(PGCD(0,1) == 2); // fausse assert pour vérifier le blocage en cas d'erreur
    }
  }

    //int nb_tests = atoi(argv[1]);

    //int test = PGCD(10, -1);

    /*assert(PGCD(0,5) == 5);
    assert(PGCD(5,0) == 5);
    assert(PGCD(0,0) == 0);
    assert(PGCD(3,9) == 3);
    assert(PGCD(9,3) == 3);
    assert(PGCD(10,10) == 10);*/


    /*while(nb_tests != 0){

        int32_t A = rand() % 65536;
        uint32_t B = rand() % 65536;

        int pgcd = PGCD(A, B);    

        printf("Le PGCD de %d et %d est %d\n", A, B, pgcd);

        nb_tests = nb_tests - 1;
    }*/
 // return 0;
//}