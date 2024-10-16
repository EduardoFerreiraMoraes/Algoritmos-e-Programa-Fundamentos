
#include <stdio.h>

int main()
{
	int cont = 0;
	while ( cont < 101 )
	{
		printf("  seu numero gerado : %d\n", cont);
		cont++;
	}
	printf("\n-----------------\n");
	 cont = 20;
	while ( cont < 51 )
	{
		printf(" seu numero gerado : %d\n", cont);
		cont+=2;
		
	}printf("\n-----------------\n");
	cont = 70;
	while ( cont >=25 )
	{
		printf(" seu numero gerado : %d\n", cont);
		cont--;
	}printf("\n-----------------\n");
	 cont = 95;
	while ( cont >=25 )
	{
		printf("seu numero gerado : %d\n", cont);
		cont-=2;
	}
	return 0;
}