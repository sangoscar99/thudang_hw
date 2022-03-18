#include <iostream>
using namespace std;

int main ()
{
double area, fSeed, fPlantation, fFertilizing, fLabor, fTotal, fSellingprice, totalReveneu, proFit;
double area1,area2, sSeed, sPlantation, sFertilizing, sLabor, sTotal, sSellingprice;
 
int number;

cout << " Enter farm area in acress: ";
cin>> area;

cout << " Enter the number of vegetables planted(1/2): ";
cin >> number;

// 1 or 2

if (number==1)
{
    cout << "Enter the vegetable seed cost per acre: $"<< endl;
    cin >> fSeed;
     
    cout << "Enter the vegetable plantation cost per acre: $" <<endl;
    cin >> fPlantation;

    cout <<"Enter the vegetable fertilizing cost per acre: $" <<endl;
    cin >> fFertilizing;

    cout << "Enter the vegetable labor cost per acre: $" << endl;
    cin >> fLabor;

    fTotal = fSeed + fPlantation + fFertilizing + fLabor;
     cout <<" Enter vegetable selling price per acre: $";
     cin >> fSellingprice;

     totalReveneu = fSellingprice*area;
     proFit = totalReveneu- (fTotal*area);

}
else if (number ==2)
{ 
 cout << "Enter the portion (as a percentage) of land used for the first vegetable: " << endl;
 cin >> area2;
 area2 = 100 - area1;


 //cout << "Enter the portion (as a percentage) of land used for the first vegetable: " << endl;
 //cin >> area2;

 cout << "Enter the first vegetable seed cost per acre: $"<< endl;
    cin >> fSeed;
     
    cout << "Enter the first vegetable plantation cost per acre: $" <<endl;
    cin >> fPlantation;

    cout <<"Enter the first vegetable fertilizing cost per acre: $" <<endl;
    cin >> fFertilizing;

    cout << "Enter the first vegetable labor cost per acre: $" << endl;
    cin >> fLabor;

    fTotal = fSeed + fPlantation + fFertilizing + fLabor;
     cout <<" Enter vegetable selling price per acre: $";
     cin >> fSellingprice;

     
 cout << "Enter the second vegetable seed cost per acre: $"<< endl;
    cin >> sSeed;
     
    cout << "Enter the second vegetable plantation cost per acre: $" <<endl;
    cin >> sPlantation;

    cout <<"Enter the second vegetable fertilizing cost per acre: $" <<endl;
    cin >> sFertilizing;

    cout << "Enter the second vegetable labor cost per acre: $" << endl;
    cin >> sLabor;

    sTotal = sSeed+ sPlantation+ sFertilizing+ sLabor;
    cout << "Enter the second vegetable selling cost per acre: $" << endl;
    cin >> sSellingprice;

   totalReveneu = (area* 0.01 * area1 * fSellingprice) + (area * 0.01 * area2* sSellingprice);
   
   proFit = totalReveneu-(fTotal+sTotal);
}

   else 
   {
//errrrrr

cout <<"you entered the wrong input or you didnt, pls try again";

return 1;
   }

   // final
   cout << " The total revenue is $:" <<totalReveneu << endl;
   cout <<" Profit/loss is $: " << proFit <<endl;

   return 0;




}
