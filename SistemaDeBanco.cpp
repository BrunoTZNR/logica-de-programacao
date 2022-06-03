#include <iostream>
#include <conio.h>
#include <locale.h>

using namespace std;

int main (){
	setlocale(LC_ALL,"Portuguese");
	
	float saldo, deposito, saque;
	char opcao;
	
	do{
		cout<<"(a) Consultar saldo"<<endl;
		cout<<"(b) Saque"<<endl;
		cout<<"(c) Depósito"<<endl;
		cout<<"(d) Sair"<<endl;
		cout<<endl;
		cout<<"Digite a opção desejada: ";cin>>opcao;
		cout<<endl;
		
		if(opcao == 'a'){
			cout<<"Seu saldo é de R$"<<saldo<<endl;
			cout<<endl;
		} else if (opcao == 'b'){
			cout<<"Digite o valor a ser sacado(ex: 15.50): ";cin>>saque;
			saldo -= saque;
			cout<<endl;
			if(saldo<0){
				cout<<"Saldo menor que 0, conta bloqueada!"<<endl;
				opcao = 'd';
			}
			cout<<endl;
		} else if (opcao == 'c'){
			cout<<"Digite o valor a ser depositado(ex: 340.51): ";cin>>deposito;
			saldo += deposito;
			cout<<endl;
		}
	}while(opcao!='d');
	
	system("pause");
	return 0;
}
