#include "../cs50.h"
#include <stdio.h>


int main(void)
{
    char answer = get_char("Do you like apples? y or n: ");

    if (answer == 'y' || answer == 'Y')
    {
        printf("You agree.\n");
    }
    else if (answer == 'n' || answer == 'N')
    {
        printf("You don't agree.\n");
    }
    else
    {
        printf("Please use 'y' or 'n'");
    }
}