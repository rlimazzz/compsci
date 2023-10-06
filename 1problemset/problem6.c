#include <stdio.h>
#include <math.h>
 
int main(){
    int h, m , s, calculo;
    scanf("%d %d %d", &h, &m , &s);
    calculo = (h * 3600) + (m * 60) + s;
    printf("O TEMPO EM SEGUNDOS E = %d\n", calculo);
 
    return 0;
}
