// Boolean
#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool isProgrammingFun = true;
    bool isFishTasty = false;

    printf ("%d\n", isProgrammingFun);
    printf ("%d", isFishTasty);

    return 0;
}



//Compating values and variables
// greater than >
#include <stdio.h>
int main()
{
    printf ("%d", 10>5);
    return 0;
}

//comparing 2 variables
#include <stdio.h>
int main()
{
    int x = 5;
    int y = 1;

    printf ("%d", x>y );
    return 0;
}


//using == operand
#include <stdio.h>
int main()
{
    printf ("%d\n", 10==10);
    printf ("%d\n", 10==5);
    printf ("%d\n", 10==20);
    return 0;
}

//compare boolean variables
#include <stdio.h>
#include <stdbool.h>
int main()
{
    bool is_chicken_tasty = true;
    bool is_fish_tasty = true;

    printf ("%d", is_chicken_tasty = is_fish_tasty);
    return 0;
}
