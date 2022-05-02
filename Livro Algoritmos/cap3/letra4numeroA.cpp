#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

//ler celsius e converter fahrenheit f=c(9/5)+32
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float c, f;
	
	cout<<"Digite os graus em celsius(ex: 27): ";cin>>c;
	
	cout<<endl;
	
	f = c * 9 / 5 + 32;
	
	cout<<"F: "<<c<<" x 9 / 5 + 32 = "<<f<<"º em Fahrenheit."<<endl;
	
	system("pause");
	return 0;
}
