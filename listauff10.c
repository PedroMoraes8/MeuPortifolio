#include <stdio.h>

int main() {
    float nota1, nota2, media;

    while (1) { // Loop infinito, que será quebrado internamente
        printf("Digite a nota da primeira prova (ou 50 para sair): ");
        scanf("%f", &nota1);

        if (nota1 == 50) {
            break; // Sai do loop
        }

        if (nota1 < 0 || nota1 > 10) {
            printf("Nota invalida. A nota deve estar no intervalo [0, 10].\n");
            continue; // Pula para a próxima iteração do loop
        }

        printf("Digite a nota da segunda prova: ");
        scanf("%f", &nota2);

        if (nota2 < 0 || nota2 > 10) {
            printf("Nota inválida. A nota deve estar no intervalo [0, 10].\n");
            continue; // Pula para a próxima iteração do loop
        }

        else
        {
            return 0;
        }

        media = (nota1 + nota2) / 2;
        printf("Media das notas: %.2f\n", media);
    }

    printf("Programa encerrado.\n");
    return 0;
}
