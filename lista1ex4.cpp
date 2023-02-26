#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	cout << "**************************"<<endl;
	cout << "********Bem-Vindo*********"<<endl;
	cout << "**************************"<<endl;
	
	float nascimento, resultado;
	string nome;
	const int hoje = 2023;
	
	cout << "Informe o seu nome: ";
	cin >> nome;
	
	cout << "Informe o seu ano de nascimento: ";
	cin >> nascimento;
	
	resultado = (hoje-nascimento);
	
	if (resultado <= 18){
		cout << nome << " é menor de idade.";
	}else if (resultado >= 18 >= 65){
		cout << nome << " é adulto.";
	}else{
		cout << nome << " é idoso";
	}
}
