#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int PGCD(int A, int B)
{
	while(A != B){
		if(A > B){
			A = A-B;
		}else{
			B = B-A;
		}
	}
	return A;
}

int main (int argc, char * argv []){

	int A = atoi(argv[1]);
	int B = atoi(argv[2]);

	int pgcd = PGCD(A, B);

	printf("Le PGCD de %d et %d est %d\n", A, B, pgcd);

	
  return 0;
}
