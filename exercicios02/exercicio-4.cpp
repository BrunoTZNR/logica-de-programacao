#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	int idade;
	
	cout << "Digite sua idade: ";
	cin >> idade;
	
	if ( idade >= 18 ) {
		
		cout << "Você já pode dirigir (se tiver carteira pelo amor!!)!" << endl;
		
	} else {
		
		cout << "Você não pode dirigir ainda!" << endl;
		
	}
	
	return 0;
}
