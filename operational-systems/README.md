# README.md - Primeira prova de Sistemas Operacionais

## Discussão da solução do problema 1
Este diagrama descreve o fluxo de execução "encadeada" (sequencial) do programa fibonaccisum.c, conforme solicitado no exercício.
Neste modelo, a thread main é responsável por criar e aguardar (com pthread_join) cada thread de cálculo, uma de cada vez. Isso garante que a Thread (k) sempre termine sua execução e atualize os valores parciais antes que a Thread (k+1) seja criada, evitando condições de corrida.

## Discussão da solução do problema 2
Quando planificamos as fazes do cubo, o caminho mais curto corresponde a diagonal do cubo de lados a e altura n * a, logo a distância total é dada por a * sqrt(1 + n ^ 2), dividindo essa distância total por n temos a distância parcial de cada formiga.

## Discussão da solução do problema 3
Este programa cria um processo "Pai" e três processos "Filhos".
Os Filhos usam pipes (canos de comunicação) para enviar seus números de identificação (PIDs) para o Pai. O Pai coleta esses PIDs e fica esperando.
Quando o usuário pressiona Ctrl+C no teclado, o programa captura esse sinal e imprime na tela o PID do Pai e os PIDs dos três Filhos.

