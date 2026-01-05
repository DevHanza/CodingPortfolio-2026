/*
    Nested Loops in C
    -----------------
    A nested loop is a loop inside another loop.
    The inner loop runs completely for each iteration
    of the outer loop.
*/

#include <stdio.h>

int main(void)
{
    int i, j;

    /* ===================== BASIC NESTED FOR LOOP ===================== */

    printf("Basic nested for loop:\n");

    for (i = 1; i <= 3; i++) // Outer loop
    {
        printf("Outer loop i = %d\n", i);

        for (j = 1; j <= 3; j++) // Inner loop
        {
            printf("  Inner loop j = %d\n", j);
        }
    }

    printf("\n");

    /* ===================== MULTIPLICATION TABLE ===================== */

    printf("Multiplication table (1 to 3):\n");

    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n"); // New line after each row
    }

    /* ===================== NESTED WHILE LOOP ===================== */

    printf("Nested while loop:\n");

    i = 1;
    while (i <= 3)
    {
        j = 1;

        while (j <= 3)
        {
            printf("i = %d, j = %d\n", i, j);
            j++;
        }

        i++;
    }

    return 0;
}
