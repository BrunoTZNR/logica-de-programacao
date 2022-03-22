#include <stdio.h>

int main (void){

    int ht,vh,salarioBruto;
    float salarioLiquido,d;

    printf("Digite quantas horas trabalho este mes: ");
    scanf("%i",&ht);

    printf("Digite quanto recebe por hora trabalhada: ");
    scanf("%i",&vh);

    salarioBruto=ht*vh;

    printf("Digite a porcentagem que o inss cobra: ");
    scanf("%f",&d);

    salarioLiquido=salarioBruto-((d/100)*salarioBruto);

    printf("Seu salario liquido e: %0.2f",salarioLiquido);

}