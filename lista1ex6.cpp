#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, n3, result;
	
	cout << "Insira o primeiro algarismo: ";
	cin >> n1;
	
	if (n1 > 10){
		cout << "N�mero inv�lido.";
	}
	
	cout << "Insira o segundo algarismo: ";
	cin >> n2;
	
	if (n2 > 10){
		cout << "N�mero inv�lido.";
	}
	
	cout << "Insira o terceiro algarismo: ";
	cin >> n3;
	
	if (n3 > 10){
		cout << "N�mero inv�lido.";
	}
	
	result = (n1 + n2 + n3);
	cout << "A soma �: " << result;
	
}
