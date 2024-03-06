#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Uma temperatura de %.2f graus Celsius equivale a %.2f grausFahrenheit.\n", celsius, fahrenheit);

    return 0;
}