
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_USERS 100
#define MAX_USERNAME_LENGTH 50

typedef struct user
{
    char user[MAX_USERS];
    int score;
}user_t;

user_t users[MAX_USERS];
int num_users = 0;

// Function to display the menu
void displayMenu() 
{
    printf("\nMenu:\n");
    printf("1. Register\n");
    printf("2. Take Quiz\n");
    printf("3. Exit\n");
}

void registerUser()
{
    char username[MAX_USERNAME_LENGTH];

    if(num_users > MAX_USERS )
    {
        printf("Registraion full\n");
        return 0;
    }
    else
    {
        printf("Enter the Username:");
        scanf("%s",username);

        strcpy(users[num_users].username, username);
        users[num_users].score = 0;
        num_users++;
        printf("User registered successfully.\n");
    }

}

void takeQuiz()
{

}

int main() {
    printf("Welcome to the Online Quiz!\n");
    int choice;

    // Main menu loop
    do {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                registerUser();
                break;
            case 2:
                takeQuiz();
                break;
            case 3:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 3);

    return 0;
}