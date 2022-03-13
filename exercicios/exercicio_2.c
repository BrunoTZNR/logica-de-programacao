#include <stdio.h>

float n1[10]={85.3,97.42,250.03,431.2,400,1050.37,3,98,43.87,193};
float n2[10]={23.1,31.3,117.4,148.13,23.72,673.89,1.07,39.73,17,15.03};
float res[10];

main (void){

    printf("Exercicio 2:\n");

    res[0]=n1[0]-n2[0];
    printf("a) 85,3 - 23,1 = %f\n", res[0]);

    res[1]=n1[1]-n2[1];
    printf("b) 97,42 - 31,3 = %f\n", res[1]);

    res[2]=n1[2]-n2[2];
    printf("c) 250,03 - 117,4 = %f\n", res[2]);

    res[3]=n1[3]-n2[3];
    printf("d) 431,2 - 148,13 = %f\n", res[3]);

    res[4]=n1[4]-n2[4];
    printf("e) 400 - 23,72 = %f\n", res[4]);

    res[5]=n1[5]-n2[5];
    printf("f) 1050,37 - 673,89 = %f\n", res[5]);

    res[6]=n1[6]-n2[6];
    printf("g) 3 - 1,07 = %f\n", res[6]);

    res[7]=n1[7]-n2[7];
    printf("h) 98 - 39,73 = %f\n", res[7]);

    res[8]=n1[8]-n2[8];
    printf("i) 43,87 - 17 = %f\n", res[8]);

    res[9]=n1[9]-n2[9];
    printf("j) 193 - 15,03 = %f\n", res[9]);

}