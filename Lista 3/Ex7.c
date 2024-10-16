
#include <stdio.h>

int main()
{
    float deconto , salario,total,sobra; 
    printf("Digite seu salario:");
    scanf (" %f", &salario );
    total=salario*0.89;
    sobra=salario-total;
    if (total <=318,20){
        printf("total de : %.2f com desconto\n",total);
        printf(" %.2f foi descontado",sobra);
    } else {
        printf("%.2f total de sem desconto, \n", total);
    }

    return 0;
}