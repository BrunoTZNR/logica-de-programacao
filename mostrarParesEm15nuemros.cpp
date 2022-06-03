#include <iostream>
#include <conio.h>
#include <locale.h>
#include <string>

using namespace std;

int main (){
	setlocale(LC_ALL,"Portuguese");
	
	int j=0, n[15]={};
	
	for(int i=0 ; i<=14 ; i++){
		cout<<"digite o "<<i+1<<"º número: ";cin>>n[i];
	}
	
	cout<<endl;

	do{
		if(n[j]%2==0){
			cout<<n[j]<<endl;
		}
		j++;
	}while(j<15);
	
	system("pause");
	return 0;
}
