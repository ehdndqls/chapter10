#include<stdio.h>
#define ROWS 3
#define COLS 3
void scalar_mult(int a[][COLS], int scalar);
void transpose(int a[][COLS], int b[][COLS]);
void print_matrix(int a[][COLS]);
int main() {
	int a[ROWS][COLS] = { {1,2,3},{4,5,6,},{7,8,9} };
	int b[ROWS][COLS] = { 0 };

	scalar_mult(a, 2);
	transpose(a, b);
	print_matrix(a);
	print_matrix(b);

	return 0;
}
void scalar_mult(int a[ROWS][COLS], int scalar) {
	int i, j;
	for (i = 0; i < ROWS; i++) 
		for (j = 0; j < COLS; j++) 
			a[i][j] *= scalar;
}

void transpose(int a[ROWS][COLS], int b[ROWS][COLS]) {
	int i, j;
	for (i = 0; i < ROWS; i++)
		for (j = 0; j < COLS; j++)
			b[j][i] = a[i][j];
}

void print_matrix(int a[ROWS][COLS]) {
	int i, j;
	for (i = 0; i < ROWS; i++) {
		for (j = 0; j < COLS; j++)
			printf("%2d ", a[i][j]);
		printf("\n");
	}
	printf("\n");
}