#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

//x=a/(b-c)
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float x, n[3]={};
	
	for(int i=0; i<=2 ; i++){
		cout<<"Digite o "<<i+1<<"º número: ";cin>>n[i];
	}
	
	cout<<endl;
	
	x = n[0] / (n[1] - n[2]);
	
	cout<<"x: "<<n[0]<<" / ("<<n[1]<<" - "<<n[2]<<") = "<<x<<endl;
	
	system("pause");
	return 0;
}
