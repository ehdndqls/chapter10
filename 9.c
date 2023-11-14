#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROWS 10
#define COLS 3
int max_grade(int a[], int test_num);
int min_grade(int a[], int test_num);
int main() {
	int i;
	int a[ROWS][COLS];

	srand((unsigned)time(NULL));

	for (i = 0; i < ROWS; i++) {
		a[i][0] = rand() % 101;
		a[i][1] = rand() % 101;
		a[i][2] = rand() % 101;
	}
	printf("시험 #%d의 최대점수=%d\n",1, max_grade(a, 1));
	printf("시험 #%d의 최소점수=%d\n",1, min_grade(a, 1));
	printf("시험 #%d의 최대점수=%d\n",2, max_grade(a, 2));
	printf("시험 #%d의 최소점수=%d\n",2, min_grade(a, 2));
	printf("시험 #%d의 최대점수=%d\n",3, max_grade(a, 3));
	printf("시험 #%d의 최소점수=%d\n",3, min_grade(a, 3));

	return 0; 
}

int max_grade(int a[ROWS][COLS], int test_num) {
	int i, max = a[0][test_num];
	for (i = 1; i < ROWS;i++) {
		if (a[i][test_num - 1] > max)
			max = a[i][test_num - 1];
	}
	return max;
}

int min_grade(int a[ROWS][COLS], int test_num) {
	int i, min = a[0][test_num];
	for (i = 1; i < ROWS; i++) {
		if (a[i][test_num - 1] < min)
			min = a[i][test_num - 1];
	}
	return min;
}