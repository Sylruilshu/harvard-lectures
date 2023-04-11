#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    // Dynamically allocate an array of size 3
    int *list = malloc(3 * sizeof(int));

    if (list == NULL)
    {
        free(list);
        return 1;
    }

    // Assign 3 numbers to that array
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    // Allocate new array of size 4
    // int *tmp = malloc(4 * sizeof(int));

    // Resize old array
    int *tmp = realloc(list, 4 * sizeof(int));

   if (tmp == NULL)
   {
    free(list);
    return 1;
   }

    // Copy numbers from old array into new array
    // No longer need to copy old array into new array
    // for (int i = 0; i < 3; i++)
    // {
    //     tmp[i] = list[i];
    // }

    // Add fourth number to new array
    tmp[3] = 4;

    // Free old array
    free(list);

    // Remember new array
    list = tmp;

    // Print new array
    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }

    // Free new array
    free(list);
    return 0;
}