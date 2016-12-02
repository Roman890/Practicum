/*
A program that displays a table of occurrence of characters for the user-entered string. 
This table contains the character strings and the number of repetitions.
*/

#include <stdio.h>

int main()
{
 char s[80];
 int i = 0;
 int n[256] = { 0 };

 printf("Enter the string:  ");
 scanf("%s", s);
 do
  n[s[i++]]++;
 while (s[i]);


 for (int i = 1; i < 256; i++)
 {
  if (n[i])
   printf("%c = %d\n", i, n[i]);
 }
  return 0;
}


