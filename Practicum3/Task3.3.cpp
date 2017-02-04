#include <stdio.h>
#include <string.h>

#define M 50


int main()
{
	char string[M];
	printf("Enter string: ");
	gets_s(string);
	int lenght1 = 0, buf = 0, p = 0;
		
	for (int i = 0; string[i] != '\0'; i++)
	{
		if (string[i] != ' ')
			lenght1++;
		if ((string[i + 1] == ' ') || (string[i + 1] == '\0'))
		{
			if (lenght1 > buf)
			{
				buf = lenght1;
				lenght1 = 0;
				p = i;
			}
		}
	}

	printf("Max lenght:  %d\n", buf);
	printf("Max word:   ");

	for (int i = (p - buf + 1); i <= p; i++)
		printf("%c", string[i]);

	printf("\n");
	return 0;
}



