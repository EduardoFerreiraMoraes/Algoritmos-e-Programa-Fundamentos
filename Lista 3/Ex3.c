#include<stdio.h>

int main()
{
    float numeroa, total;
    printf("Digite um numero: ");
    scanf("%f", &numeroa);

    if (numeroa > 0) {
        total = numeroa * 2;
        printf("Resultado é: %.2f\n", total);
    } else {
        total = numeroa / 3;
        printf("Resultado é: %.2f\n", total);
    }

    return 0;
}