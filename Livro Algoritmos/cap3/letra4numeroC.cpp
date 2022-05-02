#include <iostream>
#include <conio.h>
#include <locale.h>
#include <math.h>

#define pi 3.14159

using namespace std;

//volume lata oleo v=3.14159*r^2*a
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float v, r, a;
	
	cout<<"Digite a altura da lata: ";cin>>a;
	cout<<"Digite o raio da lata..: ";cin>>r;
	
	v = pi * pow(r,2) * a;
	
	cout<<"Volume: "<<pi<<" x "<<r<<"^2 x "<<a<<" = "<<v<<endl;
	
	system("pause");
	return 0;
}
