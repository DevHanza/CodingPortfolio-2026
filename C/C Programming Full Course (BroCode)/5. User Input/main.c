#include <stdio.h>

int main() {

    /* =========================
       INTEGER INPUT
       ========================= */

    int age;

    // Ask the user for an integer
    printf("Enter your age: ");

    // %d reads an integer and stores it in age
    scanf("%d", &age);

    printf("You entered age: %d\n\n", age);



    /* =========================
       FLOAT INPUT
       ========================= */

    float height;

    // Ask the user for a float
    printf("Enter your height (in meters): ");

    // %f reads a float
    scanf("%f", &height);

    printf("You entered height: %.2f\n\n", height);



    /* =========================
       DOUBLE INPUT
       ========================= */

    double weight;

    // Ask the user for a double
    printf("Enter your weight (in kg): ");

    // %lf is REQUIRED for double in scanf
    scanf("%lf", &weight);

    printf("You entered weight: %lf\n\n", weight);



    /* =========================
       CHARACTER INPUT
       ========================= */

    char grade;

    // Leading space before %c ignores leftover whitespace
    printf("Enter your grade: ");
    scanf(" %c", &grade);

    printf("You entered grade: %c\n\n", grade);



    /* =========================
       STRING INPUT (SINGLE WORD)
       ========================= */

    char name[20];

    // %s reads a word (stops at space)
    printf("Enter your first name: ");
    scanf("%s", name);

    printf("You entered name: %s\n\n", name);



    /* =========================
       STRING INPUT (FULL LINE)
       ========================= */

    char city[50];

    // Clear leftover newline from previous scanf
    getchar();

    // fgets reads an entire line including spaces
    printf("Enter your city: ");
    fgets(city, sizeof(city), stdin);

    printf("You entered city: %s\n", city);



    /* =========================
       IMPORTANT NOTES
       ========================= */

    // scanf needs & (address) for variables (except arrays)
    // fgets is safer than scanf("%s") for full sentences
    // Wrong format specifier causes undefined behavior

    return 0;
}
