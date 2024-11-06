//SAN LUIS, Jillian Joy C.
//Project: Odd or Even Checker

#include <iostream>
#include <algorithm>
using namespace std;

void check_odd_even() {
    int number;
    cout << "Please enter a number: \n";
    cin >> number;

    if (number % 2 == 0) {
        cout << "The number is even." << endl;
    } else {
        cout << "The number is odd." << endl;
    }

    string user_response;
    while (true) {
        cout << "Do you want to try again? (yes/no): \n";
        cin >> user_response;
        transform(user_response.begin(), user_response.end(), user_response.begin(), ::tolower);

        if (user_response == "yes") {
            check_odd_even();
            break;
        } else if (user_response == "no") {
            cout << "Goodbye!" << endl;
            break;
        } else {
            cout << "ERROR! Invalid response. Please type 'yes' or 'no'." << endl;
        }
    }
}

int main() {
    check_odd_even();
    return 0;
}
