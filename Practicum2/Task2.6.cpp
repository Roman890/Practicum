/*
The program that cleans the string from extra spaces.
*/

#include <stdio.h>

int main()
{
 char s,z;// z - a current character
 printf("Enter your string with point:  ");
 for (z =s = ' '; z != '.'; s = z)
 {
  scanf("%c", &z);
  if (z == ' ' && s == ' ') continue; // if spaces < 1 - pass
  printf("%c", z);
 }
 return 0;
}
