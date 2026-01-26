/*
    Pointers in C
    -------------
    A pointer is a variable that stores the memory address
    of another variable.

    Symbols:
      &  → address-of operator
      *  → dereference operator
*/

#include <stdio.h>

int main(void)
{
    int x = 10;

    /* ===================== BASIC POINTER ===================== */

    // Store address of x in ptr
    int *ptr = &x;

    printf("x is %d \n\n", *ptr);

    /* ===================== MODIFY VALUE USING POINTER ===================== */

    printf("Before modifying using pointer: %d \n", x);

    *ptr = 25; // Changes value of x

    printf("After modifying using pointer: %d \n\n", x);

    /* ===================== POINTER AND ARRAY ===================== */

    int arr[3] = {10, 20, 30};

    int *p = arr; // Array name is address of first element

    for (int i = 0; i < 3; i++)
    {
        int item = *(p + i);
        printf("Item %d = %d\n", i, item);
    }

    printf("\n");

    /* ===================== NULL POINTER ===================== */

    int *nullPtr = NULL;

    printf("NULL pointer value = %p\n\n", (void *)nullPtr);

    /* ===================== IMPORTANT NOTES ===================== */
    /*
        - Pointers store addresses, not values
        - *ptr gives the value at that address
        - Always initialize pointers
        - Dereferencing NULL causes runtime error
    */

    return 0;
}
