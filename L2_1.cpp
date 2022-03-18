#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    int cookies, leftCookies, boxes, containers, leftContainers;

    cout << "Enter the number of cookies perbox or press" << endl;
    cout << " 'Enter' to use the default of 24 cookies per box." << endl;
    cout << "\nDefault cookies per box will be used." << endl;
    cout << "\nEnter the number of boxes per container or press" << endl;
    cout << "  'Enter' to use the default of 75 boxes per container." << endl;
    cout << "\nDefault boxes percontainer will be used." << endl;
    cout << "\nEnter the total number of cookies: ";
    cin >> cookies;

    if (!(cookies > 0))
    {
        cout << "You entered the wrong value, please try it again" << endl;
        return 1;
    }
    else
    {
        boxes = cookies / 24;
        leftCookies = cookies % 24;
        containers = boxes / 75;
        leftContainers = boxes % 75;

        if (boxes > 0)
            cout << "\n"
                 << setw(59) << "The number of cookies boxes needed to hold the cookies: " << boxes << endl;

        if (leftCookies > 0)
        {
            cout << setw(59) << "Left Cookie: " << leftCookies << endl;
        }

        if (containers > 0)
            cout << "The number of containers needed to store the cookie boxes: " << containers << endl;

        if (leftContainers > 0)
        {
            cout << setw(59) << "Leftover boxes: " << leftContainers << endl;
        }
    }
}