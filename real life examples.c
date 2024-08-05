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
