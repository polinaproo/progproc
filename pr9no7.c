#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>
#include <math.h>
float sr_arifm(int**Ar, float n) {
	float m = 0;
	for (int i = 0; i < n; i++) {
		m+= (*Ar)[i];
	}
	return (m / n);
}
int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int* Ar;
	float n = rand() % 51 + 1;
	Ar = malloc(sizeof(*Ar) * n);
	for (int i = 0; i < n; i++) {
		Ar[i] = rand() % 201 - 100;
		printf("%5d", Ar[i]);
	}
	printf("\n %f", sr_arifm(&Ar, n));
	free(Ar);
	return 0;
}
