#include <stdio.h>

int leading_zeros(unsigned short n) {
	int count = 0;
	for(int i = 15;i >= 0;i--) {
		if(n & (1 << i)) {
			return count;
		}else {
			count++;
		}
	}
	return count;
}

int main() {
	unsigned short entr = 0;
	printf("%d\n", leading_zeros(entr));	
	return 0;
}
