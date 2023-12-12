#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>
#define n 10

void elem(int* arr, int* a3, int* b5, int* c7, int* d9)
{
	int count3 = 0, count5 = 0, count7 = 0, count9 = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 3 == 0) count3++;
		if (arr[i] % 5 == 0) count5++;
		if (arr[i] % 7 != 0) count7++;
		if (arr[i] % 9 == 1) count9++;
	}
	*a3 = count3;
	*b5 = count5;
	*c7 = count7;
	*d9 = count9;
}

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	int* arr;
	int a3, b5, c7, d9;
	void(*pointer)(int* arr, int* a3, int* b5, int* c7, int* d9);
	arr = (int*)calloc(n, sizeof(int));
	printf("Массив: \n");
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 10;
		printf("%3d", arr[i]);
	}
	pointer = elem;
	pointer(arr, &a3, &b5, &c7, &d9);
	printf("\nКоличество элементов, делящихся на 3: %d", a3);
	printf("\nКоличество элементов, делящихся на 5: %d", b5);
	printf("\nКоличество элементов, не делящихся на 7: %d", c7);
	printf("\nКоличесвто элементов, которые при делении на 9 дают остаток 1: %d", d9);
	return 0;
}
