//SAN LUIS, Jillian Joy C.
//Project: Cube Calculator

#include <stdio.h>
#include <cstring>

int calculate_cube() {
    int a, cube;
    while (1) {
        printf("Enter Any Number\n");
        if (scanf("%d", &a) != 1) {
            printf("ERROR! Invalid input. Please enter a valid number.\n");
            while(getchar() != '\n');
        } else {
            printf("Entered number is %d\n", a);
            cube = a * a * a;
            printf("Cube of entered number is: %d\n", cube);
            break;
        }
    }

    char user_response[4];
    printf("Do you want to try again? (yes/no): \n");
    while (1) {
        scanf("%s", user_response);
        
        if (strcmp(user_response, "yes") == 0) {
            return 1;  // User wants to try again, so return 1
        } else if (strcmp(user_response, "no") == 0) {
            printf("Goodbye!\n");
            return 0;  // Exit the program if user chooses no
        } else {
            printf("ERROR! Invalid response. Please type 'yes' or 'no'.\n");
        }
    }
}

int main() {
    while (calculate_cube()) {
        // Loop to allow retry if user chose to try again
    }
    return 0;
}
