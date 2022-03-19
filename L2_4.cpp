#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));
    int num = rand() % 100;
    //cout << "Enter an interger greater than or equal to 0 and less than 100: " << endl;

    int guess;
    for (int i=0; i<5; i++) {
        cout << "Enter an interger greater than or equal to 0 and less than 100: ";
        cin >> guess;
        int diff = abs(num - guess);
        if (diff == 0) {
            break;
        }
        if (diff >= 50) {
            cout << "\nThe guess is very ";
        }
        else if (diff >= 30) {
            cout << "\nThe guess is ";
        }
        else if (diff >= 15) {
            cout << "\nThe guess is moderately ";
        }
        else {
            cout << "\nThe guess is somewhat ";
        }


        if (guess > num) {
            cout << "high." << endl;
        }
        else {
            cout << "low." << endl;
        }
        cout << "Guess again!" << endl;
        
    }

    if (guess == num) {
        cout << endl << "Winner! you guessed the correct number.!" << endl;
    }
    else { 
        cout << endl << "You guessed incorrect number for 5 times, you out of the game. " 
             << "Correct number was:  " << num << endl;
    }
}