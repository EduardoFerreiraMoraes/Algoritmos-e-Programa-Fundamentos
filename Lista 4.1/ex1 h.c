#include <stdio.h>

int main() {
    int n, i;
    int soma = 0;
    int numero;
    printf("Digite a quantidade de números que você deseja somar: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numero);
        soma += numero;}
    printf("A soma dos números lidos é: %d\n", soma);

    return 0;
}
