#include <stdio.h>
#include <stdlib.h>
 
 
int main()
{
    float salario, kw, preco, primeira, desconto;
    scanf("%f %f", &salario, &kw);
    preco = 0.007 * salario * kw;
    primeira = preco / kw;
    desconto = preco - (0.1 * preco);
    printf("Custo por kW: R$ %.2f\n", primeira);
    printf("Custo do consumo: R$ %.2f\n", preco);
    printf("Custo com desconto: R$ %.2f\n", desconto);
    return 0;
}
