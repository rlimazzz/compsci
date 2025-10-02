.data
    .globl nums
    nums : .quad 50, -10, 60, -20, 70

    .globl values
    .align 8
    values : .quad 0


.text


.globl sum

sum:

    pushq %rbp

    movq  %rsp, %rbp


    movl $0, %eax
    movl $4, %ecx


beginfor: 
    #sempre negamos a comparação
    movl $0, %eax
    cmpl %ecx, %eax

    jge endfor
        #tradução do vetor : addr(nums) + (i * sizeof(int))
        #fazer o bloco em casa
        #o rax é metade do eax, e assim vale para os outros rbx, eax por aí vai...

        incl %eax
        decl %ecx
    jmp beginfor



endfor: 
    leave
    
    ret