#include <stdio.h>
 
int main() {
    double a, b, c, media = 0;
    scanf("%lf %lf %lf", &a, &b, &c);
    media = (a + b + c) / 3;
    if(media >= 6) {
        printf("MEDIA = %.2lf\nAPROVADO\n", media);
    }else {
        printf("MEDIA = %.2lf\nREPROVADO\n", media);
    }
    return 0;
}
