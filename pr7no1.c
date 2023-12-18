#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>
#define  n 50

int *zamena(int* arr)
{
	int min = 101;
	int *arr1;
	arr1 = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		arr1[i] = arr[i];
	}
	for (int i = 0; i < n; i++) {
		if ((arr[i] > 0) && (arr[i] < min)) min = arr[i];
	}
	for (int i = 0; i < n; i++) {
		if (arr1[i] < 0) arr1[i] = min;
	}
	return arr1;
}

int main()
{
	int* arr;
	int* m;
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	printf("Начальный массив: ");
	arr = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 201 - 100;
		printf("%4d", arr[i]);
	}
	printf("\n\nНовый массив: ");
	m = zamena(arr);
	for (int i = 0; i < n; i++) {
		printf("%3d", m[i]);
	}
	return 0;
}
