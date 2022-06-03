#include <iostream>
#include <conio.h>
#include <locale.h>

using namespace std;

int main (){
	setlocale(LC_ALL,"Portuguese");
	
	float n;
	int saida;
	
	do{
		cout<<"Digite quantas pessoas há no local.: ";cin>>n;
		cout<<"Digite 0 para repetir e 1 para sair: ";cin>>saida;
	}while(saida != 1);
	
	cout<<endl;
	
	system("pause");
	return 0;
}
