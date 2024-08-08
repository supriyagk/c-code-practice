//while
#include<stdio.h>
int main()
{
    int i = 0;

    while (i<5)
    {
        printf ("%d\n",i);
        i++;
    }
    return 0;
}


//do-while
#include<stdio.h>
int main()
{
    int i = 1;

    do
    {
        printf("%d\n",i);
        i++;
    }
    while (i<6);

    return 0;
}


//do-while
#include<stdio.h>
int main()
{
    int i = 0;

    do
    {
      printf ("%d\n",i);
      i++;
    }
    while (i<5);
    return 0;
}


//countdown
#include<stdio.h>
int main()
{
    int countdown = 3;

    do{
        printf ("%d\n",countdown);
        countdown--;
    }
    while (countdown > 0);
    {
        printf ("Happy New Year!!");
    }
    return 0;
}
