#include <stdio.h>
#include <math.h>

int main (void){

    float pi = 3.14159265;
    float a,r;

    printf("Escreva o raio da circunferencia: ");
    scanf("%f",&r);

    a=pi*(pow(r,2));

    printf("A area da circunferencia e: %f",a);

}