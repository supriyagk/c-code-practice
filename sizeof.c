#include <stdio.h>
int main()
{
    int myint;
    float myfloat;
    char mychar;
    double mydouble;

    printf ("%lu\n", sizeof myint);
    printf ("%lu\n", sizeof myfloat);
    printf ("%lu\n", sizeof mychar);
    printf ("%lu\n", sizeof mydouble);
    return 0;
}

#include <stdio.h>
int main()
{
    int myint;
    float myfloat;
    double mydouble;
    char mychar;

    printf ("The size of int is: %lu\n", sizeof myint);
    printf ("The size of float is: %lu\n", sizeof myfloat);
    printf ("The size of double is: %lu\n", sizeof mydouble);
    printf ("The size of char is:%lu\n",sizeof mychar);
    return 0;
}
