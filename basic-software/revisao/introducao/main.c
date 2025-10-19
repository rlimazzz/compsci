#include <stdio.h>


// Indica que as variáveis existem e são definidas em outro lugar

extern char c;

extern int i;

extern int j;

extern long l;

extern unsigned short us;

extern unsigned int ui;

extern unsigned long ul;


void aux();


int main()

{

  aux();

  printf("c  = %d\n", c);

  printf("i  = %d\n", i);

  printf("j  = %d\n", j);

  printf("l  = %ld\n", l);

  printf("us = %u\n", us);

  printf("ui = %u\n", ui);

  printf("lu = %lu\n", ul);

  return 0;

}