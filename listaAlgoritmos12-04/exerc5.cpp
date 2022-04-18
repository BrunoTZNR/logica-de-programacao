#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	for (int j=0 ; j<=1 ; j++){
		/*o proprio for já irá fornecer 0 e 1, basta adicionar +1 na condicional do switch.
		Ele irá dar os valores 1 e 2.*/
		switch (j+1){
		case 1:
			cout<<"O número 1 é impar."<<endl;
		break;
		case 2:
			cout<<"O número 2 é par."<<endl;
		break;
		default:
			cout<<"Número inválido!"<<endl;
	}
	}
	
	system("pause");
	return 0;
}
