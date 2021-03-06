#include <iostream>
using namespace std;

bool isPrimeValue(int num)
{
    if (num <= 1)
        return true;
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int total = 0;
    int count = 0;
    int start, end;
    int prev = 1;
    int special = 1;

    cout << "Enter two positive integers < 1,000,000,000: ";
    cin >> start >> end;

    if (start < 0 || end > 1000000000)
    {
        cout << "Inputs are out of range!" << endl;
    }
    else
    {
        for (int i = start; i < end; i++)
        {
            if (isPrimeValue(i))
            {
                if (i - prev == 2)
                {
                    cout << prev << " and " << i << " are twin primes." << endl;
                    count += 1;
                }
                // special case 1 and 3
                else if (i - special == 2)
                {
                    cout << special << " and " << i << " are twin primes." << endl;
                    count += 1;
                }
                prev = i;
                total += i;
            }
        }

        cout << "The sum of all prime numbers between " << start << " and " << end << " = " << total << endl;
        cout << "The number of twin primes between " << start << " and " << end << " = " << count << endl;
    }
}