#include<stdio.h>
int main()
{
    int substituir;
	float MediaFinal, graua, graub,grauc;
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
	printf("Voce tera que fazer a recuperação (grau c).\n");
	printf("Digite sua nota do grau c:");
	scanf(" %f",&grauc);
	printf("Qual nota voce deseja substituir? (1 para grau A, 2 para grau B)");
	scanf(" %d", &substituir);
	}
	switch (substituir)
	{
	    case 1:
        MediaFinal = (grauc + graub * 2) / 3;
        break;
        case 2:
        MediaFinal = (graua + grauc * 2) / 3;
        break;
        default:
        printf("Opção inválida. Nenhuma nota foi substituída.\n");
        break;
	    
	}
	printf("Sua nova média é: %.2f\n", MediaFinal);
        if (MediaFinal >= 6) {
            printf("Parabéns, você foi aprovado!!!\n");
        } else {
            printf("Que pena... você foi reprovado.\n");
        }
	return 0;
}
