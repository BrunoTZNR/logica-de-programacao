#include <stdio.h>

float n1[13]={3,21,7,9.6,4064,1.5,4.8,1.776,7.502,0.906,50.20,21.73,35.28};
float n2[10]={2,50,3.2,30,4.8,12.4,3,5,1.06,9.8};
float res[12];

main (void){

    printf("Exercicio 4:\n");

    res[0]=n1[0]/n2[0];
    printf("a) 3 : 2 = %f\n", res[0]);

    res[1]=n1[1]/n2[0];
    printf("b) 21 : 2 = %f\n", res[1]);

    res[2]=n1[2]/n2[1];
    printf("c) 7 : 50 = %f\n", res[2]);

    res[3]=n1[3]/n2[2];
    printf("d) 9,6 : 3,2 = %f\n", res[3]);

    res[4]=n1[4]/n2[2];
    printf("e) 4064 : 3,2 = %f\n", res[4]);

    res[5]=n1[5]/n2[0];
    printf("f) 1,5 : 2 = %f\n", res[5]);

    res[6]=n1[6]/n2[3];
    printf("g) 4,8 : 30 = %f\n", res[6]);

    res[7]=n1[7]/n2[4];
    printf("h) 1,776 : 4,8 = %f\n", res[7]);

    res[8]=n1[8]/n2[5];
    printf("i) 7,502 : 12,4 = %f\n", res[8]);

    res[9]=n1[9]/n2[6];
    printf("j) 0,906 : 3 = %f\n", res[9]);

    res[10]=n1[10]/n2[7];
    printf("k) 50,20 : 5 = %f\n", res[10]);

    res[11]=n1[11]/n2[8];
    printf("l) 21,73 : 1,06 = %f\n", res[11]);

    res[12]=n1[12]/n2[9];
    printf("m) 35,28 : 9,8 = %f\n", res[12]);

}