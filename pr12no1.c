#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	char* str;
	str = (char*)calloc(1, sizeof(char));
	printf("Введите строку: ");
	gets(str);
	printf("\nПреобразованная строка: ");
	for (int i = 0; i < strlen(str); i++) 
	{
		if (str[i] == ' ')
		{
			int g = i;
			for (int i = 0; i < g; i++) {
				str[i] = toupper(str[i]);
				printf("%c", str[i]);
			}
			for (int i = g; i < strlen(str); i++) {
				printf("%c", str[i]);
			}
			break;
		}
	}
	return 0;
}
