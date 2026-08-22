#include <iostream>
#include <climits>
using namespace std;

int main () { 

    short x = SHRT_MAX;  
    short y = SHRT_MIN;

// we can use INT16_MAX or INT16_MIN on the place of SHRT_MAX and SHRT_MIN respectively.

    cout << x << endl;
    cout << y << endl;

    return 0;



}