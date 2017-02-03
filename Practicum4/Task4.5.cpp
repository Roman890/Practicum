#include <stdio.h>
#include <string.h>

#define M 50
#define N 50


int main()
{
	char A[M][N];
	char *b[M];
	int i = 0;
	int size = 0;

	FILE *file = fopen("FILE1.txt", "r");

	while (!feof(file))
	{
		if (fgets(A[++i], 120, file))
		{
			b[size] = &A[i][0];
			size++;
		}
	}

	fclose(file);

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (strlen(b[j])>strlen(b[j + 1]))
			{
				char *a;
				a = b[j];
				b[j] = b[j + 1];
				b[j + 1] = a;
			}
		}
	}

	file = fopen("FILE2.txt", "w");
	for (int i = 0; i<size; i++)
		fprintf(file, "%s\n", b[i]);

	fclose(file);
}

