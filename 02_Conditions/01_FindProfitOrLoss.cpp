#include <iostream>
using namespace std;                                                         

int main() {

    float CostPrice;
    float SellingPrice;

    cout << "Enter Cost Price: ";
    cin >> CostPrice;

    cout << "Enter Selling Price: ";
    cin >> SellingPrice;

    if (SellingPrice > CostPrice)
        cout << "Profit of " << SellingPrice - CostPrice;
    else if (CostPrice > SellingPrice)
        cout << "Loss of " << CostPrice - SellingPrice;
    else
        cout << "No Profit No Loss";
    return 0;
}