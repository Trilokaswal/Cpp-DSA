#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (65 <= (int)ch && (int)ch <= 90)
        cout << "It's a Capital letter of Alphabet";
    else
        cout << "It's not a Capital letter of Alphabet";

    return 0;
}