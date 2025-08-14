#include <stdio.h>
#include <string.h>
void calculation_take(char word[], char guess[]);
void grid(void);
int main()
{
    char word[6]; // The word to guess
    char guess[6];

    // grid();
    printf("Welcome to Wordle!\n");
    printf("You have 4 tries to guess the 5-letter word.\n");
    calculation_take(word, guess);
    return 0;
}
void calculation_take(char word[], char guess[])
{
    int j;
    for (int i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            if (i == 0)
            {
                printf("This is level 1\n");
                strcpy(word, "apple"); // The word to guess
            }
            else if (i == 1)
            {
                printf("This is level 2\n");
                strcpy(word, "chair"); // The word to guess
            }
            else if (i == 2)
            {
                printf("This is level 3\n");
                strcpy(word, "chess"); // The word to guess
            }
            else if (i == 3)
            {
                printf("This is level 4\n");
                strcpy(word, "mouse"); // The word to guess
            }
            else
            {
                printf("Invalid attempt\n");
                return 1;
            }
            
            printf("Guess the word :", j + 1);
            scanf("%s", guess);
            if (strlen(guess) != 5)
            {
                printf("Please enter a 5-letter word. \n");
                j--; // Decrement j to repeat the guess for the same level
                continue;
            }
            if (strcmp(word, guess) == 0)
            {
                printf("Congratulations ! You guessed %s correctly in %d try\n", word, j + 1);
                break;
            }
            else
            {
                printf("Incorrect guess! Try again.\n");
                for (int k = 0; k < 5; k++)
                {
                    if (word[k] == guess[k])
                    {
                        printf("%c is in correct position\n", guess[k]);
                    }
                }
            }
            if (j == 3)
            {
                printf("You couldnot guess the word in 4 tries .\n");
                printf("The correct word was: %s\n", word);
                break;
            }
        }
        
    }
}
