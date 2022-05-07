#include <iostream>
#include <conio.h>
#include <locale.h>
#include <math.h>
using namespace std;

// ler a,b,c soma= a^2 + b^2 + c^2
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int n[3]={}, r;
	
	for(int i=0; i<=2 ; i++){
		cout<<"Digite o "<<i+1<<"º número inteiro: ";cin>>n[i];
	}
	
	r = pow(n[0],2) + pow(n[1],2) + pow(n[2],2);
	
	cout<<n[0]<<"^2 + "<<n[1]<<"^2 + "<<n[2]<<"^2 = "<<r<<endl;
	
	system("pause");
	return 0;
}
