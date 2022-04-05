#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	float num;
	
	cout << "Qual o número? ";
	cin >> num;
	
	if ( num > 0 ) {
		
		cout << "O número entrado é maior que zero!" << endl;
		
	} else {
		
		if ( num < 0 ) {
			
			cout << "O número entrado é menor que zero!" << endl;
			
		} else {
			
			cout << "O número é igual a zero!" << endl;
			
		}
		
	}
	
	return 0;
}
