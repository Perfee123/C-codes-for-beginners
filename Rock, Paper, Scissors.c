#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char *options[] = {"Rock", "Paper", "Scissors"};
    int player, computer;
 
    srand(time(0));
    computer = rand() % 3;

    printf("Choose:\n0. Rock\n1. Paper\n2. Scissors\nYour choice: ");
    scanf("%d", &player);

    printf("You chose: %s\n", options[player]);
    printf("Computer chose: %s\n", options[computer]);

    if (player == computer)
        printf("It's a draw!\n");
    else if ((player == 0 && computer == 2) ||
             (player == 1 && computer == 0) ||
             (player == 2 && computer == 1))
        printf("You win!\n");
    else
        printf("You lose!\n");

    return 0;
}
