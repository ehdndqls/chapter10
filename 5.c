#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 10
int main() {
	int i = 0, max = 0, max_index;
	int freq[SIZE] = { 0 };
	srand((unsigned)time(NULL));

	for (i; i < 100; i++)
		++freq[rand() % 10];

	for (i = 0; i < SIZE; i++) 
		if (freq[i] > max) {
			max = freq[i];
			max_index = i;
		}
	printf("가장 많이 나온 수 =%d", max_index);

	return 0;
}