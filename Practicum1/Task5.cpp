/*
A program that takes a string from the user and
displays it on the screen, aligning the center
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{

 char stroka[50];
 int len = 80;

 printf("Enter line: ");
 scanf("%s", &stroka);

 len = (len - strlen(stroka)) / 2;

 for (int i = 0; i <= len; i++)
 {
  printf(" ");
 }
 printf("%s", stroka);

 return 0;
}
