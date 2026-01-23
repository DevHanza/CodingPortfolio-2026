/*
    Enums in C
    ---------
    enum (enumeration) is a user-defined data type
    that consists of named integer constants.

    By default:
      - First value = 0
      - Next values increase by 1
*/

#include <stdio.h>

/* ===================== BASIC ENUM ===================== */

// Defining an enum
enum Day
{
    MON, // 0
    TUE, // 1
    WED, // 2
    THU, // 3
    FRI, // 4
    SAT, // 5
    SUN  // 6
};

int main(void)

{
    /* ===================== USING ENUM ===================== */

    printf("The value of MON is %d\n\n", MON);

    //

    enum Day today = WED;

    printf("Enum value of WED = %d\n", today);

    /* ===================== ENUM WITH CUSTOM VALUES ===================== */

    enum Level
    {
        LOW = 1,
        MEDIUM = 5,
        HIGH = 10
    };

    enum Level speed = HIGH;

    printf("Enum value of HIGH = %d\n", speed);

    /* ===================== ENUM IN SWITCH ===================== */

    printf("\nUsing enum in switch statement:\n");

    switch (today)
    {
    case MON:
        printf("Today is Monday\n");
        break;

    case WED:
        printf("Today is Wednesday\n");
        break;

    case FRI:
        printf("Today is Friday\n");
        break;

    default:
        printf("Some other day\n");
    }

    /* ===================== IMPORTANT NOTES ===================== */
    /*
        - enum values are integers
        - enum improves code readability
        - enum constants are usually written in CAPITAL letters
        - enum variables can be compared like integers
    */

    return 0;
}
