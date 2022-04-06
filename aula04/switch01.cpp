#include <iostream>
#include <locale.h>
#include <conio.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	int valor;
	
	cout << "Digite um número de 1 a 7: ";
	cin >> valor;
	
	switch(--valor){
		
		case 0:
			cout << "Domingo!" << endl;
		break;
		
		case 1:
			cout << "Segunda!" << endl;
		break;
		
		case 2:
			cout << "Terça!" << endl;
		break;
		
		case 3:
			cout << "Quarta!" << endl;
		break;
		
		case 4:
			cout << "Quinta!" << endl;
		break;
		
		case 5:
			cout << "Sexta!" << endl;
		break;
		
		case 6:
			cout << "Sábado!" << endl;
		break;
		
		default:
			cout << "Digite um número válido" << endl;
	}
		
	system("pause");
	return 0;
}







