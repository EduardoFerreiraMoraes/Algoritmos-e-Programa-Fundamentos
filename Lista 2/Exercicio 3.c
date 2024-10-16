#include <stdio.h>
int main()
{
    float peso , reais ;
    printf("seu prato pesa :");
    scanf(" %.2f" ,&peso );
    peso = reais *0.4;
    printf("%.2f kg valor a pagar:R$ %.2f",peso, reais);
    return 0 ;
}