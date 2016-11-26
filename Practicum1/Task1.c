/*
BMI
Program that prompts the user for gender,
height and weight, and then analyzes the ratio of height and weight, giving recommendations for further action 
(lose weight, gain weight,norm)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
 float BMI = 0;
 float growth = 0;
 float weight = 0;
 char gender;


  printf("Enter your sex (M/W):  ");
  scanf("%c", &gender);
  printf("Enter your growth (1.7):  ");
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

 return 0;
}
