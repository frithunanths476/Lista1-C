#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float salario, resultado, aumento = 0;
	string nome;
	
	cout << "Informe o seu nome: ";
	cin >> nome;
	
	cout << "Informe o seu salario: ";
	cin >> salario;
	
	if (salario <= 1500){
		aumento = salario * 1.10;
		resultado = (aumento-salario);
		cout << "O seu salario atual � de "<< aumento <<" a diferen�a do atual para o antigo � de " << resultado;
	}else if (salario >= 1500){
		aumento = salario * 1.05;
		resultado = (aumento-salario);
		cout << "O seu salario atual � de "<< aumento <<" a diferen�a do atual para o antigo � de " << resultado;
	}
}
