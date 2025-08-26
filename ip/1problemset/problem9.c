#include <stdio.h>
#include <math.h>
 
int main(){
    double m, a , t, v , s , w, tquadr, v2;
    scanf("%lf %lf %lf", &m , &a, &t);
    m *= 1000;
    v = a * t * 3.6;
    v2 = a * t;
    tquadr = t * t;
    s = a * tquadr / 2;
    w = (m * (v2 * v2)) / 2;
    printf("VELOCIDADE = %.2lf\n", v);
    printf("ESPACO PERCORRIDO = %.2lf\n", s);
    printf("TRABALHO REALIZADO = %.2lf\n", w);
 
 
    return 0;
}
