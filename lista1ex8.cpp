#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float idade, cigarros, result, dia;
	
	cout << "Informe a sua idade: ";
	cin >> idade;
	
	cout << "Informe quantos cigarros voc� fuma por dia: ";
	cin >> cigarros;
	
	result = (cigarros * 10);
	cout << "Voc� perdeu "<< result << " minutos de vida\n";
	
	dia = (result / 1440);
	cout << "Portanto, voc� perdeu "<< dia << " dias de vida";
}
