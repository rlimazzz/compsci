#include <stdio.h>


struct X {

  int   a;

  short b;

  int   c;

};


struct Y {

   long  p;

   char  q;

   short r;

};


// Cria a variável x e inicializa os campos da estrutura

struct X x = {

   .a = 2048,

   .b = 17,

   .c = 0xBebaCafe

};


int main() {

  char  *pChar;

  short *pShort;

  struct Y *pY;


  printf("x.a = %d\n", x.a);

  printf("x.b = %d\n", x.b);

  printf("x.c = %x\n", x.c);


  printf("---\n");


  pChar  = (char*)&x;

  pChar  = pChar + 4;

  *pChar = *pChar | 0x20;


  printf("x.a = %d\n", x.a);

  printf("x.b = %d\n", x.b);

  printf("x.c = %x\n", x.c);


  printf("---\n");


  pShort = (short*)&x;

  pShort[3] = -1;


  printf("x.a = %d\n", x.a);

  printf("x.b = %d\n", x.b);

  printf("x.c = %x\n", x.c);


  printf("---\n");


  pY = (struct Y*)&x;

  pY->q = 'D';

  pY->r = -125;


  printf("x.a = %d\n", x.a);

  printf("x.b = %d\n", x.b);

  printf("x.c = %x\n", x.c);


  return 0;

}