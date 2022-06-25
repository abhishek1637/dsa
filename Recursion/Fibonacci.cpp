#include <iostream>
using namespace std;

// return the nth fibo number
int fibo(int n) {

    if (n==1)
        return 0;
    if (n==2)
        return 1;
    
    return fibo(n-1) + fibo(n-2);
}

// print the fibo number till nth digits

void fib(int n) {

    if (n==1) {
        cout << "0" << endl;
        return;
    }

    if (n==2) {
        cout << "1" << endl;
        return;
    } 

    fib(n-1);

    cout << fibo(n-2) + fibo(n-1) << endl;

}

int main() {
    int n;
    cout << "Enter the num to print nth fibo number " ;
    cin >> n;
    cout << "Nth fibo number is = " << fibo(n) << endl;

    cout << "Enter the num to print all fibo number till nth digit " ;
    cin >> n;
    cout << "All fibo number till " << n << "th digit is" << endl;
    fib(n);
}