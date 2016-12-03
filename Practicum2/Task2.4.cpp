/*
A program that changes characters in the array according to the rule: first come the letters, then numbers.
String is defined in program code in the form of a random sequence of letters and numbers.
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

int main()
{
    char string[9];
    srand(time(NULL));
    int ww;
 
	for (int i = 0; i < 8; i++)
    {
        ww = rand() % 3 + 1;
        int nn;
        switch (ww)
        {
           case 1:  nn = rand() % RANGE_0_9 + ASCII_0; break; 
           case 2:  nn = rand() % RANGE_A_Z + ASCII_A; break; 
           case 3:  nn = rand() % RANGE_a_z + ASCII_a; break;
        }
         string[i] = char(nn);
    }
    for (int j = 0; j < 8; j++)
    {
       printf("%c", string[j]);
    }
      printf("\n");
 
	  for (int i = 0; i < 8; i++)
	  {
		  if (string[i] >= '0' && string[i] <= '9')
		  {
			  for (int j = i; j < 8; j++)
			  {
				  if ((string[j] >= 'A' && string[j] <= 'Z') || (string[j] >= 'a'&&string[j] <= 'z'))
				  {
					  int k = string[i];
					  string[i] = string[j];
					  string[j] = k;
				  }
			  }
		  }
		  printf("%c", string[i]);
	  }
 return 0;
}

