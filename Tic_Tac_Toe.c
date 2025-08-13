#include <stdio.h>
void board();
int winnercheck();
char position[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int main()
{
    board();
    int result = -1;
    int player = 1, input; // By default player 1 starts // Assuming status is used to check the game status
    // The game continues until status is changed to a value other than -1
    // This could be a win, draw, or exit condition.
    // The logic for checking the game status is not provided in the snippet.
    while (result == -1) // Assuming status is defined somewhere in the code
    {

        player = (player % 2 == 0) ? 2 : 1;    // Switching between players
        char mark = (player == 1) ? 'X' : 'O'; // Mark for player 1 is 'X' and for player 2 is 'O'
        printf("Enter the number player  for %d :", player);
        scanf("%d", &input);

        if (input < 1 || input > 9)
        {
            printf("Invalid input! Please enter a number between 1 and 9.\n");
            continue;
        }
        if (position[input] == 'X' || position[input] == 'O')
        {
            printf("Spot is already taken ! Please choose anothe block.\n");
            continue; // Skip to the next iteration if the spot is already taken
        }
        position[input] = mark; // Assigning mark to the position
        board();                // Displaying the board after the move
        player++;               // Switching to the next player
        result = winnercheck(); // Check if there's a winner
        if (result == 1)
        {
            printf("%d is Winner", player - 1);
        }
        else if (result == 0)
        {
            printf("draw");
        }
    }

    return 0;
}
void board()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
    printf("Tic Tac Toe Game\n");
    printf("     |          |     \n");
    printf("     |          |     \n");
    printf("   %c |    %c     |   %c\n", position[1], position[2], position[3]);
    printf("-----|----------|-----\n");
    printf("     |          |     \n");
    printf("     |          |     \n");
    printf("   %c |    %c     |  %c \n", position[4], position[5], position[6]);
    printf("-----|----------|-----\n");
    printf("     |          |     \n");
    printf("     |          |     \n");
    printf("   %c |    %c     |  %c \n", position[7], position[8], position[9]);
    printf("     |          |     \n");
}
int winnercheck()
{
    if (position[1] == position[2] && position[2] == position[3]) // Check rows
        return 1;
    else if (position[4] == position[5] && position[5] == position[6])
        return 1;
    else if (position[7] == position[8] && position[8] == position[9])
        return 1;
    else if (position[1] == position[4] && position[4] == position[7]) // Check columns
        return 1;
    else if (position[2] == position[5] && position[5] == position[8])
        return 1;
    else if (position[3] == position[6] && position[6] == position[9])
        return 1;
    else if (position[1] == position[5] && position[5] == position[9]) // Check diagonals
        return 1;
    else if (position[3] == position[5] && position[5] == position[7])
        return 1;

    int count = 0;
    // Check for draw condition
    for (int i = 1; i <= 9; i++)
    {
        if (position[i] == 'X' || position[i] == 'O')
        {
            count++;
        }
    }
    if (count == 9)
    {
        return 0;
    }

    else
        return -1; // No winner yet
}