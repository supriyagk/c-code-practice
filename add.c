#include <stdio.h>
int main()
{
    int x = 3;
    int y = 5;
    int sum;
    sum = x + y;
    printf ("the sum is: %d", sum);
    return 0;

}



#include <stdio.h>
int main()
{
    int x;
    int y;
    int sum;
    printf ("Enter the number x:");
    scanf ("%d", &x);

    printf ("Enter the number y:");
    scanf("%d", &y);

    sum = x + y;
    printf("The sum is:%d", sum);
    return 0;
}

