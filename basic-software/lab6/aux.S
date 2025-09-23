.data
    .globl c
    .align 1
    c: .byte -20

    .globl i
    .align 4
    i: .int -256

    .globl j
    .align 4
    j: .int 512

    .globl l
    .align 8
    l: .quad 128

    .globl us
    .align 2
    us: .short 111

    .globl ui
    .align 4
    ui : .int 1024

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
    #atribuições j, l, i
    movl $68000, j
    movq $4096, l
    # i = j
    movl i %eax
    movl %eax, j

    # j = 10 + i - 5
    movl i, %eax
    addl $10, %eax
    subl $5, %eax
    movl %eax, j

    # i = (i * 2) - (j + 5)
    movl i, %edi
    imull $2, %edi

    movl j, $esi
    addl $5, %esi
    subl %esi, %edi
    movl %edi, i

    #ui = i    
    movsbl c, %edx
    movl %edx, j

    #ul = ui
    movl ui, %r8d
    movq %r8, ul

    #us = ul
    mov ul, %rax
    movw %ax, us

    #c = i + j
    movl i, %eax
    addl j, %eax
    movb %eax, c

    leave

    ret