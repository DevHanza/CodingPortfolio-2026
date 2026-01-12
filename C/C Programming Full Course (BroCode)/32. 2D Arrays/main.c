/*
    2D Arrays in C
    -------------
    A 2D array is an array of arrays.
    It is commonly used to represent tables or matrices.

    Syntax:
      data_type array_name[rows][columns];
*/

#include <stdio.h>

int main(void)
{
    int i, j;

    /* ===================== DECLARING A 2D ARRAY ===================== */

    // Declare a 2D array with 3 rows and 3 columns
    int matrix[3][3];

    /* ===================== INITIALIZING A 2D ARRAY ===================== */

    int marks[2][3] = {
                        {80, 85, 90},
                        {75, 88, 92}   };

    printf("Initialized 2D array (marks):\n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("marks[%d][%d] = %d\n", i, j, marks[i][j]);
        }
    }

    printf("\n");

    /* ===================== USER INPUT FOR 2D ARRAY ===================== */

    printf("Enter elements for 3x3 matrix:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            // Taking input for each element
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\n");

    /* ===================== DISPLAYING 2D ARRAY ===================== */

    printf("You entered the matrix:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    /* ===================== ROW-WISE ACCESS ===================== */

    printf("Row-wise access:\n");

    for (i = 0; i < 3; i++)
    {
        int rowSum = 0;

        for (j = 0; j < 3; j++)
        {
            rowSum += matrix[i][j];
        }

        printf("Sum of row %d = %d\n", i, rowSum);
    }

    return 0;
}
