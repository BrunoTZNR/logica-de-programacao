#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

// solicitar cotação do dolar, e quantidade de dolares que o usuario possui, e converter em real
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float usd, usdUser, convert;
	
	cout<<"Qual a cotação do dolar para real: ";cin>>usd;
	cout<<"Quantos dolares você possui......? ";cin>>usdUser;
	
	convert = usd * usdUser;
	
	cout<<"Você possui R$"<<convert<<" convertidos em reais."<<endl;
	
	system("pause");
	return 0;
}
