#include <iostream>
#include <conio.h>
#include <locale.h>
#include <string>

using namespace std;

int main (){
	setlocale(LC_ALL,"Portuguese");
	
	int j=0, idade[10]={};
	string nome[10]={};
	
	for(int i=0 ; i<=9 ; i++){
		cout<<"digite o "<<i+1<<"º nome.........: ";cin>>nome[i];
		cout<<"digite a idade do "<<i+1<<"º nome: ";cin>>idade[i];
		cout<<endl;	
	}
	
	while(j<9){
		if(idade[j]>=18){
			cout<<nome[j]<<" possui a idade de "<<idade[j]<<" anos."<<endl;
		}
	
		j++;
	}
	
	cout<<endl;
	
	system("pause");
	return 0;
}
