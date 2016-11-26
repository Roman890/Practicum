/*
A program ”guess the number”.
A program conceives a number ranging from 1 to 100 and user has to guess it in the fewest number of attempts.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
 srand(time(0));  
 int secretNumber = rand() % 100 + 1;   
 int tries = 0;
 int guess;
 printf("\tWelcome to Guess number\n\n");

 do
 {
  printf("Enter a guess:");
  scanf("%d", &guess);
  ++tries;
  if (guess > secretNumber)
  {
   printf("too high!\n\n");
  }
  else if (guess < secretNumber)
  {
   printf("too low!\n\n");
  }
  else
  {
   printf("Right! You got it in %d guesses!\n", tries);
  }
 }
  while (guess != secretNumber);
 
 return 0;
}