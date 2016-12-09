/*
A program that creates an integer array of size N and then finds the sum of elements 
located between the first negative and last positive elements.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctime>

#define N 10
int main()
{
	int array[N];
	srand(time(NULL));
	int plus = array[0];
	int minus = array[0];
	int d, c;

	for (int i = 0; i < N; i++)
	{
		array[i] = rand() %200 - 100;
    }

	for (int i = 0; i < N; i++)
	{
		printf("arrr[%d] = %d\n", i,array[i]);
	}

	for (int i = 0; i < N; i++)
	{
		if (array[i] < 0) 
		{
			minus = array[i];
			d = i;
			break;
		}
	}

	for (int i = 0; i < N; i++)
	{
		if (array[i] > 0) 
		{
			plus = array[i];
			c = i;
		}
	}

	int sum = 0;
	for (int i = d+1; i < c; i++)
	{
		sum = sum + array[i];
	}

	printf("first negative %d = %d, last positive %d = %d\n",d, minus,c, plus);
	printf("summa = %d\n", sum);
	return 0;
}