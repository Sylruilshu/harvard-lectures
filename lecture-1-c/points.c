#include "../cs50.h"
#include <stdio.h>


int main(void)
{
    const int POINTS = 2;
    int points_lost = get_int("How many points did you lose? ");

    if (points_lost < POINTS)
    {
        printf("You lost fewer points than me.\n");
    }
    else if (points_lost > POINTS)
    {
        printf("You lost more points than me.\n");
    }
    else
    {
        printf("You lost the same amount of points as me.\n");
    }
}