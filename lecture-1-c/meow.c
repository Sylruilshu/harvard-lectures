#include <stdio.h>


void meow(void)
{
    printf("meow\n");
}

int main(void)
{
    // int i = 0;
    // while (i < 3)
    // {
    //     printf("meow\n");
    //     i++;
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     printf("mewo\n");
    // }

    for (int i = 0; i < 3; i++)
    {
        meow();
    }
}