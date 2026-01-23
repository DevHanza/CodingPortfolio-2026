/*
    typedef in C
    ------------
    typedef is used to create a new name (alias)
    for an existing data type.

    It does NOT create a new type,
    it only gives a new name to a type.
*/

#include <stdio.h>

/* ===================== BASIC TYPEDEF ===================== */

// Creating a new name for int
typedef int Integer;

// Creating a new name for float
typedef float Decimal;

/* ===================== TYPEDEF WITH STRUCT ===================== */

// Defining a structure and giving it a typedef name
typedef struct
{
    int id;
    float marks;
} Student;

int main(void)
{
    //

    Integer a = 10;
    Decimal b = 3.5f;

    printf("Integer a = %d\n", a);
    printf("Decimal b = %.2f\n\n", b);

    //

    Student s1;

    s1.id = 101;
    s1.marks = 89.5f;

    printf("Student ID: %d\n", s1.id);
    printf("Student Marks: %.2f\n\n", s1.marks);

    // Creating a typedef for an integer array

    typedef int Numbers[5];

    Numbers arr = {1, 2, 3, 4, 5};

    printf("Array using typedef:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    printf("\n");

    /* ===================== TYPEDEF WITH POINTER ===================== */

    // Typedef for pointer
    typedef int *IntPtr;

    int x = 50;
    IntPtr p = &x;

    printf("Value of x using pointer typedef: %d\n", *p);

    //

    return 0;
}

/* ===================== IMPORTANT NOTES ===================== */
/*
    - typedef improves readability
    - Commonly used with structures and pointers
    - Helps in large programs
    - Does NOT allocate memory
*/
