/*
    Structures in C
    ---------------
    A structure is a user-defined data type that allows
    grouping variables of DIFFERENT data types under one name.

    Syntax:
      struct structure_name {
          data_type member1;
          data_type member2;
      };
*/

#include <stdio.h>
#include <string.h>

/* ===================== DEFINING A STRUCT ===================== */

struct Student
{
    int id;
    char name[20];
    float marks;
};

int main(void)
{
    /* ===================== DECLARING STRUCT VARIABLES ===================== */

    struct Student s1;

    /* ===================== ASSIGNING VALUES ===================== */

    s1.id = 101;
    // Assigning string value character by character
    strcpy(s1.name, "Alice");
    s1.marks = 88.5f;

    /* ===================== ACCESSING STRUCT MEMBERS ===================== */

    printf("Student Details:\n");
    printf("ID: %d\n", s1.id);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n\n", s1.marks);

    /* ===================== INITIALIZING STRUCT AT DECLARATION ===================== */

    struct Student s2 = {102, "Bob", 92.0f};

    printf("Student 2 Details:\n");
    printf("ID: %d\n", s2.id);
    printf("Name: %s\n", s2.name);
    printf("Marks: %.2f\n\n", s2.marks);

    /* ===================== ARRAY OF STRUCTS ===================== */

    struct Student class[2] = {
        {201, "Charlie", 75.0f},
        {202, "Diana", 81.5f}
    };

    printf("Class Students:\n");

    for (int i = 0; i < 2; i++)
    {
        printf("ID: %d, Name: %s, Marks: %.2f\n",
               class[i].id,
               class[i].name,
               class[i].marks);
    }

    printf("\n");

    /* ===================== STRUCT POINTER ===================== */

    struct Student *ptr = &s1;

    printf("Accessing using pointer:\n");
    printf("ID: %d\n", ptr->id);
    printf("Name: %s\n", ptr->name);
    printf("Marks: %.2f\n", ptr->marks);

    /* ===================== IMPORTANT NOTES ===================== */
    /*
        - Use dot (.) to access members
        - Use arrow (->) with pointers
        - struct groups different data types
        - Each struct variable has its own memory
    */

    return 0;
}
