#include<stdio.h>
int main()
{
	float total, numeroa, numerob;
	printf("Digite um numero:");
	scanf(" %f", &numeroa);
	printf("Digite outro numero:");
	scanf(" %f", &numerob);
	if (numerob!=0)
	{
	   	total = numeroa/numerob;
	    printf("Resultado:%.2f  \n",total);
	}
	else
	{
	printf("Erro: Divisão por zero não é permitida.");
	return 0;
	}
}
