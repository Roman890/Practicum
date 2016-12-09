/*
a program that displays 10 of the passwords generated
random Latin letters and numbers, and letters must be
as in the lower and upper registers. Password length is 8 characters.
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ASCII_0 48
#define ASCII_9 57
#define RANGE_0_9 (ASCII_9 - ASCII_0)

#define ASCII_A 65
#define ASCII_Z 90
#define RANGE_A_Z (ASCII_Z - ASCII_A)

#define ASCII_a 97
#define ASCII_z 122
#define RANGE_a_z (ASCII_z - ASCII_a)

#define NUM 10

int main()
{
	char string[9];
	srand(time(NULL));
	int ww;

	for (int m = 0; m < NUM; m++)
	{
		for (int i = 0; i < 8; i++)
		{
			ww = rand() % 3 + 1;
			switch (ww)
			{
				case 1:  string[i] = rand() % RANGE_0_9 + ASCII_0; break;
				case 2:  string[i] = rand() % RANGE_A_Z + ASCII_A; break;
				case 3:  string[i] = rand() % RANGE_a_z + ASCII_a; break;
			}
		}
		for (int j = 0; j < 8; j++)
		{
			printf("%c", string[j]);
		}
		printf("\n");
	}
	return 0;
}
		