/*
4. a program that translates the growth of the American system (feet, inches) to European (centimeters).
Data is entered in the form of two integers, are displayed in the form of material
numbers with accuracy up to 1 mark. 1 foot = 12 inches. 1 inch = 2.54 cm
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
 float inch = 2.54;
 float foot;
 foot =  inch * 12;
 
 float yourfoot, yourinch;

 float height;
 printf("Enter  your height (foot, inch):  \n");
 scanf("%f", &yourfoot);
 scanf("%f", &yourinch);
 
 printf("%f", yourfoot);
 height = (foot * yourfoot) + (yourinch * inch);
 printf("Height in cm:  %f", height);
  
 
 return 0;
}
