//SAN LUIS, Jillian Joy C.
//Project: Multiplication Table Generator

#include <stdio.h>
#include <cstring>

void generate_table() {
    int number, i;
    while (1) {
        printf("Enter Any Number\n");
        if (scanf("%d", &number) != 1) {
            printf("ERROR! Invalid input. Please enter a valid number.\n");
            while(getchar() != '\n');
        } else {
            printf("Entered number %d\n", number);
            for(i = 1; i <= 10; i++) {
                int table = number * i;
                printf("%d x %d = %d\n", number, i, table);
            }
            break;
        }
    }

    char user_response[4];
    while (1) {
        printf("Do you want to try again? (yes/no): \n");
        scanf("%s", user_response);
        
        if (strcmp(user_response, "yes") == 0) {
            generate_table();
            break;
        } else if (strcmp(user_response, "no") == 0) {
            printf("Goodbye!\n");
            break;
        } else {
            printf("ERROR! Invalid response. Please type 'yes' or 'no'.\n");
        }
    }
}

int main() {
    generate_table();
    return 0;
}
