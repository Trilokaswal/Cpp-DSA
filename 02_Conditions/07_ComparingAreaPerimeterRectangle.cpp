#include <iostream>
using namespace std;

int main() {

    int l;
    cout << "Enter Length: ";
    cin >> l;

    int b;
    cout << "Enter Breadth: ";
    cin >> b;

    int Area = l * b;
    cout << "Area of Rectangle: " << Area << endl;

    int Perimeter = 2 * (l + b);
    cout << "Perimeter of Rectangle: " << Perimeter << endl;

    if (Area > Perimeter)
        cout << "Area of Rectangle is greater than its Perimeter";

    else if (Perimeter > Area)
        cout << "Perimeter of Rectangle is greater than its Area";

    else
        cout << "Area and Perimeter are equal";

    return 0;
}