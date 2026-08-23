#include <iostream>
using namespace std;
int main () {

    int a, b, c;
  
    cout << "Enter 3 number: " << endl;
    cin>> a >> b >> c;

    if ( a+b > c && b+c > a && a+c > b ) 
        cout << " it can form a triangle ";
    
    else 
    cout << "it can't form a triangle";
    

    return 0;

}