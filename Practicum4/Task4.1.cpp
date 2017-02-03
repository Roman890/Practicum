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

	printf("Enter strings:\n");
	do
	{
		i++;
		gets_s(A[i]);
		b[size] = &A[i][0];
		size++;
	} while (strlen(A[i]) != 0);
	
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

	for (int i = 1; i < size; i++)
		printf("%s\n", b[i]);

}
