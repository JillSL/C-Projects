//SAN LUIS, Jillian Joy C.
//Project: Addition Assistant

#include <stdio.h>
#include <cstring>

int check_addition() {
    int a, b, c;
    char user_response[10];

    while (1) {
        printf("Enter 1st Number\n");
        if (scanf("%d", &a) != 1) {
            printf("Invalid input. Please enter a valid number.\n");
            while(getchar() != '\n'); 
            continue;
        }

        printf("Enter 2nd Number\n");
        if (scanf("%d", &b) != 1) {
            printf("Invalid input. Please enter a valid number.\n");
            while(getchar() != '\n');  
            continue;
        }

        c = a + b;
        printf("Addition of 2 numbers: %d\n", c);

        printf("Do you want to try again? (yes/no): \n");
        scanf("%s", user_response);
        if (strcmp(user_response, "yes") == 0) {
            continue;
        } else if (strcmp(user_response, "no") == 0) {
            printf("Goodbye!\n");
            break;
        } else {
            printf("ERROR! Invalid response. Please type 'yes' or 'no'.\n");
        }
    }

    return 0;
}

int main() {
    check_addition();
    return 0;
}
