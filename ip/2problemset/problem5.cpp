#include <stdio.h>
#include <math.h>
 
int main() {
    double n;
    scanf("%lf", &n);
    if(n >= 0 && n < 6){
        printf("NOTA = %.1lf CONCEITO = D\n", n);
    }
    else if(n >= 6 && n < 7.5) {
        printf("NOTA = %.1lf CONCEITO =    C\n", n);
    }
    else if(n >= 7.5 && n < 9) {
        printf("NOTA = %.1lf CONCEITO = B\n", n);
    }else{
        printf("NOTA = %.1lf CONCEITO = A\n", n);
    }
 
    return 0;
}
