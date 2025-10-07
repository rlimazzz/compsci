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
    
    movb $0, %al

    beginfor:
        cmpb $4, %al
        jge endfor
        
        movq $vet, %r8
        movsbq %al, %r9
        imulq $2, %r9
        addq %r8, %r9
        movw (%r9), %cx

        cmpw max, %cx
        jle endif
        movw %cx, max

endif:
    incb %al
    jmp beginfor

endfor:
    leave

    ret
