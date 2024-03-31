#include <stdio.h>
int main()
{
    int x = 2;
    int y = 5;
    int mul;
    mul = x * y;
    printf ("the multiplication is: %d", mul);
    return 0;

}



#include <stdio.h>
int main()
{
    int x;
    int y;
    int mul;

    printf ("enter the value x:");
    scanf ("%d", &x);

    printf ("enter the value y:");
    scanf ("%d", &y);

    mul = x * y;
    printf ("the multiplication is: %d", mul);
    return 0;
}

