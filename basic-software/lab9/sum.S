.data
    .globl nums
    nums : .int 65, -105, 111, 34

    .globl s
    .align 4
    s: .int 0


.text


.globl sum

sum:

    pushq %rbp

    movq  %rsp, %rbp


    movl $0, %ecx


beginwhile: 
    #sempre negamos a comparação
    cmpl $4, %ecx

    jge endwhile
        #tradução do vetor : addr(nums) + (i * sizeof(int))
        movq $nums, %r8  #r8 = &nums
        movslq %ecx, %r9    #r9 = (long)i
        imulq $4, %r9   #r9 = sz(int)
        addq %r8, %r9   #r8 += r9

        movl (%r9), %edx    #edx = nums[i], movl e edx variam de acordo com o tipo
        addl %edx, s
        incl %ecx 
    jmp beginwhile



endwhile: 
    leave
    
    ret