#include <iostream>
#include <conio.h>
#include <locale.h>
#include <math.h>
using namespace std;

//x=m*(a*h+(v^2/2))
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float x, m=1, a=2, h=3, v=4;
	
	x = m * ( a * h + (pow(v,2) / 2));
	
	cout<<"X: "<<m<<" ("<<a<<" x "<<h<<" + ("<<v<<"^2 / 2)) = "<<x<<endl;
	
	system("pause");
	return 0;
}
