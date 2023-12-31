#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    int number, guess, noOfAttempt = 1;
    srand(time(0));
    number = rand() % 100 + 1;
    do
    {
        printf("Try to guess the number between 1 to 100\n");
        scanf("%d", &guess);
        if (guess < number)
        {
            printf(" Guess Higher number please\n");
        }
        else if (guess > number)
        {
            printf("Guess Lower number please\n");
        }
        else
        {
            printf("Yaa Hoo!! you guess it in %d attempt.\n", noOfAttempt);
        }

        noOfAttempt++;

    } while (guess != number);

    return 0;
}