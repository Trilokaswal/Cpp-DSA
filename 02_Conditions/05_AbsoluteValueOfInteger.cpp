#include <iostream>
using namespace std;

int main () {

     int num;
     cout << "Enter an Integer: ";
     cin >> num;

     if(num < 0)
     cout << num * -1 << " is the absolute value of " << num << endl;
     
     else 
     cout << num << " is the absolute value of "<< num <<  endl;

return 0;
     


}