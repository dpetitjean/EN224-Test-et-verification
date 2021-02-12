#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include <stdlib.h>
#include <stdint.h>
#include <assert.h>
#include "pgcd.h"

int main (int argc, char * argv []){
    //int nb_tests = atoi(argv[1]);

    //int test = PGCD(10, -1);

    assert(PGCD(0,5) == 5);
    assert(PGCD(5,0) == 5);
    assert(PGCD(0,0) == 0);
    assert(PGCD(3,9) == 3);
    assert(PGCD(9,3) == 3);
    assert(PGCD(10,10) == 10);


    /*while(nb_tests != 0){

        int32_t A = rand() % 65536;
        uint32_t B = rand() % 65536;

        int pgcd = PGCD(A, B);    

        printf("Le PGCD de %d et %d est %d\n", A, B, pgcd);

        nb_tests = nb_tests - 1;
    }*/
  return 0;
}