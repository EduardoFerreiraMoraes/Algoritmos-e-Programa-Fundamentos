#include<stdio.h>
int main()
{
    int smartphones , tablet ;
	float preçosmartphones=1000, preçotablet=1500,total ;
	printf("Bem-vindo a TechMundo,Digite o número de smartphones vendidos:");
	scanf(" %d", &smartphones);
		printf("Bem-vindo a TechMundo,Digite o número de tablet vendidos:");
	scanf(" %d", &tablet);
	total=preçotablet+preçosmartphones;
	printf("Total arrecadado: R$ %.2f\n", total);
	return 0;
}
