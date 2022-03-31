#include <stdio.h>
#include <locale.h>

int main (void){
    
    setlocale(LC_ALL,"Portugues");

	int i = 0, faltas;
    float nota[4], media;

    for(i = 0 ; i <= 3 ; i++){
        printf("Digite a nota %i: ", i+1);
        scanf("%f", &nota[i]);
    }

    printf("Digite suas faltas: ");
    scanf("%d", &faltas);
    /*
    for(i = 0 ; i <= 3 ; i++){
        printf("Nota %d = %.2f.\n", i+1, nota[i]);
    }
    */
    media = (nota[0] + nota[1] + nota[2] + nota[3]) / 4;

    printf("A media das notas é : %.1f.\n", media);
    printf("A suas faltas somam é : %i.\n", faltas);

    if ( faltas > 15 || media < 3 ) {

        printf("Aluno reprovado!");

        if ( faltas > 15 && media < 3 ) {

            printf(" Pois o aluno não alcannçou a média e exedeu o número de faltas!");

        } else if ( faltas > 15 ) {

            printf(" Pois exedeu o núemro máximo de faltas!");

        } else {
            
            printf(" Pois não alcançou a media!");
        }

    } else if ( media >= 3 && media < 7 ) {

        printf("Aluno de recuperação! Pois não alcançou a média!");

    } else {

        printf("Aluno aprovado!");


    }

    return (0);
}