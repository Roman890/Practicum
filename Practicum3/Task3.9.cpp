/*
A program to determine the string character sequence of maximum length
Note:
For the line AABCCCDDEEEEF displays 4 and EEEE
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 80

int main()
{
	char str[N];
	int buf = 0;
	char character = 0;

	printf("Enter string: ");
	scanf_s("%[^\n]s", &str,N);
 
	for (int i = 0; i < strlen(str);)
	{
			char current_character = str[i];
			int len = 0;

			while (str[i] == current_character) 
			{
				i++;
				len++;
			}

			if (buf < len) 
			{
				character = current_character;
				buf = len;
			}
	}
		for (int i = 0; i < buf; i++) printf("%c",character);
	
	return 0;
}
