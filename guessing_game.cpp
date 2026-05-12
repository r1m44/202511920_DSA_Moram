#include <iostream>
using namespace std;

int main() {

    int chosenNumber = 7;
    int userGuess = 0;
    int guessList[100];
    int totalGuesses = 0;

    while (userGuess != chosenNumber) {

        cout << "Enter your guess: ";
        cin >> userGuess;

        guessList[totalGuesses] = userGuess;
        totalGuesses++;

        if (userGuess > chosenNumber) {
            cout << "Too high" << endl;
        } else if (userGuess < chosenNumber) {
            cout << "Too low" << endl;
        } else {
            cout << "Correct!" << endl;
        }
    }

    cout << "\nAll your guesses were: " << endl;
    for (int i = 0; i < totalGuesses; i++) {
        cout << "Guess " << i + 1 << ": " << guessList[i] << endl;
    }

    return 0;
}
