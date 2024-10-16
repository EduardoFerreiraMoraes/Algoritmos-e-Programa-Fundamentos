#include<stdio.h>

int main()
{
    int numeroa, total;
    printf("Digite um numero: ");
    scanf("%d", &numeroa);

    if (numeroa %3==0) {
        
        printf("O número %d é divisível por 3.\n", numeroa );
    } else {
        
        printf("O número %d não é divisível por 3.\n", numeroa );
    }

    return 0;
}