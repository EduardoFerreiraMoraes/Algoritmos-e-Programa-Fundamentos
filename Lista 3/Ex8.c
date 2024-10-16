
#include <stdio.h>

int main()
{
    float produto,total; 
    printf("Digite o valor do seu produto:");
    scanf (" %f", &produto);
        if (produto < 0) {
        printf("ERRO!!! Valor inválido.\n");
    } else if (produto < 20.00) {
        total = produto * 0.45; 
    } else if (produto <= 50.00) {
        total = produto * 0.35;  
    } else {
        total = produto * 0.25; 
    }
    if (produto >= 0) {
        printf("O valor de venda do produto é: R$ %.2f\n", total);
    }

    return 0;
}