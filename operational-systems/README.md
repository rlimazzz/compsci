# README.md - Primeira prova de Sistemas Operacionais

## Fluxo de Execução Encadeada (Fibonacci)

Este diagrama descreve o fluxo de execução "encadeada" (sequencial) do programa `fibonacci-sum.c`, conforme solicitado no exercício.

Neste modelo, a thread `main` é responsável por criar e aguardar (com `pthread_join`) cada thread de cálculo, uma de cada vez. Isso garante que a `Thread (k)` sempre termine sua execução e atualize os valores parciais antes que a `Thread (k+1)` seja criada, evitando condições de corrida.

## Variáveis Globais
* `sum`: Armazena o último valor $F(n)$ calculado.
* `operandPtr->x1`: Armazena $F(n-2)$.
* `operandPtr->x2`: Armazena $F(n-1)$.

## Diagrama de Fluxo (Exemplo: N=3)

1.  **MAIN Thread**: Inicia.
    * Lê `N=3` do usuário.
    * Aloca `operandPtr`.
    * Define estado inicial: `sum = 0`, `x1 = 0`, `x2 = 1`.
    * Imprime: `Sum: 00, Partials: 00, 01`
    * Entra no loop `k=0`.

2.  **MAIN Thread**:
    * `k=0`.
    * Cria a `Thread 0` (passando `operandPtr` com `x1=0`, `x2=1`).
    * **Pausa** e espera (`pthread_join(tid[0])`).

3.  **THREAD 0**: Inicia.
    * **Entrada**: `x1=0`, `x2=1`.
    * `sum = x1 + x2` (0 + 1 = 1).
    * Imprime: `Sum: 01, Partials: 00, 01`.
    * Atualiza globais: `x1 = x2` (1), `x2 = sum` (1).
    * **Saída**: `x1=1`, `x2=1`, `sum=1`.
    * Termina.

4.  **MAIN Thread**:
    * `join` da `Thread 0` é concluído.
    * Continua o loop para `k=1`.
    * Cria a `Thread 1` (passando `operandPtr` com `x1=1`, `x2=1`).
    * **Pausa** e espera (`pthread_join(tid[1])`).

5.  **THREAD 1**: Inicia.
    * **Entrada**: `x1=1`, `x2=1`.
    * `sum = x1 + x2` (1 + 1 = 2).
    * Imprime: `Sum: 02, Partials: 01, 01`.
    * Atualiza globais: `x1 = x2` (1), `x2 = sum` (2).
    * **Saída**: `x1=1`, `x2=2`, `sum=2`.
    * Termina.

6.  **MAIN Thread**:
    * `join` da `Thread 1` é concluído.
    * Continua o loop para `k=2`.
    * Cria a `Thread 2` (passando `operandPtr` com `x1=1`, `x2=2`).
    * **Pausa** e espera (`pthread_join(tid[2])`).

7.  **THREAD 2**: Inicia.
    * **Entrada**: `x1=1`, `x2=2`.
    * `sum = x1 + x2` (1 + 2 = 3).
    * Imprime: `Sum: 03, Partials: 01, 02`.
    * Atualiza globais: `x1 = x2` (2), `x2 = sum` (3).
    * **Saída**: `x1=2`, `x2=3`, `sum=3`.
    * Termina.

8.  **MAIN Thread**:
    * `join` da `Thread 2` é concluído.
    * Loop termina (`k=3`).
    * Libera memória (`free(operandPtr)`).
    * Programa finalizado.

## Discussão da solução do problema 2
Quando planificamos as fazes do cubo, o caminho mais curto corresponde a diagonal do cubo de lados a e altura n * a, logo a distância total é dada por a * sqrt(1 + n ^ 2), dividindo essa distância total por n temos a distância parcial de cada formiga.

## Discussão da solução do problema 3
Este programa cria um processo "Pai" e três processos "Filhos".
Os Filhos usam pipes (canos de comunicação) para enviar seus números de identificação (PIDs) para o Pai. O Pai coleta esses PIDs e fica esperando.
Quando o usuário pressiona Ctrl+C no teclado, o programa captura esse sinal e imprime na tela o PID do Pai e os PIDs dos três Filhos.

