#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	char* str;
	int k1 = 0;
	int k2 = 0;
	int count=0;
	int c;
	str = (char*)calloc(1, sizeof(char));
	printf("Введите строку: ");
	gets(str);
	printf("\nВведите номер слова: ");
	scanf_s("%d", &c);
	for (int i = 0; i < strlen(str); i++) 
	{
		if (str[i] == ' ')
		{
			count += 1;
			if (count == c)
			{
				k1 = k2;
				k2 = i;
				break;
			}
			else k2 = i;
		}
	}
	if (count != c)
	{
		k1 = k2;
		k2 = strlen(str);
	}
	for (int i = 0; i < k1; i++)
	{
		printf("%c", str[i]);
	}
	for (int i = k2+1; i < strlen(str); i++)
	{
		printf("%c", str[i]);
	}
	return 0;
}
