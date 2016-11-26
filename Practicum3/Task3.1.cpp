/*
 A program, that counts the number of words in the user string.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {

 char string[80];
 int count = 0;

 printf("Enter a string: ");
 scanf("%[^\n]s", &string); // You can enter string with spaces

 for (int i = 0; string[i] != '\0'; i++)
 {
  if (string[i + 1] == ' ' || string[i + 1] == '\0') count++;
  else continue;
 }
 printf(" There are %d words  \n", count);
 return 0;
}