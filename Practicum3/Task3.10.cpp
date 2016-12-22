#include <stdio.h>
#include <string.h>

#define M 80

int main()
{
	char string[M];
	int num = 50;
	int count = 1;
	int d = 0;
	int p = 1;
	int len_str = 0;
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
			if (string[i] != ' ')len_str++;
			else 
			{
				for (int g = len_str+1; g < len; g++)
				{
					printf("%c", string[g]);
				}
				len_str = 0;
				num = 0;
			}
		}
		else if (string[i] == ' ')
			{
					count++;
					d = i;
					if (count == num)
					{
						for (int s = d+1; s < len; s++) 
						{
							if (string[s] != ' ')len_str++;
							else
							{
								for (int j = d + len_str + 1; j < len; j++)
								{
									printf("%c", string[j]); 
								} break;
							}
						}
						i = len;
					}
					else if (count != num) printf("%c", string[i]);
			}
			else printf("%c", string[i]);
		}
	return 0;
}