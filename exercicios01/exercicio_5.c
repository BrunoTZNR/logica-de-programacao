#include <stdio.h>
#include <math.h>

float nbase=10;
float nexpoente[6]={6,2,3,10,7,4};
float n1[5]={12,2.3,4,7,2};
float res[5];

main (void){

    printf("Exercicio 5:\n");

    res[0]=(pow(nbase,nexpoente[0]))*(pow(nbase,nexpoente[1]));
    printf("a) 10^6 x 10^2 = %f\n", res[0]);

    res[1]=nbase-(n1[0]*(pow(nbase,nexpoente[2])));
    printf("b) 10 - 12 x 10^3 = %f\n", res[1]);

    res[2]=n1[1]*(pow(nbase,nexpoente[3]))*n1[2]*(pow(nbase,nexpoente[4]));
    printf("c) 2,3.10^10 x 4.10^7 = %f\n", res[2]);

    res[3]=(pow(nbase,nexpoente[5]))/(pow(nbase,nexpoente[2]));
    printf("d) 10^4 : 10^3 = %f\n", res[3]);

    res[4]=nbase-(n1[3]/nbase)-n1[4];
    printf("e) 10 - 7 : 10 - 2 = %f\n", res[4]);

}