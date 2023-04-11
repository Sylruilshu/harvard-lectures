#include "../cs50.h"
#include <stdio.h>


int main(void)
{
    int number = get_int("What is your number? ");

    if (number % 2 == 0)
    {
        printf("%i is even", number);
    }
    else
    {
        printf("%i is odd", number);
    }
}