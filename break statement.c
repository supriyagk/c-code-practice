//break statement using for loop when i=4
#include<stdio.h>
int main()
{
    int i;
    for (i=0;i<10;i++)
    {
        printf("%d\n",i);
        if(i==4)
        {
            break;
        }
    }

    return 0;
}
