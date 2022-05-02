#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

/*calcualr quant de litros comb gasta em viagem de carro faz 12/litros
tempo e velocidade media distancia=t*v litrosUsados=d/12
apresentar tempo; vel media; distancia; litros gastos*/
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float tempo, velMedia, dist, litUsados;
	
	cout<<"Digite o tempo da viagem em minutos (ex:30)..........: ";cin>>tempo;
	cout<<"Digite a velocidade média pecorrida na viagem (ex:30): ";cin>>velMedia;
		
	tempo /= 60;
	dist = tempo * velMedia;
	litUsados = dist / 12;
	
	cout<<"A viagem durou "<<tempo*60<<" minutos, a velocidade média foi de "<<velMedia<<
	"Km/h, a distância foi de "<<dist<<"Km e foram gastos "<<litUsados<<
	" litros de combustível"<<endl;
	
	
	system("pause");
	return 0;
}
