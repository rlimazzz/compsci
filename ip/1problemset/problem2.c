#include <stdio.h>
#include <stdlib.h>
 
 
int main()
{
    float fah, chuva, conta1, conta2;
    scanf("%f %f", &fah, &chuva);
    conta1 = (5 * (fah - 32))/ 9;
    conta2 = chuva * 25.4;
    printf("O VALOR EM CELSIUS = %.2f\n", conta1);
    printf("A QUANTIDADE DE CHUVA E = %.2f\n", conta2);
    return 0;
}
