#include <iostream>
#include <conio.h>
#include <locale.h>
#include <math.h>
using namespace std;

// leia n e eleve a 2 sem amarzenar o resultado em nenhuma variavel
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float n;
	
	cout<<"Digite um número inteiro: ";cin>>n;
	
	cout<<"O número: "<<n<<"^2 = "<<pow(n,2)<<endl;
	
	system("pause");
	return 0;
}
