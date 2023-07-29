//#include "tudoc.h"
#include "AP1.h"
#define LIMITE 22

void main(void)
{
    int aux = 0, bux = 0, cux = 0,eux= 0,fux= 0,gux= 0,hux= 0, num = 0, dux = 0, arcano = 0;
    //char nome[100], letra[100];

    printf("Insira sua data de nascimento sem espaco e sem barras (DDMMAAAA):\n");

    //gets(nome);

    //qtdletras = strlen(nome);

        scanf("%d",&arcano);

//28 052 000

    aux = (arcano % 10);
    bux = (((arcano % 100)-aux)/10);
    cux = (((arcano % 1000)-aux-bux)/100);
    dux=(((arcano % 10000)-aux-bux-cux)/1000);
    eux=(((arcano % 100000)-aux-bux-cux-dux)/10000);
    fux=(((arcano % 1000000)-aux-bux-cux-dux-eux)/100000);
    gux=(((arcano % 10000000)-aux-bux-cux-dux-eux-fux)/1000000);
    hux=(((arcano % 100000000)-aux-bux-cux-dux-eux-fux-gux)/10000000);
   // aux=(aux%10);
    
    arcano = bux + cux + aux+ dux+eux+fux+gux+hux;

    //printf("%d %d %d %d %d %d %d %d\n", aux, bux, cux,dux,eux,fux,gux,hux);
    //diagnóstico

    if(arcano>LIMITE)
    {
        aux = (arcano % 10);
        bux = (((arcano % 100)-aux)/10);
        cux = (((arcano % 1000)-aux-bux)/100);
        arcano = aux+bux + cux;
    }

    printf("Seu arcano eh o %d\n", arcano);

    Resultado(arcano);

    system("pause");
    system("cls");
    exit(1);
}
