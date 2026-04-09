#include <stdio.h>

// Function prototype to calculate string length
int get_string_length(char *s);

int main(void)
{
    char name[100];

    // Prompt user for input
    printf("Name: ");
    // Read string including spaces (stops at newline)
    scanf("%99s", name);

    // Call the function and store the result
    int len = get_string_length(name);

    // Print the length of the string
    printf("%i\n", len);

    return 0;
}

/**
 * Iterates through the string until the null terminator '\0' is found.
 * @param s The string to measure
 * @return The number of characters before the null terminator
 */
int get_string_length(char *s)
{
    int i = 0;

    // Keep counting as long as the current character is NOT the null terminator
    while (s[i] != '\0')
    {
        i++;
    }

    return i;
}