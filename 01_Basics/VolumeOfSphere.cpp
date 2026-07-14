#include <iostream>
using namespace std;

int main() {
    cout << "Enter Radius: ";
    float Radius;
    cin>> Radius;

    float Volume = (4.0 / 3.0) * 3.14 * Radius * Radius * Radius;

    cout << "Volume: " << Volume << endl;

    return 0;
}