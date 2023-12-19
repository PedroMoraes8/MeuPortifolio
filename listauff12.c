#include <stdio.h>

// Defina KR para usar o estilo de protótipo K&R, e ANSI para o estilo ANSI
//#define KR
#define ANSI

// Protótipos das funções dependendo do estilo escolhido
#ifdef KR
int soma();
int subtracao();
#else
int soma(int a, int b);
int subtracao(int a, int b);
#endif

int main() {
    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("Soma: %d\n", soma(num1, num2));
    printf("Subtracao: %d\n", subtracao(num1, num2));

    return 0;
}

// Implementações das funções dependendo do estilo escolhido
#ifdef KR
int soma(a, b)
int a, b;
{
    return a + b;
}

int subtracao(a, b)
int a, b;
{
    return a - b;
}
#else
int soma(int a, int b) {
    return a + b;
}

int subtracao(int a, int b) {
    return a - b;
}
#endif
