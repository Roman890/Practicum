/*
a program that creates an integer array of size N and 
then finds the sum of elements between a minimum and maximum elements.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctime>

#define N 10
int main()
{
	int array[N];
	srand(time(NULL));
	int d, c;

	for (int i = 0; i < N; i++)
	{
		array[i] = rand() % 20;
		printf("arrr[%d] = %d\n", i, array[i]);
	}

	int max = array[0];
	for (int i = 0; i < N; i++)
	{
		if (array[i] > max)
		{
			max = array[i];
			c = i;
		}
	}

	int min = array[0];
	for (int i = 0; i < N; i++)
	{
		if (array[i] < min)
		{
			min = array[i];
			d = i;
		}
	}
	
	int sum = 0;
	if (c < d)
	{
		for (int i = c + 1; i < d; i++)
		{
			sum = sum + array[i];
		}
	}
	else 
	{
		for (int i = d + 1; i < c; i++)
		{
			sum = sum + array[i];
		}
	}
	printf("max %d = %d\n",c,max);
	printf("min %d = %d\n", d, min);
	printf("summa = %d\n", sum);
	return 0;
}