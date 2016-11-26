/*
a program that displays a triangle of asterisks
*/

#include <stdio.h>

int main()
{
 int line;                              // all line
 
 printf("Enter number of line:  ");
 scanf("%d", &line);

 int stars_on_last_line = line * 2 - 1; // asterisks on last line
 int stars_on_line = 1;                 // asterisks on line

 while(line--)
 { 
   for (int i = (stars_on_last_line - stars_on_line) / 2; i > 0; i--)  printf(" ");
   for (int i = stars_on_line; i > 0; i--)  printf("*");
   printf("\n");
   stars_on_line += 2;
  }

  return 0;
 }
