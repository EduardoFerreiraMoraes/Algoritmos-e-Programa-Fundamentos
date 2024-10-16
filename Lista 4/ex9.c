#include <stdio.h>

int main() {
    int n;
    char caractere;
    printf("Entre com um número: ");
    scanf("%d", &n);
    printf("Entre com um caracter: ");
    getchar();
    scanf("%c", &caractere);
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            printf("%c ", caractere);
        }
        printf("\n");
    }
    return 0;
}
