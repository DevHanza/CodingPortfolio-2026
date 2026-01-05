/*
    Math Functions in C
    -------------------
    This program demonstrates commonly used math functions
    from <math.h>, with a printf statement after each one.

    NOTE:
    - Most math functions work with double
    - Compile with: gcc file.c -lm
    - Example: gcc main.c -lm -o main;./main;
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    double x = 45.0;

    printf("Initial value: %f\n\n", x);

    /* ===================== SQUARE ROOT ===================== */
    // sqrt(x) : returns square root of x
    x = sqrt(x);
    printf("sqrt(x): %f\n", x);

    /* ===================== POWER ===================== */
    // pow(base, exponent) : raises base to exponent
    x = pow(x, 4);
    printf("pow(x, 4): %f\n", x);

    /* ===================== ROUND ===================== */
    // round(x) : rounds to nearest integer value
    x = round(x);
    printf("round(x): %f\n", x);

    /* ===================== CEILING ===================== */
    // ceil(x) : Always rounds up to next integer
    x = ceil(x);
    printf("ceil(x): %f\n", x);

    /* ===================== FLOOR ===================== */
    // floor(x) : rounds DOWN to nearest integer
    x = floor(x);
    printf("floor(x): %f\n", x);

    /* ===================== ABSOLUTE VALUE ===================== */
    // fabs(x) : absolute value for floating-point numbers

    // - If x is negative, it returns -x (making it positive).
    // - If x is positive or zero, it returns x unchanged.

    x = fabs(x);
    printf("fabs(x): %f\n", x);

    /* ===================== NATURAL LOG ===================== */
    // log(x) : natural logarithm (base e)

    // x must be a positive number (log of zero or negative numbers is undefined).

    x = log(x);
    printf("log(x): %f\n", x);

    /* ===================== TRIGONOMETRY ===================== */
    // sin(x) : sine (x in radians)
    x = sin(x);
    printf("sin(x): %f\n", x);

    // cos(x) : cosine (x in radians)
    x = cos(x);
    printf("cos(x): %f\n", x);

    // tan(x) : tangent (x in radians)
    x = tan(x);
    printf("tan(x): %f\n", x);

    return 0;
}
