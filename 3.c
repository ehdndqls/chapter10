#include<stdio.h>
int array_equal(int a[], int b[], int size);
int main() {
	int size,i;
	int a[10] = {1,2,3,0,0,0,0,0,0,0};
	int b[10] = {0,0,0,0,0,0,0,0,0,0};
	size = sizeof(a) / sizeof(a[0]);

	for (i = 0; i < size; i++) {
		printf("%d ",a[i]);
	}
	printf("\n");
	for (i = 0; i < size; i++) {
		printf("%d ", b[i]);
	}
	printf("\n");

	if (array_equal(a,b,size) == 1)
		printf("2개의 배열은 같음");
	else
		printf("2개의 배열은 다름");

}
int array_equal(int a[], int b[], int size) {
	int i;
	for (i = 0; i < size; i++) {
		if (a[i] != b[i])
			return 0;
	}
	return 1;
}