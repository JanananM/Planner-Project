#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

int main()
{
    system("color 0C");
    printf("------------------------------------------------------------------------- WELCOME TO YOUR PERSONAL PLANNER! ----------------------------------------------------------------\n");
    printf("\n                                                                                     MAIN MENU\n");
    printf("Enter one of the following:\n");
    printf("1. Log In\n");  // Enter 1 for logging in
    printf("2. Sign Up\n"); // Enter 2 for signing up
    int choice;
    printf("Choice: ");
    scanf("%d", &choice);

    char username [SIZE];
    char password [SIZE];
    char name [SIZE];
    int check;
    char leftover;
    int keepGoing = 0;
    while (keepGoing == 0)
    {
        switch (choice) //control for cases
        {
            case (1):
                scanf("%c", &leftover);
                check = logIn (username, password);// takes you to login process
                if (check == 0) // checks if the return value is 1 or 0
                {
                    control(); //takes you to control(main body of the program)
                }
                break;
            case (2):
                signUp (username, password, name); //takes you to signup process(goes to function.c header)
                check = logIn(username, password); // takes you to login process(goes to function.c header)
                if (check == 0)
                {
                    control();
                }
                keepGoing = 1;
                break;
            default:
                printf("Please enter a choice from the given options");
                keepGoing = 0;
                break;
        }
    }

    return 0;
}

