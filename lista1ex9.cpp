#include <stdio.h>
#include <string.h>
#include <math.h>
#include <iostream>
using namespace std;

int eh_numero_de_armstrong(int n);

int main() {
  setlocale (LC_ALL, "Portuguese");
  int x;

  printf("Digite um número qualquer: ");
  scanf("%d", &x);

  if (eh_numero_de_armstrong(x))
    printf("%d é um número de Armstrong.\n", x);
  else
    printf("%d não é um número de Armstrong.\n", x);

  return 0;
}

int eh_numero_de_armstrong(int n) {
  char str[100];
  int soma_alg = 0;

  sprintf(str, "%d", n);
  for (int i = 0; i < strlen(str); i++)
    soma_alg += pow(str[i] - '0', strlen(str));

  if (n == soma_alg)
    return 1;
  else
    return 0;
}
