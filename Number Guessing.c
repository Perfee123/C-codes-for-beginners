#include <stdio.h>

int main() {
    int i, sum = 0, choice;
    for (i = 0; i < 5; i++) {
        int card = 1 << i;
        printf("Is your number in this set?\n");
        for (int j = 1; j <= 31; j++) {
            if (j & card)
                printf("%d ", j);
        }
        printf("\n(1 = Yes, 0 = No): ");
        scanf("%d", &choice);
        if (choice)
            sum += card;
    }
    printf("You are thinking of... %d!\n", sum);
    return 0;
}
