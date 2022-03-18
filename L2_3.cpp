#include <iostream>

using namespace std;

int main()
{
    char letter;
    int counter = 0;
    
  // cout << "Enter a telephone number using 7 or more letters: " << endl;
    
    while (cin.get(letter) && counter < 7 ) {
         cout << "Enter a telephone number using 7 or more letters: ";
        if (letter != ' ' && letter >= 'A' && letter <= 'z') {
            counter++; // Only increment the counter for valid characters
            if (letter > 'Z') {
                letter = (int)letter-32; // Convert lowercase to uppercase if required.
            }
            
            if (counter == 4) {
                
                cout << " - ";}
            

            switch (letter) {
                case 'A':
                case 'B':
                case 'C':
                    cout << "2";
                    break;
                case 'D':
                case 'E':
                case 'F':
                    cout << "3";
                    break;
                case 'G':
                case 'H':
                case 'I':
                    cout << "4";
                    break;
                case 'J':
                case 'K':
                case 'L':
                    cout << "5";
                    break;
                case 'M':
                case 'N':
                case 'O':
                    cout << "6";
                    break;
                case 'P':
                case 'Q':
                case 'R':
                case 'S':
                    cout << "7";
                    break;
                case 'T':
                case 'U':
                case 'V':
                    cout << "8";
                    break;
                case 'W':
                case 'X':
                case 'Y':
                case 'Z':
                    cout << "9";
                    break;
                default:
                    break;
            }
        }
        
        }
    return 0;
    }