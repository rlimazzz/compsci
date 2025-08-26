#include <stdio.h>
 
int main(){
 
    int num;
    int milhar, centena, dezena , unidade;
    scanf("%d", &num);
 
    unidade = num % 10;
    dezena = (num / 10) % 10;
    centena = (num / 100) % 10;
    milhar = (num / 1000) % 10;
 
    if(milhar > 0){
        printf("(quarta ordem) ");
    }
    else if(centena > 0){
        printf("(terceira ordem) ");
    }
    else if(dezena > 0){
        printf("(segunda ordem) ");
    }
    else if(unidade > 0){
        printf("(primeira ordem) ");
    }
 
    printf("%d = ", num);
 
    if(milhar > 0){
        if(milhar > 1) printf("%d unidades de milhar", milhar);
        else printf("%d unidade de milhar", milhar);
    }
    if(centena > 0){
        if(milhar > 0) printf(" + ");
 
        if(centena > 1) printf("%d centenas", centena); 
        else printf("%d centena", centena);
    }
    if(dezena > 0){
        if(milhar > 0 || centena > 0) printf(" + ");
        if(dezena > 1) printf("%d dezenas", dezena);
        else printf("%d dezena", dezena);
    }
    if(unidade > 0){
        if(milhar > 0 || centena > 0 || dezena > 0) printf(" + ");
        if(unidade > 1) printf("%d unidades", unidade);
        else printf("%d unidade", unidade);
    }
 
    printf(" = ");
 
    if(milhar > 0){
        printf("%d", milhar * 1000);
    }
    if(centena > 0){
        if(milhar > 0) printf(" + "); 
        printf("%d", centena * 100);
    }
    if(dezena > 0){
        if(milhar > 0 || centena > 0) printf(" + ");
        printf("%d", dezena * 10);
    }
    if(unidade > 0){
        if(milhar > 0 || centena > 0 || dezena > 0) printf(" + ");
        printf("%d", unidade);
    }
 
    printf("\n");
 
    return 0;
}
