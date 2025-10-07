#include <stdio.h>


extern short vet[4];

extern short max;


void ex01();


int main()

{

  ex01();

  printf("max = %d\n", max);

  return 0;

}