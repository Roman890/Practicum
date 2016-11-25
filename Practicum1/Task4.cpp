/*
4. a program that translates the growth of the American system (feet, inches) to European (centimeters).
Data is entered in the form of two integers, are displayed in the form of material
numbers with accuracy up to 1 mark. 1 foot = 12 inches. 1 inch = 2.54 cm
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int main()
{
 
  int foot, inch;
  foot = inch = 0;

  float height;
  printf("Enter  your height (foot, inch):  ");
  scanf("%d", &foot);
  scanf("%d", &inch);
  
  height = inch * 2.54;
  printf("Height in cm:  %.1f", height);
  
 
 _getch();
 return 0;
}
