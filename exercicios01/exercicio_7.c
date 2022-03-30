#include <stdio.h>
#include <math.h>

float i=8;
float porcentagem=12.5;
float res;

main (void){

    printf("Exercicio 7:\n");
    printf("Dos 8 irmãos que possuo, apenas 12,5 porcento são mulheres. Quantas irmãs eu possuo? \n");

    res=(i*porcentagem)/100; //53,125
    printf("Resposta: %f\n", res);

}