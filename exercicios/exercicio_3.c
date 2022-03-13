#include <stdio.h>

float n1[10]={200,130,93.4,208.06,0.3,112.21,12.1,243.5,357,793};
float n2[10]={0.3,1.27,5,3.15,0.7,3.12,4.3,2.53,0.5,0.07};
float res[10];

main (void){

    printf("Exercicio 3:\n");

    res[0]=n1[0]*n2[0];
    printf("a) 200 x 0,3 = %f\n", res[0]);

    res[1]=n1[1]*n2[1];
    printf("b) 130 x 1,27 = %f\n", res[1]);

    res[2]=n1[2]*n2[2];
    printf("c) 93,4 x 5 = %f\n", res[2]);

    res[3]=n1[3]*n2[3];
    printf("d) 208,06 x 3,15 = %f\n", res[3]);

    res[4]=n1[4]*n2[4];
    printf("e) 0,3 x 0,7 = %f\n", res[4]);

    res[5]=n1[5]*n2[5];
    printf("f) 112,21 x 3,12 = %f\n", res[5]);

    res[6]=n1[6]*n2[6];
    printf("g) 12,1 x 4,3 = %f\n", res[6]);

    res[7]=n1[7]*n2[7];
    printf("h) 243,5 x 2,53 = %f\n", res[7]);

    res[8]=n1[8]*n2[8];
    printf("i) 357 x 0,5 = %f\n", res[8]);

    res[9]=n1[9]*n2[9];
    printf("j) 793 x 0,07 = %f\n", res[9]);

}