/*
The program that cleans the string from extra spaces. Spaces at start of line,
end of line and spaces between words, if their number is greater than 1
*/

#include <stdio.h>
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