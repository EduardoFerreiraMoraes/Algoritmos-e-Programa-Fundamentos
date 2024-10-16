#include<stdio.h>
int main()
{
	float dolar, real;
	printf("Digite Quantos dolares voce tem:");
	scanf(" %f", &dolar);
	real = dolar * 5.50;
	printf("com $ %.2f dolar voce tem :R$ %.2f  \n",dolar, real);
	return 0;
}