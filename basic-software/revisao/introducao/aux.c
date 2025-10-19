// Cria e inicializa as variáveis

char c = -20;

int i = -256;

int j = 512;

long l = 128;

unsigned short us = 111;

unsigned int ui = 1024;

unsigned long ul = 2048;


void aux()

{

  // Atribuições simples

  j = 68000;

  l = 4096;

  i = j;


  // Expressões

  j = 10 + i - 5;

  i = (i * 2) - (j + 5);


  // Casts

  ui = i;

  j = c;

  ul = ui;

  us = ul;

  c = i + j;


  // Ponteiros

  long *ptr;        // Utilize um registrador para representar 'ptr'

  ptr = &l;

  *ptr = 128;


  int *iptr;        // Utilize um registrador para representar 'iptr'

  iptr = &i;

  j = j + *iptr;

}