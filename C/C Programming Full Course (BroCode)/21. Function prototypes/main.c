/*
    Function Prototypes in C
    ------------------------
    A function prototype tells the compiler:
      - function name
      - return type
      - parameter types

    It must appear BEFORE main() if the function is defined AFTER main().
*/

#include <stdio.h>

/* ===================== FUNCTION PROTOTYPES ===================== */

// Prototype with parameters and return value
int add(int a, int b);

// Prototype with no parameters
void greet(void);

// Prototype returning float
float areaOfCircle(float radius);

int main(void)
{
    int result;
    float area;

    /* ===================== FUNCTION CALLS ===================== */

    // Calling a function that returns an int
    result = add(10, 20);
    printf("add(10, 20) = %d\n", result);

    // Calling a function that returns nothing
    greet();

    // Calling a function that returns float
    area = areaOfCircle(5.0f);
    printf("Area of circle (radius 5) = %.2f\n", area);

    return 0;
}

/* ===================== FUNCTION DEFINITIONS ===================== */

// Function definition for add()
int add(int a, int b)
{
    return a + b;
}

// Function definition for greet()
void greet(void)
{
    printf("Hello from greet() function!\n");
}

// Function definition for areaOfCircle()
float areaOfCircle(float radius)
{
    return 3.14159f * radius * radius;
}
