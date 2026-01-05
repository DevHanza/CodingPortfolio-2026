/*
    Break & Continue in C
    --------------------
    break    → exits the loop immediately (STOP)
    continue → skips the current iteration and moves to the next one (SKIP)
*/

#include <stdio.h>

int main(void)
{
    int i;

    /* ===================== BREAK STATEMENT ===================== */

    printf("Example of break:\n");

    for (i = 1; i <= 10; i++)
    {
        // If i becomes 5, exit the loop completely
        if (i == 5)
        {
            printf("break encountered at i = %d\n", i);
            break;
        }

        printf("i = %d\n", i);
    }

    printf("Loop ended because of break\n\n");

    /* ===================== CONTINUE STATEMENT ===================== */

    printf("Example of continue:\n");

    for (i = 1; i <= 10; i++)
    {
        // If i is 5, skip this iteration
        if (i == 5)
        {
            printf("continue encountered at i = %d\n", i);
            continue;
        }

        printf("i = %d\n", i);
    }

    printf("Loop finished normally\n\n");

    /* ===================== BREAK IN WHILE LOOP ===================== */

    printf("Break in while loop:\n");

    i = 1;
    while (i <= 10)
    {
        if (i == 7)
        {
            printf("Breaking while loop at i = %d\n", i);
            break;
        }

        printf("i = %d\n", i);
        i++;
    }

    printf("\n");

    /* ===================== CONTINUE IN WHILE LOOP ===================== */

    printf("Continue in while loop:\n");

    i = 0;
    while (i < 10)
    {
        i++;

        if (i % 2 == 0)
        {
            // Skip even numbers
            continue;
        }

        printf("Odd number: %d\n", i);
    }

    return 0;
}
