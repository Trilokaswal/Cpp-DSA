#include <iostream>
using namespace std;

int main() {
   
    int a;
    cout << "Enter Number: ";
    cin >> a;

    if (a < 0)
        cout << "Please Enter a positive number";

    else if (a % 2 == 0)
        cout << "It's an even number";

    else
        cout << "It's an odd number";

    return 0;
}