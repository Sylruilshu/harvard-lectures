#include "../cs50.h"
#include <stdio.h>


float discount(float price, int percent);

int main(void)
{
    // float regular = get_float("Regular price: ");
    // float sale = regular * 0.85;

    // printf("Sale Price: %.2f\n", sale);

    float regular = get_float("Regular price: ");
    int percent_off = get_int("Percent Off: ");
    float sale = discount(regular, percent_off);

    printf("Sale Price: %.2f\n", sale);
}

float discount(float price, int percent)
{
    return price * (100 - percent)/100;

    // float sale = price * 0.85;

    // return sale;
}