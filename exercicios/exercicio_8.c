#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

float i=250;
float porcentagem=16;
float res;

main (void){
    setlocale(LC_ALL,"");
    printf("Exercicio 7:\n");
    printf("Em uma população de 250 ratos, temos que 16 porcento são brancos. Qual é o número de ratos brancos desta população? \n");

    res=(i*porcentagem)/100; //53,125
    printf("Resposta: %f\n", res);

}