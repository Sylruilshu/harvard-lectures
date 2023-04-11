#include "../cs50.h"
#include <stdio.h>


// int main(void)
// {
//     int score1 = 72;
//     int score2 = 73;
//     int score3 = 33;

//     printf("Average: %f\n", (score1 + score2 + score3) / 3.0);
// }

int main(void)
{
    // scores[0] = get_int("Score: ");
    // scores[1] = get_int("Score: ");
    // scores[2] = get_int("Score: ");

    int n = get_int("How many scores? ");
    
    int scores[n];

    for (int i = 0; i < n; i++)
    {
        scores[i] = get_int("Score: ");
    }

    printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
}

// Length of array
// size_t n = sizeof(scores) / sizeof(scores[0]);