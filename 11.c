#include<stdio.h>
#define SIZE 10
int main() {
	int num_product;
	int a[SIZE] = { 1, 1, 2, 2, 3, 3 ,4, 4, 5, 5 };

	printf("��ǰ ��ȣ�� �Է��Ͻÿ�: ");
	scanf_s("%d", &num_product);

	printf("��ǰ ��ȣ %d�� ��ġ�� %d�Դϴ�.", num_product, a[num_product]);

	return 0;
}