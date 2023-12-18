#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	char* str1, * str2;
	printf("Введите строку: ");
	str1 = (char*)calloc(1, sizeof(char));
	gets(str1);
	str2 = (char*)calloc(1, sizeof(char));
	for (int i = 0; i < strlen(str1); i++) {
		str2[i] = str1[i];
	}
	printf("\nПреобразованная строка: ");
	for (int i = 0; i < strlen(str1); i++) {
		str1[i] = str2[strlen(str1)-1 - i];
		printf("%c", str1[i]);
	}
	return 0;
}
