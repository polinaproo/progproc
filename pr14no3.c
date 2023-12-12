#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

void stroka(char* str, int* a, char elem)
{
	int count = 0, i;
	for (i = 0; i < strlen(str); i++) 
	{
		if (str[i] == elem)
		{
			count += 1;
			str[i] = toupper(str[i]);
		}
		printf("%c", str[i]);
	}
	*a = count;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	char *str, elem;
	int a = 0;
	str = (char*)calloc(1, sizeof(char));
	printf("Введите строку: ");
	gets(str);
	printf("\nВведите элемент: ");
	scanf_s("%c", &elem);
	void (*pointer)(char* str, int* a, char elem);
	pointer = stroka;
	pointer(str, &a, elem);
	printf("\n%d", a);
	return 0;
}
