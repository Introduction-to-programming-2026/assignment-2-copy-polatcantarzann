#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[100];

    // Prompt the user for input
    printf("Before: ");
    
    // Read input (up to 99 characters to leave room for null terminator)
    if (fgets(s, sizeof(s), stdin) == NULL)
    {
        return 1;
    }

    printf("After:  ");

    // Loop through each character of the string
    // We use 'n' to store the length so we don't call strlen() every time
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        // Convert current character to uppercase and print it
        printf("%c", toupper(s[i]));
    }

    // fgets includes the newline character, so we don't always need an extra \n
    // but the task usually requires a clean line ending
    return 0;
}