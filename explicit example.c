#include<stdio.h>
int main()
{
   int userScore;
   int maxScore;
   float percentageOfUserScore;

   printf ("Enter the user score:");
   scanf ("%d", &userScore);
   printf ("The user score is: %d\n", userScore);

   printf ("Enter the maximum score:");
   scanf ("%d", &maxScore);
   printf ("The maximum score is: %d\n", maxScore);

   percentageOfUserScore = ((float) userScore / maxScore) * 100;
   printf ("The percentage of user score is: %.2f\n", percentageOfUserScore);
   return 0;
}

