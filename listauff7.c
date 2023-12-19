#include <stdio.h>

int main() {
    int i;

    printf("Tabela ASCII:\n");
    printf("Dec  Hex  Char\n");
    
    for (i = 0; i < 128; i++) {
        if (i < 33 || i == 127) {
            // Caracteres não imprimíveis são mostrados como '.'
            printf("%3d  %2X   .\n", i, i);
        } else {
            // Caracteres imprimíveis são mostrados normalmente
            printf("%3d  %2X   %c\n", i, i, i);
        }
    }

    return 0;
}
