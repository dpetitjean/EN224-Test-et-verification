#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include <stdlib.h>
#include <stdint.h>

int PGCD(int A, int B)
{
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

int PGCD_2(int A, int B){

     if(A == 0){
        return B;
    }else if(B == 0){
        return A;
    }

    while(B != 0){
        A = B;
        B = A % B;
    }

    return A;
}

int main (int argc, char * argv []){
    int nb_tests = atoi(argv[1]);

    while(nb_tests != 0){

        int32_t A = rand() % 65536;
        uint32_t B = rand() % 65536;

        int pgcd = PGCD(A, B);
        int pgcd_2 = PGCD_2(A, B);

        if(pgcd == pgcd_2){
            printf("Le PGCD de %d et %d est %d\n", A, B, pgcd);
        }else{
            break;
            printf("Pour A = %d, B = %d, PGCD trouve %d et PGCD_2 trouve %d\n", A, B, pgcd, pgcd_2);
        }

        nb_tests = nb_tests - 1;
    }
  return 0;
}