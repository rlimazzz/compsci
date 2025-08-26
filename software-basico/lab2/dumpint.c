#include <stdio.h>


void dump(void *addr, int n) {

  unsigned char *p = (unsigned char *)addr;

  while (n--) {

    printf("%p - %02x\n", p, *p);

    p++;

  }
}

int main() {
	long i = 1000000;
	dump(&i, sizeof(i));
	return 0;
}
