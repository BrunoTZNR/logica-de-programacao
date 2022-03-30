#include <stdio.h>
#include <locale.h>

int main (void){

    setlocale(LC_ALL,"Portuguese");

    int idade[2];

    printf("Digite a primeira idade: ");
    scanf("%i", &idade[0]);

    printf("Digite a segunda idade: ");
    scanf("%i", &idade[1]);
	
	idade[0]>idade[1]? printf("A idade: %d é a maior idade dentre as idades digitadas!", idade[0]) : printf("A idade: %d é a maior idade dentre as idades digitadas!", idade[1]);

    return (0);
}