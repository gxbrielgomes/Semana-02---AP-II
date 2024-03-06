#include <math.h>
#include <stdio.h>

int main() {

  float cateto1, cateto2, hipotenusa;

  printf("Digite o valor do primeiro cateto: ");
  scanf("%f", &cateto1);

  printf("Digite o valor do segundo cateto: ");
  scanf("%f", &cateto2);

  hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));

  printf("Um triângulo retângulo com lados %.2f e %.2f tem uma hipotenusa "
         "igual a %.2f.\n",
         cateto1, cateto2, hipotenusa);

  return 0; 
}
