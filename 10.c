#include<stdio.h>
#define SIZE 3
void vector_add(double a[],double b[]);
double dot_product(double a[], double b[]);
int main() {
	double a[SIZE] = { 1.0,2.0,3.0 };
	double b[SIZE] = { 1.0,2.0,3.0 };
	
	vector_add(a, b);
	printf("∫§≈Õ¿« ≥ª¿˚= %lf\n",dot_product(a, b));

	return 0;
}

void vector_add(double a[SIZE], double b[SIZE]) {
	int i;
	double sum[SIZE];
	for (i = 0; i < SIZE; i++) {
		sum[i] = a[i] + b[i];
	}
	printf("∫§≈Õ¿« «’ = {%lf %lf %lf}\n", sum[0], sum[1], sum[2]);
	return;
}
double dot_product(double a[SIZE],double b[SIZE]) {
	int i;
	double dpd=0;
	for (i = 0; i < SIZE; i++)
		dpd += a[i] * b[i];
	return dpd;
}