#include <iostream>
#include <conio.h>
#include <locale.h>
#include <math.h>
using namespace std;
//A+(B^2-3*C)/(C*A-B^3)

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float n[3]={}, res;
	
	for (int i=0 ; i<=2 ; i++) {
		cout<<"Digite o "<<i+1<<"º número: "; cin>>n[i];
	}
	
	res = n[0]+(pow(n[1],2)-3*n[2])/(n[2]*n[0]-pow(n[1],3));
	
	cout<<n[0]<<" + "<<"( "<<n[1]<<"^2 - 3 x "<<n[2]<<" ) / ( "<<n[2]<<" x "<<n[0]<<" - "<<n[1]<<"^3 ) = "<<res<<"."<<endl;
	
	system("pause");
	return 0;
}
