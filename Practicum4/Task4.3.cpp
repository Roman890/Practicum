#include <stdio.h>
#include <string.h>

#define M 90

bool polindrom(char* w)
{
	char *p, *d;
	int len = strlen(w);
	p = &w[0];
	

	for (int i = 0; i < len; ++i)
	{
		d = &w[len -1];
		if (*p != *d)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	char str[M];
	printf( "Enter the word: ");
	gets_s(str);
	if (polindrom(str))
	{
		printf( "Word is polindrom.");
	}
	else
	{
		printf("Word is not polindrom");
	}
	return 0;
}