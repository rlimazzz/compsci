.data
    .globl vet
    .align 2
    vet : .short 50, 10, 67, 42

    .globl max
    .align 2
    max : .short 0

.text

.globl ex01

ex01 : 

    pushq %rbp

    movq  %rsp, %rbp
    
    #short i = 0
    movb $0, %al

    beginfor:
        # if i < 0
        # lembrando que comparamos justamente o contrário, então deve ser maior ou igual já que a condição é que o i 
        # seja menor que 0
        cmpb $4, %al
        jge endfor
        
        movq $vet, %r8 # r8 = &vet, ponteiro para o início do vetor
        movsbq %al, %r9 # r9 = (long)i a comparação sempre será em 64 bits, sempre fazemos casting para long
        imulq $2, %r9 # sizeof(short)
        addq %r8, %r9 # r8 = &vet[i]
        movw (%r9), %cx # cx = vet[i]

        cmpw max, %cx # comparação entre max e cx para ver quem é o maior
        jle endif
        movw %cx, max

endif:
    incb %al
    jmp beginfor

endfor:
    leave

    ret
