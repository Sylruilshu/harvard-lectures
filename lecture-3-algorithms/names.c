#include "../cs50.h"
#include <stdio.h>
#include <string.h>


int main(void)
{
    string names[] = {"Bill", "Charlie", "Fred", "George", "Ginny", "Percy", "Ron"};

    for (int i = 0; i <7; i++)
    {
        if (strcmp(names[i], "Hermione") == 0)
        {
            printf("Found");
            return 0;
        }
    } 
    printf("Not found");
    return 1;    
}