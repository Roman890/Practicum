/*
3. A program that converts the angle from degrees to radians, and Vice versa, depending on the symbol when you enter.
For example:
45.00 D - degrees, and 45.00 R - in radians. Data input is carried out by template
%f%c
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
 float angle = 0.0;
 float temp = 0.0;
 char c = '0';


 printf("Enter angle in a form 45.00D or 45.00R:");
 scanf("%f%c", &angle, &c);
 printf("Angle = %.2f%c\n", angle, c);

 if (c == 'R')
 {
  temp = (angle *180)/3.14;
  printf("Angle in degree: %f", temp);
 }

 else if (c == 'D')
 {
  temp = (angle* 3.14)/180;
  printf("Angle in radian: %f", temp);
 }
 
 return 0;
}
