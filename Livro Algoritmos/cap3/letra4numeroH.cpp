#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

// volume = comprimento * largura * altura
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float v, c=1, l=2, a=3;
	
	v = c * l * a;
	
	cout<<"Volume: "<<c<<" x "<<l<<" x "<<a<<" = "<<v<<endl;
	
	system("pause");
	return 0;
}
