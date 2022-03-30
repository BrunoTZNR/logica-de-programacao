#include <stdio.h>
#include <math.h>

float n[7]={100,200,23,85,1000,3,5};
float porcentagem[5]={13,13.57,133,0.35,14};
float res[5];

main (void){

    printf("Exercicio 9, 10, 11, 12, 13 e 14:\n");

    res[0]=(porcentagem[0]/100)*n[0];
    printf("9) 13 porcento de 100 = %f\n", res[0]);

    res[1]=(porcentagem[0]/100)*n[1];
    printf("10) 13 porcento de 200 = %f\n", res[1]);

    res[2]=(porcentagem[1]/100)*n[2];
    printf("11) 13,57 porcento de 23 = %f\n", res[2]);

    res[3]=(porcentagem[2]/100)*n[3];
    printf("12) 133 porcento de 85 = %f\n", res[3]);

    res[4]=(porcentagem[3]/100)*n[4];
    printf("13) 0,35 porcento de 1000 = %f\n", res[4]);

    res[5]=(porcentagem[4]/100)*(n[5]-n[6]);
    printf("14) 14 porcento de 3 - 5 = %f\n", res[5]);

}