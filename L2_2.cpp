#include <iostream>
using namespace std;

int main()
{
    double area, fSeed, fPlantation, fFertilizing, fLabor, fTotal, fSellingprice, totalReveneu, proFit;
    double area1, area2, sSeed, sPlantation, sFertilizing, sLabor, sTotal, sSellingprice, per1;
    int number;

    cout << "Enter farm area in acress: ";
    cin >> area;

    cout << "\nEnter the number of vegetables planted(1/2): ";
    cin >> number;

    if (number == 1)
    {
        cout << "\nEnter the vegetable seed cost per acre: $" << endl;
        cin >> fSeed;

        cout << "\nEnter the vegetable plantation cost per acre: $" << endl;
        cin >> fPlantation;

        cout << "\nEnter the vegetable fertilizing cost per acre: $" << endl;
        cin >> fFertilizing;

        cout << "\nEnter the vegetable labor cost per acre: $" << endl;
        cin >> fLabor;

        fTotal = fSeed + fPlantation + fFertilizing + fLabor;
        cout << "\nEnter vegetable selling price per acre: $";
        cin >> fSellingprice;

        totalReveneu = fSellingprice * area;
        proFit = totalReveneu - (fTotal * area);
    }
    else if (number == 2)
    {
        cout << "\nEnter the portion (as a percentage) of land used for the first vegetable: ";
        cin >> per1;
        area1 = per1 * 0.01 * area;
        area2 = area - area1;

        cout << "\nEnter the first vegetable seed cost per acre: $";
        cin >> fSeed;

        cout << "\nEnter the first vegetable plantation cost per acre: $";
        cin >> fPlantation;

        cout << "\nEnter the first vegetable fertilizing cost per acre: $";
        cin >> fFertilizing;

        cout << "\nEnter the first vegetable labor cost per acre: $";
        cin >> fLabor;

        fTotal = fSeed + fPlantation + fFertilizing + fLabor;
        cout << "\nEnter vegetable selling price per acre: $";
        cin >> fSellingprice;

        cout << "\nEnter the second vegetable seed cost per acre: $";
        cin >> sSeed;

        cout << "\nEnter the second vegetable plantation cost per acre: $";
        cin >> sPlantation;

        cout << "\nEnter the second vegetable fertilizing cost per acre: $";
        cin >> sFertilizing;

        cout << "\nEnter the second vegetable labor cost per acre: $";
        cin >> sLabor;

        sTotal = sSeed + sPlantation + sFertilizing + sLabor;
        cout << "\nEnter the second vegetable selling cost per acre: $";
        cin >> sSellingprice;

        totalReveneu = (area1 * fSellingprice) + (area2 * sSellingprice);
        proFit = totalReveneu - (fTotal * area1 + sTotal * area2);
    }

    else
    {
        // error handling
        cout << "\nYou entered the wrong input or you didnt, pls try again";
        return 1;
    }

    // final statement
    cout << "\nThe total revenue is : $ " << totalReveneu << endl;
    cout << "Profit/loss is $: " << proFit << endl;
}
