#include "../cs50.h"
#include <stdio.h>


void meow(int n);

int main(void)
{
    // for (int i = 0; i < 3; i++)
    // {
    //     meow();
    // }
    
    int meows = get_int("How many meows? ");
    meow(meows);
}

void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}