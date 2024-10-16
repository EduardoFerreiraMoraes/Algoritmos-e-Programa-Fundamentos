#include <stdio.h>

int main()
{
    char letra;
    printf("Qual é o verdadeiro nome do super-herói Batman?\n");
    printf("a) Bruce Wayne\nb) Clark Kent\nc) Peter Parker\nd) Tony Stark\ne) Steve Rogers\n");

    printf("Digite sua Resposta: ");
    scanf(" %c", &letra);
    printf("Você respondeu a alternativa: %c\n", letra);

    if (letra == 'a' || letra == 'A') {
        printf("Parabéns! Resposta correta.\n");
    } else {
        printf("Resposta incorreta. A resposta correta é a) Bruce Wayne.\n");
    }

    return 0;
}