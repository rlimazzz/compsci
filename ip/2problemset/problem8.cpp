#include <stdio.h>
 
int main() {
    int entrada;
    scanf("%d", &entrada);
    if(entrada % 4 == 0 && entrada > 1582 && entrada % 100 != 0) {
        printf("ANO BISSEXTO\n");
    }
    else if(entrada % 100 == 0 && entrada > 1582){
        if(entrada % 400 == 0){
            printf("ANO BISSEXTO\n");
        }else{
            printf("ANO NAO BISSEXTO\n");
        }
    }else{
        printf("ANO NAO BISSEXTO\n");
    }
    return 0;
}
