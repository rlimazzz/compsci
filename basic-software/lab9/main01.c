#include <stdio.h>


extern int s;

void sum();


int main()

{

  sum();

  printf ("soma = %d\n", s);

  return 0;

}