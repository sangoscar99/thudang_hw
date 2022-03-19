#include <fstream>
#include <iostream>
using namespace std;

void Getnumber(ifstream &indata, int &num, ofstream &outdata)
{
    indata >> num;
}
void intizilaize(int &zeros, int &odd, int &even)
{
    zeros = 0;
    odd = 0;
    even = 0;
}
void classifynumber(int num, int &zeros, int &odd, int &even)
{
    switch (num % 2)
    {
    case 0:
        even++;
        if (num == 0)
        {
            zeros++;
        }
        break;

    case 1:
    case -1:
        odd++;
    }
}

void printResults(int zeros, int odd, int even, int sum, double average, ofstream &outFile)
{
    outFile << "There are " << even << " evens, "
            << "which also includes " << zeros << " zeros" << endl;

    outFile << "Total number of odds are: " << odd << endl;

    outFile << "The sum of numbers: " << sum << endl;

    outFile << "The average is : " << int(average) << endl;
    

    cout  << "There are " << even << " evens, "
            << "which also includes " << zeros << " zeros" << endl;

    cout << "Total number of odds are: " << odd << endl;

    cout << "The sum of numbers: " << sum << endl;

    cout << "The average is : " << int(average) << endl;

}

int main()
{
    ifstream indata;
    ofstream outdata;
    int num;
    int zeros;
    int odd;
    int even;
    int i = 0;
    int sum = 0;
    double average = 0;

    indata.open("L2-6Data.txt");
    outdata.open("L2-6Output.txt");

    if (indata.fail())
    {
        cout << " The file coud not open";
        return 1;
    }
    intizilaize(zeros, odd, even);

    while (!indata.eof())

    {
        Getnumber(indata, num, outdata);
        sum += num;
        i++;

        classifynumber(num, zeros, odd, even);
        
    }

    outdata << endl;
    average = double(sum) / i;

    printResults(zeros, odd, even, sum, average, outdata);

    indata.close();
    outdata.close();

    return 0;
}