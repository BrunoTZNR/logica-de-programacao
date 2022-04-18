#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float n[3]={}, mult, div;
	
	for (int i=0 ; i<=2 ; i++) {
		cout<<"Digite o "<<i+1<<"º número: "; cin>>n[i];
	}
	
	cout<<endl;
	
	mult=n[0]*n[1]*n[2];
	div=n[0]/n[1]/n[2];
	
	cout<<"A multiplicação: "<<n[0]<<" x "<<n[1]<<" x "<<n[2]<<" é "<<mult<<endl;
	cout<<"A divisão: "<<n[0]<<" / "<<n[1]<<" / "<<n[2]<<" é "<<div<<endl;
	
	system("pause");
	return 0;
}
