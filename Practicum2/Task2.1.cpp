/*
The program simulates an altimeter bomb. A bomb falls from a height H, which is defined by the user. In any
time you can learn the distance travelled.
The altimeter bomb is triggered once per second and displays on the terminal the current value of height above the ground h.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

 float heigh, L;
 int time = 1;
 float g = 9.8;

 printf("Enter heigh:  ");
 scanf("%f", &heigh);

 while(heigh != 0){

  L = (g * (time * time)) / 2;
  if ((heigh - L) > 0)
  {
   printf("Heigh: %f  Time: %d\n", (heigh-L), time);
   time++;
  }
  else break;
 }
 printf("BOOM!!!");
 return 0;
}





