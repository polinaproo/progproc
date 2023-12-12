#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20
int* normalization(int* Arr, int max,int min) {
	int* Arr1;
	Arr1 = (int*)malloc(N * sizeof(int));
	for (int i = 0; i < N; i++) {
		Arr1[i] = ((Arr[i] - min) / (max - min));
	}
	return Arr1;
}
int main() {
	int* Arr;
	int min = 100;
	int max = -100;
	int* M;
	srand(time(NULL));
	Arr = (int*)malloc(N * sizeof(int));
	for (int i = 0; i < N; i++) {
		Arr[i] = rand() % 21 + 0;
		printf("%3d", Arr[i]);
	}
	for (int i = 0; i < N; i++) {
		if (Arr[i] < min) (min = Arr[i]);
		if (Arr[i] > max) (max = Arr[i]);
	}
	printf("\n%3d %3d", min, max);
	printf("\n");
	M = normalization(Arr, max, min);
	for (int i = 0; i < N; i++) {
		printf("%d ", M[i]);
	}
	free(Arr);
	free(M);
	return 0;
}
