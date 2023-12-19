#include <stdio.h>
#include <stdlib.h>

int main() {
    int x[9][9];

    puts("Tabuada de 1 a 9");

    // Calcula e armazena os valores na matriz
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            x[i-1][j-1] = i * j; // Armazena o produto na matriz
        }
    }

    // Imprime os valores armazenados na matriz
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            printf("%d x %d = %d\t", i+1, j+1, x[i][j]); // Imprime os valores da matriz
        }
        printf("\n"); // Nova linha após cada linha da tabuada
    }

    return 0;
}
