#include <stdio.h>


#define inc(x, y)   x++; y++

#define dobro(x)   (x + x)

#define calc(x, y) (x + y * 2)


int main()

{

  int a = 10;

  int b = 20;

  /*
    questão interessante envolvendo a definição dos macros, na substituição pelo pré-processador
    quando é substituído o if somente vai guardar a primeira linha. Logo, o código fica assim:

    if(a > 15) 
	a++;b++;
    
    então nessa substituição o b sempre está somando 1
  */
  if (a > 15)

     inc(a, b);


  printf("Linha 1: a = %d, b = %d\n", a, b);


  a = 10;

  b = 20;

  /*
    denovo na questão dos macros, na substituição pelo pré-processador vai ficar (++b + ++b)
  */
  a = dobro(++b);


  printf("Linha 2: a = %d, b = %d\n", a, b);


  a = 10;

  b = 20;

  b = calc(a, 1 + 5);


  printf("Linha 3: a = %d, b = %d\n", a, b);


  return 0;

}
