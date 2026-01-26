/*
    Reading Files in C
    ------------------
    C allows reading data from files using FILE pointers
    and functions from <stdio.h>.

    Common functions:
      fopen()   → open a file
      fscanf()  → read formatted data
      fgets()   → read a line
      fclose()  → close the file
*/

#include <stdio.h>

int main(void)
{
    char buffer[1024] = {0};
    int number;

    /* ===================== OPEN FILE ===================== */

    FILE *pFile = fopen("example.txt", "r");

    // Check if file exists
    if (pFile == NULL)
    {
        printf("File could not be opened.\n");
        return 1;
    }

    /* ===================== READING USING fgets ===================== */

    // Reading file using fgets() line by line

    while (fgets(buffer, sizeof(buffer), pFile) != NULL)
    {
        printf("%s\n", buffer);
    }

    /* ===================== RESET FILE POINTER ===================== */

    // Move file pointer back to beginning
    rewind(pFile);

    /* ===================== READING USING fscanf ===================== */

    // Reading numbers using fscanf()

    // Example: reading integers from file
    while (fscanf(pFile, "%d", &number) == 1)
    {
        printf("Number: %d\n", number);
    }

    printf("\n");

    /* ===================== CLOSE FILE ===================== */

    fclose(pFile);

    /* ===================== IMPORTANT NOTES ===================== */
    /*
        - Always check if fopen() returns NULL
        - fgets() is safer for reading text lines
        - fscanf() is useful for formatted data
        - rewind() resets the file pointer
    */

    return 0;
}
