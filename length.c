#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get user input
    string name = get_string("Name: ");

    // Initialize counter for string length
    int n = 0;

    // Loop through the string until the null terminator is found
    while (name[n] != '\0')
    {
        n++;
    }

    // Print the length of the string
    printf("%i\n", n);
}
