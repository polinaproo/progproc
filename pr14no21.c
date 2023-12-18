#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>
#define n 10

void elem(int* arr, int p,  int* a, int *b)
{
	int count1 = 0, count2 = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 != 0) count1 += 1;
		if (arr[i] % p == 0) count2 += 1;
	}
	*a = count1;
	*b = count2;
}

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	int* arr;
	int a, b;
	int p;
	void(*pointer)(int* arr, int p, int* a, int*b);
	arr = (int*)calloc(n, sizeof(int));
	printf("Массив: ");
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 10;
		printf("%3d", arr[i]);
	}
	printf("\nВведите элемент, на которое должны делиться числа: ");
	scanf_s("%d", &p);
	pointer = elem;
	pointer(arr,p, &a,&b);
	printf("\nКоличество нечетных чисел: %d ",a);
	printf("\nКоличество чисел, делящихся на заданный параметр: %d ",b);
	return 0;
}
