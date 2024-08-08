//Days
#include <stdio.h>
int main()
{
    int day = 4;

    switch(day)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf ("Thursday");
        break;
    case 5:
        printf ("Friday");
        break;
    case 6:
        printf ("Saturday");
        break;
    case 7:
        printf ("Sunday");
        break;
    }
    return 0;
}



//default
#include <stdio.h>
int main()
{
    int day = 4;

    switch (day)
    {
        case 5:
            printf ("Today is saturday");
            break;
        case 6:
            printf ("Today is Sunday");
            break;
        default:
            printf ("I'm waiting for weekend");
    }
    return 0;
}
