#include <stdio.h>

int main() {

    /* =========================
       INTEGER FORMAT SPECIFIERS
       ========================= */

    int a = -10;
    unsigned int b = 10;

    // %d → signed integer
    printf("Signed int (%%d): %d\n", a);

    // %i → signed integer (same as %d for printf)
    printf("Signed int (%%i): %i\n", a);

    // %u → unsigned integer (no negative values)
    printf("Unsigned int (%%u): %u\n", b);

    // %o → octal (base 8)
    printf("Octal (%%o): %o\n", b);

    // %x → hexadecimal (lowercase)
    printf("Hex lowercase (%%x): %x\n", b);

    // %X → hexadecimal (uppercase)
    printf("Hex uppercase (%%X): %X\n\n", b);



    /* =========================
       LONG INTEGER SPECIFIERS
       ========================= */

    long int l = 123456789;
    long long int ll = 1234567890123;

    // %ld → long int
    printf("Long int (%%ld): %ld\n", l);

    // %lld → long long int
    printf("Long long int (%%lld): %lld\n\n", ll);



    /* =========================
       FLOATING POINT SPECIFIERS
       ========================= */

    float f = 3.14159f;
    double d = 3.1415926535;

    // %f → float or double (printf converts float to double automatically)
    printf("Float (%%f): %f\n", f);

    // %.2f → float with 2 digits after decimal
    printf("Float with precision (%%.2f): %.2f\n", f);

    // %lf → double (same output as %f in printf)
    printf("Double (%%lf): %lf\n", d);

    // %e → scientific notation
    printf("Scientific (%%e): %e\n", d);

    // %E → scientific notation (uppercase)
    printf("Scientific (%%E): %E\n", d);

    // %g → shortest representation (%f or %e)
    printf("Shortest form (%%g): %g\n\n", d);



    /* =========================
       CHARACTER AND STRING
       ========================= */

    char ch = 'A';
    char str[] = "Hello C";

    // %c → single character
    printf("Character (%%c): %c\n", ch);

    // %s → string (char array)
    printf("String (%%s): %s\n\n", str);



    /* =========================
       POINTER
       ========================= */

    int x = 100;

    // %p → memory address (pointer)
    printf("Pointer address (%%p): %p\n\n", (void*)&x);



    /* =========================
       WIDTH AND FLAGS
       ========================= */

    int num = 42;

    // %5d → minimum width of 5 (right aligned)
    printf("Width 5 (%%5d): '%5d'\n", num);

    // %-5d → left aligned
    printf("Left aligned (%%-5d): '%-5d'\n", num);

    // %05d → pad with zeros
    printf("Zero padded (%%05d): '%05d'\n", num);

    // %+d → always show sign
    printf("Show sign (%%+d): %+d\n\n", num);



    /* =========================
       SPECIAL CASES
       ========================= */

    // %% → prints a percent sign
    printf("Percent sign (%%%%): %%\n");

    return 0;
}
