#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int main()
{
 float BMI = 0;
 float growth = 0;
 float weight = 0;
 char sex = '0';

 while (1)
 {
  printf("Enter your sex (M/W):  ");
  scanf("%c", &sex);
  if (sex = '0')
  {
   break;
  }
  printf("Enter your growth:  ");
  scanf("%f", &growth);
  printf("Enter your weight:  ");
  scanf("%f", &weight);

  BMI = weight / (growth * growth);
  printf("BMI = %f\n", BMI);

  if (BMI <= 18.5)
  {
   printf("You have to get fat\n");
  }
  else if (BMI > 18.5 && BMI < 25.0)
  {
   printf("Normal\n");
  }
  else if (BMI >= 25.0)
  {
   printf("You should to lose weight\n");
  }
 }
 _getch();
 return 0;
}