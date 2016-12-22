#include <stdio.h>
#include <string.h>

int main()
{
	char string[80];
	int num = 50;
	int count = 1;
	int d = 0;
	int p = 1;
	printf("Enter string: ");

	scanf("%[^\n]s", &string);

	int len = strlen(string);

	for (int f = 0; f < len; f++)
	{
		if (string[f] == ' ') p++;
	}

	while (num>p)
	{
		printf("Enter number word: ");
		scanf("%d", &num);
		if (num > p) printf("Error\n");
	}

	for (int i = 0; i<len; i++)
	{
		if (num == 1)
		{
			for (int g = 0;; g++)
			{
				printf("%c", string[g]);
				if ((string[g] == ' ') || (string[g] == '\0')) break;
			}
			num = 0;
		}

		if (string[i] == ' ')
		{ 
			count++;
			d = i;

			if (count == num)
			{
				for (int j = d+1;; j++)
				{
					printf("%c", string[j]);
					if ((string[j] == ' ') || (string[j] == '\0')) break;
				}
			}
		}

	}
	return 0;
}