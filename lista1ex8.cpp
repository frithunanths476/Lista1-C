#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float idade, cigarros, result, dia;
	
	cout << "Informe a sua idade: ";
	cin >> idade;
	
	cout << "Informe quantos cigarros você fuma por dia: ";
	cin >> cigarros;
	
	result = (cigarros * 10);
	cout << "Você perdeu "<< result << " minutos de vida\n";
	
	dia = (result / 1440);
	cout << "Portanto, você perdeu "<< dia << " dias de vida";
}
