#include <stdio.h>
#include <math.h>
 
int main(){
    double custo, distr, imp, total;
    scanf("%lf %lf %lf", &custo, &distr, &imp);
    total = custo + (custo * distr)/ 100 + (custo * imp) / 100;
    printf("O VALOR DO CARRO E = %.2lf\n", total);
    return 0;
}
