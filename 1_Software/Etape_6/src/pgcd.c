#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include <stdlib.h>
#include <stdint.h>
#include <assert.h>
#include "pgcd.h"

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
