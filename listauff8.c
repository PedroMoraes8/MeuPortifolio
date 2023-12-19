#include <stdio.h>

int main() {
    float preco;

    // Lendo o preço do produto
    printf("Digite o preco do produto: ");
    scanf("%f", &preco);

    switch (preco >= 100) {
        case 0:
            preco *= 1.10; // Aumenta o preço em 10%
            break;
        case 1:
            preco *= 1.20; // Aumenta o preço em 20%
            break;
    }

    printf("Preco ajustado: %.2f\n", preco);

    return 0;
}
