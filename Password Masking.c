// Only works on Windows with Turbo C or similar

#include <stdio.h>
#include <conio.h>

int main() {
    char ch, password[20];
    int i = 0;

    printf("Enter password: ");
    while ((ch = getch()) != 13) { 
        password[i++] = ch;
        printf("*");
    }
    password[i] = '\0';

    printf("\nPassword entered: %s\n", password); 
    return 0;
}
