#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0)
        return 1;
    
    return factorial(n-1) * n;
}

int main () {
    int num;
    cout << "Enter any number " << endl;
     cin >>  num;
     cout << "factorial of " << num << " is " << factorial(num) << endl;
}