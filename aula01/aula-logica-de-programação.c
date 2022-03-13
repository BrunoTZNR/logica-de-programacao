#include <stdio.h>

float n[3]={10, 5, 2};
float res[5];

main (void){
	
	res[0]=(n[0]*n[1])-(n[2]+n[1]);
	res[1]=n[2]/n[1]+(n[0]-n[2]);
	res[2]=((n[2]*n[1])-(n[0]/n[2])+n[0]);
	res[3]=(n[2]+n[0])-(n[1]+n[2])/4;
	res[4]=((res[0]*res[2])-(res[3]/res[0])+res[1]);
	
	printf("Exercicio a %f\n", res[0]);
	printf("Exercicio b %f\n", res[1]);
	printf("Exercicio c %f\n", res[2]);
	printf("Exercicio d %f\n", res[3]);
	printf("Exercicio especial %f", res[4]);
}