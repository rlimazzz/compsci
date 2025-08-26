#include <stdio.h>
#include <math.h>
 
int main() {
    int entrada;
    scanf("%d", &entrada);
    if(entrada < 1){
        printf("Y = %d", entrada);
    }
    else if(entrada == 1) {
        printf("Y = 0");
    }else {
        printf("Y = %d", entrada * entrada);
    }
    return 0;
}
