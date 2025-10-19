.data
    .globl c
    c : .byte -20

    .globl i
    .align 4
    i : .long -256

    .globl j
    .align 4 
    j : .long 512

    .globl l
    .align 8
    l : .quad 128

    .globl us
    .align 2
    us : .word 111

    .globl ui
    .align 4
    ui : .long 1024

    .globl ul
    .align 8
    ul : .quad 2048
    
.text



.globl aux

aux:

    pushq %rbp

    movq  %rsp, %rbp


    # Se necessário, usar apenas os registradores (ou suas variações) abaixo:

    # %rax, %rcx, %rdx, %rdi, %rsi, %r8, %r9, %r10, %r11
    


    # Seu código aqui...
    # mov[b, l, q, w] origem destino
    movl $68000, j
    movq $4096, l
    # i = j, não conseguimos passar o i direto para o j, então temos que usar algum registrador de 4 bytes
    movl i, %eax
    movl %eax, j

    # j = 10 + i - 5

    movl i, %eax
    addl $10, %eax
    subl $5, %eax
    movl %eax, j

    # i = (i * 2) - (j + 5)

    movl i, %eax
    movl j, %ecx
    imull $2, %eax
    addl $5, %ecx
    subl %ecx, %eax
    movl %eax, i
    
    # casts
    
    # ui = i não precisa de casting pois ambos são de mesmo tamanho, então podemos mover diretamente
    movl i, %eax
    movl %eax, ui

    # j = c
    movb c, %al
    # movs usa-se para quando queremos que os bits completados à esquerda sejam o mesmo do sinal
    movsbl %al, %r10d
    movl %r10d, j

    # ul = ui
    movl ui, %eax # note que, como ambos compartilham a mesma memória se anteriormente não tiver sido usado o rax nenhuma vez
    # as posições de rax estarão já zeradas, então não há necessidade de fazer cast
    movq %rax, ul

    # us = ul
    movq ul, %rax
    movw %ax, us

    # c = i + j
    movl i, %eax
    addl j, %eax
    movb %al, c    

    # Ponteiros
    movq $l, %rax
    movq $128, (%rax)

    movq $i, %rax
    movl j, %ecx
    addl (%rax), %ecx
    movl %ecx, j

    leave

    ret