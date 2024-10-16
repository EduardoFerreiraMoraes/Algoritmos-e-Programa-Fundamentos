#include<stdio.h>
int main()
{
	float celsius, fahrenheit  ;
	printf("Digite a Temperatura em celsius°C: ");
	scanf(" %f", &celsius);
	fahrenheit=celsius *1.8+32;
	printf("Temperatura em fahrenheit°F: %.2f \n ", fahrenheit);
	return 0;
}
