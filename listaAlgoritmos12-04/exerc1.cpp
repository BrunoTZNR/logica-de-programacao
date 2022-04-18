#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float n[3]={}, soma, sub;
	
	for (int i=0 ; i<=2 ; i++) {
		cout<<"Digite o "<<i+1<<"º número: "; cin>>n[i];
	}
	
	cout<<endl;
	
	soma=n[0]+n[1]+n[2];
	sub=n[0]-n[1]-n[2];
	
	cout<<"A soma: "<<n[0]<<" + "<<n[1]<<" + "<<n[2]<<" é "<<soma<<endl;
	cout<<"A divisão: "<<n[0]<<" - "<<n[1]<<" - "<<n[2]<<" é "<<sub<<endl;
	
	system("pause");
	return 0;
}
