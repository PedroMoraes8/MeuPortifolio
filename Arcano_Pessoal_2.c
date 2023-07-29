#include "AP2.h"
#define LIMITE 22

void main(void)
{
  int pergt = 0, qtdt = 0, aux = 0, bux = 0, cux = 0, num = 0, dux = 0, arcano = 0, qtdletras = 0;
  char nome[100], letra[100], til[2];

  puts("Sigam estas tres dicas, para que os calculos sejam efetuados corretamente:\n");

  puts("- As mulheres casadas devem fazer a analise a partir do nome de solteira (batismo);\n");

  puts("- Jr. (Junior), Filho, Neto ou Sobrinho - nao precisam ser digitados (Ex. Carlos Oliveira Filho, digite: Carlos Oliveira);\n");

  puts("- Nao coloque acentos;\n");

  puts("Caso tenha '~' nao coloque, diga a quantidade depois...\n");

  puts("Insira um nome:\n");

  gets(nome);

  qtdletras = strlen(nome);

  printf("Tem algum '~'? S/N \n", arcano);

  scanf("%s", til);

  if (strcmp, (til == "S") == 0)
  {
    pergt = 0;
  }
  else
  {
    pergt = 1;
  }

  if (pergt == 1)
  {
    puts("Quantos? \n");
    scanf("%d", &qtdt);
    if (qtdt == 1)
      arcano = 40;

    else if (qtdt == 2)
      arcano = 80;

    else if (qtdt == 3)
      arcano = 120;

    else if (qtdt == 4)
      arcano = 160;

    else if (qtdt == 5)
      arcano = 200;

    else if (qtdt == 6)
      arcano = 240;

    else
      puts("Tem '~' demais!");
  }
  else
  {
    puts("Sem ~\n");
  }

  int y;

  for (y = 0; y < qtdletras; y++)
  {

    num = valorletra(nome[y]);

    arcano = arcano + num;
  }
  if (arcano > LIMITE)
  {
    cux = (arcano % 10);
    bux = (((arcano % 100) - cux) / 10);
    aux = ((arcano - cux - bux) / 100);
    dux = ((arcano - cux - bux - aux) / 1000);
    aux = (aux % 10);

    arcano = bux + cux + aux + dux;
  }
  if (arcano > LIMITE)
  {
    cux = (arcano % 10);
    bux = (((arcano % 100) - cux) / 10);
    aux = ((arcano - cux - bux) / 100);
    dux = ((arcano - cux - bux - aux) / 1000);
    aux = (aux % 10);

    arcano = bux + cux + aux + dux;
  }

  // printf("%d %d %d\n", aux, bux, cux);
  // diagnóstico

  printf("Seu arcano eh o %d\n", arcano);

  Resultado(arcano);

  system("pause");
  system("cls");
  exit(1);
}
