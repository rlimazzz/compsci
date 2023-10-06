#include <stdio.h>
#include <math.h>
 
int main(){
    double altura, aresta, base1, base2, volume;
    scanf("%lf %lf", &altura, &aresta);
    base1 = 3 * (aresta * aresta) * sqrt(3);
    base2 = base1 / 2;
    volume = 0.33333333333 * base2 * altura;
    printf("O VOLUME DA PIRAMIDE E = %.2lf METROS CUBICOS\n", volume);
    return 0;
}
