#include <stdio.h>
int main()
{
   int myNum = 100 + 100;
   int num1 = 100 + myNum;
   int num2 = myNum + num1;

   printf ("The value of my number is: %d\n", myNum);
   printf ("The value of num1 is: %d\n", num1);
   printf ("The value of num2 is: %d\n", num2);
   return 0;
}
