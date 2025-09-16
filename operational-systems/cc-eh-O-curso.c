#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>     
#include <sys/wait.h>   
#include <signal.h>     
#include <string.h>     

#define NUM_FILHOS 3

pid_t child_pids[NUM_FILHOS];
pid_t parent_pid;

char output_buffer[256];
volatile sig_atomic_t signal_received = 0; 

void signal_handler(int sig) {
    write(STDOUT_FILENO, output_buffer, strlen(output_buffer));
    
}

int main() {
    int pipes[NUM_FILHOS][2]; 
    int i;
    
    parent_pid = getpid();

    for (i = 0; i < NUM_FILHOS; i++) {
        if (pipe(pipes[i]) == -1) {
            perror("pipe");
            exit(EXIT_FAILURE);
        }
    }

    for (i = 0; i < NUM_FILHOS; i++) {
        pid_t pid = fork();

        if (pid == -1) {
            perror("fork");
            exit(EXIT_FAILURE);
        
        } else if (pid == 0) {
            pid_t my_pid = getpid();
            
            for(int j=0; j < NUM_FILHOS; j++) {
                close(pipes[j][0]);
            }
            for(int j=0; j < NUM_FILHOS; j++) {
                if(i != j) close(pipes[j][1]);
            }

            write(pipes[i][1], &my_pid, sizeof(my_pid));
            
            close(pipes[i][1]);

            while(1) {
                pause();
            }
            exit(0); 
        }
    }

    for (i = 0; i < NUM_FILHOS; i++) {
        close(pipes[i][1]); 
    }
    
    for (i = 0; i < NUM_FILHOS; i++) {
        read(pipes[i][0], &child_pids[i], sizeof(pid_t));
        close(pipes[i][0]); 
    }

    printf("Pai (PID %d) pronto. Filhos criados (PIDs: %d, %d, %d).\n",
           parent_pid, child_pids[0], child_pids[1], child_pids[2]);
    printf("Pressione Ctrl+C (SIGINT) para mostrar os PIDs.\n");

    sprintf(output_buffer, "\nSinal recebido! Pai: %d, Filhos: %d, %d, %d\n",
            parent_pid, child_pids[0], child_pids[1], child_pids[2]);

    signal(SIGINT, signal_handler);

    while(1) {
        pause();
    }
    
    return 0;
}