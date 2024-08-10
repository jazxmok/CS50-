#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Get user input
    string s = get_string("Before: ");

    // Print the transformed string
    printf("After: ");

    // Iterate through each character in the string
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        // If the character is a lowercase letter, convert it to uppercase
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            printf("%c", s[i] - 32);
        }
        else
        {
            // Print the character as is if it's not a lowercase letter
            printf("%c", s[i]);
        }
    }
    printf("\n");

    return 0;
}
