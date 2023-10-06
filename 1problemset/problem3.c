#include <stdio.h>
#include <stdlib.h>
 
 
int main()
{
    double raio, altura, area, conta;
    scanf("%lf %lf", &raio, &altura);
    area = 2 * 3.14159 * raio * (raio + altura);
    conta = area * 100;
    printf("O VALOR DO CUSTO E = %.2lf\n", conta);
}
