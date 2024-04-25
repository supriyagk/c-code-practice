#include <stdio.h>
int main()
{
    const int DATE = 9;
    char th[] = "th";
    const char MONTH[] = "April";
    const int YEAR = 2004;
    const float TIMINGS = 2.15 ;
    char pm[] = "pm";

    printf ("I was born on %d%s %s %d\n", DATE,th, MONTH, YEAR);
    printf ("And the timings is %.2f%s\n", TIMINGS, pm);
    return 0;
}
