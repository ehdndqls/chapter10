#include<stdio.h>
#define ROWS 3
#define COLS 5
int main() {
	int a[ROWS][COLS] = { { 12,56,32,16,98 }, { 99,56,34,41,3 }, { 65,3,87,78,21 } };
	int sum_rows[ROWS] = { 0 };
	int sum_cols[COLS] = { 0 };
	int i, j;

	for (i = 0; i < ROWS; i++){
		for (j = 0; j < COLS; j++) {
			sum_rows[i] += a[i][j];
			sum_cols[j] += a[i][j];
		}
}
	
	for (i = 0; i < ROWS; i++)
		printf("%d행의 합계: %d\n", i, sum_rows[i]);
	for (i = 0; i < COLS; i++)
		printf("%d열의 합계: %d\n", i, sum_cols[i]);
	
	return 0;
}