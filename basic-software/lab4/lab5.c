#include <stdio.h>


typedef int campo;
struct S {

   campo a;

   campo b;

   campo c;

   campo d;

};




void offsets(struct S *ptr) {
    printf("Offset of a: %lu\n", (unsigned long) &ptr->a - (unsigned long) ptr);
    printf("Offset of b: %lu\n", (unsigned long) &ptr->b - (unsigned long) ptr);
    printf("Offset of c: %lu\n", (unsigned long) &ptr->c - (unsigned long) ptr);
    printf("Offset of d: %lu\n", (unsigned long) &ptr->d - (unsigned long) ptr);          
}


//----------------------------------------------

// Cria a variável varS

struct S varS;


int main() {

  offsets(&varS);

  return 0;

}