#include <stdio.h>

int main(void)
{
    // Fix: Change 'i <= 3' to 'i < 3' to iterate exactly 3 times
    for (int i = 0; i < 3; i++)
    {
        // Print the hash character followed by a newline
        printf("#\n");
    }

    return 0;
}