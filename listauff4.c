#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define X 10
// Fahrenheit usando inteiro e double

int main() {
    char escolha[X]; // Array de caracteres suficientemente grande

    printf("Escolha o tipo de dado para a conversão ('Inteiro' ou 'Flutuante'): ");
    scanf("%9s", escolha);

    // Converte a entrada para minúsculas
    for (int i = 0; escolha[i]; i++) {
        escolha[i] = tolower(escolha[i]);
    }

    if (strcmp(escolha, "flutuante") == 0) {
        double c, f;
        printf("Insira a temperatura em Celsius: ");
        scanf("%lf", &c);
        f = c * 9.0 / 5.0 + 32;
        printf("Temperatura em Fahrenheit: %.2lf\n", f);
    }
    else if (strcmp(escolha, "inteiro") == 0) {
        int c, f;
        printf("Insira a temperatura em Celsius: ");
        scanf("%d", &c);
        f = c * 9 / 5 + 32;
        printf("Temperatura em Fahrenheit: %d\n", f);
    }
    else {
        printf("Escolha inválida.\n");
        return 0;
    }

    return 0;
}
