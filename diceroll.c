#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N_DICE 3

/* Conveniently return the sum. */
int roll_dice(int *dice)
{
    int i, sum;
    for (i = sum = 0; i < N_DICE; i++)
    {
        dice[i] = rand()%6 + 1;
        sum += dice[i];
    }
    return sum;
}

void print_dice(int *dice, int sum)
{ 
    int i;
    printf("\n\n");
    for (i = 0; i < N_DICE; i++)
        printf("Die %d: %d\n", i + 1, dice[i]);
    printf("-------------------\nTotal: %d\n\n", sum);
}

int main()
{
    int runs, dice[N_DICE], sum, old_sum, correct, correct_guesses;
    char guess;

    srand(time(NULL));
    correct_guesses = 0;
    sum = roll_dice(dice);

    printf("How many times do you want to play? ");
    for (scanf("%d", &runs); runs; runs--)
    {
        print_dice(dice, sum);
        old_sum = sum;
        sum = roll_dice(dice);

        printf(
            "Do you think the next total will be higher, "
            "the same, or lower than the previous total? "
            "(h, s, l)\n"
        );
        scanf(" %c", &guess);
        switch (guess)
        {
            case 'h': correct = sum > old_sum; break;
            case 's': correct = sum == old_sum; break;
            case 'l': correct = sum < old_sum; break;
            default: correct = 0; printf("Not h, s or l.\n");
        }
        if (correct)
        {
            printf("You guessed correctly!\n");
            correct_guesses++;
        }
        else
            printf("You guessed incorrectly!\n");
    }
    printf("You got a total of %d guesses correct!\n", correct_guesses);
}