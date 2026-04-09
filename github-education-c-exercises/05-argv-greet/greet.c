#include <stdio.h>

/**
 * Main function using command-line arguments.
 * @param argc The number of arguments provided
 * @param argv An array of strings representing the arguments
 */
int main(int argc, char *argv[])
{
    // Check if the user provided exactly one additional argument (their name)
    if (argc == 2)
    {
        // Print hello followed by the first argument after the program name
        printf("hello, %s\n", argv[1]);
    }
    else
    {
        // Default greeting if no name or too many names are provided
        printf("hello, world\n");
    }

    return 0;
}