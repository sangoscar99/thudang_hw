#include <iostream>
#include <string>
using namespace std;

string convertToNumber(char letter)
{
    switch (letter)
    {
    case '_':
        return ("1");
        break;
    case '-':
        return ("0");
        break;
    case 'A':
    case 'B':
    case 'C':
        return ("2");
        break;
    case 'D':
    case 'E':
    case 'F':
        return ("3");
        break;
    case 'G':
    case 'H':
    case 'I':
        return ("4");
        break;
    case 'J':
    case 'K':
    case 'L':
        return ("5");
        break;
    case 'M':
    case 'N':
    case 'O':
        return ("6");
        break;
    case 'P':
    case 'Q':
    case 'R':
    case 'S':
        return ("7");
        break;
    case 'T':
    case 'U':
    case 'V':
        return ("8");
        break;
    case 'W':
    case 'X':
    case 'Y':
    case 'Z':
        return ("9");
        break;
    default:
        break;
    }
    return "";
}

void printResult(string result)
{
    for (int i = 0; i < 7; i++)
    {
        if (i == 3)
        {
            cout << "-" << result[i];
        }
        else
        {
            cout << result[i];
        }
    }
}

int main()
{
    string input;
    string word;
    string result;

    cout << "Enter Y/y to convert a telephone number from letters to digits." << endl;

    while (true)
    {
        cout << "Enter any other letter to terminate the program." << endl;
        getline(cin, input);

        if (input == "Y" || input == "y")
        {

            cout << "Enter a telephone number using 7 or more letters\nfor Prefix and number, only the first 7 letters are used\nand dashes '-' are ZEROS, underscores '_' are ONES\nALL OTHER SYMBOLS ARE ignored.\n-->: ";
            getline(cin, word);

            if (word.length() > 6)
            {
                cout << "\nThe corresponding telephone number is: " << endl;

                for (char &c : word)
                {
                    if (c != ' ')
                    {
                        c = toupper(c);
                        result += convertToNumber(c);
                    }
                }
                printResult(result);
                // reset
                result = "";
                word = "";
            }
            else
            {
                cout << "The input must be 7 or more letters." << endl;
            }
            cout << "\nTo process another telephone number, enter Y/y" << endl;
        }
        else
        {
            return 1;
        }
    }
}
