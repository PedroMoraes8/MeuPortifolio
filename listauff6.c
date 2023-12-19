#include <stdio.h>

int main() {
    int valor1, valor2;

    // Lendo os dois valores
    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    // Se os valores são iguais
    if (valor1 == valor2) {
        printf("Valores iguais.\n");
    }
    // Se o primeiro valor é menor que o segundo
    else if (valor1 < valor2) {
        printf("Valores do primeiro ateg o segundo:\n");
        for (int i = valor1; i <= valor2; i++) {
            printf("%d\n", i);
        }
    }
    // Se o primeiro valor é maior que o segundo
    else {
        printf("Valores do segundo ateh o primeiro em ordem decrescente:\n");
        for (int i = valor1; i >= valor2; i--) {
            printf("%d\n", i);
        }
    }

    return 0;
}
