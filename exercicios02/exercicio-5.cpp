#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	int idade;
	
	cout << "Digite sua idade: ";
	cin >> idade;
	
	if ( idade >= 0 && idade < 7 ) {
		
		cout << "Como você está usando esse programa?" << endl;
	
	} else if ( idade >= 7 && idade < 16 ) {
	
		cout << "Não pode nem votar e nem dirigir!" << endl;
		
	} else if ( idade >= 16 && idade < 18 ) {
		
		cout << "Pode votar, mas não pode dirigir!" << endl;
		
	} else {
		
		cout << "Pode votar e pode dirigir!" << endl;
		
	}
	
	return 0;
}
