#include <stdio.h>
#include <stdbool.h>

int main() {
    bool flag = true;

    if (flag) {
        printf("Flag eh verdadeira.\n");
    } else {
        printf("Flag eh falsa.\n");
    }

    // Alterando o valor da flag para falso
    flag = false;

    if (flag) {
        printf("Flag eh verdadeira.\n");
    } else {
        printf("Flag eh falsa.\n");
    }

    return 0;
}
