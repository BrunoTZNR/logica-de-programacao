#include <stdio.h>
#include <locale.h>

int main (void){

    setlocale(LC_ALL,"Portuguese");

    float n[2];
    int i = 0;

    for ( i = 0 ; i <= 1 ; i++) {

        printf("Digite o %iº número: ", i+1);
        scanf("%f", &n[i]);

    }

    if ( n[0] == n[1] ){

        printf("Os números são iguais!");

    } else {

        n[0]>n[1]? printf("\nO número: %.2f é a maior número dentre os números digitados!", n[0]) : printf("\nO número: %.2f é a maior número dentre os números digitados!", n[1]);
	    n[0]<n[1]? printf("\nO número: %.2f é a menor número dentre os números digitados!", n[0]) : printf("\nO número: %.2f é a menor número dentre os números digitados!", n[1]);

    }

    return (0);
}