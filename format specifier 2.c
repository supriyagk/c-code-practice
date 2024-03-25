#include <stdio.h>
int main()
{
    int num1 = 10;
    float num2 = 20.99;
    char letter = 'A';

    printf ("print the num1 is: %d\n", num1);
    printf ("print the num2 is: %f\n", num2);
    printf ("print the letter is: %c\n", letter);
    return 0;
}



#include <stdio.h>
int main()
{
    int num1;
    float num2;
    char letter;

    printf ("Enter a number1:");
    scanf ("%d", &num1);
    printf ("Print the number1 is: %d\n", num1);

    printf ("Enter a number2:");
    scanf ("%f", &num2);
    printf ("Print the number2 is: %f\n", num2);

    printf ("Enter a letter:");
    scanf(" %c", &letter);
    printf ("print the letter is: %c\n", letter);

    return 0;
}
