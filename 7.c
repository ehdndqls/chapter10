#include<stdio.h>
#include<stdlib.h>
#define ROWS 10
#define COLS 3
int square_root(int a[ROWS][COLS]);
int main() {
	int i, n, a[ROWS][COLS] = { 0 };

	for (i = 1; i <= ROWS; i++) {
		a[i - 1][0] = i;
		a[i - 1][1] = i * i;
		a[i - 1][2] = i * i * i;
	}
	
	printf("정수를 입력하시오: ");
	scanf_s("%d", &n);

	printf("%d의 세제곱근은 %d", n, square_root(a, n));

	return 0;
}
int square_root(int a[ROWS][COLS],int n) {
	int i;
	for (i = 0; i < ROWS; i++) {
		if (a[i][2] == n)
			return a[i][0];
	}
	printf("세제곱근이 없음");
	exit(0);
}