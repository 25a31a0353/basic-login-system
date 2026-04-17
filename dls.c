#include <stdio.h>
#include <string.h>

int main() {
    char username[50];
    char password[50];

    // Predefined credentials
    char correctUsername[] = "admin";
    char correctPassword[] = "1234";

    printf("=== Login System ===\n");

    // Input
    printf("Enter username: ");
    scanf("%s", username);

    printf("Enter password: ");
    scanf("%s", password);

    // Check credentials
    if (strcmp(username, correctUsername) == 0 &&
        strcmp(password, correctPassword) == 0) {
        printf("Login successful!\n");
    } else {
        printf("Invalid username or password.\n");
    }

    return 0;
}