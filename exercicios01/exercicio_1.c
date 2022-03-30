#include <stdio.h>

float n1[10]={12.48, 12.5, 12.8, 31.3, 107.03, 83.92, 275.04, 94.28, 189.76, 13.273};
float n2[10]={19, 0.07, 3.27, 29.7, 32.7, 16.08, 129.3, 36.571, 183.24, 2.48};
float res[10];

main (void){

    printf("Exercicio 1:\n");

    res[0]=n1[0]+n2[0];
    printf("a) 12,48 + 19 = %f\n", res[0]);

    res[1]=n1[1]+n2[1];
    printf("b) 12,5 + 0,07 = %f\n", res[1]);

    res[2]=n1[2]+n2[2];
    printf("c) 12,8 + 3,27 = %f\n", res[2]);

    res[3]=n1[3]+n2[3];
    printf("d) 31,3 + 29,7 = %f\n", res[3]);

    res[4]=n1[4]+n2[4];
    printf("e) 107,03 + 32,7 = %f\n", res[4]);

    res[5]=n1[5]+n2[5];
    printf("f) 83,92 + 16,08 = %f\n", res[5]);

    res[6]=n1[6]+n2[6];
    printf("g) 275,04 + 129,3 = %f\n", res[6]);

    res[7]=n1[7]+n2[7];
    printf("h) 94,28 + 36,571 = %f\n", res[7]);

    res[8]=n1[8]+n2[8];
    printf("i) 189,76 + 183,24 = %f\n", res[8]);

    res[9]=n1[9]+n2[9];
    printf("j) 13,273 + 2,48 = %f\n", res[9]);

}