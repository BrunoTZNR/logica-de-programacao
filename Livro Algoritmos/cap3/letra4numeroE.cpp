#include <iostream>
#include <conio.h>
#include <locale.h>

#define taxa 2.85

using namespace std;

// mostrar valor prestação bem em atraso prestação=valor*(taxa/100)*tempo;
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float p, value, tempo;
	
	cout<<"Digite o valor do bem: ";cin>>value;
	cout<<"Digite o tempo em meses que está em atraso: ";cin>>tempo;
	
	p = value * (taxa / 100) * tempo;
	
	cout<<"O valor da prestação ficará em R$ "<<p<<" em "<<tempo<<" meses."<<endl;
	
	system("pause");
	return 0;
}
