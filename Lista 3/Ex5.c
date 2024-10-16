#include<stdio.h>

int main()
{
    int numeroa, total;
    printf("Digite um numero: ");
    scanf("%d", &numeroa);

    if (numeroa %2 == 0) {
        
        printf("O número %d é par.\n", numeroa );
    } else {
        
        printf("O número %d é impar.\n", numeroa );
    }

    return 0;
}