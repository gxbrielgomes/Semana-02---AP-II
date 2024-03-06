#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main() {

    double raio;
    printf("Digite o raio do círculo: ");
    scanf("%lf", &raio);

    double area = PI * pow(raio, 2);

    printf("Um círculo com raio %.2f tem área igual a %.2f.\n", raio, area);

    return 0;
}
