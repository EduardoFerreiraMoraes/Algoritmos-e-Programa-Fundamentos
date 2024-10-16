#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(NULL));
    int numero1 = (rand() % (670 - 130 + 1)) + 130;
    printf("Número sorteado entre 130 e 670: %d\n", numero1);
    int numero2 = (rand() % (-5 - (-20) + 1)) - 20;
    printf("Número sorteado entre -20 e -5: %d\n", numero2);
    int numero3 = (rand() % (10 - (-10) + 1)) - 10;
    printf("Número sorteado entre -10 e 10: %d\n", numero3);
    float numero4 = ((float)(rand() % 402) / 10.0) + 10.5;
    printf("Número sorteado entre 10.5 e 50.2: %.1f\n", numero4);
    int numero5 = (rand() % 21) * 5;
    printf("Número sorteado entre 0 e 100 (múltiplo de 5): %d\n", numero5);
    char caractere = (rand() % (90 - 65 + 1)) + 65;
    printf("Caractere sorteado entre 'A' e 'Z': %c\n", caractere);
    return 0;
}