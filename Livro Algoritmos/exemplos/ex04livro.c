#include <stdio.h>
#include <string.h>

int main (void){

    char *nome;
    char sexo;

    printf("Digite seu nome: ");
    scanf("%s",nome);

    printf("Digite seu sexo (apenas 1 caractere): ");
    scanf("%s",sexo);

    printf("Seu nome e %s e seu sexo e %s",nome,sexo);

}