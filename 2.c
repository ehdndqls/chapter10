#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	int i, max, min, x[10];
	srand((unsigned)time(NULL));
	for (i = 0; i < 10; i++) {
		x[i] = rand();
	}
	max = x[0];
	min = x[0];
	for (i = 1; i < 10; i++) {
		if (x[i] > max)
			max = x[i];
		if (x[i] < min)
			min = x[i];
	}
	printf("최대값은 %d\n", max);
	printf("최소값은 %d\n", min);

	return 0;
}