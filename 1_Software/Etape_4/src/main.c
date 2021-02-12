#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include <stdlib.h>
#include <stdint.h>
#include <assert.h>

int PGCD(int A, int B)
{
    assert(A >= 0);
    assert(B >= 0);
    assert(A <= 65535);
    assert(B <= 65535);

	while(A != B){
        
        if(A == 0){
            return B;
        }else if(B == 0){
            return A;
        }

		if(A > B){
			A = A-B;
		}else{
			B = B-A;
		}
	}
	return A;
}


int main (int argc, char * argv []){
    int nb_tests = atoi(argv[1]);

    //int test = PGCD(10, -1);

    while(nb_tests != 0){

        int32_t A = rand() % 65536;
        uint32_t B = rand() % 65536;

        int pgcd = PGCD(A, B);        
        
        printf("Le PGCD de %d et %d est %d\n", A, B, pgcd);

        nb_tests = nb_tests - 1;
    }
  return 0;
}