.section .rodata


.data
   .globl a
   .align 4
   a: .int 30

   .globl b
   .align 4
   b: .int 45

   .globl c
   .align 4
   c : .int -60 

   .globl d
   .align 4
   d : .int 25
    

.text

.globl ex01

ex01:

   pushq %rbp

   movq  %rsp, %rbp


   movl a, %eax
   cmpl  b, %eax
   jle fim_primeira_condicao
   cltd


   negl c
   movl c, %eax
   cltd
   movl $3, %ecx
   idiv %ecx
   movl %eax, d  
   

   leave

   ret

fim_primeira_condicao : 
    movl b, %edx
    cmpl a, %edx
    jl  fim_segunda_condicao

    addl a, %edx
    imull c, %edx
    movl %edx, c

    movl $1024, d

fim_segunda_condicao :
