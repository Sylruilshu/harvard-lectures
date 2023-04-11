#include "../cs50.h"
#include <stdio.h>
#include <string.h>


int main(void)
{
    string s = get_string("Input:  ");

    printf("Output: ");
    
    // Correct, but not efficient. Has to call strlen() function every iteration of the loop.
    // for (int i = 0; i < strlen(s); i++)
    // {
    //     printf("%c", s[i]);
    // }
    // printf("\n");


    // Better, but still not the most efficient.
    // int length = strlen(s);
    // for (int i = 0; i < length; i++)
    // {
    //     printf("%c", s[i]);
    // }
    // printf("\n");


    // Best. for loops let you declare multiple variables at once
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", s[i]);
    }

    printf("\n");
}





