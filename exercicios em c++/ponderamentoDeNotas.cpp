#include <iostream>
#include <conio.h>
#include <locale.h>
#include <string>

using namespace std;

int main (){
	setlocale(LC_ALL,"Portuguese");
	
	float nota1[12]={},nota2[12]={},nota3[12]={}, media[12]={};
	string nome[12]={};
	
	for(int i=0 ; i<=11 ; i++){
		cout<<"Digite o nome do aluno...: ";cin>>nome[i];
		cout<<"Digite a 1º nota do aluno: ";cin>>nota1[i];
		cout<<"Digite a 2º nota do aluno: ";cin>>nota2[i];
		cout<<"Digite a 3º nota do aluno: ";cin>>nota3[i];
		cout<<endl;	
	}
	
	for(int j=0 ; j<=11 ; j++){
		media[j] = (nota1[j]*2+nota2[j]*4+nota3[j]*3)/10;
		
		cout<<"A média do aluno "<<nome[j]<<" é "<<media[j]<<endl;
	}
	
	system("pause");
	return 0;
}
