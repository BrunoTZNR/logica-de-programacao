#include <iostream>
#include <conio.h>
#include <locale.h>
#include <string>

using namespace std;

int main (){
	setlocale(LC_ALL,"Portuguese");
	
	string nome[10]={}, sexo[10]={}, idade[10]={};
	
	for(int i=0 ; i<=9 ; i++){
		cout<<"digite o "<<i+1<<"º nome.........: ";cin>>nome[i];
		cout<<"digite o sexo do "<<i+1<<"º nome.: ";cin>>sexo[i];
		cout<<"digite a idade do "<<i+1<<"º nome: ";cin>>idade[i];
		cout<<endl;
		
	}
	
	for(int j=0 ; j<=9 ; j++){
		cout<<nome[j]<<" do sexo "<<sexo[j]<<" e possui a idade de "<<idade[j]<<" anos."<<endl;
	}
	
	cout<<endl;
	
	system("pause");
	return 0;
}
