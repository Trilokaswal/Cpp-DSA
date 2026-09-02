#include <iostream>
using namespace std;
int main (){

    int x = 4, y = 6;
    
    if (x++ || y++) {
    
    cout << x << endl; 
    cout << y;
}

    else cout << "Hello";

    return 0;

  // output is :
  // 5
  // 6 
}