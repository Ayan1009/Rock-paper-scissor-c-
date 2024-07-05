#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Initialize game
    string choices[] = {"Rock", "Paper", "Scissors"};
    int userChoice, computerChoice;
    char playAgain;

    // Seed random number generator
    srand(static_cast<unsigned int>(time(0)));

    do {
        cout << "Welcome to Rock, Paper, Scissors!" << endl;
        cout << "Enter your choice: " << endl;
        cout << "0: Rock" << endl;
        cout << "1: Paper" << endl;
        cout << "2: Scissors" << endl;

        cout << "Your choice: ";
        cin >> userChoice;

        // Validate user input
        if (userChoice < 0 || userChoice > 2) {
            cout << "Invalid choice. Please enter 0, 1, or 2." << endl;
            continue;
        }

        // Generate computer choice
        computerChoice = rand() % 3;

        cout << "You chose: " << choices[userChoice] << endl;
        cout << "Computer chose: " << choices[computerChoice] << endl;

        // Determine winner
        if (userChoice == computerChoice) {
            cout << "It's a tie!" << endl;
        } else if ((userChoice == 0 && computerChoice == 2) ||
                   (userChoice == 1 && computerChoice == 0) ||
                   (userChoice == 2 && computerChoice == 1)) {
            cout << "You win!" << endl;
        } else {
            cout << "You lose!" << endl;
        }

        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thanks for playing! Goodbye!" << endl;

    return 0;
}
