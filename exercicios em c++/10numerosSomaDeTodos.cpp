#include <iostream>
#include <conio.h>
#include <locale.h>

using namespace std;

int main (){
	setlocale(LC_ALL,"Portuguese");
	
	float n[10]={}, sum;
	
	for(int i=0 ; i<=9 ; i++){
		cout<<"Digite o "<<i+1<<"º número: ";cin>>n[i];
	}
	
	sum=n[0]+n[1]+n[2]+n[3]+n[4]+n[5]+n[6]+n[7]+n[8]+n[9];
	
	cout<<n[0]<<" + "<<n[1]<<" + "<<n[2]<<" + "<<n[3]<<" + "<<n[4]<<" + "<<n[5]<<" + "<<n[6]<<" + "<<n[7]<<" + "<<n[8]<<" + "<<n[9]<<" = "<<sum<<endl;
	
	system("pause");
	return 0;
}
