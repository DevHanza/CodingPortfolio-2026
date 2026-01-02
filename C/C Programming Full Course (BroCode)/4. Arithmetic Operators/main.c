#include <stdio.h>

int main() {

    /* =========================
       BASIC ARITHMETIC OPERATORS
       ========================= */

    int a = 10;
    int b = 3;

    // + → addition
    printf("Addition (a + b): %d\n", a + b);

    // - → subtraction
    printf("Subtraction (a - b): %d\n", a - b);

    // * → multiplication
    printf("Multiplication (a * b): %d\n", a * b);

    // / → division (integer division here)
    printf("Division (a / b): %d\n", a / b);

    // % → modulus (remainder)
    printf("Modulus (a %% b): %d\n\n", a % b);



    /* =========================
       FLOATING POINT DIVISION
       ========================= */

    float x = 10.0f;
    float y = 3.0f;

    // / → division with floating-point numbers
    printf("Float division (x / y): %f\n\n", x / y);



    /* =========================
       INCREMENT AND DECREMENT
       ========================= */

    int n = 5;

    // ++n → pre-increment (increase first, then use)
    printf("Pre-increment (++n): %d\n", ++n);

    // n++ → post-increment (use first, then increase)
    printf("Post-increment (n++): %d\n", n++);

    // value after post-increment
    printf("Value after post-increment: %d\n\n", n);



    int m = 5;

    // --m → pre-decrement (decrease first, then use)
    printf("Pre-decrement (--m): %d\n", --m);

    // m-- → post-decrement (use first, then decrease)
    printf("Post-decrement (m--): %d\n", m--);

    // value after post-decrement
    printf("Value after post-decrement: %d\n\n", m);



    /* =========================
       COMBINED ARITHMETIC
       ========================= */

    int p = 20;

    // += → add and assign
    p += 5;   // same as p = p + 5
    printf("After p += 5: %d\n", p);

    // -= → subtract and assign
    p -= 3;   // same as p = p - 3
    printf("After p -= 3: %d\n", p);

    // *= → multiply and assign
    p *= 2;   // same as p = p * 2
    printf("After p *= 2: %d\n", p);

    // /= → divide and assign
    p /= 4;   // same as p = p / 4
    printf("After p /= 4: %d\n", p);

    // %= → modulus and assign
    p %= 3;   // same as p = p % 3
    printf("After p %%= 3: %d\n\n", p);



    /* =========================
       OPERATOR PRECEDENCE
       ========================= */

    int result;

    // * happens before +
    result = 10 + 5 * 2;
    printf("10 + 5 * 2 = %d\n", result);

    // parentheses change order
    result = (10 + 5) * 2;
    printf("(10 + 5) * 2 = %d\n\n", result);



    /* =========================
       IMPORTANT NOTES
       ========================= */

    // Integer division discards decimal part
    printf("7 / 2 (int): %d\n", 7 / 2);

    // Cast to float to get decimal result
    printf("7 / 2 (float): %f\n", (float)7 / 2);

    return 0;
}
