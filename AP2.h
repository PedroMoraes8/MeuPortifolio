#include "tudoc.h"

int valorletra(char letra);
void Resultado(int reultado);


int valorletra(char letra)
{

	if((letra=='a')||(letra=='A'))
	{
		//||(letra=='á')||(letra=='à')||(letra=='À')||(letra=='Á')||(letra=='Â')||(letra=='â')
		return 1;
	} 
    else if((letra=='b')||(letra=='B')) 
    {
		return 2;
	} 
    else if((letra=='c')||(letra=='C')) 
    {
		//||(letra=='Ç')||(letra=='ç')
		return 3;
	} 
    else if((letra=='d')||(letra=='D'))
    {
		return 4;
	} 
    else if((letra=='e')||(letra=='E')) 
    {
		//||(letra=='Ê')||(letra=='É')||(letra=='é')||(letra=='ê')
		return 5;
	} 
    else if((letra=='f')||(letra=='F'))
    {
		return 6;
	} 
    else if((letra=='g')||(letra=='G')) 
    {
		return 7;
	} 
    else if((letra=='h')||(letra=='H')) 
    {
		return 8;
	} 
    else if ((letra=='i')||(letra=='j')||(letra=='y')||(letra=='I')||(letra=='J')||(letra=='Y')) 
    {
		return 9;
	} 
    else if((letra=='k')||(letra=='K')) 
    {
		return 10;
	} 
    else if((letra=='l')||(letra=='L'))
    {
		return 20;
	} 
    else if((letra=='m')||(letra=='M'))
    {
		return 30;
	} 
    else if((letra=='n')||(letra=='N')) 
    { //||(letra=='~')
		return 40;
	} 
	/* else if ((letra=='ã')||(letra=='Ã'))
	{
		return 41;
	}//õãñ
	*/
    else if((letra=='o')||(letra=='O')) 
    {
		//||(letra=='Ó')||(letra=='Ò')||(letra=='ó')||(letra=='ò')
		return 50;
	} 
    else if((letra=='p')||(letra=='P'))
    {
		return  60;
	} 
    else if((letra=='q')||(letra=='Q'))
    {
		return  70;
	} 
    else if((letra=='r')||(letra=='R'))
    {
		//||(letra=='Ñ')||(letra=='ñ')
		return 80;
	} 
    else if((letra=='s')||(letra=='S'))
    {
		//||(letra=='Õ')||(letra=='õ')
		return 90;
	} 
    else if((letra=='t')||(letra=='T'))
    {
		return 100;
	} 
    else if ((letra=='u')||(letra=='v')||(letra=='w')||(letra=='U')||(letra=='V')||(letra=='W')) 
    {
		return 200;
	} 
    else if((letra=='x')||(letra=='X')) 
    {
		return 300;
	} 
    else if((letra=='z')||(letra=='Z'))
    {
		return 400;
	} 
	else 
	{
		return 0;
	}

}

void Resultado(int resultado)
{
if(resultado==0)
{
printf("O Louco!\n");
}
else if(resultado==1)
{
printf("O Mago!\n");
printf("\n\n");
puts("Palavras-Chave:\n\n Intercambio e Comunicabilidade\n");

}
else if(resultado==2)
{
printf("A Sacerdotisa!\n");
printf("\n\n");
}
else if(resultado==3)
{
printf("A Imperatriz!\n");
printf("\n\n");
}
else if(resultado==4)
{
printf("O Imperador!\n");
printf("\n\n");
}
else if(resultado==5)
{
printf("O Papa!\n");
printf("\n\n");
}
else if(resultado==6)
{
printf("Os Enamorados!\n");
printf("\n\n");
}
else if(resultado==7)
{
printf("O Carro!\n");
printf("\n\n");
}
else if(resultado==8)
{
printf("A Justica!\n");
printf("\n\n");
}
else if(resultado==9)
{
printf("O Eremita!\n");
printf("\n\n");
}
else if(resultado==10)
{
printf("A Roda da Fortuna!\n");
printf("\n\n");
}
else if(resultado==11)
{
printf("A Forca!\n");
printf("\n\n");
}
else if(resultado==12)
{
printf("O Pendurado!\n");
printf("\n\n");
}
else if(resultado==13)
{
printf("A Morte!\n");
printf("\n\n");
}
else if(resultado==14)
{
printf("A Temperanca!\n");
printf("\n\n");
}
else if(resultado==15)
{
printf("O Diabo!\n");
printf("\n\n");
}
else if(resultado==16)
{
printf("A Torre!\n");
printf("\n\n");
}
else if(resultado==17)
{
printf("A Estrela!\n");
printf("\n\n");
}
else if(resultado==18)
{
printf("A Lua!\n");
printf("\n\n");
}
else if(resultado==19)
{
printf("O Sol!\n");
printf("\n\n");
}
else if(resultado==20)
{
printf("O Julgamento!\n");
printf("\n\n");
}
else if(resultado==21)
{
printf("O Mundo!\n");
printf("\n\n");
}
else if(resultado==22)
{
printf("O Louco!\n");
printf("\n\n");
puts("Palavras-Chave:\n\nPrecipitacao e Inconformismo\n\n");
/*
 Fase importante a nível emocional e psicológico aos 22 anos;\n
 Inquietação;\n
 Insatisfação;\n
 Não se prende a NADA;\n
 Imprevidência;\n
 Despretensiosa;\n
 Se joga de cabeça em tudo;\n
 Quer 'abraçar o mundo com as pernas';\n
 Desliga-se com facilidade;\n
 Tem dificuldade de escolher suas amizades ou relacionamentos;\n
 Aventureira sem limites;\n
 Desorganização pessoal;\n
 Avanços rápidos;\n
 Natureza peregrina;\n
 Cuidado para não abandonar as coisas pelo caminho;\n
 Desinteresse;\n
 Não se prenda a futilidades;\n
 Gosta de coisas diferentes ou extravagantes;\n
 Rebeldia;\n
 Opõe-se às idéias dos demais;\n
 Gosta de roupas folgadas;\n
 Gosta de divertir os ambientes, um 'bufão';\n
 Quer atingir outros níveis de compreensão;\n
 Escapismo;\n
 Foge dos problemas ou realidade;\n
 Não quer teoria, quer prática;\n
 Perde o que tem por desatenção;\n
 Caminhadas, montanhismo e passeios são uma terapia;\n
 Aprenda a relaxar;\n
 Não fuja demais dos padrões;\n
 Dificuldade de se adaptar a ambientes fechados;\n
 Muito amiga nas horas difíceis;\n
 Cuidado com comportamento infantil!;\n
 Precisa aprender a extravasar sua energia;\n
 Não invada territórios que não são seus;\n
 Badalações e aventuras afetivas;\n
 Se concentre sempre no que faz!\n
 Pode gesticular muito;\n
 Regência sobre metabolismo, sist. nervoso central, hormônios, circulação;\n
 Energia e atividade;\n
 Não gosta de ser contrariada;\n
 Não seja inoportuna!\n
 Alma Antiga: acumulou muitas experiências ao longo de suas encarnações;\n
 Precisa ser mais firme e demonstrar solidez;\n
 Imprevisibilidade;\n
 Pode trabalhar em equipe, mas é muito auto-suficiente;\n
 Invista no seu futuro!\n
 Impaciência com estudos: muito mental, mas não gosta de ficar só ouvindo\n
 Sinceridade.\n");
 */
}
else
{
printf("Erro!\n");
}

}