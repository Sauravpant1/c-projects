#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int guess , random ;
    int no_of_guesses=0;
    srand(time(NULL));
     printf("Welcome to the guessing game :\n");
     random = rand()%100+1; 
     

     do
     {
        printf("Enter your guess :\n");
        scanf("%d",&guess);
        no_of_guesses++;
        if(guess<random)
        {
            printf("The number you guessed is smaller\n");

        }
        else if(guess>random)
        {
            printf("the number you entered is bigger \n");
        }
        else
        {
            printf(" you guessed the number in %d attempts : ", no_of_guesses);
        }
     } while (guess != random);

     
     return 0;
     
}