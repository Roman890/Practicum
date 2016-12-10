/*
A program that, for input strings determines the number of words and outputs each word on a separate line and its length
*/

#include <stdio.h>
#define N 80

int main()
{
	char string[N];
	printf("Enter string: ");
	scanf_s("%[^\n]s", &string, N);
	
	int len = 0;
	for (int i = 0; string[i] != '\0'; i++)
	{
		if (string[i] != ' ')
		{
			printf("%c", string[i]);
			len++;
		}
		if (string[i] == ' ' && string[i+1] !=' ' || string[i+1] == '\0')
		{
			printf("%d\n", len);
			len = 0;
		}
	}

	return 0;
}