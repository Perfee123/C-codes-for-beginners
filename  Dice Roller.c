#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int roll;
    srand(time(0)); 
    roll = (rand() % 6) + 1;
    printf("You rolled a %d 🎲\n", roll);
    return 0;
}
