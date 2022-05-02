#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

//d=(p-r)/n
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	double d;
	float n[3]={};
	
	for(int i=0; i<=2 ; i++){
		cout<<"Digite o "<<i+1<<"º número: ";cin>>n[i];
	}
	
	cout<<endl;
	
	d = (n[0] - n[1]) / n[2];
	
	cout<<"D: ("<<n[0]<<" - "<<n[1]<<") / "<<n[2]<<" = "<<d<<endl;
	
	system("pause");
	return 0;
}
