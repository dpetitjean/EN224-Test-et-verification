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

    int t_A = A;
    int t_B = B;

    if(A == 0){
        return B;
    }
    else if(B == 0){
        return A;
    }

	while(A != B){

		if(A > B){
			A = A-B;
		}
        else{
			B = B-A;
		}
	}

    assert(A > 0);
    assert(A == B);
    assert((t_A % A) == 0);
    assert((t_B % B) == 0);
	return A;
}


int main (int argc, char * argv []){
    int nb_tests = atoi(argv[1]);

    //int test = PGCD(10, -1);

    while(nb_tests != 0){

        int32_t A = rand() % 65536;
        uint32_t B = rand() % 65536;

        int pgcd = PGCD(A, B);    

        printf("idata_a  <= STD_LOGIC_VECTOR( TO_UNSIGNED( %d, 32) ); \n", A);
        printf("idata_b  <= STD_LOGIC_VECTOR( TO_UNSIGNED( %d, 32) ); \n", B);
        printf("idata_en <= '1';\n");
        printf("wait for 10 ns;\n");
        printf("while odata_en = '0' loop\n");
        printf("\tidata_en <= '0';\n");
        printf("\twait for 10 ns;\n");
        printf("end loop;\n");
        printf("ASSERT UNSIGNED( odata ) = TO_UNSIGNED( %d, 32) SEVERITY ERROR;\n\n", pgcd);

        nb_tests = nb_tests - 1;
    }
  return 0;
}