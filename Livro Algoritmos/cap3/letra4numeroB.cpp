#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

//ler fahrenheit e converter celsius c=((f-32)*5)/9
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float f,c;
	
	cout<<"Digite os graus em fahrenheit(ex: 86): ";cin>>f;
	
	cout<<endl;
	
	c = (f - 32) * 5 / 9;
	
	cout<<"C: ("<<f<<" - 32) x 5 / 9 = "<<c<<"º em Celsius."<<endl;
	
	system("pause");
	return 0;
}
