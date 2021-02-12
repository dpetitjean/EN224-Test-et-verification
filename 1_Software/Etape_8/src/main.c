#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include <stdlib.h>
#include <stdint.h>
#include <assert.h>
#include "pgcd.h"

int main (int argc, char * argv []){
    //int nb_tests = atoi(argv[1]);
    int buffer_A = 0;
    int buffer_B = 0;
    int buffer_Res = 0;

    FILE *ref_A = fopen("ref_A.txt", "r");
    FILE *ref_B = fopen("ref_B.txt", "r");
    FILE *resu_C = fopen("resu_C.txt", "w");

    printf("Fichier ouvert\n");

    for(int i = 0; i < 65536; i++){
      fscanf(ref_A, "%d", &buffer_A);
      fscanf(ref_B, "%d", &buffer_B);
      buffer_Res = PGCD(buffer_A, buffer_B);
      fprintf(resu_C, "%d\r\n", buffer_Res);
    }

    fclose(ref_A);
    fclose(ref_B);
    fclose(resu_C);

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