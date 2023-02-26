#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, resultado, operacao;
	
	cout << "informe o 1º numero: ";
	cin >> n1;
	
	cout << "informe o 2º numero: ";
	cin >> n2;
	
	system ("cls");
	
	cout << "Escolha uma das quatro operações abaixo para ser realizada com os numeros informados\n";
	cout << "1- soma\n";
	cout << "2- subtração\n";
	cout << "3- divisão\n";
	cout << "4- multiplicação\n";
	cout << "R: ";
	cin >> operacao;
	
	system ("cls");
	
	if (operacao==1){
		resultado = (n1 + n2);
		cout << "O resultado deu: " << resultado;
	}else if (operacao==2){
		resultado = (n1 - n2);
		cout << "O resultado deu: " << resultado;
	}else if (operacao==3){
		resultado = (n1 / n2);
		cout << "O resultado deu: " << resultado;
	}else if (operacao==4){
		resultado = (n1 * n2);
		cout << "O resultado deu: " << resultado;
	}
}
