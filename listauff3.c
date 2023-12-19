#include<stdio.h>
#include<stdlib.h>

//Imprimir em octal e hexadecimal

int main()
{
    int x;

    puts("Entre com um numero decimal:");
    scanf("%d",&x);

    printf("Decimal: %d\nOctal: %o\nHexadecimal: %x\n",x,x,x);

    return 0;
}