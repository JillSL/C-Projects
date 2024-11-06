//SAN LUIS, Jillian Joy C.
//Project: BMI Calculator

#include <stdio.h>
#include <cstring>

int check_bmi() {
    float bmi, weight, height;
    char user_response[4];

    while (1) {
        printf("Enter your weight in kg:\n");
        if (scanf("%f", &weight) != 1) {
            printf("ERROR! Invalid input. Please enter a valid number for weight.\n");
            while(getchar() != '\n');  
            continue;
        }

        printf("Enter your height in cm:\n");
        if (scanf("%f", &height) != 1) {
            printf("ERROR! Invalid input. Please enter a valid number for height.\n");
            while(getchar() != '\n');  
            continue;
        }

        float metre = height / 100;
        bmi = weight / (metre * metre);

        printf("Weight: %.2f\n", weight);
        printf("Height: %.2f\n", height);
        printf("Your BMI: %.2f\n", bmi);

        if (bmi < 18.5) {
            printf("Overview: Underweight\n");
        } else if (bmi >= 18.5 && bmi <= 24.9) {
            printf("Overview: Normal weight\n");
        } else if (bmi >= 25 && bmi <= 29.9) {
            printf("Overview: Overweight\n");
        } else if (bmi >= 30) {
            printf("Overview: Obesity\n");
        }

        printf("Do you want to try again? (yes/no): \n");
        scanf("%s", user_response);
        
        if (strcmp(user_response, "yes") == 0) {
            return 1;
        } else if (strcmp(user_response, "no") == 0) {
            printf("Goodbye!\n");
            return 0;
        } else {
            printf("ERROR! Invalid response. Please type 'yes' or 'no'.\n");
        }
    }
}

int main() {
    while (check_bmi()) {
    }
    return 0;
}
