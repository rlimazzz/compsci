.data
    .globl str
    .align 8
    str: .string "BEBAMUITOCAFE"

.text

.globl process

process:

   pushq %rbp

   movq  %rsp, %rbp


   # Inicialização de 'ptr' aqui (Obs: utilize %r8 como sendo 'ptr')

   # ptr = str
   movq $str, %r8



beginwhile:

   cmpb $0, (%r8)

   je endwhile            # while() {
    addl    $32, (%r8) 
    incq %r8

   # Bloco do while


   jmp beginwhile         # }

endwhile:


   leave

   ret