#include <stdio.h>
int main()
{
    int convenio=300;
    int escolha,Crianças,deztrinta,trintaum,sessenta;
    float valor,depentes, total;
    printf("Digete o numero de quantos dependentes voce possue");
    printf("Quantas Crianças?\n");
    scanf("%d", &Crianças);
    printf("Quantos dependentes com idade entre 10 e 30 anos?\n");
    scanf("%d", &deztrinta);
    printf("dependentes com idade entre 31 e 60 anos\n");
    scanf("%d", &trintaum);
    printf("dependentes com mais de 60 anos\n");
    scanf("%d",&sessenta);
    total=convenio+(100*Crianças)+(220*deztrinta)+(395*trintaum)+(480*sessenta);
    printf("Voce tera que pagar:%.2f",total);
    return 0;
}
