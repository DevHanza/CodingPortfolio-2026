#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int guess = 0;
    int tries = 0;
    int min = 1;
    int max = 100;

    srand(time(NULL));

    int answer = (rand() % (max - min + 1)) + min;

    do
    {
        printf("(%d) GUESS THE NUMBER (%d, %d): \n", answer, min, max);
        scanf("%d", &guess);
        tries++;

        if (guess > answer)
        {
            printf("TOO HIGH!\n\n");
        }
        else if (guess < answer)
        {
            printf("TOO LOW!\n\n");
        }
        else
        {
            printf("CORRECT!!!\n\n");
        }

    } while (guess != answer);

    printf("Correct answer is %d.", answer);
    printf("You took %d tries.", guess);

    return 0;
}

// I know there's some important validations are missing in this program and could be improved more. 
