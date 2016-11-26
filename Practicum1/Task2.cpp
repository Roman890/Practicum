/*
2. A program that requests the current time in the format HH:MM:SS, and then outputs a greeting based on
specified time ("Good morning "Good afternoon", etc.)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

 int hour, min, sec;    // variables for hours, minutes, seconds
 hour = min = sec = 0;
 printf("Enter time hh:mm:ss \n ");

  scanf("%d:%d:%d", &hour, &min, &sec);

  if ((hour > 24 || hour < 0) || (min < 0 || min > 60) || (sec < 0 || sec >60))
  {
   printf("error");
   return 0;
  }

 printf("Time is correctly\n");

  if (hour >= 5 && hour <= 10)
   printf("Good morning");
  else if (hour > 10 && hour <= 15)
   printf("Good day");
  else if (hour > 15 && hour <= 21)
   printf("Good evening");
  else if (hour > 21 && hour < 5)
   printf("Good night");


 return 0;
}
