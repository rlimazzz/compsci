#include <stdio.h>
#include <stdlib.h>
#include <math.h> // Necessário para sqrt()

int main(int argc, char *argv[]) {
    
    int N; // n (número de formigas e blocos)
    double a = 1.0; // Lado 'a' (base da planificação)
    double dist_total;
    double dist_parcial;

    // Validação da entrada
    if (argc != 2) {
        fprintf(stderr, "Sintaxe: %s <numero-de-formigas>\n", argv[0]);
        exit(-1);
    }

    N = atoi(argv[1]);

    if (N <= 0) {
        fprintf(stderr, "Argumento %d deve ser positivo\n", N);
        exit(-1);
    }

    // --- Cálculo Corrigido ---
    // (double)N é usado para garantir a promoção para float
    
    // Dist_total = a * sqrt(1 + n^2)
    dist_total = a * sqrt(1.0 + (double)N * (double)N);
    
    // Dist_parcial = Dist_total / n
    dist_parcial = dist_total / (double)N; 

    printf("Colônia de N=%d formigas (a=%.1f):\n", N, a);
    printf("  Distância Parcial (por formiga): %.3f\n", dist_parcial);
    printf("  Distância Total (START->END)  : %.3f\n", dist_total);

    return 0;
}