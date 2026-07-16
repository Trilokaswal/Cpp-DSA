#include <iostream>
using namespace std;
int main() {
    float P, R, T;
    cout<< "Enter Principle value : ";
    cin>> P;
    cout << "Enter Rate of Interest : ";
    cin >> R;
    cout << "Enter Time duration : ";
    cin >> T;
    float SI = (P*R*T)/100;
    cout<< "SI : "<< SI;
    return 0;
}