#include <stdio.h>
int main()
{
    float length = 1;
    float width = 1.2;
    float area ;
    area = length * width;

    printf ("the length is:%.1f\n", length );
    printf ("the width is : %.1f\n", width);
    printf ("the total area is:%.2f\n",area);
    return 0;
}



#include <stdio.h>
int main()
{
    int length;
    int width;
    int area;

    printf ("Enter the length :");
    scanf ("%d", &length);
    printf ("Enter the width :");
    scanf ("%d", &width);
    area = length * width;
    printf ("The total area is:%d", area);
    return 0;
}
