#include <stdio.h>
#include <math.h>
 
int main(){
    double h, m , s, T, A , raiz;
    scanf("%lf %lf %lf", &h, &m, &s);
    T = (h + m + s) / 2;
    A = T * (T - h) * (T - m) * (T - s);
    raiz = sqrt(A);
    printf("A AREA DO TRIANGULO E = %.2lf\n", raiz);
 
    return 0;
}
