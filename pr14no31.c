#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>
#define n 10

void same_elem(int *arr,double *a,int*b,int *c)
{
	double dl = 1, min = 11, max = -1, m = 0, kol = 0;
	for (int i = 0; i < n+1; i++) {
		if (arr[i] == arr[i + 1]) {
			dl += 1;
			if (dl > max) max = dl;
			if (dl < min) min = dl;
		}
		else {
			if (dl > 1) {
				kol += 1;
				m += dl;
			}
			dl = 1;
		}
	}
	double sr = m / kol;
	*a = sr;
	*b = max;
	*c = min;
}

int main() 
{
	setlocale(LC_ALL, "Russian");
	int b, c;
	double a;
	int* arr;
	arr = (int*)malloc(n * sizeof(int));
	printf("Введите массив чисел: \n");
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}
	void(*pointer)(int *arr, double *a, int *b,int *c);
	pointer = same_elem;
	pointer(arr,&a,&b,&c);
	printf("\n");
	printf("Максимальная длина: %d\n",b);
	printf("Минимальная длина: %d\n", c);
	printf("Средняя длина: %lf",a);
	return 0;
}
