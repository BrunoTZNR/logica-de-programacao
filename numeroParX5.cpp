#include <iostream>
#include <conio.h>
#include <locale.h>

using namespace std;

int main (){
	setlocale(LC_ALL,"Portuguese");
	
	int n, i=0;
	
	cout<<"Digite um número inteiro: ";cin>>n;
	
	if(n%2==0){
		while(i<3){
		n*=5;
		cout<<n<<endl;
		i++;
		}
	} else {
		cout<<n<<endl;
	}

	system("pause");
	return 0;
}
