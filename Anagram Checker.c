//SAN LUIS, Jillian Joy C.
//Project: Anagram Checker

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void are_anagrams() {
    string word_1, word_2;
    cout << "Please type in the first word: \n";
    cin >> word_1;
    cout << "Please type in the second word: \n";
    cin >> word_2;

    sort(word_1.begin(), word_1.end());
    sort(word_2.begin(), word_2.end());

    if (word_1 == word_2) {
        cout << "The words are anagrams." << endl;
    } else {
        cout << "The words are NOT anagrams." << endl;
    }

    string user_response;
    while (true) {
        cout << "Do you want to try again? (yes/no): \n";
        cin >> user_response;
        transform(user_response.begin(), user_response.end(), user_response.begin(), ::tolower);

        if (user_response == "yes") {
            are_anagrams();
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
    are_anagrams();
    return 0;
}
