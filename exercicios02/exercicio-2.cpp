#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	float n[2];
	int i;
	
	for( i = 0 ; i <= 1 ; i++ ) {
		
		cout << "Digite o " << i+1 << "º número: ";
		cin >> n[i];
		
	}
	
	if ( n[0] > n[1] ) {
		
		cout << "O número digitado: '" << n[0] << "' é o maior dentre os números digitados!" << endl;
		
	} else {
		
		cout << "O número digitado: '" << n[1] << "' é o maior dentre os números digitados!" << endl;
		
	}
	
	return 0;
}
