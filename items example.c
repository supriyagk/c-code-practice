#include <stdio.h>
int main()
{
int combs = 2;
float price_per_comb = 3.5;
float total_cost;
char currency[] = "rupees";

total_cost = combs * price_per_comb;

printf ("The number of combs are: %d\n", combs);
printf ("The price per comb is : %.1f %s\n", price_per_comb, currency);
printf ("The total cost is:%.1f %s\n", total_cost, currency);
return 0;
}




#include <stdio.h>
int main()
{
    int combs;
    float price_per_comb;
    float total_cost;
    char currency[20];

    printf ("The number of combs are:");
    scanf ("%d", &combs);

    printf ("The price per comb is:");
    scanf ("%f %s", &price_per_comb, currency);

    total_cost =combs * price_per_comb;
    printf ("The total cost is: %.1f %s", total_cost, currency);
    return 0;
}

