#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int conversion(char input[]) {
    if (strlen(input)==1)
        return input[0]-'0';
    
    int res = conversion(input+1);
    int solve = (input[0]-'0');
    return solve*pow(10,(strlen(input)-1)) + res;
}

int main() {
    char input[100];
    cout << "Enter the integral string : ";
    cin >> input;

    cout << "After conversion: " << conversion(input) << endl;
}