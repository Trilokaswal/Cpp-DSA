#include <iostream>
using namespace std;

int main (){
    int x = INT_MAX;
    cout << x << endl; // output is 2147483647

    int y = INT_MIN;
    cout << y << endl; // output is -2147483648
    return 0;

    // INT_MAX and INT_MIN are defined in <climits> header file.
    
    // They represent the maximum and minimum values
    // that can be stored in an int data type, respectively. 
    // The actual values may vary depending on the system and compiler being used,
    // but they are typically 2147483647 and -2147483648 for a 32-bit signed integer.
   
    // <climits> is a standard C++ header that provides limits for integral types,
    // including int, long,long long, and double. 
    // It is part of the C++ standard library and is included in the <iostream> header file.
}