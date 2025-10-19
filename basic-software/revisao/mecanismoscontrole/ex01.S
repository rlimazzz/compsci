.section .rodata

.data
    .globl a
    .align 4
    a : .long 30

    .globl b
    .align 4
    b : .long 45

    .globl c
    .align 4
    c : .long -60

    .globl d
    .align 4
    d : .long 25

.text

.globl ex01

ex01:

   pushq %rbp

   movq  %rsp, %rbp


   # Seu código aqui...
   movl a , %eax
   movl b , %ecx

    # *if (a > b)
   cmpl %ecx, %eax 
   jle fimif1
        # c = -c
        movl c, %edx
        imull $-1, %edx
        movl %edx, c

        # d = c / 3
        movl $3, %ecx
        movl c, %edx
        movslq %edx, %rax
        cltd
        idivl %ecx
        movl %eax, d

fimif1: 
   movl a , %eax
   movl b , %ecx

   cmpl %eax, %ecx
   # *if (b >= a)
 jl fimif2
   # c = (a + b) * c
    movl c , %ecx
    movl a , %edx
    addl b, %edx
     imull %ecx, %edx
    movl %edx, c
    
    movl $1024, d

fimif2:

   leave

   ret