#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

void vector(double* v1, double* v2, double* longest, double* m)
{
	double d1 = 0, d2 = 0, sum=0;
	for (int i = 0; i < 3; i++)
	{
		d1 += pow(v1[i], 2);
		d2 += pow(v2[i], 2);
		sum += v1[i] * v2[i];
	}
	d1 = sqrt(d1);
	d2 = sqrt(d2);
	if (d1 > d2)
	{
		*longest = d1;
		*m = sum / d1;
	}
	else
	{
		*longest = d2;
		*m = sum / d2;
	}
}

int main() 
{
	setlocale(LC_ALL, "Russian");
	double v1[3] = { 1,2,3 };
	double v2[3] = { 2,4,5 };
	double longest,  m;
	void(*pointer)(double* v1, double* v2, double* longest, double* m);
	pointer = vector;
	pointer(v1, v2, &longest, &m);
	printf("Длина: %.3lf ", longest);
	printf("Проекция: %.3lf", m);
	return 0;
}
