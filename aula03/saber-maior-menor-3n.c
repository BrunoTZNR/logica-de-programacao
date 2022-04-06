#include <stdio.h>
#include <locale.h>

int main (void){

    setlocale(LC_ALL,"Portuguese");

    float n[3];
    int i = 0;

    for ( i = 0 ; i <= 2 ; i++) {

        printf("Digite o %iº número: ", i+1);
        scanf("%f", &n[i]);

    }

	if ( n[0] == n[1] || n[1] == n[2] ) {
		
		if ( n[0] == n[1] ) {
			
			puts("Os números 1 e 2 são iguais!");
			
		} else if ( n[0] == n[2] ) {
			
			puts("Os números 1 e 3 são iguais!");
			
		} else if ( n[1] == n[2] ) {
			
			puts("Os números 2 e 3 são iguais!");
			
		} else {
			
			puts("Os três números são iguais!");
			
		}
		
	}
	
	if ( n[0] > n[1] && n[0] > n[2] ) {
			
			
			
	}

    return (0);
}
