#include <iostream>
#include <locale.h>
#include <conio.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	int valor;
	
	cout << "Digite um mês do ano (ex: 1 a 12): ";
	cin >> valor;
	
	switch ( --valor ) {
		
		case 0:
			cout << "Janeiro" << endl;
		break;
		
		case 1:
			cout << "Fervereiro" << endl;
		break;
		
		case 2:
			cout << "Março" << endl;
		break;
		
		case 3:
			cout << "Abril" << endl;
		break;
		
		case 4:
			cout << "Maio" << endl;
		break;
		
		case 5:
			cout << "Junho" << endl;
		break;
		
		case 6:
			cout << "Julho" << endl;
		break;
		
		case 7:
			cout << "Agosto" << endl;
		break;
		
		case 8:
			cout << "Setembro" << endl;
		break;
		
		case 9:
			cout << "Outubro" << endl;
		break;
		
		case 10:
			cout << "Novembro" << endl;
		break;
		
		case 11:
			cout << "Dezembro" << endl;
		break;
		
		default:
			cout << "Digite um valor entre 1 e 12!" << endl;
		
	}
	
//	system("pause");
	return 0;
}
