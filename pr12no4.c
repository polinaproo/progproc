#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	char* str1, * str2;
	str1 = (char*)calloc(1, sizeof(char));
	gets(str1);
	str2 = (char*)calloc(1, sizeof(char));
	gets(str2);
	for (int i = 0; i < strlen(str1); i++)
	{
		printf("%c", str1[i]);
	}
	for (int i = 0; i < strlen(str2); i++)
	{
		printf("%c", str2[i]);
	}
	return 0;
}
