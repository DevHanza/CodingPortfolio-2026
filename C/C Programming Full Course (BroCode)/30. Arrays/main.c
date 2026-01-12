/*
    Arrays in C
    -----------
    An array is a collection of variables of the SAME type
    stored in contiguous memory locations.

    Syntax:
      data_type array_name[size];
*/

#include <stdio.h>

int main(void)
{
    int i;

    /* ===================== DECLARING AN ARRAY ===================== */

    // Declaring an integer array of size 5
    int numbers[5];

    // Assigning values to array elements
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;

    printf("Array elements (manual assignment):\n");
    for (i = 0; i < 5; i++)
    {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    printf("\n");

    /* ===================== ARRAY INITIALIZATION ===================== */

    // Declaring and initializing array at the same time
    int marks[5] = {85, 90, 78, 88, 92};

    printf("Array elements (initialized):\n");
    for (i = 0; i < 5; i++)
    {
        printf("marks[%d] = %d\n", i, marks[i]);
    }

    printf("\n");

    /* ===================== ARRAY SIZE ===================== */

    // Calculating number of elements in array
    int size = sizeof(marks) / sizeof(marks[0]);
    printf("Size of marks array = %d elements\n\n", size);

    /* ===================== MODIFYING ARRAY ELEMENTS ===================== */

    // Changing a value in the array
    marks[2] = 80;
    printf("After modifying marks[2]:\n");
    for (i = 0; i < size; i++)
    {
        printf("marks[%d] = %d\n", i, marks[i]);
    }

    printf("\n");

    /* ===================== CHARACTER ARRAY (STRING) ===================== */

    // Character array (string)
    char name[] = "C Language";

    printf("Character array (string): %s\n", name);

    printf("Characters in string:\n");
    for (i = 0; name[i] != '\0'; i++)
    {
        printf("name[%d] = %c\n", i, name[i]);
    }

    printf("\n");

    /* ===================== ARRAY OUT OF BOUNDS (WARNING) ===================== */

    /*
        Accessing an invalid index (like numbers[5]) is NOT allowed.
        This causes undefined behavior.
    */

    return 0;
}
