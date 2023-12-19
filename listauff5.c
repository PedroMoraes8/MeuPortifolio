#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double num1, num2;
    
    // Solicitar dois números
    puts("Digite o primeiro numero: ");
    scanf("%lf", &num1);
    puts("Digite o segundo numero: ");
    scanf("%lf", &num2);

    // a) A soma dos números
    double soma = num1 + num2;
    printf("A soma dos numeros eh: %f\n", soma);

    // b) O produto do primeiro número pelo quadrado do segundo
    double produto = num1 * pow(num2, 2);
    printf("O produto do primeiro numero pelo quadrado do segundo eh: %f\n", produto);

    // c) O quadrado do primeiro número
    double quadrado = pow(num1, 2);
    printf("O quadrado do primeiro numero eh: %f\n", quadrado);

    // d) A raiz quadrada da soma dos quadrados
    double raizQuadrada = sqrt(pow(num1, 2) + pow(num2, 2));
    printf("A raiz quadrada da soma dos quadrados eh: %f\n", raizQuadrada);

    // e) O seno da diferença do primeiro número pelo segundo
    double senoDiferenca = sin(num1 - num2);
    printf("O seno da diferenca do primeiro numero pelo segundo eh: %f\n", senoDiferenca);

    // f) O módulo do primeiro número
    double modulo = fabs(num1);
    printf("O modulo do primeiro numero eh: %f\n", modulo);

    return 0;
}
