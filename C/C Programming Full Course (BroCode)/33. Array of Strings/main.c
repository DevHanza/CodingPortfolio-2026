/*
    Arrays of Strings in C
    ---------------------
    An array of strings is a 2D character array.
    Each row stores one string.

    Syntax:
      char array_name[number_of_strings][max_length];
*/

#include <stdio.h>

int main(void)
{
    int i;

    /* ===================== DECLARING ARRAY OF STRINGS ===================== */

    // Array to store 3 strings, each up to 19 characters (+1 for '\0')
    char fruits[3][20] = {"Apple", "Banana", "Mango"};

    printf("Array of strings (initialized):\n");

    for (i = 0; i < 3; i++)
    {
        printf("fruits[%d] = %s\n", i, fruits[i]);
    }

    printf("\n");

    /* ===================== USER INPUT FOR ARRAY OF STRINGS ===================== */

    char names[3][30];

    printf("Enter 3 names:\n");

    for (i = 0; i < 3; i++)
    {
        // Reads one word (no spaces)
        scanf("%s", names[i]);
    }

    printf("\nYou entered:\n");

    for (i = 0; i < 3; i++)
    {
        printf("names[%d] = %s\n", i, names[i]);
    }

    printf("\n");

    /* ===================== ACCESSING CHARACTERS ===================== */

    // Accessing individual characters
    printf("First character of first name: %c\n", names[0][0]);

    /* ===================== IMPORTANT NOTES ===================== */
    /*
        - Each string ends with a null character '\0'
        - Size must be large enough to hold the longest string
        - names[i] represents one complete string
        - names[i][j] represents a single character
        - scanf("%s") does NOT read spaces
    */

    return 0;
}
