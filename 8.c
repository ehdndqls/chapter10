#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
#include<math.h>
#define SIZE 10
double average(double a[SIZE]);
double stddev(double a[SIZE]);
int main() {
	int i;
	double a[SIZE];

	//srand((unsigned)time(NULL));

	for (i = 0; i < SIZE; i++) {
		//a[i] = (double)rand();
		printf("�ڷḦ �Է��Ͻÿ�: ");
		scanf_s("%lf", &a[i]);
	}
	printf("��հ��� %lf\n", average(a));
	printf("ǥ������ ���� %lf\n", stddev(a));

	return 0;
}

double average(double a[SIZE]){
	int i;
	double sum = 0;
	for (i = 0; i < SIZE; i++) {
		sum += a[i];
	}
	return sum / SIZE;
}

double stddev(double a[SIZE]) {
	int i;
	double avg = average(a);
	double sum=0;
	for (i = 0; i < SIZE; i++) {
		sum += ((a[i] - avg) * (a[i] - avg));
	}
	return sqrt(sum / SIZE);
}