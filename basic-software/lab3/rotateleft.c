#include <stdio.h>
#include <string.h>

unsigned char rotate_left(unsigned char x, int n) {
	unsigned char b;

	for(int i = 0;i < n;i++) {
		b = x & 0x80;
		b = b >> 7;
		x = x << 1;
		x = x | b;
	}
	return x;
}

int main() {
	unsigned char n[9] = "01100001";
	int qtd = 3;

	printf("%x", rotate_left(n, qtd));
	return 0;
}
