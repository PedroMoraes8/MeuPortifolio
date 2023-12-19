#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char operador;
    float num1, num2;

    printf("Entre com o primeiro valor: ");
    scanf("%f",&num1);
    printf("Entre com um operador + - / ou *: ");
    scanf(" %c",&operador);
    printf("Entre com o segundo valor: ");
    scanf("%f",&num2);

    if(operador=='+')
    {
        puts("Voce escolheu soma");
        printf("%.2f + %.2f = %.2f",num1,num2,num1+num2);
    }
    else if(operador=='-')
    {
        puts("Voce escolheu subtracao");
        printf("%.2f - %.2f = %.2f",num1,num2,num1-num2);
    }
    else if(operador=='/')
    {
        if (num2==0)
        {
            puts("Nao posso dividir por 0");
            return 0;
        }
        else
        {
        puts("Voce escolheu divisao");
        printf("%.2f / %.2f = %.2f",num1,num2,num1/num2);
        }
    }
    else if(operador=='*')
    {
        puts("Voce escolheu multiplicacao");
        printf("%.2f * %.2f = %.2f",num1,num2,num1*num2);
    }
    else
    {
        puts("Opcao invalida");
        return 0;
    }

}