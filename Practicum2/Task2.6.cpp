/*
The program that cleans the string from extra spaces. Spaces at start of line,
end of line and spaces between words, if their number is greater than 1
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char string[80];
	int i = 0;
	printf("Enter a string: ");
	scanf("%[^\n]s", &string);
	for (int i = 0; string[i] != '\0'; i++)
	{
		if (string[i] != ' ')
			printf("%c", string[i]);
		if (string[i] != ' ' && string[i + 1] == ' ')
			printf("%c", string[i + 1]);
		if (string[strlen(string) - 1] == 0)
			printf("%c", '\0');
	}

 return 0;
}



	
