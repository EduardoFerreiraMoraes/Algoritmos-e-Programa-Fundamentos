#include <stdio.h>
int main()
{
    int idade,infantila,infantilb,juvenila,juvenilb,senior,categoria;
    printf("Quantos anos voce tem?\n");
    scanf("%d", &idade);

    if (idade >= 5 && idade <= 7) {
        printf("Você está na categoria: Infantil A\n");
    } else if (idade >= 8 && idade <= 10) {
        printf("Você está na categoria: Infantil B\n");
    } else if (idade >= 11 && idade <= 13) {
        printf("Você está na categoria: Juvenil A\n");
    } else if (idade >= 14 && idade <= 17) {
        printf("Você está na categoria: Juvenil B\n");
    } else if (idade >= 18) {
        printf("Você está na categoria: Sênior\n");
    } else {
        printf("Idade inválida!\n");
    }
    return 0;
}
