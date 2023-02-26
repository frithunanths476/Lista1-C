#include <iostream>
using namespace std;

main(){
	setlocale (LC_ALL, "Portuguese");
	
	cout << "**************************"<<endl;
	cout << "********Bem-Vindo*********"<<endl;
	cout << "**************************"<<endl;
	
	float n1,n2,n3, result;
	
	cout << "Informe a primeira nota: ";
	cin >> n1;
	
	cout << "Informe a segunda nota: ";
	cin >> n2;
	
	cout << "Informe a terceira nota: ";
	cin >> n3;
	
	result = (n1+n2+n3) / 3;
	
	if (result >= 7){
		cout << "Aprovado";
	}else if (result >= 5 >=6.9){
		cout << "Recuperação";
	}else{
		cout << "Reprovado"; 
	}
}
