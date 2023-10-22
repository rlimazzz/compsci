#include <stdio.h>
#include <math.h>
 
int main() {
    double n, calculo = 0;
    scanf("%lf", &n);
    if(n <= 300) {
        calculo = n + (0.5 * n);
    }else {
        calculo = n + (0.3 * n);
    }
    printf("SALARIO COM REAJUSTE = %.2lf", calculo);
    return 0;
}
