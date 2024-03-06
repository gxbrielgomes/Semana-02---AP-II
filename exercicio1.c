#include <stdio.h>

int main() {
  printf("Primeiro número inteiro: ");
  int a;
  scanf("%d", &a);

  printf("Segundo número inteiro: ");
  int b;
  scanf("%d", &b);

  printf("O valor da soma de %d e %d é igual a: %d\n", a, b, (a + b));
  printf("O valor subtração de %d menos %d é igual a: %d\n", a, b, (a - b));
  printf("O valor da multiplicação de %d por %d é igual a: %d\n", a, b,
         (a * b));
  printf("O valor da divisão de %d por %d é igual a: %d\n", a, b, (a / b));
  return 0;
}
