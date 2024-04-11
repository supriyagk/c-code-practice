#include <stdio.h>
int main()
{
    int number_of_items =50;
    float price_per_item = 1.2;
    float total_cost ;
    total_cost = number_of_items * price_per_item;
    char currency[] = "rupees";

    printf ("The number of items are: %d\n", number_of_items);
    printf ("The price per item is: %.2f %s\n", price_per_item, currency);
    printf ("The total cost is: %.2f %s\n", total_cost, currency);
    return 0;
}



#include <stdio.h>
int main()
{
    int number_of_items;
    float price_per_item;
    float total_cost;
    char currency[] = "rupees";

    printf ("Enter the number of items:");
    scanf ("%d", &number_of_items);
    printf("The number of items are:%d\n",number_of_items);
    printf ("Enter the price per item:");
    scanf ("%.2f %s", &price_per_item, "currency");
    printf ("The price per item is:%.2f %s\n", price_per_item, currency);
    total_cost = number_of_items * price_per_item;
    printf ("The total cost is:%.2f %s\n", total_cost, currency);
    return 0;
}
