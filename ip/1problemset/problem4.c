#include <stdio.h>
#include <stdlib.h>
 
 
int main()
{
    double a, b, c, conta;
    scanf("%lf %lf %lf", &a , &b, &c);
    conta = (b * b) - 4 * a * c;
    printf("O VALOR DE DELTA E = %.2lf", conta);
}
