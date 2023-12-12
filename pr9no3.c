#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#define N 20
int* search_element(int* Arr, int element) {
	int* count;
	count = (int*)malloc(N * sizeof(int));
	for (int i = 0; i < N; i++) {
		count[i] = -1;
	}
	for (int i = 0; i < N; i++) {
		if (Arr[i] == element) (count[i] = i);
	} 
	return count;
}
int main() {
	int* Arr;
	int element;
	int* M;
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	Arr = (int*)malloc(N * sizeof(int));
	for (int i = 0; i < N; i++) {
		Arr[i] = rand() % 21 + 0;
		printf("%3d", Arr[i]);
	}
	printf("\nВведите элемент, который надо найти ");
	scanf_s("%d", &element);
	M = search_element(Arr, element);
	for (int i = 0; i < N; i++) {
		if (M[i] != -1) (printf("%d ", M[i]));
	}
	free(Arr);
	free(M);
	return 0;
}
