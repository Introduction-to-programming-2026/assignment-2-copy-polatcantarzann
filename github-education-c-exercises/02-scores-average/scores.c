#include <stdio.h>

// Global constant for the number of scores
const int N = 3;

// Function prototype
float average(int length, int array[]);

int main(void)
{
    int scores[N];

    // Get N scores from the user
    for (int i = 0; i < N; i++)
    {
        printf("Score %i: ", i + 1);
        if (scanf("%i", &scores[i]) != 1)
        {
            return 1; // Exit if input is invalid
        }
    }

    // Calculate and print the average formatted to 2 decimal places
    printf("Average: %.2f\n", average(N, scores));

    return 0;
}

/**
 * Computes the average of an integer array.
 * @param length The number of elements in the array
 * @param array The array containing the scores
 * @return The floating-point average
 */
float average(int length, int array[])
{
    int sum = 0;
    
    // Sum all elements in the array
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }

    // Type cast 'sum' to float to perform floating-point division
    return (float) sum / (float) length;
}