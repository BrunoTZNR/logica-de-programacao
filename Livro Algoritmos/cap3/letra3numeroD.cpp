#include <iostream>
#include <conio.h>
#include <locale.h>
#include <math.h>
using namespace std;

//d=v*t+(a*t^2/2)
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float d, v=1, t=2, a=3;
	
	d = v * t + (a * pow(t,2) / 2);
	
	cout<<"D = "<<v<<" x "<<t<<" + ("<<a<<" x "<<t<<"^2 / 2) = "<<d<<endl;
	
	system("pause");
	return 0;
}
