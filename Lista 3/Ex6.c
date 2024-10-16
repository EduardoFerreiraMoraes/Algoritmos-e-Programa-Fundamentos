#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 
int main()
{
    char escolhaimperpar;
    int n,sorteio,soma;
    srand(time(NULL));
    printf ("Imper ou par? (I/P) " );
    scanf("%c", &escolhaimperpar);
    if (escolhaimperpar !='I' && escolhaimperpar !='P')
    {
        printf("Escolha inválida. Use 'I' para IMPAR e 'P' para PAR .");
        return 1;
    }
    printf ("Digite seu numero:");
    scanf("%d", &n);
    if (n<0 ||n>5){
        printf(" Número inválido.Deve estar entre 0 e 5.\n");
        return 1 ; 
    } 
    sorteio=rand()%6;
    soma=n+sorteio;
    printf("Numero sorteado foi: %d\n", sorteio);
    if ((soma % 2 == 0 && escolhaimperpar == 'P') || (soma % 2 != 0 && escolhaimperpar == 'I')) {
        printf("Você venceu!\n");
    } else {
        printf("O programa venceu.\n");
    }

    return 0;
}