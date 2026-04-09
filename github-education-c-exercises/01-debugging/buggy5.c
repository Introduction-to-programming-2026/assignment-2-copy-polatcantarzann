#include <stdio.h>

// Function prototype
void print_column(int height);

int main(void)
{
    int h;
    
    // Prompt the user for input using standard C
    printf("Height: ");
    if (scanf("%i", &h) != 1) 
    {
        return 1; // Error handling if input is not an integer
    }

    // Call the function to print the column
    print_column(h);

    return 0;
}

/**
 * Prints a vertical column of hashes based on the given height.
 */
void print_column(int height)
{
    // Fix: Change 'i <= height' to 'i < height' 
    // This ensures the loop runs exactly 'height' times.
    for (int i = 0; i < height; i++)
    {
        printf("#\n");
    }
}