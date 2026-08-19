#include <iostream>
using namespace std;

int main () { 
    
    float RealNum;
    cout << " Enter a Real Number: ";
    cin >> RealNum;

    if( RealNum == (int)RealNum) 
    cout << "Yes, " << RealNum <<  " is an Integer. " << endl;

    else 
    cout << RealNum << " is not an Integer.";
   
    return 0;

}