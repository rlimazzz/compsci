#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

int sum = 0; 

typedef struct Operand {
    int x1; 
    int x2; 
} Operand;

Operand *operandPtr;

void *summation(void *data); 

int main(int argc, char *argv[]) {
    
    int N; 
    
    if(argc != 2) {
        fprintf(stderr, "Sintax: %s <my-program.out> <number-of-steps>\n", argv[0]);
        exit(-1);
    }

    N = atoi(argv[1]);
    
    if(N <= 0) { 
        fprintf(stderr, "Argument %d must be non-negative\n", N);
        exit(-1);
    }
    
    operandPtr = (Operand *)malloc(sizeof(Operand));
    
    pthread_t tid[N]; 
    pthread_attr_t attr; 
    
    operandPtr->x1 = 0; 
    operandPtr->x2 = 1; 
    
    printf("N  : %d terms\n", N);
    printf("Sum: %02d, Partials: %02d, %02d\n", sum, operandPtr->x1, operandPtr->x2);
    
    pthread_attr_init(&attr);
    
    for(int k=0; k<N; k++) {
        pthread_create(&tid[k], &attr, summation, operandPtr);
        pthread_join(tid[k], NULL);
    }
    
    free(operandPtr);
    operandPtr = NULL;
    
    return 0; 
}

void *summation(void *data)  {
    Operand *s = (Operand *)data;
    
    sum = s->x1 + s->x2;

    printf("Sum: %02d, Partials: %02d, %02d\n", sum, s->x1, s->x2);
    
    s->x1 = s->x2; 
    s->x2 = sum;   
    
    pthread_exit(0);
}