#include <stdio.h>

int main(void)
{
    // Fix: Use 'i < 3' instead of 'i <= 3' to run the loop exactly 3 times
    for (int i = 0; i < 3; i++)
    {
        // Debugging message to track the value of i
        printf("i is %i\n", i);
        
        // Output the actual character
        printf("#\n");
    }

    return 0;
}