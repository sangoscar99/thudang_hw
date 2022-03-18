
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    int cookies, leftCookies, boxes, containers, leftContainers;
    cout << "Enter the number of cookies perbox or press" << endl;
    cout << "'Enter' to use the default of 24 cookies per box.";
    cout << endl
         << endl;
    cout << "Default cookies per box will be used." << endl;
    cout << endl
         << endl;

    cout << "Enter the number of boxes per container or press" << endl;
    cout << " 'Enter' to use the default of 75 boxes per container." << endl;
    cout << endl
         << endl;
    cout << "Default boxes percontainer will be used." << endl;
    cout << endl
         << endl;

    cout << " Enter the total number of cookies: ";
    cin >> cookies;

    if (cookies > 0)
    {
        cout << "\nThe total number of cookies is: " << cookies;
    }
    else
    {
        cout << "you didn't enter value yet, please try it again";
    }

    boxes = cookies / 24;
    leftCookies = cookies % 24;
    containers = boxes / 75;
    leftContainers = boxes % 75;

    if (boxes > 0)
        cout << "\nThe number of cookies boxes needed to hold the cookies: " << boxes << endl;

    if (leftCookies > 0) {
        std::cout << std::setw(59);
        std::cout << "leftCookie: " << leftCookies <<  endl;}
        

    if (containers > 0)
        cout << "\nThe number of containers needed to store the cookie boxes: " << containers << endl;

    if (leftContainers > 0) {
        std::cout << std::setw(59);
        std::cout << "Leftover boxes: " << leftContainers <<  endl;}
    return 0;
}