#include "../cs50.h"
#include <stdio.h>


int main(void)
{
    // float x = get_float("x: ");
    // float y = get_float("y: ");

    // float z = x / y;

    // printf("%.50f\n", z);

    int x = get_int("x: ");
    int y = get_int("y: ");

    float z = x / (float) y;

    printf("%.50f\n", z);    
}