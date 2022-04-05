#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	float peso, altura, imc;
	
	cout << "Digite seu peso: ";
	cin >> peso;
	
	cout << "Digite sua altura: ";
	cin >> altura;
	
	imc = peso/pow(altura,2);
	
	if ( peso == 0 || altura == 0 ) {
		
		if ( peso == 0 ) {
			
			cout << "Digite um valor para peso diferente de 0!" << endl;
			
		} else {
			
			cout << "Digite um valor para altura diferente de 0!" << endl;
			
		}
		
	} else {
		
		if ( imc < 20 ) {
		
			cout << "IMC = " << imc << ", Abaixo do normal." << endl;
		
		} else if ( imc >=20 && imc < 25 ) {
			
			cout << "IMC = " << imc << ", Normal." << endl;
			
		} else if ( imc >=25 && imc < 30 ) {
			
			cout << "IMC = " << imc << ", Sobrepeso." << endl;
			
		} else if ( imc >=30 && imc < 35 ) {
			
			cout << "IMC = " << imc << ", Obesidade leve." << endl;
			
		} else if ( imc >=35 && imc < 40 ) {
			
			cout << "IMC = " << imc << ", Obesidade moderada." << endl;
			
		} else {
			
			cout << "IMC = " << imc << ", Obesidade mórbida." << endl;
			
		}
		
	}
	
	return 0;
}
