#include <iostream>
#include <conio.h>
#include <locale.h>
#include <math.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float f,c,r;
	
	cout<<"Digite um número...: ";cin>>c;
	cout<<"Digite outro número: ";cin>>r;
	cout<<endl;
	
	f = sqrt((1/1*c) - (pow(r,2) / 4 * pow(c,2)));
	
	cout<<"F: (raizQuadrada) 1 / 1 x "<<c<<" - "<<r<<"^2 / 4 x "<<c<<"^2 = "<<f<<endl;
	
	system("pause");
	return 0;
}
