#include<stdio.h>
int main()
{
	float preço, real, litros,carro;
	printf("digite quanto deseja abastecer:");
	scanf(" %f", &real);
	preço=5.99;
    litros=real/preço;
    carro= litros-50;
	printf("Voce abasteceu:%.2f  \n",litros);
	if (litros<=50){
	    printf("Voce conseguiu abastecer!!!");
	}
	else
	{
	    printf("Você derramou %.2f litros.", carro);
	    
	}
	return 0;
}
