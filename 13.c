#include<stdio.h>
#define SIZE 32
int main() {
	int i, j, n, binary[SIZE],buf=0;
	n = 32;
	printf("%d->", n);

	for (i = 0; i < SIZE && n >0; i++) {
		binary[i] = n % 2;
		n = n / 2;
	}
	for (i = SIZE - 1; i > 0; i--) {
		if (binary[i] == 1) {
			for (i; i > 0; i--)
				buf = 10 * buf + binary[i];
			break;
		}
	}
	printf("%d",buf);
	
	return 0;
}