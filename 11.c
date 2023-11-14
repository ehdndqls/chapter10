#include<stdio.h>
#define SIZE 10
int main() {
	int num_product;
	int a[SIZE] = { 1, 1, 2, 2, 3, 3 ,4, 4, 5, 5 };

	printf("상품 번호를 입력하시오: ");
	scanf_s("%d", &num_product);

	printf("상품 번호 %d의 위치는 %d입니다.", num_product, a[num_product]);

	return 0;
}