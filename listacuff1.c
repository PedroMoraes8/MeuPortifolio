#include <stdio.h>
#include <stdlib.h>

//Conversor de metros para decimetros, centimetros e milimetros

int main() {
    float in = 0;

    puts("Insira o valor em metros");
    scanf("%f", &in);

    printf("Metros: %.2f\n", in);
    printf("Decimetros: %.2f\n", in * 10);
    printf("Centimetros: %.2f\n", in * 100);
    printf("Milimetros: %.2f\n", in * 1000);

    return 0;
}
