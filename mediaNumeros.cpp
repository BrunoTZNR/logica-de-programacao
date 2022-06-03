#include <iostream>
#include <conio.h>
#include <locale.h>

using namespace std;

int main (){
	setlocale(LC_ALL,"Portuguese");
	
	float n[3]={}, media;
	int j=0;
	
	for(int i=0 ; i<=2 ; i++){
		cout<<"Digite o "<<i+1<<"º número: ";cin>>n[i];
	}
	
	media = (n[0]+n[1]+n[2])/(sizeof(n)/4);
	
	while(j<5){
		cout<<"A média dos "<<sizeof(n)/4<<" números digitados é "<<media<<"."<<endl;
		j++;
	}
	
	system("pause");
	return 0;
}
