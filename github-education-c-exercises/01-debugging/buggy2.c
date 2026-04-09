#include <stdio.h>

int main(void)
{
    // Declare a character array (string) to store the user's name
    char name[50];

    // Prompt the user for input
    printf("What's your name? ");

    // Read the user's input from the terminal
    // Note: %49s prevents buffer overflow by limiting input to 49 characters
    scanf("%49s", name);

    // Print the final greeting
    printf("hello, %s\n", name);

    return 0;
}