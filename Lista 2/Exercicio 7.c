#include<stdio.h>
int main()
{
    int codorna ;
	float ração=30, raçãodiario ;
	printf("Quantas Codornas voce tem?");
	scanf(" %d", &codorna);
	raçãodiario=ração * codorna;
	printf("Seu gasto diario com ração é: R$ %.2f\n", raçãodiario);
	printf("Seu gasto mesal com ração é: R$ %.2f\n", raçãodiario*30);
	return 0;
}
