/*
    Writing Files in C
    ------------------
    C allows writing data to files using FILE pointers
    and functions from <stdio.h>.

    Common functions:
      fopen()   → open a file
      fprintf() → write formatted data
      fputs()   → write a string
      fclose()  → close the file
*/

#include <stdio.h>

int main(void)
{
    FILE *pFile;

    /* ===================== OPEN FILE ===================== */

    // Open file in write mode ("w")
    // If file does not exist → it is created
    // If file exists → contents are erased
    pFile = fopen("example.txt", "w");

    // Check if file opened successfully
    if (pFile == NULL)
    {
        printf("File could not be opened.\n");
        return 1;
    }

    /* ===================== WRITING USING fprintf ===================== */

    fprintf(pFile, "Hello, World!\n");
    fprintf(pFile, "This is written using fprintf().\n");

    printf("Data written using fprintf().\n");

    /* ===================== WRITING USING fputs ===================== */

    fputs("This line is written using fputs().\n", pFile);
    fputs("File handling in C is simple.\n", pFile);

    printf("Data written using fputs().\n");

    /* ===================== CLOSE FILE ===================== */

    fclose(pFile);

    /* ===================== IMPORTANT NOTES ===================== */
    /*
        - Always check if fopen() returns NULL
        - Always close the file after use
        - \"w\" mode overwrites existing file data
        - Use \"a\" mode to append data instead
    */

    return 0;
}
