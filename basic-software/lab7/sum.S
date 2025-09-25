.section .rodata
    .globl vet


fmt: .string "Soma: %ld\n"

vet: 
    .quad   10, 20, 30, 40, 50 #aloca 5 * 4 = 20 bytes

.data
    .globl sum
    .align 8
    sum : .quad 0


.text


.globl main

main:

   pushq %rbp

   movq  %rsp, %rbp


   # Inicializações de 'i' e 'ptr' aqui

   # Obs: utilize %ecx para 'i' e %r8 para 'ptr'
    movl $0, %ecx
    movq $vet, %r8


beginwhile:

   cmpl $5, %ecx

   jge  endwhile      # while() {

   # Bloco do while aqui...
        movq    sum, %rax
        movq    (%r8), %rdx      # Lê o valor de 64 bits de (%r8) para %rax (64 bits)
        addq    %rdx, %rax
        movq %rax, sum
        incl %ecx
        addq    $8,    %r8

   jmp beginwhile     # }

endwhile:


   movq $fmt, %rdi    # printf()

   movq sum, %rsi

   movl $0, %eax

   call printf


   movl $0, %eax      # return 0

   leave

   ret