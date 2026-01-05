// SHOPPING CART PROGRAM

#include <stdio.h>
#include <string.h>

int main()
{
    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("What item would you like to buy?: ");
    fgets(item, sizeof(item), stdin);
    // remove the newline character (\n) that fgets automatically includes when you press Enter after typing your input.
    item[strlen(item) - 1] = '\0';

    printf("What's the price? (for each): ");
    scanf("%f", &price);

    printf("How many?: ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("\nYou have bought %d %s/s.\n", quantity, item);
    printf("The total is: %c%.2f\n", currency, total);

    return 0;
};