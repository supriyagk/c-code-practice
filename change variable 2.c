#include <stdio.h>
int main()
{
    int num = 10;
    num = 15;
    printf ("The number is: %d", num);
    return 0;
}



#include <stdio.h>
int main()
{
    int num1;
    printf ("Enter a number:");
    scanf ("%d", &num1);
    int num2 = num1;
    printf ("print the changed number:%d", num1);
    return 0;
}
