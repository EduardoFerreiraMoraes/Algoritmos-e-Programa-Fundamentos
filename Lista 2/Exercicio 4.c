#include<stdio.h>
int main()
{
	float MediaFinal, graua, graub;
	printf("Digite sua nota do grau a:");
	scanf(" %f", &graua);
	printf("Digite sua nota do grau b:");
	scanf(" %f", &graub);
	MediaFinal = (graua + graub*2)/3;
	printf("Sua Media final é:%.2f  \n",MediaFinal);
	if (MediaFinal>=6)
	{
	    printf("Parabéns  voce foi aprovado!!!");
	}
	else
	{
	printf("Que pena... voce foi reprovado.");
	return 0;
	}
}
