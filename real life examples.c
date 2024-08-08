//voting age
#include <stdio.h>
int main()
{
    int my_age = 22;
    int voting_age = 18;

    printf("%d", my_age >= voting_age);
    return 0;
}


//if else voting age
#include <stdio.h>
int main()
{
    int my_age;
    int voting_age = 18;
    printf ("Enter the age:");
    scanf ("%d",&my_age);
    printf ("The entered age is: %d\n",my_age);

    if (my_age >= voting_age)
    {
        printf ("Old enough to vote!");
    }
    else
    {
        printf ("Not old enough to vote!");
    }
    return 0;
}


//door open
#include <stdio.h>
int main()
{
    int door_code = 1234;

    if (door_code == 1234)
    {
        printf ("Code is correct.\nThe door is open now!");
    }
    else
    {
        printf ("Code is incorrect.\nThe door remains closed");
    }
    return 0;
}

//same but user input
#include <stdio.h>
int main()
{
    int door_code ;
    printf ("enter the door code:");
    scanf ("%d", &door_code);
    printf ("The door code is: %d\n", door_code);

    if (door_code == 1234)
    {
        printf ("Code is correct.\nThe door is open now!");
    }
    else
    {
        printf ("Code is incorrect.\nThe door remains closed");
    }
    return 0;
}



//the number is positive or negative
#include <stdio.h>
int main()
{
    int num;
    printf ("Enter a number:");
    scanf ("%d", &num);
    printf ("The number is: %d\n",num);

    if (num>0)
    {
        printf ("The number is positive.");
    }
    else if (num<0)
    {
        printf ("The number is negative.");
    }
    else
    {
        printf ("The number is zero.");
    }
    return 0;
}



//even or odd
#include <stdio.h>
int main()
{
    int num;
    printf ("Enter a number:");
    scanf ("%d", &num);
    printf ("The entered number is:%d\n",num);

    if (num%2 == 0)
    {
        printf ("The number is Even.");
    }
    else
    {
        printf ("The number is Odd.");
    }
    return 0;
}



//countdown
#include<stdio.h>
int main()
{
    int countdown = 3;

    while (countdown > 0)
    {
        printf ("%d\n",countdown);
       countdown --;
    }
    {
        printf("Happy New Year!!");
    }
    return 0;
}



//even (0-10)
#include <stdio.h>
int main()
{
    int num = 0;

    while (num <= 10)
    {
    printf ("%d\n",num);
    num += 2;
    }

    return 0;

}



//reversing numbers
#include<stdio.h>
int main()
{
    int number = 12345;
    int revnumber =0;


    while(number)
    {
       revnumber = revnumber * 10 + number % 10;
        number /= 10;
    }

    printf ("The reversed number is:%d", revnumber);
    return 0;
}



//reversing numbers user input
#include<stdio.h>
int main()
{
    int number;
    int revnumber = 0;

    printf("Enter the numbers to be reversed:");
    scanf ("%d",&number);
    printf ("The entered numbers are:%d\n",number);

    while (number)
    {
        revnumber = revnumber*10 + number%10;
        number/=10;
    }
    printf ("The reversed numbers are:%d", revnumber);
    return 0;
}



//dice
#include <stdio.h>
int main()
{
    int dice=1;

    while (dice<=6)
    {
        if (dice < 6)
        {
            printf("No Yatsy:(\n");
        }
        else
        {
          printf ("Yes Yatsy!!!:)");
        }
        dice++;
    }
    return 0;
}



//program that counts to 100 by 10
#include<stdio.h>
int main()
{
    int i;

    for (i=0; i<=100; i+=10)
    {
        printf("%d\n",i);
    }
    return 0;
}



//even numbers between 0 and 10
#include<stdio.h>
int main()
{
    int i;

    for (i=0; i<=10; i+=2)
    {
        printf ("%d\n",i);
    }
    return 0;
}



//odd numbers between 0 and 10
#include<stdio.h>
int main()
{
    int i;

    for (i=1; i<=10; i+=2)
    {
        printf ("%d\n",i);
    }
    return 0;
}



//powers of 2 upto 512
#include<stdio.h>
int main()
{
    int i;

    for(i=2; i<=512; i*=2)
    {
        printf ("%d\n",i);
    }
    return 0;
}



//multiplication table
#include<stdio.h>
int main()
{
    int number = 2;
    int i;

    for (i=1; i<=10; i++)
    {
        printf("%d x %d = %d\n",number, i, number * i);
    }
    return 0;
}



//multiplication by user's input
#include<stdio.h>
int main()
{
    int number;
    int i;
    printf ("Enter a number:");
    scanf ("%d",&number);
    printf ("The multiplication table of: %d\n",number);

    for (i=1; i<=10; i++)
    {
        printf ("%d x %d = %d\n",number, i, number*i);
    }
    return 0;
}
