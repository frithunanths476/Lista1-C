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
		cout << "O seu salario atual é de "<< aumento <<" a diferença do atual para o antigo é de " << resultado;
	}else if (salario >= 1500){
		aumento = salario * 1.05;
		resultado = (aumento-salario);
		cout << "O seu salario atual é de "<< aumento <<" a diferença do atual para o antigo é de " << resultado;
	}
}
