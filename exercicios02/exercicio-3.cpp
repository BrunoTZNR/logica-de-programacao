#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	int idade;
	
	cout << "Digite sua idade: ";
	cin >> idade;
	
	if ( idade >= 16 ) {
		
		cout << "Você já pode votar!" << endl;
		
	} else {
		
		cout << "Você ainda não pode votar!" << endl;
		
	}
	
	return 0;
}
