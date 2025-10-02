#include <stdio.h>


extern long last;

extern long values[5];


void swap();


int main()

{

  swap();


  for (int i = 0; i < 5; i ++) 

     printf("values[%d] = %ld\n", i, values[i]);


  printf("last = %ld\n", last);


  return 0;

}