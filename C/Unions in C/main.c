/*
    Unions in C
    ----------
    A union is a user-defined data type where
    ALL members share the SAME memory location.

    This means:
      - Only ONE member can store a value at a time
      - Writing to one member affects the others
*/

#include <stdio.h>

/* ===================== DEFINING A UNION ===================== */

union Data
{
    int number;
    char letter;
};

int main(void)
{
    union Data d;

    /* ===================== STORE AN INTEGER ===================== */

    d.number = 65; // ASCII value of 'A'

    printf("After storing integer:\n");
    printf("d.number = %d\n", d.number);
    printf("d.letter = %c\n\n", d.letter); // Interpreted as ASCII

    /* ===================== STORE A CHARACTER ===================== */

    d.letter = 'B'; // ASCII value = 66

    printf("After storing character:\n");
    printf("d.letter = %c\n", d.letter);
    printf("d.number = %d\n\n", d.number); // Interpreted as integer

    /* ===================== IMPORTANT NOTES ===================== */
    /*
        - Union members share memory
        - Changing one member changes the others
        - Useful when only one value is needed at a time
        - Saves memory
    */

    return 0;
}
