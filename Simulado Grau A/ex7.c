#include <stdio.h>
#include <ctype.h>
int main() {
    char caractere;
    for (int i = 0; i < 10; i++) {
        printf("Digite um caractere: ");
        scanf(" %c", &caractere); 
        if (isalpha(caractere)) {
            printf("'%c' é uma letra.\n", caractere);
        } else if (isdigit(caractere)) {
            printf("'%c' é um número.\n", caractere);
        } else {
            printf("'%c' é um símbolo especial.\n", caractere);
        }
    }
    return 0;
}
