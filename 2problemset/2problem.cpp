#include <stdio.h>
 
int main() {
    int conta;
    double consumo, calculo;
    char tipo;
    scanf("%d %lf %c", &conta, &consumo, &tipo);
    if(tipo == 'R') {
        calculo = 5 + (0.5 * consumo);
    }
    else if(tipo == 'C') {
        if(consumo > 80){
            calculo = 500 + (consumo - 80) * 0.25;
        }else {
            calculo = 500;
        }
    }
    else if(tipo == 'I') {
        if(consumo > 100) {
            calculo = 800 + (consumo - 100) * 0.04;
        }else {
            calculo = 800;
        }
    }
    printf("CONTA = %d\nVALOR DA CONTA = %.2lf", conta, calculo);
    return 0;
}
