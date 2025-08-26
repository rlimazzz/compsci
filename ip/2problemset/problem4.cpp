#include <stdio.h>
#include <math.h>
 
int main() {
    double n, calculo;
    scanf("%lf", &n);
    calculo = (floor(n / 3) * 10) + (n - (floor(n / 3) * 3) ) * 5;
    printf("O VALOR A PAGAR E = %.2lf\n", calculo);
 
    return 0;
}
