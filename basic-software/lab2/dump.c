#include <ctype.h>

#include <stdio.h>

int conversao(int num, int bas) {
	char conv[500];
	int i = 0;
	while(num / bas >= 1) {
		if(num / bas > 1) {
			conv[0] = 
		}
	}
}


int string2num(char *s) {

  int a = 0;

  for ( ; *s; s++)

    a = a*10 + (*s - '0');

  return a;

}


int main () {

  printf("==> %d\n", string2num("777"));
  printf("==> %d\n", string2num("777"));
  printf("==> %d\n", string2num("777"));

  return 0;

}
