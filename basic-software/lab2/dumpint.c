#include <stdio.h>


void dump(void *addr, int n) {

  unsigned char *p = (unsigned char *)addr;

  while (n--) {

    printf("%p - %02x\n", p, *p);

    p++;

  }
}

int main() {
  char p[] = "7509";
  dump(&p, sizeof(p));
	return 0;
}
